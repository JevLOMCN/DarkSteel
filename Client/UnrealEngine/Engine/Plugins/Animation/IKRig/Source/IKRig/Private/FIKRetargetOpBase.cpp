// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 34

// StaticStruct @ 14defe420

UScriptStruct * __cdecl FIKRetargetOpBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpBase,(UObject *)pUVar1,
                         L"IKRetargetOpBase");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton;
}

// Initialize @ 14defe460

bool __thiscall
FIKRetargetOpBase::Initialize
          (FIKRetargetOpBase *this,FIKRetargetProcessor *param_1,FRetargetSkeleton *param_2,
          FTargetSkeleton *param_3,FIKRetargetOpBase *param_4,FIKRigLogger *param_5)

{
  this->bIsInitialized = true;
  return true;
}

// Run @ 14defe470

void __thiscall
FIKRetargetOpBase::Run
          (FIKRetargetOpBase *this,FIKRetargetProcessor *param_1,double param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  return;
}

// PostInitialize @ 14defe480

void __thiscall
FIKRetargetOpBase::PostInitialize
          (FIKRetargetOpBase *this,FIKRetargetProcessor *param_1,FRetargetSkeleton *param_2,
          FTargetSkeleton *param_3,FIKRigLogger *param_4)

{
  return;
}

// PostLoad @ 14defe490

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FIKRetargetOpBase::PostLoad(FIKRetargetOpBase *this,Type param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x00014defe4af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,param_1,*(code **)(*plVar1 + 0x10));
  return;
}

// ProcessAnimSequenceCurves @ 14defe4c0

void __thiscall
FIKRetargetOpBase::ProcessAnimSequenceCurves
          (FIKRetargetOpBase *this,FCurveData *param_1,
          TArray<TArray<TOptional<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_2,FCurveData *param_3,
          TArray<TArray<TOptional<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_4)

{
  FScriptContainerElement *pFVar1;
  
  FCurveData::operator=(param_3,param_1);
  if (param_4 != param_2) {
    DestructItems<TArray<TOptional<float>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<TOptional<float>,TSizedDefaultAllocator<32>_> *)
               (param_4->AllocatorInstance).Data,param_4->ArrayNum);
    pFVar1 = (param_4->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_4->AllocatorInstance).Data = (param_2->AllocatorInstance).Data;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    param_4->ArrayNum = param_2->ArrayNum;
    param_4->ArrayMax = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
  }
  pFVar1 = (param_1->Colors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->Flags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->Names).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<TOptional<float>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TOptional<float>,TSizedDefaultAllocator<32>_> *)
             (param_2->AllocatorInstance).Data,param_2->ArrayNum);
  pFVar1 = (param_2->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// HasCurveProcessing @ 14defe580

bool __thiscall FIKRetargetOpBase::HasCurveProcessing(FIKRetargetOpBase *this)

{
  return false;
}

// OnAddedToStack @ 14defe590

void __thiscall
FIKRetargetOpBase::OnAddedToStack
          (FIKRetargetOpBase *this,UIKRetargeter *param_1,FIKRetargetOpBase *param_2)

{
  return;
}

// OnAssignIKRig @ 14defe5a0

void __thiscall
FIKRetargetOpBase::OnAssignIKRig
          (FIKRetargetOpBase *this,ERetargetSourceOrTarget param_1,UIKRigDefinition *param_2,
          FIKRetargetOpBase *param_3)

{
  return;
}

// GetSettings @ 14defe5f0

FIKRetargetOpSettingsBase * __thiscall FIKRetargetOpBase::GetSettings(FIKRetargetOpBase *this)

{
  code *pcVar1;
  bool bVar2;
  FIKRetargetOpSettingsBase *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Public\\Retargeter\\IKRetargetOps.h"
                     ,0xe2,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FIKRetargetOpSettingsBase *)(*pcVar1)();
    return pFVar3;
  }
  return (FIKRetargetOpSettingsBase *)0x0;
}

// SetSettings @ 14defe6b0

void __thiscall
FIKRetargetOpBase::SetSettings(FIKRetargetOpBase *this,FIKRetargetOpSettingsBase *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x00014defe6d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 8))(plVar1,param_1,*(code **)(*plVar1 + 8));
  return;
}

// GetSettingsType @ 14defe6e0

UScriptStruct * __thiscall FIKRetargetOpBase::GetSettingsType(FIKRetargetOpBase *this)

{
  code *pcVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Public\\Retargeter\\IKRetargetOps.h"
                     ,0xf0,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UScriptStruct *)(*pcVar1)();
    return pUVar3;
  }
  return (UScriptStruct *)0x0;
}

// GetType @ 14defe720

UScriptStruct * __thiscall FIKRetargetOpBase::GetType(FIKRetargetOpBase *this)

{
  code *pcVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  UPackage *pUVar4;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Public\\Retargeter\\IKRetargetOps.h"
                     ,0xf3,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UScriptStruct *)(*pcVar1)();
    return pUVar3;
  }
  if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpBase,(UObject *)pUVar4,
                         L"IKRetargetOpBase");
  }
  return Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton;
}

// OnPlaybackReset @ 14defe790

void __thiscall FIKRetargetOpBase::OnPlaybackReset(FIKRetargetOpBase *this)

{
  return;
}

// AnimGraphPreUpdateMainThread @ 14defe7a0

void __thiscall
FIKRetargetOpBase::AnimGraphPreUpdateMainThread
          (FIKRetargetOpBase *this,USkeletalMeshComponent *param_1,USkeletalMeshComponent *param_2)

{
  return;
}

// AnimGraphEvaluateAnyThread @ 14defe7b0

void __thiscall
FIKRetargetOpBase::AnimGraphEvaluateAnyThread(FIKRetargetOpBase *this,FPoseContext *param_1)

{
  return;
}

// CollectRetargetedBones @ 14defe8b0

void __thiscall
FIKRetargetOpBase::CollectRetargetedBones
          (FIKRetargetOpBase *this,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1)

{
  return;
}

// CanHaveChildOps @ 14defe8c0

bool __thiscall FIKRetargetOpBase::CanHaveChildOps(FIKRetargetOpBase *this)

{
  return false;
}

// GetParentOpType @ 14defe900

UScriptStruct * __thiscall FIKRetargetOpBase::GetParentOpType(FIKRetargetOpBase *this)

{
  return (UScriptStruct *)0x0;
}

// InitializeBeforeChildren @ 14defe9d0

void __thiscall
FIKRetargetOpBase::InitializeBeforeChildren
          (FIKRetargetOpBase *this,FIKRetargetProcessor *param_1,FRetargetSkeleton *param_2,
          FTargetSkeleton *param_3,FIKRigLogger *param_4)

{
  return;
}

// RunBeforeChildren @ 14defea20

void __thiscall
FIKRetargetOpBase::RunBeforeChildren
          (FIKRetargetOpBase *this,FIKRetargetProcessor *param_1,double param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  return;
}

// IsSingleton @ 14defea30

bool __thiscall FIKRetargetOpBase::IsSingleton(FIKRetargetOpBase *this)

{
  return false;
}

// GetCustomTargetIKRig @ 14defea40

UIKRigDefinition * __thiscall FIKRetargetOpBase::GetCustomTargetIKRig(FIKRetargetOpBase *this)

{
  return (UIKRigDefinition *)0x0;
}

// GetChainMapping @ 14defea50

FRetargetChainMapping * __thiscall FIKRetargetOpBase::GetChainMapping(FIKRetargetOpBase *this)

{
  return (FRetargetChainMapping *)0x0;
}

// OnTargetChainRenamed @ 14defeaa0

void __thiscall
FIKRetargetOpBase::OnTargetChainRenamed(FIKRetargetOpBase *this,FName param_1,FName param_2)

{
  return;
}

// OnReinitPropertyEdited @ 14defeab0

void __thiscall
FIKRetargetOpBase::OnReinitPropertyEdited(FIKRetargetOpBase *this,FPropertyChangedEvent *param_1)

{
  return;
}

// OnParentReinitPropertyEdited @ 14defeac0

void __thiscall
FIKRetargetOpBase::OnParentReinitPropertyEdited
          (FIKRetargetOpBase *this,FIKRetargetOpBase *param_1,FPropertyChangedEvent *param_2)

{
  return;
}

// ~FIKRetargetOpBase @ 14df1bb20

void __thiscall FIKRetargetOpBase::~FIKRetargetOpBase(FIKRetargetOpBase *this)

{
  this->_padding_ = (longlong)&___7FIKRetargetOpBase__6B_;
  return;
}

// CopySettingsRaw @ 14df2e540

void __thiscall
FIKRetargetOpBase::CopySettingsRaw
          (FIKRetargetOpBase *this,FIKRetargetOpSettingsBase *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  void *pvVar1;
  UStruct *pUVar2;
  
  pvVar1 = (void *)(**(code **)(this->_padding_ + 0x48))();
  pUVar2 = (UStruct *)(**(code **)(this->_padding_ + 0x58))(this);
  CopyStructProperties(pUVar2,param_1,pvVar1,param_2);
  return;
}

// CopyStructProperties @ 14df2e6b0

void __cdecl
FIKRetargetOpBase::CopyStructProperties
          (UStruct *param_1,void *param_2,void *param_3,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_4)

{
  FName *pFVar1;
  code *pcVar2;
  FField *pFVar3;
  bool bVar4;
  FName *pFVar5;
  void *_Dst;
  void *_Src;
  FName local_res8;
  TFieldIterator<FProperty> local_48;
  
  if (((param_1 != (UStruct *)0x0) && (param_2 != (void *)0x0)) && (param_3 != (void *)0x0)) {
    local_48.Field = param_1->ChildProperties;
    local_48.InterfaceIndex = -1;
    local_48.bIncludeSuper = true;
    local_48.bIncludeDeprecated = true;
    local_48.bIncludeInterface = false;
    local_48.Struct = param_1;
    TFieldIterator<FProperty>::IterateToNext(&local_48);
    pFVar3 = local_48.Field;
    while (pFVar3 != (FField *)0x0) {
      if (pFVar3 != (FField *)0x0) {
        local_48.Field = pFVar3;
        bVar4 = IsThisNotNull(pFVar3,"FField::GetFName");
        if (bVar4) {
          local_res8 = pFVar3->NamePrivate;
        }
        else {
          local_res8.ComparisonIndex.Value = 0;
          local_res8.Number = 0;
        }
        pFVar5 = (FName *)(param_4->AllocatorInstance).Data;
        pFVar1 = pFVar5 + param_4->ArrayNum;
        for (; pFVar5 != pFVar1; pFVar5 = pFVar5 + 1) {
          if (*pFVar5 == local_res8) goto LAB_14df2e851;
        }
        if (((int)pFVar3[1]._padding_ < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        _Src = (void *)((longlong)*(int *)((longlong)&pFVar3[1].Owner.Container + 4) +
                       (longlong)param_2);
        if (((int)pFVar3[1]._padding_ < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        _Dst = (void *)((longlong)*(int *)((longlong)&pFVar3[1].Owner.Container + 4) +
                       (longlong)param_3);
        if (_Dst != _Src) {
          if ((*(uint *)&pFVar3[1].ClassPrivate >> 0x1e & 1) == 0) {
            (**(code **)(pFVar3->_padding_ + 0xf0))(pFVar3,_Dst,_Src,(int)pFVar3[1]._padding_);
          }
          else {
            memcpy(_Dst,_Src,
                   (longlong)*(int *)((longlong)&pFVar3[1]._padding_ + 4) *
                   (longlong)(int)pFVar3[1]._padding_);
          }
        }
      }
LAB_14df2e851:
      local_48.Field = pFVar3->Next;
      TFieldIterator<FProperty>::IterateToNext(&local_48);
      pFVar3 = local_48.Field;
    }
  }
  return;
}

// GetName @ 14df3a350

FName __thiscall FIKRetargetOpBase::GetName(FIKRetargetOpBase *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->Name;
  return in_RDX;
}

// GetParentOpName @ 14df3b370

FName __thiscall FIKRetargetOpBase::GetParentOpName(FIKRetargetOpBase *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->ParentOpName;
  return in_RDX;
}

// SetName @ 14df55670

void __thiscall FIKRetargetOpBase::SetName(FIKRetargetOpBase *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != (FName)0x0) {
    this->Name = param_1;
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<3592057878959095910>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\IKRetargetOps.cpp"
                     ,0x66,"InName != NAME_None");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  return;
}

// SetParentOpName @ 14df55840

void __thiscall FIKRetargetOpBase::SetParentOpName(FIKRetargetOpBase *this,FName param_1)

{
  this->ParentOpName = param_1;
  return;
}

