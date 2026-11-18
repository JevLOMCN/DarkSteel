// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 9

// FromTextureWrap @ 14e5f2460

float __cdecl FGLTFMaterialUtilities::FromTextureWrap(EGLTFJsonTextureWrap param_1)

{
  if (param_1 == Repeat) {
    return 0.0;
  }
  if ((param_1 != ClampToEdge) && (param_1 == MirroredRepeat)) {
    return __real_40000000;
  }
  return __real_3f800000;
}

// GetDefaultMaterial @ 14e5f5d50

UMaterialInterface * __cdecl FGLTFMaterialUtilities::GetDefaultMaterial(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      DefaultMaterial = FGLTFProxyMaterialUtilities::GetBaseMaterial(Default);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (UMaterialInterface *)DefaultMaterial;
}

// GetRichestShadingModel @ 14e5fdd10

EMaterialShadingModel __cdecl
FGLTFMaterialUtilities::GetRichestShadingModel(FMaterialShadingModelField *param_1)

{
  ushort uVar1;
  EMaterialShadingModel EVar2;
  
  uVar1 = param_1->ShadingModelField;
  if ((uVar1 & 0x10) != 0) {
    return MSM_ClearCoat;
  }
  if ((uVar1 & 2) != 0) {
    return MSM_DefaultLit;
  }
  if ((uVar1 & 1) != 0) {
    return MSM_Unlit;
  }
  EVar2 = FMaterialShadingModelField::GetFirstShadingModel(param_1);
  return EVar2;
}

// GetShadingModel @ 14e5fe190

EMaterialShadingModel __cdecl
FGLTFMaterialUtilities::GetShadingModel(UMaterialInterface *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  EMaterialShadingModel EVar6;
  UEnum *pUVar7;
  EMaterialShadingModel EVar8;
  ulonglong uVar9;
  ushort local_res8 [8];
  FName local_res18;
  FName local_res20;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  (**(code **)(param_1->_padding_ + 0x468))(param_1,local_res8);
  uVar5 = (uint)local_res8[0];
  uVar9 = (ulonglong)local_res8[0] - ((ulonglong)(local_res8[0] >> 1) & 0x5555555555555555);
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
  bVar3 = (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  if (bVar3 == 0) {
    pUVar7 = StaticEnum<enum_EMaterialShadingModel>();
    FGLTFNameUtilities::GetName(&local_68,pUVar7,1);
    local_res18 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res18,&local_78);
    ::FString::PrintfImpl(&local_98,L"No shading model defined for material %s, will export as %s");
    if (param_2 != &local_98) {
      pFVar1 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_2->Data).AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
      (param_2->Data).ArrayNum = local_98.Data.ArrayNum;
      (param_2->Data).ArrayMax = local_98.Data.ArrayMax;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    EVar8 = MSM_DefaultLit;
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  else if (bVar3 < 2) {
    if (0x1ffe < (ushort)(local_res8[0] - 1)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\EngineTypes.h"
                         ,0x2fc,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        EVar6 = (*pcVar2)();
        return EVar6;
      }
      uVar5 = (uint)local_res8[0];
    }
    EVar6 = MSM_Unlit;
    if (uVar5 != 0) {
      for (; (uVar5 >> EVar6 & 1) == 0; EVar6 = EVar6 + MSM_DefaultLit) {
      }
    }
    EVar8 = 0x20;
    if (uVar5 != 0) {
      EVar8 = EVar6;
    }
  }
  else {
    EVar8 = MSM_Unlit;
    if ((local_res8[0] & 0x10) == 0) {
      if ((local_res8[0] & 2) == 0) {
        if ((local_res8[0] & 1) == 0) {
          if (0x1ffe < (ushort)(local_res8[0] - 1)) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\EngineTypes.h"
                               ,0x2fc,L"");
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              EVar6 = (*pcVar2)();
              return EVar6;
            }
            uVar5 = (uint)local_res8[0];
          }
          EVar6 = MSM_Unlit;
          if (uVar5 != 0) {
            for (; (uVar5 >> EVar6 & 1) == 0; EVar6 = EVar6 + MSM_DefaultLit) {
            }
          }
          EVar8 = 0x20;
          if (uVar5 != 0) {
            EVar8 = EVar6;
          }
        }
      }
      else {
        EVar8 = MSM_DefaultLit;
      }
    }
    else {
      EVar8 = MSM_ClearCoat;
    }
    pUVar7 = StaticEnum<enum_EMaterialShadingModel>();
    FGLTFNameUtilities::GetName(&local_48,pUVar7,EVar8);
    local_res20 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res20,&local_58);
    ::FString::PrintfImpl
              (&local_88,
               L"Can\'t evaluate shading model expression in material %s without editor, will export as %s"
              );
    if (param_2 != &local_88) {
      pFVar1 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_2->Data).AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
      (param_2->Data).ArrayNum = local_88.Data.ArrayNum;
      (param_2->Data).ArrayMax = local_88.Data.ArrayMax;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return EVar8;
}

// IsClearCoatBottomNormalEnabled @ 14e601840

bool __cdecl FGLTFMaterialUtilities::IsClearCoatBottomNormalEnabled(void)

{
  UClass *this;
  
  this = Z_Construct_UClass_URendererSettings_NoRegister();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  return (bool)((byte)(*(uint *)&(this->ClassDefaultObject).field0_0x0.DebugPtr[4].field_0x20 >> 1)
               & 1);
}

// NeedsMeshData @ 14e602360

bool __cdecl
FGLTFMaterialUtilities::NeedsMeshData
          (TArray<UMaterialInterface_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return false;
}

// NeedsMeshData @ 14e602370

bool __cdecl FGLTFMaterialUtilities::NeedsMeshData(UMaterialInterface *param_1)

{
  return false;
}

// ShadingModelsToString @ 14e614060

FString * __cdecl
FGLTFMaterialUtilities::ShadingModelsToString
          (FString *__return_storage_ptr__,FMaterialShadingModelField *param_1)

{
  UEnum *pUVar1;
  ForAnyElementType FVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  FString local_48;
  FString local_38;
  
  pFVar8 = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar3 = pFVar8;
  pFVar5 = pFVar8;
  do {
    uVar4 = (uint)pFVar5;
    if ((param_1->ShadingModelField >> (uVar4 & 0x1f) & 1) != 0) {
      pUVar1 = StaticEnum<enum_EMaterialShadingModel>();
      FGLTFNameUtilities::GetName(&local_48,pUVar1,uVar4);
      FVar2.Data = local_48.Data.AllocatorInstance.Data;
      if ((__return_storage_ptr__->Data).ArrayNum < 2) {
        pFVar3 = (FScriptContainerElement *)(ulonglong)((uint)pFVar3 | 1);
        local_58.Data = (FScriptContainerElement *)0x0;
        iVar6 = local_48.Data.ArrayNum;
        local_50 = iVar6;
        if (iVar6 == 0) {
          local_4c = 0;
          FVar2.Data = pFVar8;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar6,0,&local_58,iVar6,&local_4c);
          memcpy(local_58.Data,FVar2.Data,(longlong)iVar6 * 2);
          FVar2.Data = local_58.Data;
          iVar6 = local_50;
        }
      }
      else {
        pFVar3 = (FScriptContainerElement *)(ulonglong)((uint)pFVar3 | 2);
        ::FString::ConcatCF(&local_38,L", ",&local_48);
        FVar2.Data = local_38.Data.AllocatorInstance.Data;
        iVar6 = local_38.Data.ArrayNum;
      }
      iVar7 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar7 = 0;
      }
      ::FString::AppendChars(__return_storage_ptr__,(wchar_t *)FVar2.Data,iVar7);
      if (((ulonglong)pFVar3 & 2) != 0) {
        pFVar3 = (FScriptContainerElement *)(ulonglong)((uint)pFVar3 & 0xfffffffd);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      if (((ulonglong)pFVar3 & 1) != 0) {
        pFVar3 = (FScriptContainerElement *)(ulonglong)((uint)pFVar3 & 0xfffffffe);
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data);
        }
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    pFVar5 = (FScriptContainerElement *)(ulonglong)(uVar4 + 1);
  } while (uVar4 + 1 < 0xd);
  return __return_storage_ptr__;
}

// ToTextureAddress @ 14e614f00

TextureAddress __cdecl FGLTFMaterialUtilities::ToTextureAddress(float param_1)

{
  int iVar1;
  
  iVar1 = (int)ROUND(param_1 + param_1 + __real_3f000000) >> 1;
  if (iVar1 == 0) {
    return TA_Wrap;
  }
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      return TA_MAX;
    }
    return TA_Mirror;
  }
  return TA_Clamp;
}

