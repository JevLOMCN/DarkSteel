// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 2

// FD3D11UniformBuffer @ 14596c960

/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FD3D11UniformBuffer * __thiscall
FD3D11UniformBuffer::FD3D11UniformBuffer
          (FD3D11UniformBuffer *this,FD3D11DynamicRHI *param_1,FRHIUniformBufferLayout *param_2,
          ID3D11Buffer *param_3,FRingAllocation *param_4,bool param_5)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_UniformBuffer);
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FRHIUniformBuffer__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)param_2;
  if (param_2 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_2);
  }
  *(uint *)&this->_padding_ = param_2->ConstantBufferSize;
  this->_padding_ = (longlong)&___7FD3D11UniformBuffer__6B_;
  (this->Resource).Reference = param_3;
  if (param_3 != (ID3D11Buffer *)0x0) {
    (**(code **)((longlong)*param_3 + 8))(param_3);
  }
  pvVar1 = param_4->DataPtr;
  (this->RingAllocation).Buffer = param_4->Buffer;
  (this->RingAllocation).DataPtr = pvVar1;
  uVar2 = param_4->Offset;
  uVar3 = param_4->Size;
  this->bAllocatedFromPool = param_5;
  this->D3D11RHI = param_1;
  (this->RingAllocation).Offset = uVar2;
  (this->RingAllocation).Size = uVar3;
  return this;
}

// ~FD3D11UniformBuffer @ 14596f210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY.conflict": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D11UniformBuffer::~FD3D11UniformBuffer(FD3D11UniformBuffer *this)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  ID3D11Buffer *pIVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_D3D11NumFreeUniformBuffers> FVar11;
  FThreadSafeStaticStat<FStat_STAT_D3D11FreeUniformBufferMemory> FVar12;
  uint uVar13;
  TArray<FPooledUniformBuffer,TSizedDefaultAllocator<32>_> *pTVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStackY_c8 [32];
  ID3D11Buffer *local_60;
  uint local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  FName local_48;
  FName local_40;
  uint local_38;
  int local_34;
  int local_2c;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  this->_padding_ = (longlong)&___7FD3D11UniformBuffer__6B_;
  if (((this->bAllocatedFromPool != false) && ((this->RingAllocation).Buffer == (ID3D11Buffer *)0x0)
      ) && ((this->Resource).Reference != (ID3D11Buffer *)0x0)) {
    bVar7 = IsInRHIThread();
    if (!bVar7) {
      bVar7 = IsInRenderingThread();
      if (!bVar7) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRHIThread() || IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11UniformBuffer.cpp"
                           ,0x16e,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
    }
    pIVar4 = (this->Resource).Reference;
    (**(code **)((longlong)*pIVar4 + 0x50))(pIVar4,&local_38);
    if ((local_2c == 0x10000) && (local_34 == 2)) {
      if ((this->Resource).Reference == (ID3D11Buffer *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidRef(Resource)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11UniformBuffer.cpp"
                           ,0x175,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pIVar4 = (this->Resource).Reference;
      local_60 = (ID3D11Buffer *)0x0;
      if (pIVar4 != (ID3D11Buffer *)0x0) {
        local_60 = pIVar4;
        (**(code **)((longlong)*pIVar4 + 8))();
      }
      local_54 = GFrameNumberRenderThread;
      uVar13 = 1;
      if (local_38 != 0) {
        uVar13 = local_38;
      }
      local_58 = local_38;
      uVar2 = (ulonglong)(uVar13 - 1) * 2 + 1;
      uVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> uVar9 == 0; uVar9 = uVar9 - 1) {
        }
      }
      local_50 = (undefined4)uVar9;
      uVar13 = (GFrameNumberRenderThread - 1) % 3;
      lVar5 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      uVar9 = uVar9 & 0xffffffff;
      local_4c = (undefined4)lVar5;
      iVar3 = SafeUniformBufferPools[(int)uVar13][uVar9].ArrayNum;
      if ((uint)(1 << ((byte)lVar5 & 0x1f)) < local_38) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Desc.ByteWidth <= GetPoolBucketSize(Desc.ByteWidth)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11UniformBuffer.cpp"
                           ,0x17f,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      pTVar14 = SafeUniformBufferPools[(int)uVar13] + uVar9;
      pFVar15 = (pTVar14->AllocatorInstance).Data;
      if ((pFVar15 <= (FScriptContainerElement *)&local_60) &&
         ((FScriptContainerElement *)&local_60 <
          pFVar15 + (longlong)SafeUniformBufferPools[(int)uVar13][uVar9].ArrayMax * 0x10)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar8 = SafeUniformBufferPools[(int)uVar13][uVar9].ArrayNum;
      piVar1 = &SafeUniformBufferPools[(int)uVar13][uVar9].ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar14->AllocatorInstance,piVar1);
      }
      SafeUniformBufferPools[(int)uVar13][uVar9].ArrayNum = iVar8 + 1;
      pFVar15 = (pTVar14->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
      *(undefined8 *)pFVar15 = 0;
      *(ID3D11Buffer **)pFVar15 = local_60;
      if (local_60 != (ID3D11Buffer *)0x0) {
        (**(code **)((longlong)*local_60 + 8))();
      }
      *(uint *)(pFVar15 + 8) = local_58;
      *(uint *)(pFVar15 + 0xc) = local_54;
      FVar11 = StatPtr_STAT_D3D11NumFreeUniformBuffers;
      if (StatPtr_STAT_D3D11NumFreeUniformBuffers ==
          (FThreadSafeStaticStat<FStat_STAT_D3D11NumFreeUniformBuffers>)0x0) {
        pFVar10 = ::FName::FName(&local_48,"STAT_D3D11NumFreeUniformBuffers");
        FVar11 = (FThreadSafeStaticStat<FStat_STAT_D3D11NumFreeUniformBuffers>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D11NumFreeUniformBuffers,
                            *pFVar10,L"Uniform buffer pool num free","STATGROUP_D3D11RHI",
                            "STATCAT_Advanced",L"D3D11RHI",true,false,ST_int64,false,false,
                            MCR_Invalid);
      }
      FThreadStats::AddMessage<__int64>(*(FName *)FVar11,Add,1,false);
      if ((ulonglong)local_38 != 0) {
        FVar12 = StatPtr_STAT_D3D11FreeUniformBufferMemory;
        if (StatPtr_STAT_D3D11FreeUniformBufferMemory ==
            (FThreadSafeStaticStat<FStat_STAT_D3D11FreeUniformBufferMemory>)0x0) {
          pFVar10 = ::FName::FName(&local_40,"STAT_D3D11FreeUniformBufferMemory");
          FVar12 = (FThreadSafeStaticStat<FStat_STAT_D3D11FreeUniformBufferMemory>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_D3D11FreeUniformBufferMemory,*pFVar10,
                              L"Uniform buffer pool memory","STATGROUP_D3D11RHI","STATCAT_Advanced",
                              L"D3D11RHI",true,false,ST_int64,false,false,MCR_Physical);
        }
        FThreadStats::AddMessage<__int64>(*(FName *)FVar12,Add,(ulonglong)local_38,false);
      }
      if (SafeUniformBufferPools[(int)uVar13][uVar9].ArrayNum != iVar3 + 1) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("SafeUniformBufferPools[SafeFrameIndex][BucketIndex].Num() == LastNum + 1"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11UniformBuffer.cpp"
                           ,0x185,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (local_60 != (ID3D11Buffer *)0x0) {
        (**(code **)((longlong)*local_60 + 0x10))();
      }
    }
  }
  pIVar4 = (this->Resource).Reference;
  if (pIVar4 != (ID3D11Buffer *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  DestructItems<TRefCountPtr<FRHIResource>,int>
            ((TRefCountPtr<FRHIResource> *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

