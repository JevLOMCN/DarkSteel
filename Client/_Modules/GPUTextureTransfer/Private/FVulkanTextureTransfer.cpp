// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GPUTextureTransfer
// Functions: 8

// BindBuffer_Impl @ 14d758300

DVPStatus __thiscall
UE::GPUTextureTransfer::Private::FVulkanTextureTransfer::BindBuffer_Impl
          (FVulkanTextureTransfer *this,ulong64 param_1)

{
  DVPStatus DVar1;
  
  if (this->VulkanDevice == (VkDevice_T *)0x0) {
    return DVP_STATUS_ERROR;
  }
  DVar1 = dvpBindToVkDevice(param_1,this->VulkanDevice);
  return DVar1;
}

// CloseDevice_Impl @ 14d758a90

DVPStatus __thiscall
UE::GPUTextureTransfer::Private::FVulkanTextureTransfer::CloseDevice_Impl
          (FVulkanTextureTransfer *this)

{
  DVPStatus DVar1;
  
  if (this->VulkanDevice == (VkDevice_T *)0x0) {
    return DVP_STATUS_ERROR;
  }
  DVar1 = dvpCloseVkDevice(this->VulkanDevice);
  return DVar1;
}

// CreateGPUResource_Impl @ 14d758f60

DVPStatus __thiscall
UE::GPUTextureTransfer::Private::FVulkanTextureTransfer::CreateGPUResource_Impl
          (FVulkanTextureTransfer *this,FRegisterDMATextureArgs *param_1,FTextureInfo *param_2)

{
  int iVar1;
  DVPStatus DVar2;
  IVulkanDynamicRHI *pIVar3;
  code *pcVar4;
  undefined1 local_res18 [8];
  undefined8 local_68 [3];
  DVPGpuExternaResourceDescRec local_50;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if ((param_2 != (FTextureInfo *)0x0) && (this->VulkanDevice != (VkDevice_T *)0x0)) {
    pIVar3 = GetIVulkanDynamicRHI();
    (**(code **)(*(longlong *)pIVar3 + 0x598))(pIVar3,local_68,param_1->RHITexture);
    local_20 = local_68[0];
    local_28 = 0;
    local_30 = 0x3b9be72b;
    local_18 = 2;
    pcVar4 = (code *)(**(code **)(*(longlong *)pIVar3 + 0x528))(pIVar3,"vkGetMemoryWin32HandleKHR");
    if (pcVar4 != (code *)0x0) {
      iVar1 = (*pcVar4)(this->VulkanDevice,&local_30,local_res18);
      if (iVar1 != 0) {
        pIVar3 = GetIVulkanDynamicRHI();
        (**(code **)(*(longlong *)pIVar3 + 0x5d0))
                  (pIVar3,iVar1,
                   "GetMemoryWin32HandleKHR(VulkanDevice, &MemoryGetHandleInfoKHR, &Handle)",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\GPUTextureTransfer\\Private\\VulkanTextureTransfer.cpp"
                   ,0x4c);
      }
      local_50.width = param_1->Width;
      local_50.height = param_1->Height;
      local_50.size = local_50.height * param_1->Stride;
      local_50.handleType = DVP_OPAQUE_WIN32;
      local_50.format = DVP_RGBA_INTEGER;
      if (param_1->PixelFormat == PF_8Bit) {
        local_50.format = DVP_BGRA;
      }
      local_50.type = -(uint)(param_1->PixelFormat != PF_8Bit) & DVP_INT;
      local_50.external = *(<unnamed_type_external> *)&param_2->External;
      DVar2 = dvpCreateGPUExternalResourceVkDevice(this->VulkanDevice,&local_50,&param_2->DVPHandle)
      ;
      return DVar2;
    }
  }
  return DVP_STATUS_ERROR;
}

// GetConstants_Impl @ 14d759840

DVPStatus __thiscall
UE::GPUTextureTransfer::Private::FVulkanTextureTransfer::GetConstants_Impl
          (FVulkanTextureTransfer *this,uint *param_1,uint *param_2,uint *param_3,uint *param_4,
          uint *param_5,uint *param_6)

{
  DVPStatus DVar1;
  
  if (this->VulkanDevice == (VkDevice_T *)0x0) {
    return DVP_STATUS_ERROR;
  }
  DVar1 = dvpGetRequiredConstantsVkDevice
                    (param_1,param_2,param_3,param_4,param_5,param_6,this->VulkanDevice);
  return DVar1;
}

// Init_Impl @ 14d759e40

DVPStatus __thiscall
UE::GPUTextureTransfer::Private::FVulkanTextureTransfer::Init_Impl
          (FVulkanTextureTransfer *this,FInitializeDMAArgs *param_1)

{
  VkDevice_T *pVVar1;
  DVPStatus DVar2;
  
  pVVar1 = param_1->RHIDevice;
  this->VulkanDevice = pVVar1;
  this->VulkanQueue = param_1->RHICommandQueue;
  DVar2 = dvpInitVkDevice(pVVar1,0,param_1->RHIDeviceUUID);
  return DVar2;
}

// MapBufferEndAPI_Impl @ 14d75ad00

DVPStatus __thiscall
UE::GPUTextureTransfer::Private::FVulkanTextureTransfer::MapBufferEndAPI_Impl
          (FVulkanTextureTransfer *this,ulong64 param_1)

{
  DVPStatus DVar1;
  
  if (this->VulkanQueue == (VkQueue_T *)0x0) {
    return DVP_STATUS_ERROR;
  }
  DVar1 = dvpMapBufferEndVk(param_1,this->VulkanQueue);
  return DVar1;
}

// MapBufferWaitAPI_Impl @ 14d75ae00

DVPStatus __thiscall
UE::GPUTextureTransfer::Private::FVulkanTextureTransfer::MapBufferWaitAPI_Impl
          (FVulkanTextureTransfer *this,ulong64 param_1)

{
  DVPStatus DVar1;
  
  if (this->VulkanQueue == (VkQueue_T *)0x0) {
    return DVP_STATUS_ERROR;
  }
  DVar1 = dvpMapBufferWaitVk(param_1,this->VulkanQueue);
  return DVar1;
}

// UnbindBuffer_Impl @ 14d75c000

DVPStatus __thiscall
UE::GPUTextureTransfer::Private::FVulkanTextureTransfer::UnbindBuffer_Impl
          (FVulkanTextureTransfer *this,ulong64 param_1)

{
  DVPStatus DVar1;
  
  if (this->VulkanDevice == (VkDevice_T *)0x0) {
    return DVP_STATUS_ERROR;
  }
  DVar1 = dvpUnbindFromVkDevice(param_1,this->VulkanDevice);
  return DVar1;
}

