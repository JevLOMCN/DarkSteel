// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 6

// ~FOutputProcessBase @ 14eae6cd0

void __thiscall
UE::NNEDenoiser::Private::FOutputProcessBase::~FOutputProcessBase(FOutputProcessBase *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TransferFunction).SharedReferenceCount.ReferenceController);
  DestructItems<UE::NNEDenoiser::Private::FResourceMapping,int>
            ((FResourceMapping *)(this->OutputLayout).InputMapping.AllocatorInstance.Data,
             (this->OutputLayout).InputMapping.ArrayNum);
  pFVar1 = (this->OutputLayout).InputMapping.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddPasses @ 14eaece50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::NNEDenoiser::Private::FOutputProcessBase::AddPasses
          (FOutputProcessBase *this,FRDGBuilder *param_1,
          TArrayView<UE::NNE::FTensorDesc_const_,int> *param_2,
          TArrayView<UE::NNE::FTensorShape_const_,int> *param_3,IResourceAccess *param_4,
          TArrayView<FRDGBuffer_*_const,int> *param_5,FRDGTexture *param_6)

{
  int iVar1;
  longlong lVar2;
  FTensorShape *pFVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  TMap<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  FScriptContainerElement *this_00;
  bool bVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_128 [32];
  IResourceAccess *local_108;
  longlong local_100;
  FScriptContainerElement *local_f8;
  FRDGTexture *local_f0;
  ulonglong local_e8;
  TArrayView<UE::NNE::FTensorDesc_const_,int> *local_e0;
  IResourceAccess *local_d8;
  FRDGBuilder *local_d0;
  FRDGTexture *local_c8;
  code *local_c0;
  TArrayView<UE::NNE::FTensorShape_const_,int> *local_b8;
  TArrayView<FRDGBuffer_*_const,int> *local_b0;
  undefined1 local_a8 [72];
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_128;
  uVar11 = 0;
  bVar13 = false;
  local_b0 = param_5;
  local_d8 = param_4;
  local_c8 = param_6;
  local_e8 = local_e8 & 0xffffffff00000000;
  local_e0 = param_2;
  local_d0 = param_1;
  local_b8 = param_3;
  if (0 < param_2->ArrayNum) {
    local_e8 = 0;
    do {
      uVar15 = local_e8;
      if (((int)uVar11 < 0) ||
         (iVar1 = (this->OutputLayout).InputMapping.ArrayNum, iVar1 <= (int)uVar11)) {
        this_00 = (FScriptContainerElement *)0x0;
LAB_14eaecf60:
        bVar5 = false;
      }
      else {
        if ((int)uVar11 < 0) {
          local_108 = (IResourceAccess *)(longlong)(int)uVar11;
          local_100 = (longlong)iVar1;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        this_00 = (this->OutputLayout).InputMapping.AllocatorInstance.Data +
                  (longlong)(int)uVar11 * 0x10;
        if (this_00 == (FScriptContainerElement *)0x0) goto LAB_14eaecf60;
        bVar13 = true;
        pTVar8 = FResourceMapping::GetChannelMappingPerFrame
                           ((FResourceMapping *)this_00,
                            (TMap<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,0>_>
                             *)local_a8,Output);
        if (*(int *)&pTVar8->field_0x8 - *(int *)&pTVar8->field_0x34 != 1) goto LAB_14eaecf60;
        bVar5 = true;
      }
      if (bVar13) {
        bVar13 = false;
        local_60 = 0;
        if ((void *)local_a8._64_8_ != (void *)0x0) {
          FMemory::Free((void *)local_a8._64_8_);
        }
        TSparseArray<TSparseSetElement<TTuple<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_a8);
      }
      param_1 = local_d0;
      param_4 = local_d8;
      if (bVar5) {
        local_100 = (longlong)param_5->ArrayNum;
        uVar12 = ~uVar11 >> 0x1f;
        local_c0 = *(code **)(this->_padding_ + 0x20);
        uVar7 = 0;
        if ((int)uVar11 < param_5->ArrayNum) {
          uVar7 = uVar12;
        }
        if (uVar7 == 0) {
          local_108 = (IResourceAccess *)(longlong)(int)uVar11;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        local_100 = (longlong)param_3->ArrayNum;
        lVar2 = *(longlong *)(uVar15 + (longlong)param_5->DataPtr);
        uVar7 = 0;
        if ((int)uVar11 < param_3->ArrayNum) {
          uVar7 = uVar12;
        }
        if (uVar7 == 0) {
          local_108 = (IResourceAccess *)(longlong)(int)uVar11;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        pFVar3 = param_3->DataPtr;
        lVar14 = (longlong)(int)uVar11;
        local_100 = (longlong)local_e0->ArrayNum;
        uVar7 = 0;
        if ((int)uVar11 < local_e0->ArrayNum) {
          uVar7 = uVar12;
        }
        if ((uVar7 == 0) &&
           (local_108 = (IResourceAccess *)lVar14,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        param_1 = local_d0;
        param_4 = local_d8;
        local_f0 = local_c8;
        local_108 = local_d8;
        local_100 = lVar2;
        local_f8 = this_00;
        (*local_c0)(this,local_d0,local_e0->DataPtr + lVar14,pFVar3 + lVar14);
        param_3 = local_b8;
        param_5 = local_b0;
        uVar15 = local_e8;
      }
      local_e8 = uVar15 + 8;
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < local_e0->ArrayNum);
  }
  cVar6 = (**(code **)(this->_padding_ + 0x18))(this,4,0);
  if (cVar6 != '\0') {
    uVar9 = (**(code **)*param_4)(param_4,4,0);
    uVar10 = (**(code **)((longlong)*param_4 + 8))(param_4,4,0);
    (**(code **)(this->_padding_ + 0x28))(this,param_1,uVar9,uVar10);
  }
  return;
}

// HasPostprocessOutput @ 14eafa2c0

bool __thiscall
UE::NNEDenoiser::Private::FOutputProcessBase::HasPostprocessOutput
          (FOutputProcessBase *this,EResourceName param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FrameIdx == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserIOProcessBase.cpp"
                       ,0x1e3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return param_1 == Output;
}

// PostprocessOutput @ 14eafc270

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::NNEDenoiser::Private::FOutputProcessBase::PostprocessOutput
          (FOutputProcessBase *this,FRDGBuilder *param_1,FRDGTexture *param_2,FRDGTexture *param_3)

{
  ITransferFunction *pIVar1;
  
  pIVar1 = (this->TransferFunction).Object;
  if (pIVar1 != (ITransferFunction *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,param_1,(char)param_2);
  }
  IOProcessBaseHelper::AddPreOrPostProcess(param_1,param_3,Output,0,param_3);
  return;
}

// ReadOutputBuffer @ 14eafccd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::NNEDenoiser::Private::FOutputProcessBase::ReadOutputBuffer
          (FOutputProcessBase *this,FRDGBuilder *param_1,FTensorDesc *param_2,FTensorShape *param_3,
          IResourceAccess *param_4,FRDGBuffer *param_5,FResourceMapping *param_6,
          FRDGTexture *param_7)

{
  ulonglong uVar1;
  ENNETensorDataType EVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  EDataType EVar9;
  EPixelFormat EVar10;
  int iVar11;
  uint *puVar12;
  undefined1 auStackY_c8 [32];
  undefined1 local_88 [40];
  int local_60;
  int local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  EVar2 = param_2->DataType;
  if (EVar2 == Half) {
    EVar9 = Half;
  }
  else if (EVar2 == Float) {
    EVar9 = Float;
  }
  else {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Unimplemented function called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserUtils.h"
                       ,0x91,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EVar9 = None;
  }
  iVar6 = (param_3->Data).ArrayNum;
  if (iVar6 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
LAB_14eafcd98:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (iVar6 < 3) goto LAB_14eafcd98;
  iVar6 = (param_3->Data).ArrayNum;
  if (iVar6 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (3 < iVar6) goto LAB_14eafce35;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14eafce35:
  FResourceMapping::GetChannelMappingPerFrame
            (param_6,(TMap<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>,0>_>
                      *)local_88,Output);
  if ((local_88._8_4_ - local_54 != 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChannelMappingPerFrame.Num() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserIOProcessBase.cpp"
                         ,0x1f6,L"Invalid output mapping"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = 0;
  iVar11 = 0;
  iVar8 = 0;
  if (local_60 != 0) {
    puVar12 = (uint *)(local_88 + 0x10);
    if ((uint *)local_88._32_8_ != (uint *)0x0) {
      puVar12 = (uint *)local_88._32_8_;
    }
    uVar3 = *puVar12;
    while (uVar3 == 0) {
      lVar7 = (longlong)iVar6;
      iVar11 = iVar11 + 0x20;
      iVar6 = iVar6 + 1;
      iVar8 = local_60;
      if ((int)(local_60 + -1 + (local_60 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar6) goto LAB_14eafceec;
      uVar3 = puVar12[lVar7 + 1];
    }
    uVar1 = (ulonglong)(-uVar3 & uVar3) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar8 = iVar11 + -1 + (int)lVar7;
    if (local_60 < iVar8) {
      iVar8 = local_60;
    }
  }
LAB_14eafceec:
  if (EVar2 == Half) {
    EVar10 = PF_R16F;
  }
  else if (EVar2 == Float) {
    EVar10 = PF_R32_FLOAT;
  }
  else {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Unimplemented function called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserUtils.h"
                       ,0x83,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EVar10 = PF_Unknown;
  }
  IOProcessBaseHelper::AddWriteOutputPass
            (param_1,param_5,EVar10,param_7,EVar9,
             (TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_> *)
             ((longlong)iVar8 * 0x20 + 8 + local_88._0_8_));
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TArray<UE::NNEDenoiser::Private::FChannelMapping,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return;
}

// Validate @ 14eaff010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::NNEDenoiser::Private::FOutputProcessBase::Validate
          (FOutputProcessBase *this,IModelInstance *param_1,TIntPoint<int> param_2)

{
  FResourceMappingList *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  ForElementType<int> FVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStackY_1b8 [32];
  longlong local_178;
  longlong local_170;
  int local_168;
  FResourceMappingList *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  longlong local_148 [2];
  ForElementType<int> local_138;
  int iStack_130;
  undefined4 uStack_12c;
  FString local_128;
  ForElementType<int> local_118;
  int iStack_110;
  undefined4 uStack_10c;
  uint *local_108;
  uint uStack_100;
  undefined4 uStack_fc;
  FString local_f8;
  TArrayView<int_const_,int> local_e8;
  TArrayView<int_const_,int> local_d8;
  TArrayView<int_const_,int> local_c8;
  TArrayView<unsigned_int_const_,int> local_b8;
  ForElementType<int> local_a8;
  int local_90;
  int local_8c;
  ForElementType<int> local_88;
  int local_70;
  int local_6c;
  undefined4 local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined4 local_58;
  int iStack_54;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"NNEDenoiser.Prepare");
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId398,"NNEDenoiser.Prepare",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserIOProcessBase.cpp"
               ,0x18e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId398);
  }
  (**(code **)((longlong)*param_1 + 0x10))(param_1,&local_170);
  if (local_168 != (this->OutputLayout).InputMapping.ArrayNum) {
    if (1 < (byte)LogNNEDenoiser._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
    }
    bVar4 = false;
    goto LAB_14eaff34a;
  }
  uVar9 = 0;
  if (0 < local_168) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < local_168) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pFVar1 = *(FResourceMappingList **)(local_170 + 0x38 + lVar10);
      iVar8 = *(int *)(local_170 + 0x40 + lVar10);
      local_158 = (FResourceMappingList *)(local_170 + 0x18 + lVar10);
      if (pFVar1 != (FResourceMappingList *)0x0) {
        local_158 = pFVar1;
      }
      if ((iVar8 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      local_68 = 1;
      iStack_150 = iVar8;
      iStack_64 = FResourceMappingList::NumChannels(&this->OutputLayout,uVar9);
      uStack_60 = 0xffffffffffffffff;
      local_a8.SecondaryData = (ForElementType<int>)0x0;
      local_90 = 4;
      Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                (4,4,4,0,&local_a8,4,&local_8c);
      uVar3 = uStack_60;
      FVar7 = (ForElementType<int>)&local_a8;
      if (local_a8.SecondaryData != (ForElementType<int>)0x0) {
        FVar7 = local_a8.SecondaryData;
      }
      *(ulonglong *)FVar7 = CONCAT44(iStack_64,local_68);
      *(undefined8 *)((longlong)FVar7 + 8) = uVar3;
      ::FString::FString(&local_128,L"Output");
      iVar8 = local_90;
      local_138 = (ForElementType<int>)&local_a8;
      if (local_a8.SecondaryData != (ForElementType<int>)0x0) {
        local_138 = local_a8.SecondaryData;
      }
      if ((local_90 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      local_d8._12_4_ = uStack_14c;
      local_d8.ArrayNum = iStack_150;
      iStack_130 = iVar8;
      local_e8._12_4_ = uStack_12c;
      local_e8.ArrayNum = iVar8;
      local_e8.DataPtr = (int *)local_138;
      local_d8.DataPtr = (int *)local_158;
      bVar4 = IsTensorShapeValid<int>(&local_d8,&local_e8,&local_128);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      FVar7 = local_a8.SecondaryData;
      if (!bVar4) goto LAB_14eaff6c8;
      if (local_a8.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_a8.SecondaryData);
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x48;
    } while ((int)uVar9 < local_168);
  }
  (**(code **)((longlong)*param_1 + 0x20))(param_1,local_148);
  iVar8 = (int)local_148[1];
  if ((iVar8 == 0) || (iVar8 == (this->OutputLayout).InputMapping.ArrayNum)) {
    if ((iVar8 == 0) && (0 < (this->OutputLayout).InputMapping.ArrayNum)) {
      if (4 < (byte)LogNNEDenoiser._0_1_) {
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
      }
    }
    else {
      if (4 < (byte)LogNNEDenoiser._0_1_) {
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
      }
      uVar9 = 0;
      if (0 < local_168) {
        local_158 = &this->OutputLayout;
        local_178 = 0;
        do {
          pFVar1 = local_158;
          uVar6 = 0;
          if ((int)uVar9 < (int)local_148[1]) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          local_108 = (uint *)(local_148[0] + local_178);
          uVar6 = local_108[10];
          if (*(uint **)(local_108 + 8) != (uint *)0x0) {
            local_108 = *(uint **)(local_108 + 8);
          }
          if (((int)uVar6 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          local_58 = 1;
          uStack_100 = uVar6;
          iStack_54 = FResourceMappingList::NumChannels(pFVar1,uVar9);
          uStack_50 = 0xffffffffffffffff;
          local_88.SecondaryData = (ForElementType<int>)0x0;
          local_70 = 4;
          Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                    (4,4,4,0,&local_88,4,&local_6c);
          uVar3 = uStack_50;
          FVar7 = (ForElementType<int>)&local_88;
          if (local_88.SecondaryData != (ForElementType<int>)0x0) {
            FVar7 = local_88.SecondaryData;
          }
          *(ulonglong *)FVar7 = CONCAT44(iStack_54,local_58);
          *(undefined8 *)((longlong)FVar7 + 8) = uVar3;
          ::FString::FString(&local_f8,L"Output");
          iVar8 = local_70;
          local_118 = (ForElementType<int>)&local_88;
          if (local_88.SecondaryData != (ForElementType<int>)0x0) {
            local_118 = local_88.SecondaryData;
          }
          if ((local_70 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          local_b8._12_4_ = uStack_fc;
          local_b8.ArrayNum = uStack_100;
          iStack_110 = iVar8;
          local_c8._12_4_ = uStack_10c;
          local_c8.ArrayNum = iVar8;
          local_c8.DataPtr = (int *)local_118;
          local_b8.DataPtr = local_108;
          bVar4 = IsTensorShapeValid<unsigned_int>(&local_b8,&local_c8,&local_f8);
          if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Data.AllocatorInstance.Data);
          }
          FVar7 = local_88.SecondaryData;
          if (!bVar4) goto LAB_14eaff6c8;
          if (4 < (byte)LogNNEDenoiser._0_1_) {
            if (((int)uVar6 < 4) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
            if (((int)uVar6 < 3) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
            if (((int)uVar6 < 2) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
            if (((int)uVar6 < 1) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
            Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
          }
          if (local_88.SecondaryData != (ForElementType<int>)0x0) {
            FMemory::Free((void *)local_88.SecondaryData);
          }
          local_178 = local_178 + 0x30;
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < local_168);
      }
    }
    bVar4 = true;
    goto LAB_14eaff34a;
  }
  if (1 < (byte)LogNNEDenoiser._0_1_) {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
    bVar4 = false;
    goto LAB_14eaff34a;
  }
LAB_14eaff6d2:
  bVar4 = false;
LAB_14eaff34a:
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return bVar4;
LAB_14eaff6c8:
  if (FVar7 != (ForElementType<int>)0x0) {
    FMemory::Free((void *)FVar7);
  }
  goto LAB_14eaff6d2;
}

