// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNEDenoiser
// Functions: 8

// ~FInputProcessBase @ 14eae6bb0

void __thiscall
UE::NNEDenoiser::Private::FInputProcessBase::~FInputProcessBase(FInputProcessBase *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TransferFunction).SharedReferenceCount.ReferenceController);
  DestructItems<UE::NNEDenoiser::Private::FResourceMapping,int>
            ((FResourceMapping *)(this->InputLayout).InputMapping.AllocatorInstance.Data,
             (this->InputLayout).InputMapping.ArrayNum);
  pFVar1 = (this->InputLayout).InputMapping.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddPasses @ 14eaecab0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::NNEDenoiser::Private::FInputProcessBase::AddPasses
          (FInputProcessBase *this,FRDGBuilder *param_1,
          TArrayView<UE::NNE::FTensorDesc_const_,int> *param_2,
          TArrayView<UE::NNE::FTensorShape_const_,int> *param_3,IResourceAccess *param_4,
          TArrayView<FRDGBuffer_*_const,int> *param_5)

{
  EResourceName EVar1;
  FScriptContainerElement *pFVar2;
  FTensorShape *pFVar3;
  code *pcVar4;
  UEnum *pUVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  UPackage *pUVar10;
  TTuple<FName,__int64> *pTVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar19;
  TTuple<FName,__int64> local_50;
  
  if (Z_Registration_Info_UEnum_EResourceName.OuterSingleton == (UEnum *)0x0) {
    pUVar10 = Z_Construct_UPackage__Script_NNEDenoiser();
    Z_Registration_Info_UEnum_EResourceName.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_NNEDenoiser_EResourceName,(UObject *)pUVar10,
                       L"EResourceName");
  }
  pUVar5 = Z_Registration_Info_UEnum_EResourceName.OuterSingleton;
  iVar8 = ((Z_Registration_Info_UEnum_EResourceName.OuterSingleton)->Names).NumValues;
  iVar16 = 0;
  if (0 < iVar8) {
    do {
      if (((iVar16 < 0) || (iVar8 <= iVar16)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Names.IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0xb2d,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar11 = UEnum::FNameData::operator[](&pUVar5->Names,&local_50,iVar16);
      EVar1 = pTVar11->field_0x8;
      iVar8 = FResourceMappingList::NumFrames(&this->InputLayout,EVar1);
      iVar14 = 0;
      if (0 < iVar8) {
        do {
          cVar7 = (**(code **)(this->_padding_ + 0x28))(this,EVar1,iVar14);
          uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
          if (cVar7 != '\0') {
            uVar12 = (**(code **)*param_4)(param_4,EVar1,iVar14);
            uVar13 = (**(code **)((longlong)*param_4 + 8))(param_4,EVar1,iVar14);
            in_stack_ffffffffffffff88 = CONCAT44(uVar19,iVar14);
            (**(code **)(this->_padding_ + 0x30))
                      (this,param_1,uVar12,EVar1,in_stack_ffffffffffffff88,uVar13);
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < iVar8);
      }
      iVar8 = (pUVar5->Names).NumValues;
      iVar16 = iVar16 + 1;
    } while (iVar16 < iVar8);
  }
  uVar15 = 0;
  if (0 < param_2->ArrayNum) {
    lVar18 = 0;
    do {
      pcVar4 = *(code **)(this->_padding_ + 0x38);
      uVar9 = 0;
      if ((int)uVar15 < param_5->ArrayNum) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar12 = *(undefined8 *)((longlong)param_5->DataPtr + lVar18);
      if ((((int)uVar15 < 0) || ((this->InputLayout).InputMapping.ArrayNum <= (int)uVar15)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InputIndex >= 0 && InputIndex < InputMapping.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserResourceMapping.cpp"
                             ,0x89,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar9 = 0;
      if ((int)uVar15 < (this->InputLayout).InputMapping.ArrayNum) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->InputLayout).InputMapping.AllocatorInstance.Data;
      lVar17 = (longlong)(int)uVar15;
      uVar9 = 0;
      if ((int)uVar15 < param_3->ArrayNum) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = param_3->DataPtr;
      uVar9 = 0;
      if ((int)uVar15 < param_2->ArrayNum) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (*pcVar4)(this,param_1,param_2->DataPtr + lVar17,pFVar3 + lVar17,param_4,
                pFVar2 + lVar17 * 0x10,uVar12);
      uVar15 = uVar15 + 1;
      lVar18 = lVar18 + 8;
    } while ((int)uVar15 < param_2->ArrayNum);
  }
  return;
}

// HasPreprocessInput @ 14eafa310

bool __thiscall
UE::NNEDenoiser::Private::FInputProcessBase::HasPreprocessInput
          (FInputProcessBase *this,EResourceName param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FrameIdx == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserIOProcessBase.cpp"
                       ,0x15e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  if (((param_1 != Color) && (param_1 != Albedo)) && (param_1 != Normal)) {
    return false;
  }
  return true;
}

// NumFrames @ 14eafc0b0

int __thiscall
UE::NNEDenoiser::Private::FInputProcessBase::NumFrames
          (FInputProcessBase *this,EResourceName param_1)

{
  int iVar1;
  
  iVar1 = FResourceMappingList::NumFrames(&this->InputLayout,param_1);
  return iVar1;
}

// Prepare @ 14eafc630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::NNEDenoiser::Private::FInputProcessBase::Prepare
          (FInputProcessBase *this,IModelInstance *param_1,TIntPoint<int> param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  char cVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  bool bVar14;
  undefined4 uStackX_1c;
  undefined1 auStack_158 [32];
  FScriptContainerElement *local_138;
  FScriptContainerElement *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  char local_108;
  ForAnyElementType local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  IModelInstance *local_e8;
  FInputProcessBase *local_e0;
  longlong local_d8;
  int local_d0;
  uint *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  uint uStack_b0;
  undefined4 uStack_ac;
  TArrayView<unsigned_int_const_,int> local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  FTensorShape local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_e8 = param_1;
  local_e0 = this;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"NNEDenoiser.Prepare");
  bVar14 = CpuChannel->Enabled < 0;
  if (bVar14) {
    local_108 = '\0';
  }
  else {
    local_108 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId268,"NNEDenoiser.Prepare",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserIOProcessBase.cpp"
               ,0x10c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId268);
  }
  cVar9 = !bVar14;
  local_f0 = 0xffffffffffffffff;
  cVar4 = (**(code **)(this->_padding_ + 8))(this,param_1,0xffffffffffffffff);
  if (cVar4 == '\0') {
    bVar14 = false;
    goto LAB_14eafca5d;
  }
  if (4 < (byte)LogNNEDenoiser._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
  }
  (**(code **)((longlong)*param_1 + 8))(param_1,&local_d8);
  if (4 < (byte)LogNNEDenoiser._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
  }
  uVar10 = 0;
  local_100.Data = (FScriptContainerElement *)0x0;
  local_f8 = 0;
  uVar6 = 0;
  if (0 < local_d0) {
    uStackX_1c = param_2.field0_0x0._4_4_;
    uVar12 = uVar10;
    do {
      uVar11 = (uint)uVar12;
      uVar6 = 0;
      if ((int)uVar11 < local_d0) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if (uVar6 == 0) {
        local_130 = (FScriptContainerElement *)(longlong)local_d0;
        local_138 = (FScriptContainerElement *)(longlong)(int)uVar11;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar14) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      lVar2 = *(longlong *)(local_d8 + 0x38 + uVar10);
      iVar7 = *(int *)(local_d8 + 0x40 + uVar10);
      lVar13 = local_d8 + 0x18 + uVar10;
      if (lVar2 != 0) {
        lVar13 = lVar2;
      }
      if (iVar7 < 0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L"");
        if (bVar14) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
LAB_14eafc818:
        local_138 = (FScriptContainerElement *)&DAT_00000001;
        local_130 = (FScriptContainerElement *)(longlong)iVar7;
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar14) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      else if (iVar7 < 2) goto LAB_14eafc818;
      uVar1 = *(undefined4 *)(lVar13 + 4);
      local_c8 = &local_88;
      uStack_c0 = 4;
      local_a8._12_4_ = uStack_bc;
      local_a8.ArrayNum = 4;
      local_88 = 1;
      local_80 = uStackX_1c;
      local_a8.DataPtr = local_c8;
      local_84 = uVar1;
      local_7c = param_2.field0_0x0._0_4_;
      pFVar8 = (FScriptContainerElement *)NNE::FTensorShape::Make(&local_78,&local_a8);
      if (local_100.Data <= pFVar8) {
        if (pFVar8 < local_100.Data + (longlong)local_f8._4_4_ * 0x30) {
          local_120 = (longlong)(int)(uint)local_f8;
          local_118 = 0x30;
          local_130 = local_100.Data;
          local_138 = pFVar8;
          local_128 = (longlong)local_f8._4_4_;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar14) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
      }
      iVar7 = (uint)local_f8;
      if ((uint)local_f8 == local_f8._4_4_) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_100,(int *)((longlong)&local_f8 + 4));
      }
      local_f8 = CONCAT44(local_f8._4_4_,iVar7 + 1);
      NNE::FTensorShape::FTensorShape
                ((FTensorShape *)(local_100.Data + (longlong)iVar7 * 0x30),(FTensorShape *)pFVar8);
      if (local_78.Data.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_78.Data.AllocatorInstance.SecondaryData);
      }
      if (4 < (byte)LogNNEDenoiser._0_1_) {
        local_128 = CONCAT44(local_128._4_4_,param_2.field0_0x0._0_4_);
        local_130 = (FScriptContainerElement *)CONCAT44(local_130._4_4_,uStackX_1c);
        local_138 = (FScriptContainerElement *)CONCAT44(local_138._4_4_,uVar1);
        Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      uVar10 = uVar10 + 0x48;
    } while ((int)(uVar11 + 1) < local_d0);
    param_1 = local_e8;
    this = local_e0;
    cVar9 = local_108;
    uVar6 = (uint)local_f8;
  }
  pcVar3 = *(code **)((longlong)*param_1 + 0x28);
  local_b8 = local_100.Data;
  if (((int)uVar6 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar14)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  local_98 = (undefined4)local_b8;
  uStack_94 = local_b8._4_4_;
  uStack_8c = uStack_ac;
  uStack_b0 = uVar6;
  uStack_90 = uVar6;
  cVar4 = (*pcVar3)(param_1,&local_98);
  if (cVar4 == '\0') {
    cVar4 = (**(code **)(this->_padding_ + 8))(this,param_1,param_2.field0_0x0);
    if (cVar4 == '\0') goto LAB_14eafca3a;
    bVar14 = true;
  }
  else if ((byte)LogNNEDenoiser._0_1_ < 2) {
LAB_14eafca3a:
    bVar14 = false;
  }
  else {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
    bVar14 = false;
  }
  DestructItems<UE::NNE::FTensorShape,int>((FTensorShape *)local_100.Data,(uint)local_f8);
  if (local_100.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data);
  }
LAB_14eafca5d:
  if (cVar9 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return bVar14;
}

// PreprocessInput @ 14eafcab0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::NNEDenoiser::Private::FInputProcessBase::PreprocessInput
          (FInputProcessBase *this,FRDGBuilder *param_1,FRDGTexture *param_2,EResourceName param_3,
          int param_4,FRDGTexture *param_5)

{
  ITransferFunction *pIVar1;
  
  IOProcessBaseHelper::AddPreOrPostProcess(param_1,param_2,param_3,param_4,param_5);
  pIVar1 = (this->TransferFunction).Object;
  if ((pIVar1 != (ITransferFunction *)0x0) && (param_3 == Color)) {
    (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,param_1,param_5,param_5);
  }
  return;
}

// Validate @ 14eafea20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::NNEDenoiser::Private::FInputProcessBase::Validate
          (FInputProcessBase *this,IModelInstance *param_1,TIntPoint<int> param_2)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int *piVar9;
  ForElementType<int> FVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  int iStackX_1c;
  undefined1 auStackY_1a8 [32];
  undefined4 uStack_14c;
  longlong local_148;
  int local_140;
  longlong local_138 [2];
  ForElementType<int> local_128;
  int iStack_120;
  undefined4 uStack_11c;
  FString local_118;
  ForElementType<int> local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FString local_f8;
  TArrayView<int_const_,int> local_e8;
  TArrayView<int_const_,int> local_d8;
  TArrayView<int_const_,int> local_c8;
  TArrayView<unsigned_int_const_,int> local_b8;
  undefined1 local_a8 [16];
  ForElementType<int> local_98;
  int local_90;
  int local_8c;
  ForElementType<int> local_88;
  int local_70;
  int local_6c;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined4 local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"NNEDenoiser.Validate");
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId213,"NNEDenoiser.Validate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserIOProcessBase.cpp"
               ,0xd5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId213);
  }
  iStackX_1c = param_2.field0_0x0._4_4_;
  iVar12 = param_2.field0_0x0._0_4_;
  if ((((iVar12 != -1) || (iStackX_1c != -1)) &&
      ((iVar12 < 0 || ((longlong)param_2.field0_0x0 < 0)))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Extent == FIntPoint(-1, -1) || (Extent.X >= 0 && Extent.Y >= 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserIOProcessBase.cpp"
                         ,0xd7,L"Extent should be either fully symbolic or set!"), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  if (4 < (byte)LogNNEDenoiser._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
  }
  if ((iVar12 == -1) && (iStackX_1c == -1)) {
    (**(code **)((longlong)*param_1 + 8))();
    if (local_140 == (this->InputLayout).InputMapping.ArrayNum) {
      uVar14 = 0;
      if (0 < local_140) {
        uVar15 = uVar14;
        do {
          uVar13 = (uint)uVar14;
          uVar8 = 0;
          if ((int)uVar13 < local_140) {
            uVar8 = ~uVar13 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          piVar2 = *(int **)(local_148 + 0x38 + uVar15);
          iVar1 = *(int *)(local_148 + 0x40 + uVar15);
          piVar9 = (int *)(local_148 + 0x18 + uVar15);
          if (piVar2 != (int *)0x0) {
            piVar9 = piVar2;
          }
          if ((iVar1 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          local_68 = 1;
          iStack_64 = FResourceMappingList::NumChannels(&this->InputLayout,uVar13);
          iStack_60 = iStackX_1c;
          local_98 = (ForElementType<int>)0x0;
          local_90 = 4;
          iStack_5c = iVar12;
          Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                    (4,4,4,0,(ForElementType<int> *)local_a8,4,&local_8c);
          uVar4 = CONCAT44(iStack_5c,iStack_60);
          FVar10 = (ForElementType<int>)local_a8;
          if (local_98 != (ForElementType<int>)0x0) {
            FVar10 = local_98;
          }
          *(ulonglong *)FVar10 = CONCAT44(iStack_64,local_68);
          *(undefined8 *)((longlong)FVar10 + 8) = uVar4;
          ::FString::FString(&local_118,L"Input");
          iVar5 = local_90;
          local_128 = (ForElementType<int>)local_a8;
          if (local_98 != (ForElementType<int>)0x0) {
            local_128 = local_98;
          }
          if ((local_90 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          local_d8._12_4_ = uStack_14c;
          local_d8.ArrayNum = iVar1;
          iStack_120 = iVar5;
          local_e8._12_4_ = uStack_11c;
          local_e8.ArrayNum = iVar5;
          local_e8.DataPtr = (int *)local_128;
          local_d8.DataPtr = piVar9;
          bVar6 = IsTensorShapeValid<int>(&local_d8,&local_e8,&local_118);
          if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_118.Data.AllocatorInstance.Data);
          }
          if (!bVar6) {
            if (local_98 != (ForElementType<int>)0x0) {
              FMemory::Free((void *)local_98);
            }
            DestructItems<UE::NNE::FTensorShape,int>((FTensorShape *)0x0,0);
            bVar6 = false;
            goto LAB_14eafed68;
          }
          if (local_98 != (ForElementType<int>)0x0) {
            FMemory::Free((void *)local_98);
          }
          uVar14 = (ulonglong)(uVar13 + 1);
          uVar15 = uVar15 + 0x48;
        } while ((int)(uVar13 + 1) < local_140);
      }
      DestructItems<UE::NNE::FTensorShape,int>((FTensorShape *)0x0,0);
LAB_14eafed66:
      bVar6 = true;
      goto LAB_14eafed68;
    }
    if (1 < (byte)LogNNEDenoiser._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
      bVar6 = false;
      goto LAB_14eafed68;
    }
  }
  else {
    (**(code **)((longlong)*param_1 + 0x18))(param_1,local_138);
    if ((int)local_138[1] == (this->InputLayout).InputMapping.ArrayNum) {
      uVar14 = 0;
      if (0 < (int)local_138[1]) {
        uVar15 = uVar14;
        do {
          uVar13 = (uint)uVar14;
          uVar8 = 0;
          if ((int)uVar13 < (int)local_138[1]) {
            uVar8 = ~uVar13 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          puVar11 = (uint *)(local_138[0] + uVar15);
          uVar8 = puVar11[10];
          if (*(uint **)(puVar11 + 8) != (uint *)0x0) {
            puVar11 = *(uint **)(puVar11 + 8);
          }
          if (((int)uVar8 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          local_58 = 1;
          iStack_54 = FResourceMappingList::NumChannels(&this->InputLayout,uVar13);
          iStack_50 = iStackX_1c;
          local_88.SecondaryData = (ForElementType<int>)0x0;
          local_70 = 4;
          iStack_4c = iVar12;
          Core::Private::
          ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                    (4,4,4,0,&local_88,4,&local_6c);
          uVar4 = CONCAT44(iStack_4c,iStack_50);
          FVar10 = (ForElementType<int>)&local_88;
          if (local_88.SecondaryData != (ForElementType<int>)0x0) {
            FVar10 = local_88.SecondaryData;
          }
          *(ulonglong *)FVar10 = CONCAT44(iStack_54,local_58);
          *(undefined8 *)((longlong)FVar10 + 8) = uVar4;
          ::FString::FString(&local_f8,L"Input");
          iVar1 = local_70;
          local_108 = (ForElementType<int>)&local_88;
          if (local_88.SecondaryData != (ForElementType<int>)0x0) {
            local_108 = local_88.SecondaryData;
          }
          if ((local_70 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          local_b8._12_4_ = uStack_14c;
          local_b8.ArrayNum = uVar8;
          iStack_100 = iVar1;
          local_c8._12_4_ = uStack_fc;
          local_c8.ArrayNum = iVar1;
          local_c8.DataPtr = (int *)local_108;
          local_b8.DataPtr = puVar11;
          bVar6 = IsTensorShapeValid<unsigned_int>(&local_b8,&local_c8,&local_f8);
          if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Data.AllocatorInstance.Data);
          }
          if (!bVar6) {
            if (local_88.SecondaryData != (ForElementType<int>)0x0) {
              FMemory::Free((void *)local_88.SecondaryData);
            }
            goto LAB_14eaff003;
          }
          if (local_88.SecondaryData != (ForElementType<int>)0x0) {
            FMemory::Free((void *)local_88.SecondaryData);
          }
          uVar14 = (ulonglong)(uVar13 + 1);
          uVar15 = uVar15 + 0x30;
        } while ((int)(uVar13 + 1) < (int)local_138[1]);
      }
      goto LAB_14eafed66;
    }
    if (1 < (byte)LogNNEDenoiser._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNEDenoiser);
      bVar6 = false;
      goto LAB_14eafed68;
    }
  }
LAB_14eaff003:
  bVar6 = false;
LAB_14eafed68:
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return bVar6;
}

// WriteInputBuffer @ 14eaff6e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UE::NNEDenoiser::Private::FInputProcessBase::WriteInputBuffer
          (FInputProcessBase *this,FRDGBuilder *param_1,FTensorDesc *param_2,FTensorShape *param_3,
          IResourceAccess *param_4,FResourceMapping *param_5,FRDGBuffer *param_6)

{
  code *pcVar1;
  bool bVar2;
  FRDGBufferUAV *pFVar3;
  FRDGBufferUAVDesc local_18;
  
  if (param_2->DataType == Half) {
    local_18._padding_._0_1_ = 0x15;
  }
  else if (param_2->DataType == Float) {
    local_18._padding_._0_1_ = 0xd;
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Unimplemented function called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNEDenoiser\\Source\\NNEDenoiser\\Private\\NNEDenoiserUtils.h"
                       ,0x83,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_18._padding_._0_1_ = 0;
  }
  local_18.Buffer = param_6;
  local_18._padding_._1_2_ = 0;
  pFVar3 = FRDGBuilder::CreateUAV(param_1,&local_18,None);
  IOProcessBaseHelper::AddReadInputPassForKind(param_1,param_4,Color,param_5,pFVar3);
  IOProcessBaseHelper::AddReadInputPassForKind(param_1,param_4,Albedo,param_5,pFVar3);
  IOProcessBaseHelper::AddReadInputPassForKind(param_1,param_4,Normal,param_5,pFVar3);
  IOProcessBaseHelper::AddReadInputPassForKind(param_1,param_4,Flow,param_5,pFVar3);
  IOProcessBaseHelper::AddReadInputPassForKind(param_1,param_4,Output,param_5,pFVar3);
  return;
}

