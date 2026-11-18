// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 55

// StaticClass @ 14df03600

UClass * __cdecl UIKRetargeter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargeter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargeter",
               &Z_Registration_Info_UClass_UIKRetargeter.InnerSingleton,
               StaticRegisterNativesUIKRetargeter,0x208,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKRetargeter>,InternalVTableHelperCtorCaller<UIKRetargeter>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargeter.InnerSingleton;
}

// UIKRetargeter @ 14df197c0

UIKRetargeter * __thiscall UIKRetargeter::UIKRetargeter(UIKRetargeter *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->Version = -1;
  this->_padding_ = (longlong)&___7UIKRetargeter__6B_;
  (this->SourceIKRigAsset).field0_0x0.DebugPtr = (UIKRigDefinition *)0x0;
  (this->TargetIKRigAsset).field0_0x0.DebugPtr = (UIKRigDefinition *)0x0;
  (this->RetargetOps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RetargetOps).ArrayNum = 0;
  (this->RetargetOps).ArrayMax = 0;
  *(undefined8 *)&this->Profiles = 0;
  *(undefined8 *)&(this->Profiles).field_0x8 = 0;
  *(undefined8 *)&(this->Profiles).field_0x20 = 0;
  *(undefined4 *)&(this->Profiles).field_0x28 = 0;
  *(undefined4 *)&(this->Profiles).field_0x2c = 0x80;
  *(undefined4 *)&(this->Profiles).field_0x34 = 0;
  *(undefined4 *)&(this->Profiles).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Profiles).field_0x40 = 0;
  *(undefined4 *)&(this->Profiles).field_0x48 = 0;
  (this->CurrentProfile).ComparisonIndex = 0;
  (this->CurrentProfile).Number = 0;
  *(undefined8 *)&this->SourceRetargetPoses = 0;
  *(undefined8 *)&(this->SourceRetargetPoses).field_0x8 = 0;
  *(undefined8 *)&(this->SourceRetargetPoses).field_0x20 = 0;
  *(undefined4 *)&(this->SourceRetargetPoses).field_0x28 = 0;
  *(undefined4 *)&(this->SourceRetargetPoses).field_0x2c = 0x80;
  *(undefined4 *)&(this->SourceRetargetPoses).field_0x34 = 0;
  *(undefined4 *)&(this->SourceRetargetPoses).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SourceRetargetPoses).field_0x40 = 0;
  *(undefined4 *)&(this->SourceRetargetPoses).field_0x48 = 0;
  *(undefined8 *)&this->TargetRetargetPoses = 0;
  *(undefined8 *)&(this->TargetRetargetPoses).field_0x8 = 0;
  *(undefined8 *)&(this->TargetRetargetPoses).field_0x20 = 0;
  *(undefined4 *)&(this->TargetRetargetPoses).field_0x28 = 0;
  *(undefined4 *)&(this->TargetRetargetPoses).field_0x2c = 0x80;
  *(undefined4 *)&(this->TargetRetargetPoses).field_0x34 = 0;
  *(undefined4 *)&(this->TargetRetargetPoses).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TargetRetargetPoses).field_0x40 = 0;
  *(undefined4 *)&(this->TargetRetargetPoses).field_0x48 = 0;
  (this->CurrentSourceRetargetPose).ComparisonIndex = 0;
  (this->CurrentSourceRetargetPose).Number = 0;
  (this->CurrentTargetRetargetPose).ComparisonIndex = 0;
  (this->CurrentTargetRetargetPose).Number = 0;
  this->TargetActorOffset_DEPRECATED = 0.0;
  this->TargetActorScale_DEPRECATED = 0.0;
  *(undefined8 *)&this->RetargetPoses = 0;
  *(undefined8 *)&(this->RetargetPoses).field_0x8 = 0;
  *(undefined8 *)&(this->RetargetPoses).field_0x20 = 0;
  this->bRetargetRoot_DEPRECATED = true;
  this->bRetargetFK_DEPRECATED = true;
  this->bRetargetIK_DEPRECATED = true;
  *(undefined4 *)&(this->RetargetPoses).field_0x28 = 0;
  *(undefined4 *)&(this->RetargetPoses).field_0x2c = 0x80;
  *(undefined4 *)&(this->RetargetPoses).field_0x34 = 0;
  *(undefined4 *)&(this->RetargetPoses).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RetargetPoses).field_0x40 = 0;
  *(undefined4 *)&(this->RetargetPoses).field_0x48 = 0;
  (this->CurrentRetargetPose).ComparisonIndex = 0;
  (this->CurrentRetargetPose).Number = 0;
  (this->ChainMap_DEPRECATED).ChainMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChainMap_DEPRECATED).ChainMap.ArrayNum = 0;
  (this->ChainMap_DEPRECATED).ChainMap.ArrayMax = 0;
  (this->ChainMap_DEPRECATED).SourceIKRig.field0_0x0.DebugPtr = (UIKRigDefinition *)0x0;
  (this->ChainMap_DEPRECATED).TargetIKRig.field0_0x0.DebugPtr = (UIKRigDefinition *)0x0;
  (this->ChainSettings_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChainSettings_DEPRECATED).ArrayNum = 0;
  (this->ChainSettings_DEPRECATED).ArrayMax = 0;
  (this->RootSettings_DEPRECATED).field0_0x0.DebugPtr = (URetargetRootSettings *)0x0;
  (this->GlobalSettings_DEPRECATED).field0_0x0.DebugPtr = (UIKRetargetGlobalSettings *)0x0;
  (this->OpStack_DEPRECATED).field0_0x0.DebugPtr = (URetargetOpStack *)0x0;
  return this;
}

// UIKRetargeter @ 14df19970

UIKRetargeter * __thiscall
UIKRetargeter::UIKRetargeter(UIKRetargeter *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  URetargetRootSettings *this_00;
  UIKRetargetGlobalSettings *this_01;
  URetargetOpStack *this_02;
  FName local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->Version = -1;
  this->_padding_ = (longlong)&___7UIKRetargeter__6B_;
  (this->SourceIKRigAsset).field0_0x0.DebugPtr = (UIKRigDefinition *)0x0;
  (this->TargetIKRigAsset).field0_0x0.DebugPtr = (UIKRigDefinition *)0x0;
  (this->RetargetOps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RetargetOps).ArrayNum = 0;
  (this->RetargetOps).ArrayMax = 0;
  *(undefined8 *)&this->Profiles = 0;
  *(undefined8 *)&(this->Profiles).field_0x8 = 0;
  *(undefined8 *)&(this->Profiles).field_0x20 = 0;
  *(undefined4 *)&(this->Profiles).field_0x28 = 0;
  *(undefined4 *)&(this->Profiles).field_0x2c = 0x80;
  *(undefined4 *)&(this->Profiles).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Profiles).field_0x34 = 0;
  *(undefined8 *)&(this->Profiles).field_0x40 = 0;
  *(undefined4 *)&(this->Profiles).field_0x48 = 0;
  (this->CurrentProfile).ComparisonIndex = 0;
  (this->CurrentProfile).Number = 0;
  *(undefined8 *)&this->SourceRetargetPoses = 0;
  *(undefined8 *)&(this->SourceRetargetPoses).field_0x8 = 0;
  *(undefined8 *)&(this->SourceRetargetPoses).field_0x20 = 0;
  *(undefined4 *)&(this->SourceRetargetPoses).field_0x28 = 0;
  *(undefined4 *)&(this->SourceRetargetPoses).field_0x2c = 0x80;
  *(undefined4 *)&(this->SourceRetargetPoses).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SourceRetargetPoses).field_0x34 = 0;
  *(undefined8 *)&(this->SourceRetargetPoses).field_0x40 = 0;
  *(undefined4 *)&(this->SourceRetargetPoses).field_0x48 = 0;
  *(undefined8 *)&this->TargetRetargetPoses = 0;
  *(undefined8 *)&(this->TargetRetargetPoses).field_0x8 = 0;
  *(undefined8 *)&(this->TargetRetargetPoses).field_0x20 = 0;
  *(undefined4 *)&(this->TargetRetargetPoses).field_0x28 = 0;
  *(undefined4 *)&(this->TargetRetargetPoses).field_0x2c = 0x80;
  *(undefined4 *)&(this->TargetRetargetPoses).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TargetRetargetPoses).field_0x34 = 0;
  *(undefined8 *)&(this->TargetRetargetPoses).field_0x40 = 0;
  *(undefined4 *)&(this->TargetRetargetPoses).field_0x48 = 0;
  (this->CurrentSourceRetargetPose).ComparisonIndex = 0;
  (this->CurrentSourceRetargetPose).Number = 0;
  (this->CurrentTargetRetargetPose).ComparisonIndex = 0;
  (this->CurrentTargetRetargetPose).Number = 0;
  this->bRetargetRoot_DEPRECATED = true;
  this->bRetargetFK_DEPRECATED = true;
  this->bRetargetIK_DEPRECATED = true;
  this->TargetActorOffset_DEPRECATED = 0.0;
  this->TargetActorScale_DEPRECATED = 0.0;
  *(undefined8 *)&this->RetargetPoses = 0;
  *(undefined8 *)&(this->RetargetPoses).field_0x8 = 0;
  *(undefined8 *)&(this->RetargetPoses).field_0x20 = 0;
  *(undefined4 *)&(this->RetargetPoses).field_0x28 = 0;
  *(undefined4 *)&(this->RetargetPoses).field_0x2c = 0x80;
  *(undefined4 *)&(this->RetargetPoses).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RetargetPoses).field_0x34 = 0;
  *(undefined8 *)&(this->RetargetPoses).field_0x40 = 0;
  *(undefined4 *)&(this->RetargetPoses).field_0x48 = 0;
  (this->CurrentRetargetPose).ComparisonIndex = 0;
  (this->CurrentRetargetPose).Number = 0;
  (this->ChainMap_DEPRECATED).ChainMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChainMap_DEPRECATED).ChainMap.ArrayNum = 0;
  (this->ChainMap_DEPRECATED).ChainMap.ArrayMax = 0;
  (this->ChainMap_DEPRECATED).SourceIKRig.field0_0x0.DebugPtr = (UIKRigDefinition *)0x0;
  (this->ChainMap_DEPRECATED).TargetIKRig.field0_0x0.DebugPtr = (UIKRigDefinition *)0x0;
  (this->ChainSettings_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChainSettings_DEPRECATED).ArrayNum = 0;
  (this->ChainSettings_DEPRECATED).ArrayMax = 0;
  (this->RootSettings_DEPRECATED).field0_0x0.DebugPtr = (URetargetRootSettings *)0x0;
  (this->GlobalSettings_DEPRECATED).field0_0x0.DebugPtr = (UIKRetargetGlobalSettings *)0x0;
  (this->OpStack_DEPRECATED).field0_0x0.DebugPtr = (URetargetOpStack *)0x0;
  pFVar2 = ::FName::FName(&local_res8,L"RootSettings");
  FVar1 = *pFVar2;
  pUVar3 = URetargetRootSettings::StaticClass();
  this_00 = (URetargetRootSettings *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_00 != (URetargetRootSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->RootSettings_DEPRECATED).field0_0x0.DebugPtr = this_00;
  UObjectBase::AtomicallySetFlags((UObjectBase *)this_00,RF_Transactional);
  pFVar2 = ::FName::FName(&local_res8,L"GlobalSettings");
  FVar1 = *pFVar2;
  pUVar3 = UIKRetargetGlobalSettings::StaticClass();
  this_01 = (UIKRetargetGlobalSettings *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_01 != (UIKRetargetGlobalSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_01);
  }
  (this->GlobalSettings_DEPRECATED).field0_0x0.DebugPtr = this_01;
  UObjectBase::AtomicallySetFlags((UObjectBase *)this_01,RF_Transactional);
  pFVar2 = ::FName::FName(&local_res8,L"PostSettings");
  FVar1 = *pFVar2;
  pUVar3 = URetargetOpStack::StaticClass();
  this_02 = (URetargetOpStack *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_02 != (URetargetOpStack *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this_02);
  }
  (this->OpStack_DEPRECATED).field0_0x0.DebugPtr = this_02;
  UObjectBase::AtomicallySetFlags((UObjectBase *)this_02,RF_Transactional);
  CleanRetargetPoses(this);
  return this;
}

// ~UIKRetargeter @ 14df1c470

void __thiscall UIKRetargeter::~UIKRetargeter(UIKRetargeter *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UIKRetargeter__6B_;
  pFVar1 = (this->ChainSettings_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChainMap_DEPRECATED).ChainMap.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->RetargetPoses).field_0x48 = 0;
  pvVar2 = *(void **)&(this->RetargetPoses).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FIKRetargetPose>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FIKRetargetPose>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FIKRetargetPose>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RetargetPoses);
  *(undefined4 *)&(this->TargetRetargetPoses).field_0x48 = 0;
  pvVar2 = *(void **)&(this->TargetRetargetPoses).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FIKRetargetPose>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FIKRetargetPose>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FIKRetargetPose>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TargetRetargetPoses);
  *(undefined4 *)&(this->SourceRetargetPoses).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SourceRetargetPoses).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FIKRetargetPose>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FIKRetargetPose>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FIKRetargetPose>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SourceRetargetPoses);
  *(undefined4 *)&(this->Profiles).field_0x48 = 0;
  pvVar2 = *(void **)&(this->Profiles).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FRetargetProfile>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FRetargetProfile>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FRetargetProfile>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Profiles);
  DestructItems<FInstancedStruct,int>
            ((FInstancedStruct *)(this->RetargetOps).AllocatorInstance.Data,
             (this->RetargetOps).ArrayNum);
  pFVar1 = (this->RetargetOps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14df1f580

bool __thiscall
`UIKRetargeter::GetCleanAndUniqueOpName'::__l2::<lambda_1>::operator()
          (void *this,FName param_1,int param_2)

{
  int iVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  UPackage *pUVar7;
  UScriptStruct *pUVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  
  lVar11 = *(longlong *)this;
  uVar10 = 0;
  if (0 < *(int *)(lVar11 + 0x48)) {
    lVar12 = 0;
    pUVar8 = Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton;
    do {
      if ((param_2 == -1) || (uVar10 != param_2)) {
        uVar6 = 0;
        if ((int)uVar10 < *(int *)(lVar11 + 0x48)) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , pUVar8 = Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton, bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        lVar9 = *(longlong *)(*(longlong *)(lVar11 + 0x40) + 8 + lVar12);
        pUVar2 = *(UScriptStruct **)(*(longlong *)(lVar11 + 0x40) + lVar12);
        if ((lVar9 == 0) || (pUVar2 == (UScriptStruct *)0x0)) {
LAB_14df1f6c1:
          lVar9 = 0;
        }
        else {
          if (pUVar8 == (UScriptStruct *)0x0) {
            pUVar7 = Z_Construct_UPackage__Script_IKRig();
            pUVar8 = GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpBase,(UObject *)pUVar7,
                                     L"IKRetargetOpBase");
            Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton = pUVar8;
          }
          if (pUVar2 != pUVar8) {
            if (pUVar8 == (UScriptStruct *)0x0) {
              pUVar7 = Z_Construct_UPackage__Script_IKRig();
              pUVar8 = GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpBase,(UObject *)pUVar7
                                       ,L"IKRetargetOpBase");
              Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton = pUVar8;
              if (pUVar8 == (UScriptStruct *)0x0) goto LAB_14df1f6c1;
            }
            iVar1 = (int)pUVar8->_padding_;
            if (((int)pUVar2->_padding_ < iVar1) ||
               ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
                &pUVar8->_padding_)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (!bVar4) goto LAB_14df1f6c1;
          }
        }
        if (*(FName *)(lVar9 + 0xc) == param_1) {
          return true;
        }
      }
      lVar11 = *(longlong *)this;
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 0x10;
    } while ((int)uVar10 < *(int *)(lVar11 + 0x48));
  }
  return false;
}

// CleanRetargetPoses @ 14df2a360

void __thiscall UIKRetargeter::CleanRetargetPoses(UIKRetargeter *this)

{
  TMap<FName,FIKRetargetPose,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FIKRetargetPose,0>_>
  *this_00;
  TMap<FName,FIKRetargetPose,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FIKRetargetPose,0>_>
  *this_01;
  FName FVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  int *piVar6;
  TKeyInitializer<FName_const_&&> local_res8;
  FName local_res10;
  FName *local_res18 [2];
  
  uVar5 = (ulonglong)_tls_index;
  if (this->CurrentSourceRetargetPose == (FName)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar5 * 8) + 0x9d4c) < ::_TSS0
        ) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&DefaultPoseName,"Default Pose");
      _Init_thread_footer(&::_TSS0);
    }
    this->CurrentSourceRetargetPose = DefaultPoseName;
  }
  if (this->CurrentTargetRetargetPose == (FName)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar5 * 8) + 0x9d4c) < ::_TSS0
        ) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&DefaultPoseName,"Default Pose");
      _Init_thread_footer(&::_TSS0);
    }
    this->CurrentTargetRetargetPose = DefaultPoseName;
  }
  this_00 = &this->SourceRetargetPoses;
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar5 * 8) + 0x9d4c);
  if ((*piVar6 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&DefaultPoseName,"Default Pose");
    _Init_thread_footer(&::_TSS0);
  }
  FVar1 = DefaultPoseName;
  uVar2 = ::GetTypeHash(DefaultPoseName.ComparisonIndex.Value);
  if (*(int *)&(this->SourceRetargetPoses).field_0x8 !=
      *(int *)&(this->SourceRetargetPoses).field_0x34) {
    puVar4 = *(undefined1 **)&(this->SourceRetargetPoses).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->SourceRetargetPoses).field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->SourceRetargetPoses).field_0x48 - 1U &
                              FVar1.Number + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(FName *)((longlong)iVar3 * 0x80 + *(longlong *)&this_00->field_0x0) == FVar1)
        goto LAB_14df2a55f;
        iVar3 = *(int *)((longlong)iVar3 * 0x80 + 0x78 + *(longlong *)&this_00->field_0x0);
      } while (iVar3 != -1);
    }
  }
  if ((*piVar6 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&DefaultPoseName,"Default Pose");
    _Init_thread_footer(&::_TSS0);
  }
  local_res10 = DefaultPoseName;
  local_res18[0] = &local_res10;
  TSet<TTuple<FName,FIKRetargetPose>,TDefaultMapHashableKeyFuncs<FName,FIKRetargetPose,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FName_const_&&>_>
            ((TSet<TTuple<FName,FIKRetargetPose>,TDefaultMapHashableKeyFuncs<FName,FIKRetargetPose,0>,FDefaultSetAllocator>
              *)this_00,&local_res8,(bool *)local_res18);
LAB_14df2a55f:
  this_01 = &this->TargetRetargetPoses;
  if ((*piVar6 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&DefaultPoseName,"Default Pose");
    _Init_thread_footer(&::_TSS0);
  }
  FVar1 = DefaultPoseName;
  uVar2 = ::GetTypeHash(DefaultPoseName.ComparisonIndex.Value);
  if (*(int *)&(this->TargetRetargetPoses).field_0x8 !=
      *(int *)&(this->TargetRetargetPoses).field_0x34) {
    puVar4 = *(undefined1 **)&(this->TargetRetargetPoses).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->TargetRetargetPoses).field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->TargetRetargetPoses).field_0x48 - 1U &
                              FVar1.Number + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(FName *)((longlong)iVar3 * 0x80 + *(longlong *)&this_01->field_0x0) == FVar1)
        goto LAB_14df2a66f;
        iVar3 = *(int *)((longlong)iVar3 * 0x80 + 0x78 + *(longlong *)&this_01->field_0x0);
      } while (iVar3 != -1);
    }
  }
  if ((*piVar6 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&DefaultPoseName,"Default Pose");
    _Init_thread_footer(&::_TSS0);
  }
  local_res10 = DefaultPoseName;
  local_res18[0] = &local_res10;
  TSet<TTuple<FName,FIKRetargetPose>,TDefaultMapHashableKeyFuncs<FName,FIKRetargetPose,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FName_const_&&>_>
            ((TSet<TTuple<FName,FIKRetargetPose>,TDefaultMapHashableKeyFuncs<FName,FIKRetargetPose,0>,FDefaultSetAllocator>
              *)this_01,&local_res8,(bool *)local_res18);
LAB_14df2a66f:
  FVar1 = this->CurrentSourceRetargetPose;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->SourceRetargetPoses).field_0x8 !=
      *(int *)&(this->SourceRetargetPoses).field_0x34) {
    puVar4 = *(undefined1 **)&(this->SourceRetargetPoses).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->SourceRetargetPoses).field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->SourceRetargetPoses).field_0x48 - 1U &
                              FVar1.Number + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(FName *)((longlong)iVar3 * 0x80 + *(longlong *)&this_00->field_0x0) == FVar1)
        goto LAB_14df2a722;
        iVar3 = *(int *)((longlong)iVar3 * 0x80 + 0x78 + *(longlong *)&this_00->field_0x0);
      } while (iVar3 != -1);
    }
  }
  if ((*piVar6 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&DefaultPoseName,"Default Pose");
    _Init_thread_footer(&::_TSS0);
  }
  this->CurrentSourceRetargetPose = DefaultPoseName;
LAB_14df2a722:
  FVar1 = this->CurrentTargetRetargetPose;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->TargetRetargetPoses).field_0x8 !=
      *(int *)&(this->TargetRetargetPoses).field_0x34) {
    puVar4 = *(undefined1 **)&(this->TargetRetargetPoses).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->TargetRetargetPoses).field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->TargetRetargetPoses).field_0x48 - 1U &
                              FVar1.Number + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(FName *)((longlong)iVar3 * 0x80 + *(longlong *)&this_01->field_0x0) == FVar1) {
          return;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x80 + 0x78 + *(longlong *)&this_01->field_0x0);
      } while (iVar3 != -1);
    }
  }
  if ((*piVar6 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&DefaultPoseName,"Default Pose");
    _Init_thread_footer(&::_TSS0);
  }
  this->CurrentTargetRetargetPose = DefaultPoseName;
  return;
}

// GetChainMapByName @ 14df35fd0

TObjectPtr<URetargetChainSettings> __thiscall
UIKRetargeter::GetChainMapByName(UIKRetargeter *this,FName *param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  FName FVar3;
  longlong *in_R8;
  
  pFVar2 = (FName *)(this->ChainSettings_DEPRECATED).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->ChainSettings_DEPRECATED).ArrayNum;
  for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 1) {
    FVar3 = *pFVar2;
    if (*(longlong *)((longlong)FVar3 + 0x30) == *in_R8) goto LAB_14df36007;
  }
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
LAB_14df36007:
  *param_1 = FVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar3 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)FVar3);
  }
  return (TObjectPtr<URetargetChainSettings>)(TObjectPtr<URetargetChainSettings>_u_0)param_1;
}

// GetChainSettingsByName @ 14df36160

FTargetChainSettings * __thiscall
UIKRetargeter::GetChainSettingsByName(UIKRetargeter *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar4 = (this->ChainSettings_DEPRECATED).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)(this->ChainSettings_DEPRECATED).ArrayNum * 8;
  while( true ) {
    if (pFVar4 == pFVar1) {
      return (FTargetChainSettings *)0x0;
    }
    pUVar2 = *(UObject **)pFVar4;
    FVar3.ComparisonIndex.Value = *(uint *)&pUVar2[1].field_0x8;
    FVar3.Number = *(uint *)&pUVar2[1].field_0xc;
    if (FVar3 == *param_1) break;
    pFVar4 = pFVar4 + 8;
  }
  if (pUVar2 == (UObject *)0x0) {
    return (FTargetChainSettings *)0x0;
  }
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  return (FTargetChainSettings *)&pUVar2[1].field_0x10;
}

// GetChainSettingsFromRetargetAsset @ 14df361c0

FTargetChainSettings * __cdecl
UIKRetargeter::GetChainSettingsFromRetargetAsset
          (FTargetChainSettings *__return_storage_ptr__,UIKRetargeter *param_1,FName param_2,
          FName param_3)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ERetargetRotationMode EVar7;
  undefined2 uVar8;
  float fVar9;
  ERetargetTranslationMode EVar10;
  undefined3 uVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  undefined3 uVar15;
  bool bVar16;
  float fVar17;
  undefined7 uVar18;
  FNameEntryId FVar19;
  FRetargetProfile *pFVar20;
  FTargetChainSettings *pFVar21;
  FScriptContainerElement *pFVar22;
  FTargetChainSettings *pFVar23;
  FTargetChainSettings local_c8;
  
  local_c8.IK.StaticOffset.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_c8.IK.StaticLocalOffset.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_c8.FK.EnableFK = true;
  local_c8.FK.RotationMode = Interpolated;
  local_c8.FK.RotationAlpha = 1.0;
  local_c8.FK.TranslationMode = None;
  local_c8.FK.TranslationAlpha = 1.0;
  local_c8.FK.PoleVectorMatching = 0.0;
  local_c8.FK.PoleVectorMaintainOffset = false;
  local_c8.FK.PoleVectorOffset = 0.0;
  local_c8.IK.EnableIK = true;
  local_c8.IK.BlendToSource = 0.0;
  local_c8.IK.BlendToSourceTranslation = 1.0;
  local_c8.IK.BlendToSourceRotation = 0.0;
  local_c8.IK.StaticRotationOffset.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  local_c8.IK.ScaleVertical = 1.0;
  local_c8.IK.Extension = 1.0;
  local_c8.IK.bAffectedByIKWarping = true;
  local_c8.SpeedPlanting.EnableSpeedPlanting = false;
  local_c8.SpeedPlanting.SpeedCurveName.ComparisonIndex.Value = 0;
  local_c8.SpeedPlanting.SpeedCurveName.Number = 0;
  local_c8.SpeedPlanting.SpeedThreshold = 15.0;
  local_c8.SpeedPlanting.UnplantStiffness = 250.0;
  local_c8.SpeedPlanting.UnplantCriticalDamping = 1.0;
  local_c8.IK.BlendToSourceWeights.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_c8.IK.BlendToSourceWeights.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_c8.IK.BlendToSourceWeights.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_c8.IK.StaticOffset.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_c8.IK.StaticOffset.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_c8.IK.StaticLocalOffset.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_c8.IK.StaticLocalOffset.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_c8.IK.StaticRotationOffset.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_c8.IK.StaticRotationOffset.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  if (param_1 != (UIKRetargeter *)0x0) {
    if (param_3 == (FName)0x0) {
      pFVar22 = (param_1->ChainSettings_DEPRECATED).AllocatorInstance.Data;
      pFVar1 = pFVar22 + (longlong)(param_1->ChainSettings_DEPRECATED).ArrayNum * 8;
      while ((pFVar23 = (FTargetChainSettings *)0x0, pFVar22 != pFVar1 &&
             (pFVar23 = *(FTargetChainSettings **)pFVar22,
             (FName)((*(FTargetChainSettings **)pFVar22)->IK).BlendToSourceWeights.field0_0x0._s_0.X
             != param_2))) {
        pFVar22 = pFVar22 + 8;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending) && (pFVar23 != (FTargetChainSettings *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pFVar23);
      }
      pFVar21 = (FTargetChainSettings *)((pFVar23->IK).BlendToSourceWeights.field0_0x0.XYZ + 1);
      if (pFVar23 == (FTargetChainSettings *)0x0) {
        pFVar21 = (FTargetChainSettings *)0x0;
      }
    }
    else {
      pFVar20 = TMapBase<FName,FRetargetProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRetargetProfile,0>_>
                ::Find((TMapBase<FName,FRetargetProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRetargetProfile,0>_>
                        *)&param_1->Profiles,param_3);
      if (pFVar20 == (FRetargetProfile *)0x0) goto LAB_14df36333;
      pFVar21 = TMapBase<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
                ::Find((TMapBase<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
                        *)&pFVar20->ChainSettings,param_2);
    }
    if (pFVar21 != (FTargetChainSettings *)0x0) goto LAB_14df36337;
  }
LAB_14df36333:
  pFVar21 = &local_c8;
LAB_14df36337:
  EVar7 = (pFVar21->FK).RotationMode;
  uVar8 = *(undefined2 *)&(pFVar21->FK).field_0x2;
  fVar9 = (pFVar21->FK).RotationAlpha;
  EVar10 = (pFVar21->FK).TranslationMode;
  uVar11 = *(undefined3 *)&(pFVar21->FK).field_0x9;
  fVar12 = (pFVar21->FK).TranslationAlpha;
  fVar13 = (pFVar21->FK).PoleVectorMatching;
  bVar14 = (pFVar21->FK).PoleVectorMaintainOffset;
  uVar15 = *(undefined3 *)&(pFVar21->FK).field_0x15;
  uVar2 = *(undefined8 *)&(pFVar21->FK).PoleVectorOffset;
  (__return_storage_ptr__->FK).EnableFK = (pFVar21->FK).EnableFK;
  (__return_storage_ptr__->FK).RotationMode = EVar7;
  *(undefined2 *)&(__return_storage_ptr__->FK).field_0x2 = uVar8;
  (__return_storage_ptr__->FK).RotationAlpha = fVar9;
  (__return_storage_ptr__->FK).TranslationMode = EVar10;
  *(undefined3 *)&(__return_storage_ptr__->FK).field_0x9 = uVar11;
  (__return_storage_ptr__->FK).TranslationAlpha = fVar12;
  bVar16 = (pFVar21->IK).EnableIK;
  uVar11 = *(undefined3 *)&(pFVar21->IK).field_0x1;
  fVar9 = (pFVar21->IK).BlendToSource;
  fVar12 = (pFVar21->IK).BlendToSourceTranslation;
  fVar17 = (pFVar21->IK).BlendToSourceRotation;
  (__return_storage_ptr__->FK).PoleVectorMatching = fVar13;
  (__return_storage_ptr__->FK).PoleVectorMaintainOffset = bVar14;
  *(undefined3 *)&(__return_storage_ptr__->FK).field_0x15 = uVar15;
  *(undefined8 *)&(__return_storage_ptr__->FK).PoleVectorOffset = uVar2;
  dVar3 = (pFVar21->IK).BlendToSourceWeights.field0_0x0._s_0.X;
  dVar4 = (pFVar21->IK).BlendToSourceWeights.field0_0x0._s_0.Y;
  (__return_storage_ptr__->IK).EnableIK = bVar16;
  *(undefined3 *)&(__return_storage_ptr__->IK).field_0x1 = uVar11;
  (__return_storage_ptr__->IK).BlendToSource = fVar9;
  (__return_storage_ptr__->IK).BlendToSourceTranslation = fVar12;
  (__return_storage_ptr__->IK).BlendToSourceRotation = fVar17;
  dVar5 = (pFVar21->IK).BlendToSourceWeights.field0_0x0._s_0.Z;
  dVar6 = (pFVar21->IK).StaticOffset.field0_0x0._s_0.X;
  (__return_storage_ptr__->IK).BlendToSourceWeights.field0_0x0._s_0.X = dVar3;
  (__return_storage_ptr__->IK).BlendToSourceWeights.field0_0x0._s_0.Y = dVar4;
  dVar3 = (pFVar21->IK).StaticOffset.field0_0x0._s_0.Y;
  dVar4 = (pFVar21->IK).StaticOffset.field0_0x0._s_0.Z;
  (__return_storage_ptr__->IK).BlendToSourceWeights.field0_0x0._s_0.Z = dVar5;
  (__return_storage_ptr__->IK).StaticOffset.field0_0x0._s_0.X = dVar6;
  dVar5 = (pFVar21->IK).StaticLocalOffset.field0_0x0._s_0.X;
  dVar6 = (pFVar21->IK).StaticLocalOffset.field0_0x0._s_0.Y;
  (__return_storage_ptr__->IK).StaticOffset.field0_0x0._s_0.Y = dVar3;
  (__return_storage_ptr__->IK).StaticOffset.field0_0x0._s_0.Z = dVar4;
  dVar3 = (pFVar21->IK).StaticRotationOffset.Yaw;
  dVar4 = (pFVar21->IK).StaticRotationOffset.Roll;
  (__return_storage_ptr__->IK).StaticLocalOffset.field0_0x0._s_0.X = dVar5;
  (__return_storage_ptr__->IK).StaticLocalOffset.field0_0x0._s_0.Y = dVar6;
  dVar5 = (pFVar21->IK).StaticRotationOffset.Pitch;
  (__return_storage_ptr__->IK).StaticLocalOffset.field0_0x0._s_0.Z =
       (pFVar21->IK).StaticLocalOffset.field0_0x0._s_0.Z;
  (__return_storage_ptr__->IK).StaticRotationOffset.Pitch = dVar5;
  fVar9 = (pFVar21->IK).ScaleVertical;
  fVar12 = (pFVar21->IK).Extension;
  bVar14 = (pFVar21->IK).bAffectedByIKWarping;
  uVar18 = *(undefined7 *)&(pFVar21->IK).field_0x79;
  (__return_storage_ptr__->IK).StaticRotationOffset.Yaw = dVar3;
  (__return_storage_ptr__->IK).StaticRotationOffset.Roll = dVar4;
  bVar16 = (pFVar21->SpeedPlanting).EnableSpeedPlanting;
  uVar11 = *(undefined3 *)&(pFVar21->SpeedPlanting).field_0x1;
  FVar19.Value = (pFVar21->SpeedPlanting).SpeedCurveName.ComparisonIndex.Value;
  uVar2 = *(undefined8 *)&(pFVar21->SpeedPlanting).SpeedCurveName.Number;
  fVar13 = (pFVar21->SpeedPlanting).UnplantStiffness;
  fVar17 = (pFVar21->SpeedPlanting).UnplantCriticalDamping;
  (__return_storage_ptr__->IK).ScaleVertical = fVar9;
  (__return_storage_ptr__->IK).Extension = fVar12;
  (__return_storage_ptr__->IK).bAffectedByIKWarping = bVar14;
  *(undefined7 *)&(__return_storage_ptr__->IK).field_0x79 = uVar18;
  (__return_storage_ptr__->SpeedPlanting).EnableSpeedPlanting = bVar16;
  *(undefined3 *)&(__return_storage_ptr__->SpeedPlanting).field_0x1 = uVar11;
  (__return_storage_ptr__->SpeedPlanting).SpeedCurveName.ComparisonIndex =
       (FNameEntryId)FVar19.Value;
  *(undefined8 *)&(__return_storage_ptr__->SpeedPlanting).SpeedCurveName.Number = uVar2;
  (__return_storage_ptr__->SpeedPlanting).UnplantStiffness = fVar13;
  (__return_storage_ptr__->SpeedPlanting).UnplantCriticalDamping = fVar17;
  return __return_storage_ptr__;
}

// GetChainSettingsFromRetargetProfile @ 14df363d0

FTargetChainSettings * __cdecl
UIKRetargeter::GetChainSettingsFromRetargetProfile
          (FTargetChainSettings *__return_storage_ptr__,FRetargetProfile *param_1,FName param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ERetargetRotationMode EVar6;
  undefined2 uVar7;
  float fVar8;
  ERetargetTranslationMode EVar9;
  undefined3 uVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  undefined3 uVar14;
  bool bVar15;
  float fVar16;
  undefined7 uVar17;
  FNameEntryId FVar18;
  uint uVar19;
  FTargetChainSettings *pFVar20;
  FName *pFVar21;
  undefined1 *puVar22;
  uint uVar23;
  FName local_res18 [2];
  
  local_res18[0] = param_2;
  uVar19 = ::GetTypeHash(param_2.ComparisonIndex.Value);
  uVar19 = uVar19 + param_2.Number;
  if (*(int *)&(param_1->ChainSettings).field_0x8 != *(int *)&(param_1->ChainSettings).field_0x34) {
    puVar22 = *(undefined1 **)&(param_1->ChainSettings).field_0x40;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = &(param_1->ChainSettings).field_0x38;
    }
    uVar23 = *(uint *)(puVar22 +
                      (ulonglong)(*(int *)&(param_1->ChainSettings).field_0x48 - 1U & uVar19) * 4);
    if (uVar23 != 0xffffffff) {
      do {
        pFVar21 = (FName *)((longlong)(int)uVar23 * 200 + *(longlong *)&param_1->ChainSettings);
        if (*pFVar21 == local_res18[0]) {
          if (pFVar21 != (FName *)0x0) {
            pFVar20 = (FTargetChainSettings *)(pFVar21 + 1);
            goto LAB_14df36473;
          }
          break;
        }
        uVar23 = pFVar21[0x18].ComparisonIndex.Value;
      } while (uVar23 != 0xffffffff);
    }
  }
  pFVar20 = TMapBase<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
            ::EmplaceByHash<FName_const_&>
                      ((TMapBase<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
                        *)&param_1->ChainSettings,uVar19,local_res18);
LAB_14df36473:
  EVar6 = (pFVar20->FK).RotationMode;
  uVar7 = *(undefined2 *)&(pFVar20->FK).field_0x2;
  fVar8 = (pFVar20->FK).RotationAlpha;
  EVar9 = (pFVar20->FK).TranslationMode;
  uVar10 = *(undefined3 *)&(pFVar20->FK).field_0x9;
  fVar11 = (pFVar20->FK).TranslationAlpha;
  fVar12 = (pFVar20->FK).PoleVectorMatching;
  bVar13 = (pFVar20->FK).PoleVectorMaintainOffset;
  uVar14 = *(undefined3 *)&(pFVar20->FK).field_0x15;
  uVar1 = *(undefined8 *)&(pFVar20->FK).PoleVectorOffset;
  (__return_storage_ptr__->FK).EnableFK = (pFVar20->FK).EnableFK;
  (__return_storage_ptr__->FK).RotationMode = EVar6;
  *(undefined2 *)&(__return_storage_ptr__->FK).field_0x2 = uVar7;
  (__return_storage_ptr__->FK).RotationAlpha = fVar8;
  (__return_storage_ptr__->FK).TranslationMode = EVar9;
  *(undefined3 *)&(__return_storage_ptr__->FK).field_0x9 = uVar10;
  (__return_storage_ptr__->FK).TranslationAlpha = fVar11;
  bVar15 = (pFVar20->IK).EnableIK;
  uVar10 = *(undefined3 *)&(pFVar20->IK).field_0x1;
  fVar8 = (pFVar20->IK).BlendToSource;
  fVar11 = (pFVar20->IK).BlendToSourceTranslation;
  fVar16 = (pFVar20->IK).BlendToSourceRotation;
  (__return_storage_ptr__->FK).PoleVectorMatching = fVar12;
  (__return_storage_ptr__->FK).PoleVectorMaintainOffset = bVar13;
  *(undefined3 *)&(__return_storage_ptr__->FK).field_0x15 = uVar14;
  *(undefined8 *)&(__return_storage_ptr__->FK).PoleVectorOffset = uVar1;
  dVar2 = (pFVar20->IK).BlendToSourceWeights.field0_0x0._s_0.X;
  dVar3 = (pFVar20->IK).BlendToSourceWeights.field0_0x0._s_0.Y;
  (__return_storage_ptr__->IK).EnableIK = bVar15;
  *(undefined3 *)&(__return_storage_ptr__->IK).field_0x1 = uVar10;
  (__return_storage_ptr__->IK).BlendToSource = fVar8;
  (__return_storage_ptr__->IK).BlendToSourceTranslation = fVar11;
  (__return_storage_ptr__->IK).BlendToSourceRotation = fVar16;
  dVar4 = (pFVar20->IK).BlendToSourceWeights.field0_0x0._s_0.Z;
  dVar5 = (pFVar20->IK).StaticOffset.field0_0x0._s_0.X;
  (__return_storage_ptr__->IK).BlendToSourceWeights.field0_0x0._s_0.X = dVar2;
  (__return_storage_ptr__->IK).BlendToSourceWeights.field0_0x0._s_0.Y = dVar3;
  dVar2 = (pFVar20->IK).StaticOffset.field0_0x0._s_0.Y;
  dVar3 = (pFVar20->IK).StaticOffset.field0_0x0._s_0.Z;
  (__return_storage_ptr__->IK).BlendToSourceWeights.field0_0x0._s_0.Z = dVar4;
  (__return_storage_ptr__->IK).StaticOffset.field0_0x0._s_0.X = dVar5;
  dVar4 = (pFVar20->IK).StaticLocalOffset.field0_0x0._s_0.X;
  dVar5 = (pFVar20->IK).StaticLocalOffset.field0_0x0._s_0.Y;
  (__return_storage_ptr__->IK).StaticOffset.field0_0x0._s_0.Y = dVar2;
  (__return_storage_ptr__->IK).StaticOffset.field0_0x0._s_0.Z = dVar3;
  dVar2 = (pFVar20->IK).StaticRotationOffset.Yaw;
  dVar3 = (pFVar20->IK).StaticRotationOffset.Roll;
  (__return_storage_ptr__->IK).StaticLocalOffset.field0_0x0._s_0.X = dVar4;
  (__return_storage_ptr__->IK).StaticLocalOffset.field0_0x0._s_0.Y = dVar5;
  dVar4 = (pFVar20->IK).StaticRotationOffset.Pitch;
  (__return_storage_ptr__->IK).StaticLocalOffset.field0_0x0._s_0.Z =
       (pFVar20->IK).StaticLocalOffset.field0_0x0._s_0.Z;
  (__return_storage_ptr__->IK).StaticRotationOffset.Pitch = dVar4;
  fVar8 = (pFVar20->IK).ScaleVertical;
  fVar11 = (pFVar20->IK).Extension;
  bVar13 = (pFVar20->IK).bAffectedByIKWarping;
  uVar17 = *(undefined7 *)&(pFVar20->IK).field_0x79;
  (__return_storage_ptr__->IK).StaticRotationOffset.Yaw = dVar2;
  (__return_storage_ptr__->IK).StaticRotationOffset.Roll = dVar3;
  bVar15 = (pFVar20->SpeedPlanting).EnableSpeedPlanting;
  uVar10 = *(undefined3 *)&(pFVar20->SpeedPlanting).field_0x1;
  FVar18.Value = (pFVar20->SpeedPlanting).SpeedCurveName.ComparisonIndex.Value;
  uVar1 = *(undefined8 *)&(pFVar20->SpeedPlanting).SpeedCurveName.Number;
  fVar12 = (pFVar20->SpeedPlanting).UnplantStiffness;
  fVar16 = (pFVar20->SpeedPlanting).UnplantCriticalDamping;
  (__return_storage_ptr__->IK).ScaleVertical = fVar8;
  (__return_storage_ptr__->IK).Extension = fVar11;
  (__return_storage_ptr__->IK).bAffectedByIKWarping = bVar13;
  *(undefined7 *)&(__return_storage_ptr__->IK).field_0x79 = uVar17;
  (__return_storage_ptr__->SpeedPlanting).EnableSpeedPlanting = bVar15;
  *(undefined3 *)&(__return_storage_ptr__->SpeedPlanting).field_0x1 = uVar10;
  (__return_storage_ptr__->SpeedPlanting).SpeedCurveName.ComparisonIndex =
       (FNameEntryId)FVar18.Value;
  *(undefined8 *)&(__return_storage_ptr__->SpeedPlanting).SpeedCurveName.Number = uVar1;
  (__return_storage_ptr__->SpeedPlanting).UnplantStiffness = fVar12;
  (__return_storage_ptr__->SpeedPlanting).UnplantCriticalDamping = fVar16;
  return __return_storage_ptr__;
}

// GetChainUsingGoalFromRetargetAsset @ 14df36750

FTargetChainSettings * __cdecl
UIKRetargeter::GetChainUsingGoalFromRetargetAsset
          (FTargetChainSettings *__return_storage_ptr__,UIKRetargeter *param_1,FName param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  UIKRigDefinition *pUVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  FScriptContainerElement *pFVar13;
  undefined8 *puVar14;
  UObject *pUVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res8 [8];
  undefined2 local_e8;
  undefined2 uStack_e6;
  undefined4 uStack_e4;
  uint uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  uint uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  float local_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined8 uStack_44;
  float fStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  dStack_a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_b8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_b0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_a8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  dStack_70 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  local_e8 = 1;
  local_98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dStack_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uStack_e4 = 0x3f800000;
  uStack_e0 = uStack_e0 & 0xffffff00;
  uStack_dc = 0x3f800000;
  uStack_d8 = 0;
  uStack_d4 = uStack_d4 & 0xffffff00;
  uStack_d0 = 0;
  local_c8 = CONCAT31(local_c8._1_3_,1);
  uStack_c4 = 0;
  uStack_c0 = 0x3f800000;
  local_58 = 1.0;
  fStack_54 = 1.0;
  uStack_50 = CONCAT31(uStack_50._1_3_,1);
  local_48 = local_48 & 0xffffff00;
  uStack_44 = 0;
  fStack_3c = 15.0;
  local_38 = 0x437a0000;
  uStack_34 = 0x3f800000;
  dStack_80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dStack_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_68 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  dStack_60 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  if ((param_1 != (UIKRetargeter *)0x0) &&
     (pUVar10 = GetIKRig(param_1,Target), pUVar10 != (UIKRigDefinition *)0x0)) {
    iVar1 = (pUVar10->RetargetDefinition).BoneChains.ArrayNum;
    pFVar16 = (pUVar10->RetargetDefinition).BoneChains.AllocatorInstance.Data;
    pFVar17 = pFVar16 + (longlong)iVar1 * 0x30;
    while( true ) {
      if ((pUVar10->RetargetDefinition).BoneChains.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FBoneChain_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar16 == pFVar17) goto LAB_14df36983;
      if (*(FName *)(pFVar16 + 0x28) == param_2) break;
      pFVar16 = pFVar16 + 0x30;
    }
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      pFVar13 = (param_1->ChainSettings_DEPRECATED).AllocatorInstance.Data;
      pFVar17 = pFVar13 + (longlong)(param_1->ChainSettings_DEPRECATED).ArrayNum * 8;
      for (; pFVar13 != pFVar17; pFVar13 = pFVar13 + 8) {
        pUVar15 = *(UObject **)pFVar13;
        if (*(longlong *)&pUVar15[1].field_0x8 == *(longlong *)pFVar16) goto LAB_14df368da;
      }
      pUVar15 = (UObject *)0x0;
LAB_14df368da:
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar15);
      }
      puVar11 = (undefined8 *)&pUVar15[1].field_0x10;
      if (pUVar15 == (UObject *)0x0) {
        puVar11 = (undefined8 *)0x0;
      }
      puVar14 = (undefined8 *)&local_e8;
      if (puVar11 != (undefined8 *)0x0) {
        puVar14 = puVar11;
      }
      uVar2 = *puVar14;
      uVar3 = puVar14[1];
      uVar12 = puVar14[0x16];
      uVar4 = puVar14[2];
      uVar5 = puVar14[3];
      (__return_storage_ptr__->FK).EnableFK = (bool)(char)uVar2;
      (__return_storage_ptr__->FK).RotationMode = (char)((ulonglong)uVar2 >> 8);
      *(short *)&(__return_storage_ptr__->FK).field_0x2 = (short)((ulonglong)uVar2 >> 0x10);
      (__return_storage_ptr__->FK).RotationAlpha = (float)(int)((ulonglong)uVar2 >> 0x20);
      (__return_storage_ptr__->FK).TranslationMode = (char)uVar3;
      *(int3 *)&(__return_storage_ptr__->FK).field_0x9 = (int3)((ulonglong)uVar3 >> 8);
      (__return_storage_ptr__->FK).TranslationAlpha = (float)(int)((ulonglong)uVar3 >> 0x20);
      uVar2 = puVar14[4];
      uVar3 = puVar14[5];
      (__return_storage_ptr__->FK).PoleVectorMatching = (float)(int)uVar4;
      (__return_storage_ptr__->FK).PoleVectorMaintainOffset = (bool)(char)((ulonglong)uVar4 >> 0x20)
      ;
      *(int3 *)&(__return_storage_ptr__->FK).field_0x15 = (int3)((ulonglong)uVar4 >> 0x28);
      *(undefined8 *)&(__return_storage_ptr__->FK).PoleVectorOffset = uVar5;
      dVar6 = (double)puVar14[6];
      dVar7 = (double)puVar14[7];
      (__return_storage_ptr__->IK).EnableIK = (bool)(char)uVar2;
      *(int3 *)&(__return_storage_ptr__->IK).field_0x1 = (int3)((ulonglong)uVar2 >> 8);
      (__return_storage_ptr__->IK).BlendToSource = (float)(int)((ulonglong)uVar2 >> 0x20);
      (__return_storage_ptr__->IK).BlendToSourceTranslation = (float)(int)uVar3;
      (__return_storage_ptr__->IK).BlendToSourceRotation = (float)(int)((ulonglong)uVar3 >> 0x20);
      dVar8 = (double)puVar14[8];
      dVar9 = (double)puVar14[9];
      (__return_storage_ptr__->IK).BlendToSourceWeights.field0_0x0._s_0.X = dVar6;
      (__return_storage_ptr__->IK).BlendToSourceWeights.field0_0x0._s_0.Y = dVar7;
      dVar6 = (double)puVar14[10];
      dVar7 = (double)puVar14[0xb];
      (__return_storage_ptr__->IK).BlendToSourceWeights.field0_0x0._s_0.Z = dVar8;
      (__return_storage_ptr__->IK).StaticOffset.field0_0x0._s_0.X = dVar9;
      dVar8 = (double)puVar14[0xc];
      dVar9 = (double)puVar14[0xd];
      (__return_storage_ptr__->IK).StaticOffset.field0_0x0._s_0.Y = dVar6;
      (__return_storage_ptr__->IK).StaticOffset.field0_0x0._s_0.Z = dVar7;
      dVar6 = (double)puVar14[0x10];
      dVar7 = (double)puVar14[0x11];
      (__return_storage_ptr__->IK).StaticLocalOffset.field0_0x0._s_0.X = dVar8;
      (__return_storage_ptr__->IK).StaticLocalOffset.field0_0x0._s_0.Y = dVar9;
      dVar8 = (double)puVar14[0xf];
      (__return_storage_ptr__->IK).StaticLocalOffset.field0_0x0._s_0.Z = (double)puVar14[0xe];
      (__return_storage_ptr__->IK).StaticRotationOffset.Pitch = dVar8;
      local_58 = *(float *)(puVar14 + 0x12);
      fStack_54 = *(float *)((longlong)puVar14 + 0x94);
      uStack_50 = *(undefined4 *)(puVar14 + 0x13);
      uStack_4c = *(undefined4 *)((longlong)puVar14 + 0x9c);
      (__return_storage_ptr__->IK).StaticRotationOffset.Yaw = dVar6;
      (__return_storage_ptr__->IK).StaticRotationOffset.Roll = dVar7;
      local_48 = *(uint *)(puVar14 + 0x14);
      uStack_44._0_4_ = *(uint *)((longlong)puVar14 + 0xa4);
      uStack_44._4_4_ = *(uint *)(puVar14 + 0x15);
      fStack_3c = *(float *)((longlong)puVar14 + 0xac);
      goto LAB_14df369fb;
    }
  }
LAB_14df36983:
  (__return_storage_ptr__->FK).EnableFK = (bool)(char)local_e8;
  (__return_storage_ptr__->FK).RotationMode = (char)((ushort)local_e8 >> 8);
  *(undefined2 *)&(__return_storage_ptr__->FK).field_0x2 = uStack_e6;
  (__return_storage_ptr__->FK).RotationAlpha = (float)uStack_e4;
  (__return_storage_ptr__->FK).TranslationMode = (char)uStack_e0;
  *(int3 *)&(__return_storage_ptr__->FK).field_0x9 = (int3)(uStack_e0 >> 8);
  (__return_storage_ptr__->FK).TranslationAlpha = (float)uStack_dc;
  (__return_storage_ptr__->FK).PoleVectorMatching = (float)uStack_d8;
  (__return_storage_ptr__->FK).PoleVectorMaintainOffset = (bool)(char)uStack_d4;
  *(int3 *)&(__return_storage_ptr__->FK).field_0x15 = (int3)(uStack_d4 >> 8);
  *(ulonglong *)&(__return_storage_ptr__->FK).PoleVectorOffset = CONCAT44(uStack_cc,uStack_d0);
  (__return_storage_ptr__->IK).EnableIK = (bool)(char)local_c8;
  *(int3 *)&(__return_storage_ptr__->IK).field_0x1 = (int3)((uint)local_c8 >> 8);
  (__return_storage_ptr__->IK).BlendToSource = (float)uStack_c4;
  (__return_storage_ptr__->IK).BlendToSourceTranslation = (float)(undefined4)uStack_c0;
  (__return_storage_ptr__->IK).BlendToSourceRotation = (float)uStack_c0._4_4_;
  (__return_storage_ptr__->IK).BlendToSourceWeights.field0_0x0._s_0.X = local_b8;
  (__return_storage_ptr__->IK).BlendToSourceWeights.field0_0x0._s_0.Y = dStack_b0;
  (__return_storage_ptr__->IK).BlendToSourceWeights.field0_0x0._s_0.Z = local_a8;
  (__return_storage_ptr__->IK).StaticOffset.field0_0x0._s_0.X = dStack_a0;
  (__return_storage_ptr__->IK).StaticOffset.field0_0x0._s_0.Y = local_98;
  (__return_storage_ptr__->IK).StaticOffset.field0_0x0._s_0.Z = dStack_90;
  (__return_storage_ptr__->IK).StaticLocalOffset.field0_0x0._s_0.X = local_88;
  (__return_storage_ptr__->IK).StaticLocalOffset.field0_0x0._s_0.Y = dStack_80;
  (__return_storage_ptr__->IK).StaticLocalOffset.field0_0x0._s_0.Z = dStack_78;
  (__return_storage_ptr__->IK).StaticRotationOffset.Pitch = dStack_70;
  (__return_storage_ptr__->IK).StaticRotationOffset.Yaw = local_68;
  (__return_storage_ptr__->IK).StaticRotationOffset.Roll = dStack_60;
  uVar12 = CONCAT44(uStack_34,local_38);
LAB_14df369fb:
  (__return_storage_ptr__->IK).ScaleVertical = local_58;
  (__return_storage_ptr__->IK).Extension = fStack_54;
  *(undefined4 *)&(__return_storage_ptr__->IK).bAffectedByIKWarping = uStack_50;
  *(undefined4 *)&(__return_storage_ptr__->IK).field_0x7c = uStack_4c;
  *(uint *)&__return_storage_ptr__->SpeedPlanting = local_48;
  (__return_storage_ptr__->SpeedPlanting).SpeedCurveName.ComparisonIndex.Value = (uint)uStack_44;
  (__return_storage_ptr__->SpeedPlanting).SpeedCurveName.Number = uStack_44._4_4_;
  (__return_storage_ptr__->SpeedPlanting).SpeedThreshold = fStack_3c;
  (__return_storage_ptr__->SpeedPlanting).UnplantStiffness = (float)(int)uVar12;
  (__return_storage_ptr__->SpeedPlanting).UnplantCriticalDamping =
       (float)(int)((ulonglong)uVar12 >> 0x20);
  return __return_storage_ptr__;
}

// GetCleanAndUniqueOpName @ 14df379c0

FName __thiscall
UIKRetargeter::GetCleanAndUniqueOpName(UIKRetargeter *this,FName *param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  UScriptStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  FName FVar7;
  UPackage *pUVar8;
  UScriptStruct *pUVar9;
  uint uVar10;
  uint uVar11;
  undefined4 in_register_00000084;
  uint in_R9D;
  longlong lVar12;
  longlong lVar13;
  uint uStackX_1c;
  UIKRetargeter *local_58;
  FName local_50;
  ulonglong local_48;
  FName local_40;
  
  FVar7 = *(FName *)CONCAT44(in_register_00000084,param_2);
  if (FVar7 == (FName)0x0) {
    local_50 = FVar7;
    pFVar6 = ::FName::FName(&local_40,"DefaultRetargetOpName");
    FVar7 = *pFVar6;
  }
  local_58 = this;
  local_50 = FVar7;
  bVar5 = `UIKRetargeter::GetCleanAndUniqueOpName'::__l2::<lambda_1>::operator()
                    (&local_58,FVar7,in_R9D);
  if (!bVar5) {
    *param_1 = FVar7;
    return (FName)param_1;
  }
  uStackX_1c = FVar7.Number;
  pUVar9 = Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton;
  local_48 = (ulonglong)FVar7 & 0xffffffff;
LAB_14df37a67:
  uStackX_1c = uStackX_1c + 1;
  uVar11 = 0;
  if ((this->RetargetOps).ArrayNum < 1) {
LAB_14df37ba6:
    (param_1->ComparisonIndex).Value = local_50.ComparisonIndex.Value.Value;
    param_1->Number = uStackX_1c;
    return (FName)param_1;
  }
  lVar13 = 0;
  do {
    if ((in_R9D == 0xffffffff) || (uVar11 != in_R9D)) {
      uVar10 = 0;
      if ((int)uVar11 < (this->RetargetOps).ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         pUVar9 = Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton, bVar5)) {
        pcVar4 = (code *)swi(3);
        FVar7 = (FName)(*pcVar4)();
        return FVar7;
      }
      pFVar2 = (this->RetargetOps).AllocatorInstance.Data;
      lVar12 = *(longlong *)(pFVar2 + lVar13 + 8);
      if ((lVar12 == 0) ||
         (pUVar3 = *(UScriptStruct **)(pFVar2 + lVar13), pUVar3 == (UScriptStruct *)0x0)) {
LAB_14df37b87:
        lVar12 = 0;
      }
      else {
        if (pUVar9 == (UScriptStruct *)0x0) {
          pUVar8 = Z_Construct_UPackage__Script_IKRig();
          pUVar9 = GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpBase,(UObject *)pUVar8,
                                   L"IKRetargetOpBase");
          Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton = pUVar9;
        }
        if (pUVar3 != pUVar9) {
          if (pUVar9 == (UScriptStruct *)0x0) {
            pUVar8 = Z_Construct_UPackage__Script_IKRig();
            pUVar9 = GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpBase,(UObject *)pUVar8,
                                     L"IKRetargetOpBase");
            Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton = pUVar9;
            if (pUVar9 == (UScriptStruct *)0x0) goto LAB_14df37b87;
          }
          iVar1 = (int)pUVar9->_padding_;
          if (((int)pUVar3->_padding_ < iVar1) ||
             ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) !=
              &pUVar9->_padding_)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (!bVar5) goto LAB_14df37b87;
        }
      }
      if (*(ulonglong *)(lVar12 + 0xc) ==
          ((ulonglong)uStackX_1c << 0x20 | (ulonglong)FVar7 & 0xffffffff)) goto LAB_14df37a67;
    }
    uVar11 = uVar11 + 1;
    lVar13 = lVar13 + 0x10;
    if ((this->RetargetOps).ArrayNum <= (int)uVar11) goto LAB_14df37ba6;
  } while( true );
}

// GetCurrentProfile @ 14df37e80

FRetargetProfile * __thiscall UIKRetargeter::GetCurrentProfile(UIKRetargeter *this)

{
  FRetargetProfile *pFVar1;
  
  pFVar1 = TMapBase<FName,FRetargetProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRetargetProfile,0>_>
           ::Find((TMapBase<FName,FRetargetProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRetargetProfile,0>_>
                   *)&this->Profiles,this->CurrentProfile);
  return pFVar1;
}

// GetCurrentRetargetPose @ 14df37ea0

FIKRetargetPose * __thiscall
UIKRetargeter::GetCurrentRetargetPose(UIKRetargeter *this,ERetargetSourceOrTarget *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FName,FIKRetargetPose> *pTVar3;
  FIKRetargetPose *pFVar4;
  TSet<TTuple<FName,FIKRetargetPose>,TDefaultMapHashableKeyFuncs<FName,FIKRetargetPose,0>,FDefaultSetAllocator>
  *this_00;
  FName FVar5;
  
  if (*param_1 == Source) {
    FVar5 = this->CurrentSourceRetargetPose;
    this_00 = (TSet<TTuple<FName,FIKRetargetPose>,TDefaultMapHashableKeyFuncs<FName,FIKRetargetPose,0>,FDefaultSetAllocator>
               *)&this->SourceRetargetPoses;
  }
  else {
    FVar5 = this->CurrentTargetRetargetPose;
    this_00 = (TSet<TTuple<FName,FIKRetargetPose>,TDefaultMapHashableKeyFuncs<FName,FIKRetargetPose,0>,FDefaultSetAllocator>
               *)&this->TargetRetargetPoses;
  }
  pTVar3 = TSet<TTuple<FName,FIKRetargetPose>,TDefaultMapHashableKeyFuncs<FName,FIKRetargetPose,0>,FDefaultSetAllocator>
           ::Find(this_00,FVar5);
  if (pTVar3 == (TTuple<FName,FIKRetargetPose> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FIKRetargetPose *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FIKRetargetPose *)&pTVar3->field_0x8;
}

// GetCurrentRetargetPoseName @ 14df37f10

FName __thiscall
UIKRetargeter::GetCurrentRetargetPoseName(UIKRetargeter *this,ERetargetSourceOrTarget *param_1)

{
  longlong lVar1;
  char *in_R8;
  
  lVar1 = 0x148;
  if (*in_R8 != '\0') {
    lVar1 = 0x150;
  }
  *(undefined8 *)param_1 = *(undefined8 *)((longlong)&this->_padding_ + lVar1);
  return (FName)param_1;
}

// GetDefaultPoseName @ 14df37f40

FName __cdecl UIKRetargeter::GetDefaultPoseName(void)

{
  FName in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&DefaultPoseName,"Default Pose");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RCX = DefaultPoseName;
  return in_RCX;
}

// GetGlobalSettingsFromRetargetAsset @ 14df38400

void __cdecl
UIKRetargeter::GetGlobalSettingsFromRetargetAsset
          (UIKRetargeter *param_1,FName param_2,FRetargetGlobalSettings *param_3)

{
  UIKRetargetGlobalSettings *pUVar1;
  FName FVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined3 uVar7;
  EWarpingDirectionSource EVar8;
  EBasicAxis EVar9;
  float fVar10;
  float fVar11;
  FRetargetProfile *pFVar12;
  
  fVar10 = __real_3f800000;
  if (param_1 == (UIKRetargeter *)0x0) {
    param_3->bEnableRoot = true;
    param_3->bEnableFK = true;
    param_3->bEnableIK = true;
    param_3->bEnablePost = true;
    param_3->bCopyBasePose = false;
    *(undefined3 *)&param_3->field_0x5 = 0;
    (param_3->CopyBasePoseRoot).ComparisonIndex = 0;
    (param_3->CopyBasePoseRoot).Number = 0;
    param_3->SourceScaleFactor = 1.0;
    param_3->bWarping = false;
    *(undefined3 *)&param_3->field_0x15 = 0;
    param_3->DirectionSource = Goals;
    param_3->ForwardDirection = Y;
    (param_3->DirectionChain).ComparisonIndex = 0;
    (param_3->DirectionChain).Number = 0;
    param_3->WarpForwards = 1.0;
    param_3->SidewaysOffset = 0.0;
    param_3->WarpSplay = fVar10;
    return;
  }
  if (param_2 != (FName)0x0) {
    pFVar12 = TMapBase<FName,FRetargetProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRetargetProfile,0>_>
              ::Find((TMapBase<FName,FRetargetProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRetargetProfile,0>_>
                      *)&param_1->Profiles,param_2);
    fVar10 = __real_3f800000;
    if ((pFVar12 != (FRetargetProfile *)0x0) && (pFVar12->bApplyGlobalSettings != false)) {
      bVar3 = (pFVar12->GlobalSettings).bEnableFK;
      bVar4 = (pFVar12->GlobalSettings).bEnableIK;
      bVar5 = (pFVar12->GlobalSettings).bEnablePost;
      bVar6 = (pFVar12->GlobalSettings).bCopyBasePose;
      uVar7 = *(undefined3 *)&(pFVar12->GlobalSettings).field_0x5;
      FVar2 = (pFVar12->GlobalSettings).CopyBasePoseRoot;
      param_3->bEnableRoot = (pFVar12->GlobalSettings).bEnableRoot;
      param_3->bEnableFK = bVar3;
      param_3->bEnableIK = bVar4;
      param_3->bEnablePost = bVar5;
      param_3->bCopyBasePose = bVar6;
      *(undefined3 *)&param_3->field_0x5 = uVar7;
      param_3->CopyBasePoseRoot = FVar2;
      bVar3 = (pFVar12->GlobalSettings).bWarping;
      uVar7 = *(undefined3 *)&(pFVar12->GlobalSettings).field_0x15;
      EVar8 = (pFVar12->GlobalSettings).DirectionSource;
      EVar9 = (pFVar12->GlobalSettings).ForwardDirection;
      param_3->SourceScaleFactor = (pFVar12->GlobalSettings).SourceScaleFactor;
      param_3->bWarping = bVar3;
      *(undefined3 *)&param_3->field_0x15 = uVar7;
      param_3->DirectionSource = EVar8;
      param_3->ForwardDirection = EVar9;
      fVar10 = (pFVar12->GlobalSettings).WarpForwards;
      fVar11 = (pFVar12->GlobalSettings).SidewaysOffset;
      param_3->DirectionChain = (pFVar12->GlobalSettings).DirectionChain;
      param_3->WarpForwards = fVar10;
      param_3->SidewaysOffset = fVar11;
      param_3->WarpSplay = (pFVar12->GlobalSettings).WarpSplay;
      return;
    }
    param_3->bEnableRoot = true;
    param_3->bEnableFK = true;
    param_3->bEnableIK = true;
    param_3->bEnablePost = true;
    param_3->bCopyBasePose = false;
    *(undefined3 *)&param_3->field_0x5 = 0;
    (param_3->CopyBasePoseRoot).ComparisonIndex = 0;
    (param_3->CopyBasePoseRoot).Number = 0;
    param_3->SourceScaleFactor = 1.0;
    param_3->bWarping = false;
    *(undefined3 *)&param_3->field_0x15 = 0;
    param_3->DirectionSource = Goals;
    param_3->ForwardDirection = Y;
    (param_3->DirectionChain).ComparisonIndex = 0;
    (param_3->DirectionChain).Number = 0;
    param_3->WarpForwards = 1.0;
    param_3->SidewaysOffset = 0.0;
    param_3->WarpSplay = fVar10;
    return;
  }
  pUVar1 = (param_1->GlobalSettings_DEPRECATED).field0_0x0.DebugPtr;
  bVar3 = (pUVar1->Settings).bEnableFK;
  bVar4 = (pUVar1->Settings).bEnableIK;
  bVar5 = (pUVar1->Settings).bEnablePost;
  bVar6 = (pUVar1->Settings).bCopyBasePose;
  uVar7 = *(undefined3 *)&(pUVar1->Settings).field_0x5;
  FVar2 = (pUVar1->Settings).CopyBasePoseRoot;
  param_3->bEnableRoot = (pUVar1->Settings).bEnableRoot;
  param_3->bEnableFK = bVar3;
  param_3->bEnableIK = bVar4;
  param_3->bEnablePost = bVar5;
  param_3->bCopyBasePose = bVar6;
  *(undefined3 *)&param_3->field_0x5 = uVar7;
  param_3->CopyBasePoseRoot = FVar2;
  bVar3 = (pUVar1->Settings).bWarping;
  uVar7 = *(undefined3 *)&(pUVar1->Settings).field_0x15;
  EVar8 = (pUVar1->Settings).DirectionSource;
  EVar9 = (pUVar1->Settings).ForwardDirection;
  param_3->SourceScaleFactor = (pUVar1->Settings).SourceScaleFactor;
  param_3->bWarping = bVar3;
  *(undefined3 *)&param_3->field_0x15 = uVar7;
  param_3->DirectionSource = EVar8;
  param_3->ForwardDirection = EVar9;
  fVar10 = (pUVar1->Settings).WarpForwards;
  fVar11 = (pUVar1->Settings).SidewaysOffset;
  param_3->DirectionChain = (pUVar1->Settings).DirectionChain;
  param_3->WarpForwards = fVar10;
  param_3->SidewaysOffset = fVar11;
  param_3->WarpSplay = (pUVar1->Settings).WarpSplay;
  return;
}

// GetGlobalSettingsFromRetargetProfile @ 14df38580

FRetargetGlobalSettings * __cdecl
UIKRetargeter::GetGlobalSettingsFromRetargetProfile
          (FRetargetGlobalSettings *__return_storage_ptr__,FRetargetProfile *param_1)

{
  float fVar1;
  FName FVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined3 uVar7;
  float fVar8;
  bool bVar9;
  undefined3 uVar10;
  EWarpingDirectionSource EVar11;
  EBasicAxis EVar12;
  float fVar13;
  float fVar14;
  
  bVar3 = (param_1->GlobalSettings).bEnableFK;
  bVar4 = (param_1->GlobalSettings).bEnableIK;
  bVar5 = (param_1->GlobalSettings).bEnablePost;
  bVar6 = (param_1->GlobalSettings).bCopyBasePose;
  uVar7 = *(undefined3 *)&(param_1->GlobalSettings).field_0x5;
  FVar2 = (param_1->GlobalSettings).CopyBasePoseRoot;
  fVar1 = (param_1->GlobalSettings).WarpSplay;
  fVar8 = (param_1->GlobalSettings).SourceScaleFactor;
  bVar9 = (param_1->GlobalSettings).bWarping;
  uVar10 = *(undefined3 *)&(param_1->GlobalSettings).field_0x15;
  EVar11 = (param_1->GlobalSettings).DirectionSource;
  EVar12 = (param_1->GlobalSettings).ForwardDirection;
  __return_storage_ptr__->bEnableRoot = (param_1->GlobalSettings).bEnableRoot;
  __return_storage_ptr__->bEnableFK = bVar3;
  __return_storage_ptr__->bEnableIK = bVar4;
  __return_storage_ptr__->bEnablePost = bVar5;
  __return_storage_ptr__->bCopyBasePose = bVar6;
  *(undefined3 *)&__return_storage_ptr__->field_0x5 = uVar7;
  __return_storage_ptr__->CopyBasePoseRoot = FVar2;
  FVar2 = (param_1->GlobalSettings).DirectionChain;
  fVar13 = (param_1->GlobalSettings).WarpForwards;
  fVar14 = (param_1->GlobalSettings).SidewaysOffset;
  __return_storage_ptr__->SourceScaleFactor = fVar8;
  __return_storage_ptr__->bWarping = bVar9;
  *(undefined3 *)&__return_storage_ptr__->field_0x15 = uVar10;
  __return_storage_ptr__->DirectionSource = EVar11;
  __return_storage_ptr__->ForwardDirection = EVar12;
  __return_storage_ptr__->DirectionChain = FVar2;
  __return_storage_ptr__->WarpForwards = fVar13;
  __return_storage_ptr__->SidewaysOffset = fVar14;
  __return_storage_ptr__->WarpSplay = fVar1;
  return __return_storage_ptr__;
}

// GetIKRig @ 14df38810

UIKRigDefinition * __thiscall
UIKRetargeter::GetIKRig(UIKRetargeter *this,ERetargetSourceOrTarget param_1)

{
  int iVar1;
  bool bVar2;
  UIKRigDefinition *pUVar3;
  UIKRigDefinition *pUVar4;
  FUObjectItem *pFVar5;
  UClass *pUVar6;
  longlong lVar7;
  UIKRigDefinition *local_res18;
  undefined1 local_38 [8];
  FSoftObjectPath local_30;
  
  lVar7 = 0x30;
  if (param_1 != Source) {
    lVar7 = 0x38;
  }
  pUVar3 = *(UIKRigDefinition **)((longlong)&this->_padding_ + lVar7);
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar3 != (UIKRigDefinition *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UIKRigDefinition *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
  }
  local_30.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_30.AssetPath.AssetName.Number = 0;
  local_30.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_30.AssetPath.PackageName.Number = 0;
  local_30.SubPathString.Data.ArrayNum = 0;
  local_30.SubPathString.Data.ArrayMax = 0;
  local_38._0_4_ = 0;
  local_38._4_4_ = 0;
  local_res18 = (UIKRigDefinition *)0x0;
  FUtf8String::Reset(&local_30.SubPathString,0);
  local_res18 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UIKRigDefinition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)local_38,(FObjectPtr)&local_res18);
  pUVar3 = (UIKRigDefinition *)FWeakObjectPtr::Get((FWeakObjectPtr *)local_38);
  if ((pUVar3 == (UIKRigDefinition *)0x0) && (local_30.AssetPath.PackageName != (FName)0x0)) {
    pUVar4 = (UIKRigDefinition *)FSoftObjectPath::ResolveObject(&local_30);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UIKRigDefinition *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    bVar2 = (*IsInAsyncLoadingThread)();
    if ((bVar2) && (pUVar4 != (UIKRigDefinition *)0x0)) {
      pFVar5 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar4->_padding_ + 4));
      if (((pFVar5->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) == 0) goto LAB_14df38926;
LAB_14df38952:
      if (((uint)pUVar4->_padding_ >> 0x1e & 1) != 0) goto LAB_14df38960;
      bVar2 = true;
    }
    else {
LAB_14df38926:
      local_res18 = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 != (UIKRigDefinition *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)local_38,(FObjectPtr)&local_res18);
      if (pUVar4 != (UIKRigDefinition *)0x0) goto LAB_14df38952;
LAB_14df38960:
      bVar2 = false;
    }
    pUVar3 = (UIKRigDefinition *)0x0;
    if (bVar2) {
      pUVar3 = pUVar4;
    }
  }
  if (pUVar3 == (UIKRigDefinition *)0x0) {
LAB_14df38997:
    bVar2 = IsInGameThread();
    if (bVar2) {
      pUVar3 = (UIKRigDefinition *)FWeakObjectPtr::Get((FWeakObjectPtr *)local_38);
      if (pUVar3 == (UIKRigDefinition *)0x0) {
        if (local_30.AssetPath.PackageName != (FName)0x0) {
          pUVar4 = (UIKRigDefinition *)FSoftObjectPath::ResolveObject(&local_30);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar4 != (UIKRigDefinition *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar4);
          }
          bVar2 = (*IsInAsyncLoadingThread)();
          if ((bVar2) && (pUVar4 != (UIKRigDefinition *)0x0)) {
            pFVar5 = FUObjectArray::IndexToObject
                               (&GUObjectArray,*(int *)((longlong)&pUVar4->_padding_ + 4));
            if (((pFVar5->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) == 0)
            goto LAB_14df38a15;
LAB_14df38a41:
            if (((uint)pUVar4->_padding_ >> 0x1e & 1) != 0) goto LAB_14df38a4f;
            bVar2 = true;
          }
          else {
LAB_14df38a15:
            local_res18 = pUVar4;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar4 != (UIKRigDefinition *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar4);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)local_38,(FObjectPtr)&local_res18);
            if (pUVar4 != (UIKRigDefinition *)0x0) goto LAB_14df38a41;
LAB_14df38a4f:
            bVar2 = false;
          }
          pUVar3 = (UIKRigDefinition *)0x0;
          if (bVar2) {
            pUVar3 = pUVar4;
          }
        }
        if (pUVar3 == (UIKRigDefinition *)0x0) {
          if (local_30.AssetPath.PackageName != (FName)0x0) {
            FSoftObjectPath::TryLoad(&local_30,(FUObjectSerializeContext *)0x0);
            goto LAB_14df38a7b;
          }
          goto LAB_14df38b56;
        }
      }
      goto LAB_14df38b33;
    }
  }
  else {
    pUVar6 = UIKRigDefinition::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) goto LAB_14df38997;
LAB_14df38a7b:
    pUVar3 = (UIKRigDefinition *)FWeakObjectPtr::Get((FWeakObjectPtr *)local_38);
    if ((pUVar3 == (UIKRigDefinition *)0x0) && (local_30.AssetPath.PackageName != (FName)0x0)) {
      pUVar4 = (UIKRigDefinition *)FSoftObjectPath::ResolveObject(&local_30);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 != (UIKRigDefinition *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      bVar2 = (*IsInAsyncLoadingThread)();
      if ((bVar2) && (pUVar4 != (UIKRigDefinition *)0x0)) {
        pFVar5 = FUObjectArray::IndexToObject
                           (&GUObjectArray,*(int *)((longlong)&pUVar4->_padding_ + 4));
        if (((pFVar5->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) == 0) goto LAB_14df38ae9;
LAB_14df38b15:
        if (((uint)pUVar4->_padding_ >> 0x1e & 1) != 0) goto LAB_14df38b23;
        bVar2 = true;
      }
      else {
LAB_14df38ae9:
        local_res18 = pUVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar4 != (UIKRigDefinition *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)local_38,(FObjectPtr)&local_res18);
        if (pUVar4 != (UIKRigDefinition *)0x0) goto LAB_14df38b15;
LAB_14df38b23:
        bVar2 = false;
      }
      pUVar3 = (UIKRigDefinition *)0x0;
      if (bVar2) {
        pUVar3 = pUVar4;
      }
    }
    if (pUVar3 != (UIKRigDefinition *)0x0) {
LAB_14df38b33:
      pUVar6 = UIKRigDefinition::StaticClass();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) goto LAB_14df38b59;
    }
  }
LAB_14df38b56:
  pUVar3 = (UIKRigDefinition *)0x0;
LAB_14df38b59:
  if (local_30.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.SubPathString.Data.AllocatorInstance.Data);
  }
  return pUVar3;
}

// GetIKRigWriteable @ 14df38ba0

UIKRigDefinition * __thiscall
UIKRetargeter::GetIKRigWriteable(UIKRetargeter *this,ERetargetSourceOrTarget param_1)

{
  int iVar1;
  bool bVar2;
  UIKRigDefinition *pUVar3;
  UIKRigDefinition *pUVar4;
  FUObjectItem *pFVar5;
  UClass *pUVar6;
  longlong lVar7;
  UIKRigDefinition *local_res18;
  undefined1 local_38 [8];
  FSoftObjectPath local_30;
  
  lVar7 = 0x30;
  if (param_1 != Source) {
    lVar7 = 0x38;
  }
  pUVar3 = *(UIKRigDefinition **)((longlong)&this->_padding_ + lVar7);
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar3 != (UIKRigDefinition *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UIKRigDefinition *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
  }
  local_30.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_30.AssetPath.AssetName.Number = 0;
  local_30.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_30.AssetPath.PackageName.Number = 0;
  local_30.SubPathString.Data.ArrayNum = 0;
  local_30.SubPathString.Data.ArrayMax = 0;
  local_38._0_4_ = 0;
  local_38._4_4_ = 0;
  local_res18 = (UIKRigDefinition *)0x0;
  FUtf8String::Reset(&local_30.SubPathString,0);
  local_res18 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UIKRigDefinition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)local_38,(FObjectPtr)&local_res18);
  pUVar3 = (UIKRigDefinition *)FWeakObjectPtr::Get((FWeakObjectPtr *)local_38);
  if ((pUVar3 == (UIKRigDefinition *)0x0) && (local_30.AssetPath.PackageName != (FName)0x0)) {
    pUVar4 = (UIKRigDefinition *)FSoftObjectPath::ResolveObject(&local_30);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UIKRigDefinition *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    bVar2 = (*IsInAsyncLoadingThread)();
    if ((bVar2) && (pUVar4 != (UIKRigDefinition *)0x0)) {
      pFVar5 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar4->_padding_ + 4));
      if (((pFVar5->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) == 0) goto LAB_14df38cb6;
LAB_14df38ce2:
      if (((uint)pUVar4->_padding_ >> 0x1e & 1) != 0) goto LAB_14df38cf0;
      bVar2 = true;
    }
    else {
LAB_14df38cb6:
      local_res18 = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 != (UIKRigDefinition *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)local_38,(FObjectPtr)&local_res18);
      if (pUVar4 != (UIKRigDefinition *)0x0) goto LAB_14df38ce2;
LAB_14df38cf0:
      bVar2 = false;
    }
    pUVar3 = (UIKRigDefinition *)0x0;
    if (bVar2) {
      pUVar3 = pUVar4;
    }
  }
  if (pUVar3 == (UIKRigDefinition *)0x0) {
LAB_14df38d27:
    bVar2 = IsInGameThread();
    if (bVar2) {
      pUVar3 = (UIKRigDefinition *)FWeakObjectPtr::Get((FWeakObjectPtr *)local_38);
      if (pUVar3 == (UIKRigDefinition *)0x0) {
        if (local_30.AssetPath.PackageName != (FName)0x0) {
          pUVar4 = (UIKRigDefinition *)FSoftObjectPath::ResolveObject(&local_30);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar4 != (UIKRigDefinition *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar4);
          }
          bVar2 = (*IsInAsyncLoadingThread)();
          if ((bVar2) && (pUVar4 != (UIKRigDefinition *)0x0)) {
            pFVar5 = FUObjectArray::IndexToObject
                               (&GUObjectArray,*(int *)((longlong)&pUVar4->_padding_ + 4));
            if (((pFVar5->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) == 0)
            goto LAB_14df38da5;
LAB_14df38dd1:
            if (((uint)pUVar4->_padding_ >> 0x1e & 1) != 0) goto LAB_14df38ddf;
            bVar2 = true;
          }
          else {
LAB_14df38da5:
            local_res18 = pUVar4;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar4 != (UIKRigDefinition *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar4);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)local_38,(FObjectPtr)&local_res18);
            if (pUVar4 != (UIKRigDefinition *)0x0) goto LAB_14df38dd1;
LAB_14df38ddf:
            bVar2 = false;
          }
          pUVar3 = (UIKRigDefinition *)0x0;
          if (bVar2) {
            pUVar3 = pUVar4;
          }
        }
        if (pUVar3 == (UIKRigDefinition *)0x0) {
          if (local_30.AssetPath.PackageName != (FName)0x0) {
            FSoftObjectPath::TryLoad(&local_30,(FUObjectSerializeContext *)0x0);
            goto LAB_14df38e0b;
          }
          goto LAB_14df38ee6;
        }
      }
      goto LAB_14df38ec3;
    }
  }
  else {
    pUVar6 = UIKRigDefinition::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) goto LAB_14df38d27;
LAB_14df38e0b:
    pUVar3 = (UIKRigDefinition *)FWeakObjectPtr::Get((FWeakObjectPtr *)local_38);
    if ((pUVar3 == (UIKRigDefinition *)0x0) && (local_30.AssetPath.PackageName != (FName)0x0)) {
      pUVar4 = (UIKRigDefinition *)FSoftObjectPath::ResolveObject(&local_30);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 != (UIKRigDefinition *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      bVar2 = (*IsInAsyncLoadingThread)();
      if ((bVar2) && (pUVar4 != (UIKRigDefinition *)0x0)) {
        pFVar5 = FUObjectArray::IndexToObject
                           (&GUObjectArray,*(int *)((longlong)&pUVar4->_padding_ + 4));
        if (((pFVar5->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) == 0) goto LAB_14df38e79;
LAB_14df38ea5:
        if (((uint)pUVar4->_padding_ >> 0x1e & 1) != 0) goto LAB_14df38eb3;
        bVar2 = true;
      }
      else {
LAB_14df38e79:
        local_res18 = pUVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar4 != (UIKRigDefinition *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)local_38,(FObjectPtr)&local_res18);
        if (pUVar4 != (UIKRigDefinition *)0x0) goto LAB_14df38ea5;
LAB_14df38eb3:
        bVar2 = false;
      }
      pUVar3 = (UIKRigDefinition *)0x0;
      if (bVar2) {
        pUVar3 = pUVar4;
      }
    }
    if (pUVar3 != (UIKRigDefinition *)0x0) {
LAB_14df38ec3:
      pUVar6 = UIKRigDefinition::StaticClass();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) goto LAB_14df38ee9;
    }
  }
LAB_14df38ee6:
  pUVar3 = (UIKRigDefinition *)0x0;
LAB_14df38ee9:
  if (local_30.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.SubPathString.Data.AllocatorInstance.Data);
  }
  return pUVar3;
}

// GetPrivateStaticClass @ 14df3ce50

UClass * __cdecl UIKRetargeter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRetargeter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRetargeter",
               &Z_Registration_Info_UClass_UIKRetargeter.InnerSingleton,
               StaticRegisterNativesUIKRetargeter,0x208,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKRetargeter>,InternalVTableHelperCtorCaller<UIKRetargeter>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRetargeter.InnerSingleton;
}

// GetProfileByName @ 14df3e3d0

FRetargetProfile * __thiscall UIKRetargeter::GetProfileByName(UIKRetargeter *this,FName *param_1)

{
  FRetargetProfile *pFVar1;
  
  pFVar1 = TMapBase<FName,FRetargetProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRetargetProfile,0>_>
           ::Find((TMapBase<FName,FRetargetProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRetargetProfile,0>_>
                   *)&this->Profiles,*param_1);
  return pFVar1;
}

// GetRetargetOpByName @ 14df3eac0

FIKRetargetOpBase * __thiscall
UIKRetargeter::GetRetargetOpByName(UIKRetargeter *this,FName *param_1)

{
  int iVar1;
  FIKRetargetOpBase *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->RetargetOps).ArrayNum;
  pFVar3 = (this->RetargetOps).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->RetargetOps).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FInstancedStruct_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    pFVar2 = UE::StructUtils::GetStructRef<FIKRetargetOpBase>
                       (*(UScriptStruct **)pFVar3,*(void **)(pFVar3 + 8));
    if (pFVar2->Name == *param_1) {
      return pFVar2;
    }
    pFVar3 = pFVar3 + 0x10;
  }
  return (FIKRetargetOpBase *)0x0;
}

// GetRetargetPoseByName @ 14df3ed70

FIKRetargetPose * __thiscall
UIKRetargeter::GetRetargetPoseByName
          (UIKRetargeter *this,ERetargetSourceOrTarget *param_1,FName param_2)

{
  TTuple<FName,FIKRetargetPose> *pTVar1;
  TSet<TTuple<FName,FIKRetargetPose>,TDefaultMapHashableKeyFuncs<FName,FIKRetargetPose,0>,FDefaultSetAllocator>
  *this_00;
  FIKRetargetPose *pFVar2;
  
  if (*param_1 == Source) {
    this_00 = (TSet<TTuple<FName,FIKRetargetPose>,TDefaultMapHashableKeyFuncs<FName,FIKRetargetPose,0>,FDefaultSetAllocator>
               *)&this->SourceRetargetPoses;
  }
  else {
    this_00 = (TSet<TTuple<FName,FIKRetargetPose>,TDefaultMapHashableKeyFuncs<FName,FIKRetargetPose,0>,FDefaultSetAllocator>
               *)&this->TargetRetargetPoses;
  }
  pTVar1 = TSet<TTuple<FName,FIKRetargetPose>,TDefaultMapHashableKeyFuncs<FName,FIKRetargetPose,0>,FDefaultSetAllocator>
           ::Find(this_00,param_2);
  pFVar2 = (FIKRetargetPose *)&pTVar1->field_0x8;
  if (pTVar1 == (TTuple<FName,FIKRetargetPose> *)0x0) {
    pFVar2 = (FIKRetargetPose *)0x0;
  }
  return pFVar2;
}

// GetRootSettingsFromRetargetAsset @ 14df3ede0

/* WARNING: Type propagation algorithm not settling */

void __cdecl
UIKRetargeter::GetRootSettingsFromRetargetAsset
          (UIKRetargeter *param_1,FName param_2,FTargetRootSettings *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  URetargetRootSettings *pUVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double dVar14;
  double dVar15;
  FRetargetProfile *pFVar16;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  dVar15 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar14 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  dVar4 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  uVar13 = UE::Math::TVector<double>::OneVector.field0_0x0._20_4_;
  uVar12 = UE::Math::TVector<double>::OneVector.field0_0x0._16_4_;
  uVar11 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uVar10 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  if (param_1 == (UIKRetargeter *)0x0) {
    param_3->RotationAlpha = 1.0;
    param_3->TranslationAlpha = 1.0;
    *(undefined8 *)&param_3->BlendToSource = 0;
    (param_3->BlendToSourceWeights).field0_0x0._s_0.X = (double)uVar10;
    (param_3->BlendToSourceWeights).field0_0x0._s_0.Y = (double)uVar11;
    *(undefined4 *)((longlong)&(param_3->BlendToSourceWeights).field0_0x0 + 0x10) = uVar12;
    *(undefined4 *)((longlong)&(param_3->BlendToSourceWeights).field0_0x0 + 0x14) = uVar13;
    param_3->ScaleHorizontal = 1.0;
    param_3->ScaleVertical = 1.0;
    (param_3->TranslationOffset).field0_0x0._s_0.X = (double)uVar7;
    (param_3->TranslationOffset).field0_0x0._s_0.Y = (double)uVar8;
    *(undefined4 *)((longlong)&(param_3->TranslationOffset).field0_0x0 + 0x10) = uVar2;
    *(undefined4 *)((longlong)&(param_3->TranslationOffset).field0_0x0 + 0x14) = uVar9;
    (param_3->RotationOffset).Pitch = dVar4;
    uVar1 = __real_3f800000;
    uVar2 = 0;
    (param_3->RotationOffset).Yaw = dVar14;
    (param_3->RotationOffset).Roll = dVar15;
  }
  else {
    if (param_2 != (FName)0x0) {
      pFVar16 = TMapBase<FName,FRetargetProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRetargetProfile,0>_>
                ::Find((TMapBase<FName,FRetargetProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRetargetProfile,0>_>
                        *)&param_1->Profiles,param_2);
      dVar15 = UE::Math::TRotator<double>::ZeroRotator.Roll;
      dVar14 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      dVar4 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      uVar13 = UE::Math::TVector<double>::OneVector.field0_0x0._20_4_;
      uVar12 = UE::Math::TVector<double>::OneVector.field0_0x0._16_4_;
      uVar11 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      uVar10 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
      uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      if ((pFVar16 != (FRetargetProfile *)0x0) && (pFVar16->bApplyRootSettings != false)) {
        fVar5 = (pFVar16->RootSettings).TranslationAlpha;
        fVar6 = (pFVar16->RootSettings).BlendToSource;
        uVar2 = *(undefined4 *)&(pFVar16->RootSettings).field_0xc;
        param_3->RotationAlpha = (pFVar16->RootSettings).RotationAlpha;
        param_3->TranslationAlpha = fVar5;
        param_3->BlendToSource = fVar6;
        *(undefined4 *)&param_3->field_0xc = uVar2;
        dVar4 = (pFVar16->RootSettings).BlendToSourceWeights.field0_0x0._s_0.Y;
        (param_3->BlendToSourceWeights).field0_0x0._s_0.X =
             (pFVar16->RootSettings).BlendToSourceWeights.field0_0x0._s_0.X;
        (param_3->BlendToSourceWeights).field0_0x0._s_0.Y = dVar4;
        fVar5 = (pFVar16->RootSettings).ScaleHorizontal;
        fVar6 = (pFVar16->RootSettings).ScaleVertical;
        (param_3->BlendToSourceWeights).field0_0x0._s_0.Z =
             (pFVar16->RootSettings).BlendToSourceWeights.field0_0x0._s_0.Z;
        param_3->ScaleHorizontal = fVar5;
        param_3->ScaleVertical = fVar6;
        dVar4 = (pFVar16->RootSettings).TranslationOffset.field0_0x0._s_0.Y;
        (param_3->TranslationOffset).field0_0x0._s_0.X =
             (pFVar16->RootSettings).TranslationOffset.field0_0x0._s_0.X;
        (param_3->TranslationOffset).field0_0x0._s_0.Y = dVar4;
        dVar4 = (pFVar16->RootSettings).RotationOffset.Pitch;
        (param_3->TranslationOffset).field0_0x0._s_0.Z =
             (pFVar16->RootSettings).TranslationOffset.field0_0x0._s_0.Z;
        (param_3->RotationOffset).Pitch = dVar4;
        dVar4 = (pFVar16->RootSettings).RotationOffset.Roll;
        (param_3->RotationOffset).Yaw = (pFVar16->RootSettings).RotationOffset.Yaw;
        (param_3->RotationOffset).Roll = dVar4;
        fVar5 = (pFVar16->RootSettings).AffectIKVertical;
        param_3->AffectIKHorizontal = (pFVar16->RootSettings).AffectIKHorizontal;
        param_3->AffectIKVertical = fVar5;
        return;
      }
      param_3->RotationAlpha = 1.0;
      param_3->TranslationAlpha = 1.0;
      *(undefined8 *)&param_3->BlendToSource = 0;
      (param_3->BlendToSourceWeights).field0_0x0._s_0.X = (double)uVar10;
      (param_3->BlendToSourceWeights).field0_0x0._s_0.Y = (double)uVar11;
      uStack_38 = SUB84(dVar14,0);
      uStack_34 = (undefined4)((ulonglong)dVar14 >> 0x20);
      *(undefined4 *)((longlong)&(param_3->BlendToSourceWeights).field0_0x0 + 0x10) = uVar12;
      *(undefined4 *)((longlong)&(param_3->BlendToSourceWeights).field0_0x0 + 0x14) = uVar13;
      param_3->ScaleHorizontal = 1.0;
      param_3->ScaleVertical = 1.0;
      local_40 = SUB84(dVar4,0);
      uStack_3c = (undefined4)((ulonglong)dVar4 >> 0x20);
      (param_3->TranslationOffset).field0_0x0._s_0.X = (double)uVar7;
      (param_3->TranslationOffset).field0_0x0._s_0.Y = (double)uVar8;
      *(undefined4 *)((longlong)&(param_3->TranslationOffset).field0_0x0 + 0x10) = uVar2;
      *(undefined4 *)((longlong)&(param_3->TranslationOffset).field0_0x0 + 0x14) = uVar9;
      *(undefined4 *)&(param_3->RotationOffset).Pitch = local_40;
      *(undefined4 *)((longlong)&(param_3->RotationOffset).Pitch + 4) = uStack_3c;
      uVar1 = __real_3f800000;
      *(undefined4 *)&(param_3->RotationOffset).Yaw = uStack_38;
      *(undefined4 *)((longlong)&(param_3->RotationOffset).Yaw + 4) = uStack_34;
      *(int *)&(param_3->RotationOffset).Roll = SUB84(dVar15,0);
      *(int *)((longlong)&(param_3->RotationOffset).Roll + 4) = (int)((ulonglong)dVar15 >> 0x20);
      param_3->AffectIKHorizontal = (float)(int)(ulonglong)uVar1;
      param_3->AffectIKVertical = (float)(int)((ulonglong)uVar1 >> 0x20);
      return;
    }
    pUVar3 = (param_1->RootSettings_DEPRECATED).field0_0x0.DebugPtr;
    fVar5 = (pUVar3->Settings).TranslationAlpha;
    fVar6 = (pUVar3->Settings).BlendToSource;
    uVar2 = *(undefined4 *)&(pUVar3->Settings).field_0xc;
    param_3->RotationAlpha = (pUVar3->Settings).RotationAlpha;
    param_3->TranslationAlpha = fVar5;
    param_3->BlendToSource = fVar6;
    *(undefined4 *)&param_3->field_0xc = uVar2;
    dVar4 = (pUVar3->Settings).BlendToSourceWeights.field0_0x0._s_0.Y;
    (param_3->BlendToSourceWeights).field0_0x0._s_0.X =
         (pUVar3->Settings).BlendToSourceWeights.field0_0x0._s_0.X;
    (param_3->BlendToSourceWeights).field0_0x0._s_0.Y = dVar4;
    fVar5 = (pUVar3->Settings).ScaleHorizontal;
    fVar6 = (pUVar3->Settings).ScaleVertical;
    (param_3->BlendToSourceWeights).field0_0x0._s_0.Z =
         (pUVar3->Settings).BlendToSourceWeights.field0_0x0._s_0.Z;
    param_3->ScaleHorizontal = fVar5;
    param_3->ScaleVertical = fVar6;
    dVar4 = (pUVar3->Settings).TranslationOffset.field0_0x0._s_0.Y;
    (param_3->TranslationOffset).field0_0x0._s_0.X =
         (pUVar3->Settings).TranslationOffset.field0_0x0._s_0.X;
    (param_3->TranslationOffset).field0_0x0._s_0.Y = dVar4;
    dVar4 = (pUVar3->Settings).RotationOffset.Pitch;
    (param_3->TranslationOffset).field0_0x0._s_0.Z =
         (pUVar3->Settings).TranslationOffset.field0_0x0._s_0.Z;
    (param_3->RotationOffset).Pitch = dVar4;
    dVar4 = (pUVar3->Settings).RotationOffset.Roll;
    (param_3->RotationOffset).Yaw = (pUVar3->Settings).RotationOffset.Yaw;
    (param_3->RotationOffset).Roll = dVar4;
    uVar1 = (uint)(pUVar3->Settings).AffectIKHorizontal;
    uVar2 = (pUVar3->Settings).AffectIKVertical;
  }
  param_3->AffectIKHorizontal = (float)uVar1;
  param_3->AffectIKVertical = (float)uVar2;
  return;
}

// GetRootSettingsFromRetargetProfile @ 14df3f020

FTargetRootSettings * __cdecl
UIKRetargeter::GetRootSettingsFromRetargetProfile
          (FTargetRootSettings *__return_storage_ptr__,FRetargetProfile *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  
  fVar5 = (param_1->RootSettings).TranslationAlpha;
  fVar6 = (param_1->RootSettings).BlendToSource;
  uVar7 = *(undefined4 *)&(param_1->RootSettings).field_0xc;
  dVar1 = (param_1->RootSettings).BlendToSourceWeights.field0_0x0._s_0.X;
  dVar2 = (param_1->RootSettings).BlendToSourceWeights.field0_0x0._s_0.Y;
  __return_storage_ptr__->RotationAlpha = (param_1->RootSettings).RotationAlpha;
  __return_storage_ptr__->TranslationAlpha = fVar5;
  __return_storage_ptr__->BlendToSource = fVar6;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar7;
  dVar3 = (param_1->RootSettings).BlendToSourceWeights.field0_0x0._s_0.Z;
  fVar5 = (param_1->RootSettings).ScaleHorizontal;
  fVar6 = (param_1->RootSettings).ScaleVertical;
  (__return_storage_ptr__->BlendToSourceWeights).field0_0x0._s_0.X = dVar1;
  (__return_storage_ptr__->BlendToSourceWeights).field0_0x0._s_0.Y = dVar2;
  dVar1 = (param_1->RootSettings).TranslationOffset.field0_0x0._s_0.X;
  dVar2 = (param_1->RootSettings).TranslationOffset.field0_0x0._s_0.Y;
  (__return_storage_ptr__->BlendToSourceWeights).field0_0x0._s_0.Z = dVar3;
  __return_storage_ptr__->ScaleHorizontal = fVar5;
  __return_storage_ptr__->ScaleVertical = fVar6;
  dVar3 = (param_1->RootSettings).TranslationOffset.field0_0x0._s_0.Z;
  dVar4 = (param_1->RootSettings).RotationOffset.Pitch;
  (__return_storage_ptr__->TranslationOffset).field0_0x0._s_0.X = dVar1;
  (__return_storage_ptr__->TranslationOffset).field0_0x0._s_0.Y = dVar2;
  dVar1 = (param_1->RootSettings).RotationOffset.Yaw;
  dVar2 = (param_1->RootSettings).RotationOffset.Roll;
  (__return_storage_ptr__->TranslationOffset).field0_0x0._s_0.Z = dVar3;
  (__return_storage_ptr__->RotationOffset).Pitch = dVar4;
  fVar5 = (param_1->RootSettings).AffectIKHorizontal;
  fVar6 = (param_1->RootSettings).AffectIKVertical;
  (__return_storage_ptr__->RotationOffset).Yaw = dVar1;
  (__return_storage_ptr__->RotationOffset).Roll = dVar2;
  __return_storage_ptr__->AffectIKHorizontal = fVar5;
  __return_storage_ptr__->AffectIKVertical = fVar6;
  return __return_storage_ptr__;
}

// PostDuplicate @ 14df4c3d0

void __thiscall UIKRetargeter::PostDuplicate(UIKRetargeter *this,bool param_1)

{
  return;
}

// PostLoad @ 14df4c5c0

void __thiscall UIKRetargeter::PostLoad(UIKRetargeter *this)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UPackage *pUVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  FGuid local_38;
  
  UObject::PostLoad((UObject *)this);
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Standalone);
  CleanRetargetPoses(this);
  CleanOpStack(this);
  local_38 = FIKRigObjectVersion::GUID;
  iVar7 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_38);
  iVar1 = (this->RetargetOps).ArrayNum;
  pFVar9 = (this->RetargetOps).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)iVar1 * 0x10;
  do {
    if ((this->RetargetOps).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FInstancedStruct,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar9 == pFVar10) {
      return;
    }
    plVar3 = *(longlong **)(pFVar9 + 8);
    lVar4 = *(longlong *)pFVar9;
    if (plVar3 == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Memory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd1,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (lVar4 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd2,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar8 = Z_Construct_UPackage__Script_IKRig();
      Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpBase,(UObject *)pUVar8,
                           L"IKRetargetOpBase");
      if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton != (UScriptStruct *)0x0
         ) goto LAB_14df4c6de;
LAB_14df4c702:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd3,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
LAB_14df4c6de:
      iVar2 = (int)(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (!bVar6) goto LAB_14df4c702;
    }
    (**(code **)(*plVar3 + 0x20))(plVar3,iVar7);
    pFVar9 = pFVar9 + 0x10;
  } while( true );
}

// PostLoadOpStack @ 14df4cab0

void __thiscall UIKRetargeter::PostLoadOpStack(UIKRetargeter *this)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UPackage *pUVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  FGuid local_38;
  
  local_38 = FIKRigObjectVersion::GUID;
  iVar7 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_38);
  iVar1 = (this->RetargetOps).ArrayNum;
  pFVar10 = (this->RetargetOps).AllocatorInstance.Data;
  pFVar9 = pFVar10 + (longlong)iVar1 * 0x10;
  do {
    if ((this->RetargetOps).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FInstancedStruct,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar10 == pFVar9) {
      return;
    }
    plVar3 = *(longlong **)(pFVar10 + 8);
    lVar4 = *(longlong *)pFVar10;
    if (plVar3 == (longlong *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Memory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd1,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (lVar4 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd2,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar8 = Z_Construct_UPackage__Script_IKRig();
      Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetOpBase,(UObject *)pUVar8,
                           L"IKRetargetOpBase");
      if (Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton != (UScriptStruct *)0x0
         ) goto LAB_14df4cba3;
LAB_14df4cbc7:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd3,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
LAB_14df4cba3:
      iVar2 = (int)(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FIKRetargetOpBase.OuterSingleton)->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (!bVar6) goto LAB_14df4cbc7;
    }
    (**(code **)(*plVar3 + 0x20))(plVar3,iVar7);
    pFVar10 = pFVar10 + 0x10;
  } while( true );
}

// Serialize @ 14df53c20

void __thiscall UIKRetargeter::Serialize(UIKRetargeter *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014df53c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FIKRigObjectVersion::GUID);
  return;
}

// Serialize @ 14df53c50

void __thiscall UIKRetargeter::Serialize(UIKRetargeter *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FIKRigObjectVersion::GUID);
  return;
}

// SetChainFKSettingsInRetargetProfile @ 14df54140

void __cdecl
UIKRetargeter::SetChainFKSettingsInRetargetProfile
          (FRetargetProfile *param_1,FTargetChainFKSettings *param_2,FName param_3)

{
  ERetargetRotationMode EVar1;
  undefined2 uVar2;
  float fVar3;
  ERetargetTranslationMode EVar4;
  undefined3 uVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  FTargetChainSettings *pFVar9;
  FName *pFVar10;
  undefined1 *puVar11;
  uint uVar12;
  FName local_res18;
  
  local_res18 = param_3;
  uVar8 = ::GetTypeHash(param_3.ComparisonIndex.Value);
  uVar8 = uVar8 + param_3.Number;
  if (*(int *)&(param_1->ChainSettings).field_0x8 != *(int *)&(param_1->ChainSettings).field_0x34) {
    puVar11 = *(undefined1 **)&(param_1->ChainSettings).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(param_1->ChainSettings).field_0x38;
    }
    uVar12 = *(uint *)(puVar11 +
                      (ulonglong)(*(int *)&(param_1->ChainSettings).field_0x48 - 1U & uVar8) * 4);
    if (uVar12 != 0xffffffff) {
      do {
        pFVar10 = (FName *)((longlong)(int)uVar12 * 200 + *(longlong *)&param_1->ChainSettings);
        if (*pFVar10 == local_res18) {
          if (pFVar10 != (FName *)0x0) {
            pFVar9 = (FTargetChainSettings *)(pFVar10 + 1);
            goto LAB_14df541e0;
          }
          break;
        }
        uVar12 = pFVar10[0x18].ComparisonIndex.Value;
      } while (uVar12 != 0xffffffff);
    }
  }
  pFVar9 = TMapBase<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
           ::EmplaceByHash<FName_const_&>
                     ((TMapBase<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
                       *)&param_1->ChainSettings,uVar8,&local_res18);
LAB_14df541e0:
  EVar1 = param_2->RotationMode;
  uVar2 = *(undefined2 *)&param_2->field_0x2;
  fVar3 = param_2->RotationAlpha;
  EVar4 = param_2->TranslationMode;
  uVar5 = *(undefined3 *)&param_2->field_0x9;
  fVar6 = param_2->TranslationAlpha;
  (pFVar9->FK).EnableFK = param_2->EnableFK;
  (pFVar9->FK).RotationMode = EVar1;
  *(undefined2 *)&(pFVar9->FK).field_0x2 = uVar2;
  (pFVar9->FK).RotationAlpha = fVar3;
  (pFVar9->FK).TranslationMode = EVar4;
  *(undefined3 *)&(pFVar9->FK).field_0x9 = uVar5;
  (pFVar9->FK).TranslationAlpha = fVar6;
  bVar7 = param_2->PoleVectorMaintainOffset;
  uVar5 = *(undefined3 *)&param_2->field_0x15;
  (pFVar9->FK).PoleVectorMatching = param_2->PoleVectorMatching;
  (pFVar9->FK).PoleVectorMaintainOffset = bVar7;
  *(undefined3 *)&(pFVar9->FK).field_0x15 = uVar5;
  (pFVar9->FK).PoleVectorOffset = param_2->PoleVectorOffset;
  param_1->bApplyChainSettings = true;
  return;
}

// SetChainIKSettingsInRetargetProfile @ 14df54220

void __cdecl
UIKRetargeter::SetChainIKSettingsInRetargetProfile
          (FRetargetProfile *param_1,FTargetChainIKSettings *param_2,FName param_3)

{
  double dVar1;
  undefined3 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  undefined7 uVar7;
  uint uVar8;
  FTargetChainSettings *pFVar9;
  FName *pFVar10;
  undefined1 *puVar11;
  uint uVar12;
  FName local_res18;
  
  local_res18 = param_3;
  uVar8 = ::GetTypeHash(param_3.ComparisonIndex.Value);
  uVar8 = uVar8 + param_3.Number;
  if (*(int *)&(param_1->ChainSettings).field_0x8 != *(int *)&(param_1->ChainSettings).field_0x34) {
    puVar11 = *(undefined1 **)&(param_1->ChainSettings).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(param_1->ChainSettings).field_0x38;
    }
    uVar12 = *(uint *)(puVar11 +
                      (ulonglong)(*(int *)&(param_1->ChainSettings).field_0x48 - 1U & uVar8) * 4);
    if (uVar12 != 0xffffffff) {
      do {
        pFVar10 = (FName *)((longlong)(int)uVar12 * 200 + *(longlong *)&param_1->ChainSettings);
        if (*pFVar10 == local_res18) {
          if (pFVar10 != (FName *)0x0) {
            pFVar9 = (FTargetChainSettings *)(pFVar10 + 1);
            goto LAB_14df542c0;
          }
          break;
        }
        uVar12 = pFVar10[0x18].ComparisonIndex.Value;
      } while (uVar12 != 0xffffffff);
    }
  }
  pFVar9 = TMapBase<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
           ::EmplaceByHash<FName_const_&>
                     ((TMapBase<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
                       *)&param_1->ChainSettings,uVar8,&local_res18);
LAB_14df542c0:
  uVar2 = *(undefined3 *)&param_2->field_0x1;
  fVar3 = param_2->BlendToSource;
  fVar4 = param_2->BlendToSourceTranslation;
  fVar5 = param_2->BlendToSourceRotation;
  (pFVar9->IK).EnableIK = param_2->EnableIK;
  *(undefined3 *)&(pFVar9->IK).field_0x1 = uVar2;
  (pFVar9->IK).BlendToSource = fVar3;
  (pFVar9->IK).BlendToSourceTranslation = fVar4;
  (pFVar9->IK).BlendToSourceRotation = fVar5;
  dVar1 = (param_2->BlendToSourceWeights).field0_0x0._s_0.Y;
  (pFVar9->IK).BlendToSourceWeights.field0_0x0._s_0.X =
       (param_2->BlendToSourceWeights).field0_0x0._s_0.X;
  (pFVar9->IK).BlendToSourceWeights.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_2->StaticOffset).field0_0x0._s_0.X;
  (pFVar9->IK).BlendToSourceWeights.field0_0x0._s_0.Z =
       (param_2->BlendToSourceWeights).field0_0x0._s_0.Z;
  (pFVar9->IK).StaticOffset.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_2->StaticOffset).field0_0x0._s_0.Z;
  (pFVar9->IK).StaticOffset.field0_0x0._s_0.Y = (param_2->StaticOffset).field0_0x0._s_0.Y;
  (pFVar9->IK).StaticOffset.field0_0x0._s_0.Z = dVar1;
  dVar1 = (param_2->StaticLocalOffset).field0_0x0._s_0.Y;
  (pFVar9->IK).StaticLocalOffset.field0_0x0._s_0.X = (param_2->StaticLocalOffset).field0_0x0._s_0.X;
  (pFVar9->IK).StaticLocalOffset.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_2->StaticRotationOffset).Pitch;
  (pFVar9->IK).StaticLocalOffset.field0_0x0._s_0.Z = (param_2->StaticLocalOffset).field0_0x0._s_0.Z;
  (pFVar9->IK).StaticRotationOffset.Pitch = dVar1;
  dVar1 = (param_2->StaticRotationOffset).Roll;
  (pFVar9->IK).StaticRotationOffset.Yaw = (param_2->StaticRotationOffset).Yaw;
  (pFVar9->IK).StaticRotationOffset.Roll = dVar1;
  fVar3 = param_2->Extension;
  bVar6 = param_2->bAffectedByIKWarping;
  uVar7 = *(undefined7 *)&param_2->field_0x79;
  (pFVar9->IK).ScaleVertical = param_2->ScaleVertical;
  (pFVar9->IK).Extension = fVar3;
  (pFVar9->IK).bAffectedByIKWarping = bVar6;
  *(undefined7 *)&(pFVar9->IK).field_0x79 = uVar7;
  param_1->bApplyChainSettings = true;
  return;
}

// SetChainSettingsInRetargetProfile @ 14df54470

void __cdecl
UIKRetargeter::SetChainSettingsInRetargetProfile
          (FRetargetProfile *param_1,FTargetChainSettings *param_2,FName param_3)

{
  FName local_res18 [2];
  
  local_res18[0] = param_3;
  TMapBase<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
  ::Emplace<FName_const_&,FTargetChainSettings_const_&>
            ((TMapBase<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
              *)&param_1->ChainSettings,local_res18,param_2);
  param_1->bApplyChainSettings = true;
  return;
}

// SetChainSpeedPlantSettingsInRetargetProfile @ 14df544a0

void __cdecl
UIKRetargeter::SetChainSpeedPlantSettingsInRetargetProfile
          (FRetargetProfile *param_1,FTargetChainSpeedPlantSettings *param_2,FName param_3)

{
  undefined8 uVar1;
  undefined3 uVar2;
  FNameEntryId FVar3;
  float fVar4;
  uint uVar5;
  FTargetChainSettings *pFVar6;
  FName *pFVar7;
  undefined1 *puVar8;
  uint uVar9;
  FName local_res18;
  
  local_res18 = param_3;
  uVar5 = ::GetTypeHash(param_3.ComparisonIndex.Value);
  uVar5 = uVar5 + param_3.Number;
  if (*(int *)&(param_1->ChainSettings).field_0x8 != *(int *)&(param_1->ChainSettings).field_0x34) {
    puVar8 = *(undefined1 **)&(param_1->ChainSettings).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(param_1->ChainSettings).field_0x38;
    }
    uVar9 = *(uint *)(puVar8 + (ulonglong)
                               (*(int *)&(param_1->ChainSettings).field_0x48 - 1U & uVar5) * 4);
    if (uVar9 != 0xffffffff) {
      do {
        pFVar7 = (FName *)((longlong)(int)uVar9 * 200 + *(longlong *)&param_1->ChainSettings);
        if (*pFVar7 == local_res18) {
          if (pFVar7 != (FName *)0x0) {
            pFVar6 = (FTargetChainSettings *)(pFVar7 + 1);
            goto LAB_14df54540;
          }
          break;
        }
        uVar9 = pFVar7[0x18].ComparisonIndex.Value;
      } while (uVar9 != 0xffffffff);
    }
  }
  pFVar6 = TMapBase<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
           ::EmplaceByHash<FName_const_&>
                     ((TMapBase<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
                       *)&param_1->ChainSettings,uVar5,&local_res18);
LAB_14df54540:
  uVar2 = *(undefined3 *)&param_2->field_0x1;
  FVar3.Value = (param_2->SpeedCurveName).ComparisonIndex.Value;
  uVar1 = *(undefined8 *)&(param_2->SpeedCurveName).Number;
  (pFVar6->SpeedPlanting).EnableSpeedPlanting = param_2->EnableSpeedPlanting;
  *(undefined3 *)&(pFVar6->SpeedPlanting).field_0x1 = uVar2;
  (pFVar6->SpeedPlanting).SpeedCurveName.ComparisonIndex = (FNameEntryId)FVar3.Value;
  *(undefined8 *)&(pFVar6->SpeedPlanting).SpeedCurveName.Number = uVar1;
  fVar4 = param_2->UnplantCriticalDamping;
  (pFVar6->SpeedPlanting).UnplantStiffness = param_2->UnplantStiffness;
  (pFVar6->SpeedPlanting).UnplantCriticalDamping = fVar4;
  param_1->bApplyChainSettings = true;
  return;
}

// SetGlobalSettingsInRetargetProfile @ 14df54630

void __cdecl
UIKRetargeter::SetGlobalSettingsInRetargetProfile
          (FRetargetProfile *param_1,FRetargetGlobalSettings *param_2)

{
  FName FVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined3 uVar6;
  EWarpingDirectionSource EVar7;
  EBasicAxis EVar8;
  float fVar9;
  float fVar10;
  
  bVar2 = param_2->bEnableFK;
  bVar3 = param_2->bEnableIK;
  bVar4 = param_2->bEnablePost;
  bVar5 = param_2->bCopyBasePose;
  uVar6 = *(undefined3 *)&param_2->field_0x5;
  FVar1 = param_2->CopyBasePoseRoot;
  (param_1->GlobalSettings).bEnableRoot = param_2->bEnableRoot;
  (param_1->GlobalSettings).bEnableFK = bVar2;
  (param_1->GlobalSettings).bEnableIK = bVar3;
  (param_1->GlobalSettings).bEnablePost = bVar4;
  (param_1->GlobalSettings).bCopyBasePose = bVar5;
  *(undefined3 *)&(param_1->GlobalSettings).field_0x5 = uVar6;
  (param_1->GlobalSettings).CopyBasePoseRoot = FVar1;
  bVar2 = param_2->bWarping;
  uVar6 = *(undefined3 *)&param_2->field_0x15;
  EVar7 = param_2->DirectionSource;
  EVar8 = param_2->ForwardDirection;
  (param_1->GlobalSettings).SourceScaleFactor = param_2->SourceScaleFactor;
  (param_1->GlobalSettings).bWarping = bVar2;
  *(undefined3 *)&(param_1->GlobalSettings).field_0x15 = uVar6;
  (param_1->GlobalSettings).DirectionSource = EVar7;
  (param_1->GlobalSettings).ForwardDirection = EVar8;
  fVar9 = param_2->WarpForwards;
  fVar10 = param_2->SidewaysOffset;
  (param_1->GlobalSettings).DirectionChain = param_2->DirectionChain;
  (param_1->GlobalSettings).WarpForwards = fVar9;
  (param_1->GlobalSettings).SidewaysOffset = fVar10;
  (param_1->GlobalSettings).WarpSplay = param_2->WarpSplay;
  param_1->bApplyGlobalSettings = true;
  return;
}

// SetRootSettingsInRetargetProfile @ 14df55b30

void __cdecl
UIKRetargeter::SetRootSettingsInRetargetProfile
          (FRetargetProfile *param_1,FTargetRootSettings *param_2)

{
  double dVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  
  fVar2 = param_2->TranslationAlpha;
  fVar3 = param_2->BlendToSource;
  uVar4 = *(undefined4 *)&param_2->field_0xc;
  (param_1->RootSettings).RotationAlpha = param_2->RotationAlpha;
  (param_1->RootSettings).TranslationAlpha = fVar2;
  (param_1->RootSettings).BlendToSource = fVar3;
  *(undefined4 *)&(param_1->RootSettings).field_0xc = uVar4;
  dVar1 = (param_2->BlendToSourceWeights).field0_0x0._s_0.Y;
  (param_1->RootSettings).BlendToSourceWeights.field0_0x0._s_0.X =
       (param_2->BlendToSourceWeights).field0_0x0._s_0.X;
  (param_1->RootSettings).BlendToSourceWeights.field0_0x0._s_0.Y = dVar1;
  fVar2 = param_2->ScaleHorizontal;
  fVar3 = param_2->ScaleVertical;
  (param_1->RootSettings).BlendToSourceWeights.field0_0x0._s_0.Z =
       (param_2->BlendToSourceWeights).field0_0x0._s_0.Z;
  (param_1->RootSettings).ScaleHorizontal = fVar2;
  (param_1->RootSettings).ScaleVertical = fVar3;
  dVar1 = (param_2->TranslationOffset).field0_0x0._s_0.Y;
  (param_1->RootSettings).TranslationOffset.field0_0x0._s_0.X =
       (param_2->TranslationOffset).field0_0x0._s_0.X;
  (param_1->RootSettings).TranslationOffset.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_2->RotationOffset).Pitch;
  (param_1->RootSettings).TranslationOffset.field0_0x0._s_0.Z =
       (param_2->TranslationOffset).field0_0x0._s_0.Z;
  (param_1->RootSettings).RotationOffset.Pitch = dVar1;
  dVar1 = (param_2->RotationOffset).Roll;
  (param_1->RootSettings).RotationOffset.Yaw = (param_2->RotationOffset).Yaw;
  (param_1->RootSettings).RotationOffset.Roll = dVar1;
  fVar2 = param_2->AffectIKVertical;
  (param_1->RootSettings).AffectIKHorizontal = param_2->AffectIKHorizontal;
  (param_1->RootSettings).AffectIKVertical = fVar2;
  param_1->bApplyRootSettings = true;
  return;
}

// StaticRegisterNativesUIKRetargeter @ 14df5a040

void __cdecl UIKRetargeter::StaticRegisterNativesUIKRetargeter(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xf;
  local_18.DataPtr = Z_Construct_UClass_UIKRetargeter_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// __VTableCtorCaller @ 14df62820

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UIKRetargeter::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined4 *)(pUVar1 + 1) = 0xffffffff;
    *(undefined ***)pUVar1 = &___7UIKRetargeter__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 3) = 0;
    *(undefined4 *)&pUVar1[3].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[3].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[3].field_0xc = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined4 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined4 *)&pUVar1[5].field_0x8 = 0;
    *(undefined4 *)&pUVar1[5].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[5].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[5].field_0x14 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)(pUVar1 + 7) = 0;
    *(undefined4 *)&pUVar1[7].field_0x8 = 0;
    *(undefined4 *)&pUVar1[7].field_0xc = 0x80;
    *(undefined4 *)&pUVar1[7].field_0x10 = 0xffffffff;
    *(undefined4 *)&pUVar1[7].field_0x14 = 0;
    *(undefined8 *)&pUVar1[7].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 8) = 0;
    *(undefined8 *)&pUVar1[8].field_0x8 = 0;
    *(undefined8 *)&pUVar1[8].field_0x10 = 0;
    *(undefined2 *)&pUVar1[8].field_0x18 = 0x101;
    pUVar1[8].field_0x1a = 1;
    *(undefined8 *)&pUVar1[8].field_0x1c = 0;
    *(undefined8 *)(pUVar1 + 9) = 0;
    *(undefined8 *)&pUVar1[9].field_0x8 = 0;
    *(undefined8 *)&pUVar1[9].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 10) = 0;
    *(undefined4 *)&pUVar1[10].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[10].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[10].field_0xc = 0;
    *(undefined8 *)&pUVar1[10].field_0x18 = 0;
    *(undefined4 *)&pUVar1[10].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0xb) = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 0xc) = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// execGetChainSettingsFromRetargetAsset @ 14df64100

void __cdecl
UIKRetargeter::execGetChainSettingsFromRetargetAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  longlong *plVar2;
  FProperty *pFVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FName FVar9;
  FRetargetProfile *pFVar10;
  FTargetChainSettings *pFVar11;
  longlong *plVar12;
  FTargetChainSettings *pFVar13;
  FName local_res10;
  FName local_res18;
  longlong local_res20;
  FTargetChainSettings local_1a8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  FVar9 = local_res10;
  local_1a8.FK.EnableFK = true;
  local_1a8.FK.RotationMode = Interpolated;
  local_1a8.FK.RotationAlpha = 1.0;
  local_1a8.FK.TranslationMode = None;
  local_1a8.FK.TranslationAlpha = 1.0;
  local_1a8.FK.PoleVectorMatching = 0.0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_1a8.IK.StaticOffset.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_1a8.IK.BlendToSourceWeights.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_1a8.IK.BlendToSourceWeights.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_1a8.IK.BlendToSourceWeights.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_1a8.IK.StaticLocalOffset.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_1a8.IK.StaticOffset.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_1a8.IK.StaticOffset.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_1a8.IK.StaticLocalOffset.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_1a8.IK.StaticLocalOffset.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_1a8.IK.StaticRotationOffset.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  local_1a8.FK.PoleVectorMaintainOffset = false;
  local_1a8.IK.StaticRotationOffset.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_1a8.IK.StaticRotationOffset.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_1a8.FK.PoleVectorOffset = 0.0;
  local_1a8.IK.EnableIK = true;
  local_1a8.IK.BlendToSource = 0.0;
  local_1a8.IK.BlendToSourceTranslation = 1.0;
  local_1a8.IK.BlendToSourceRotation = 0.0;
  local_1a8.IK.ScaleVertical = 1.0;
  local_1a8.IK.Extension = 1.0;
  local_1a8.IK.bAffectedByIKWarping = true;
  local_1a8.SpeedPlanting.EnableSpeedPlanting = false;
  local_1a8.SpeedPlanting.SpeedCurveName.ComparisonIndex.Value = 0;
  local_1a8.SpeedPlanting.SpeedCurveName.Number = 0;
  local_1a8.SpeedPlanting.SpeedThreshold = 15.0;
  local_1a8.SpeedPlanting.UnplantStiffness = 250.0;
  local_1a8.SpeedPlanting.UnplantCriticalDamping = 1.0;
  if (local_res20 != 0) {
    if (local_res18 == (FName)0x0) {
      plVar12 = *(longlong **)(local_res20 + 0x1e0);
      plVar2 = plVar12 + *(int *)(local_res20 + 0x1e8);
      while ((pFVar13 = (FTargetChainSettings *)0x0, plVar12 != plVar2 &&
             (pFVar13 = (FTargetChainSettings *)*plVar12,
             (FName)(((FTargetChainSettings *)*plVar12)->IK).BlendToSourceWeights.field0_0x0._s_0.X
             != local_res10))) {
        plVar12 = plVar12 + 1;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pFVar13 != (FTargetChainSettings *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pFVar13);
      }
      pFVar11 = (FTargetChainSettings *)((pFVar13->IK).BlendToSourceWeights.field0_0x0.XYZ + 1);
      if (pFVar13 == (FTargetChainSettings *)0x0) {
        pFVar11 = (FTargetChainSettings *)0x0;
      }
    }
    else {
      pFVar10 = TMapBase<FName,FRetargetProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRetargetProfile,0>_>
                ::Find((TMapBase<FName,FRetargetProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRetargetProfile,0>_>
                        *)(local_res20 + 0x50),local_res18);
      if (pFVar10 == (FRetargetProfile *)0x0) goto LAB_14df6433c;
      pFVar11 = TMapBase<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
                ::Find((TMapBase<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
                        *)&pFVar10->ChainSettings,FVar9);
    }
    if (pFVar11 != (FTargetChainSettings *)0x0) goto LAB_14df64341;
  }
LAB_14df6433c:
  pFVar11 = &local_1a8;
LAB_14df64341:
  local_e8._0_1_ = (pFVar11->FK).EnableFK;
  local_e8._1_1_ = (pFVar11->FK).RotationMode;
  local_e8._2_2_ = *(undefined2 *)&(pFVar11->FK).field_0x2;
  local_e8._4_4_ = (pFVar11->FK).RotationAlpha;
  uStack_e0._0_1_ = (pFVar11->FK).TranslationMode;
  uStack_e0._1_3_ = *(undefined3 *)&(pFVar11->FK).field_0x9;
  uStack_e0._4_4_ = (pFVar11->FK).TranslationAlpha;
  local_d8._0_4_ = (pFVar11->FK).PoleVectorMatching;
  local_d8._4_1_ = (pFVar11->FK).PoleVectorMaintainOffset;
  local_d8._5_3_ = *(undefined3 *)&(pFVar11->FK).field_0x15;
  uStack_d0 = *(undefined8 *)&(pFVar11->FK).PoleVectorOffset;
  local_c8._0_1_ = (pFVar11->IK).EnableIK;
  local_c8._1_3_ = *(undefined3 *)&(pFVar11->IK).field_0x1;
  local_c8._4_4_ = (pFVar11->IK).BlendToSource;
  uStack_c0._0_4_ = (pFVar11->IK).BlendToSourceTranslation;
  uStack_c0._4_4_ = (pFVar11->IK).BlendToSourceRotation;
  local_b8 = (pFVar11->IK).BlendToSourceWeights.field0_0x0._s_0.X;
  dStack_b0 = (pFVar11->IK).BlendToSourceWeights.field0_0x0._s_0.Y;
  local_a8 = (pFVar11->IK).BlendToSourceWeights.field0_0x0._s_0.Z;
  dStack_a0 = (pFVar11->IK).StaticOffset.field0_0x0._s_0.X;
  local_98 = (pFVar11->IK).StaticOffset.field0_0x0._s_0.Y;
  dStack_90 = (pFVar11->IK).StaticOffset.field0_0x0._s_0.Z;
  local_88 = (pFVar11->IK).StaticLocalOffset.field0_0x0._s_0.X;
  dStack_80 = (pFVar11->IK).StaticLocalOffset.field0_0x0._s_0.Y;
  local_68 = (pFVar11->IK).StaticRotationOffset.Yaw;
  dStack_60 = (pFVar11->IK).StaticRotationOffset.Roll;
  local_78 = (pFVar11->IK).StaticLocalOffset.field0_0x0._s_0.Z;
  dStack_70 = (pFVar11->IK).StaticRotationOffset.Pitch;
  uVar5 = *(undefined8 *)&(pFVar11->IK).ScaleVertical;
  uVar6 = *(undefined8 *)&(pFVar11->IK).bAffectedByIKWarping;
  uVar7 = *(undefined8 *)&pFVar11->SpeedPlanting;
  uVar8 = *(undefined8 *)&(pFVar11->SpeedPlanting).SpeedCurveName.Number;
  uVar4 = *(undefined8 *)&(pFVar11->SpeedPlanting).UnplantStiffness;
  *(undefined8 *)param_3 = local_e8;
  *(undefined8 *)((longlong)param_3 + 8) = uStack_e0;
  *(undefined8 *)((longlong)param_3 + 0x10) = local_d8;
  *(undefined8 *)((longlong)param_3 + 0x18) = uStack_d0;
  *(undefined8 *)((longlong)param_3 + 0x20) = local_c8;
  *(undefined8 *)((longlong)param_3 + 0x28) = uStack_c0;
  *(double *)((longlong)param_3 + 0x30) = local_b8;
  *(double *)((longlong)param_3 + 0x38) = dStack_b0;
  *(double *)((longlong)param_3 + 0x40) = local_a8;
  *(double *)((longlong)param_3 + 0x48) = dStack_a0;
  *(double *)((longlong)param_3 + 0x50) = local_98;
  *(double *)((longlong)param_3 + 0x58) = dStack_90;
  *(double *)((longlong)param_3 + 0x60) = local_88;
  *(double *)((longlong)param_3 + 0x68) = dStack_80;
  *(double *)((longlong)param_3 + 0x70) = local_78;
  *(double *)((longlong)param_3 + 0x78) = dStack_70;
  *(double *)((longlong)param_3 + 0x80) = local_68;
  *(double *)((longlong)param_3 + 0x88) = dStack_60;
  *(undefined8 *)((longlong)param_3 + 0x90) = uVar5;
  *(undefined8 *)((longlong)param_3 + 0x98) = uVar6;
  *(undefined8 *)((longlong)param_3 + 0xa0) = uVar7;
  *(undefined8 *)((longlong)param_3 + 0xa8) = uVar8;
  *(undefined8 *)((longlong)param_3 + 0xb0) = uVar4;
  return;
}

// execGetChainSettingsFromRetargetProfile @ 14df64460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UIKRetargeter::execGetChainSettingsFromRetargetProfile
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  uint uVar3;
  FTargetChainSettings *pFVar4;
  FName *pFVar5;
  uchar *puVar6;
  uchar *puVar7;
  uint uVar8;
  undefined1 auStack_258 [32];
  FName local_238;
  FName local_230;
  longlong local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined1 local_168 [112];
  void *local_f8;
  undefined4 local_f0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_258;
  FRetargetProfile::FRetargetProfile((FRetargetProfile *)local_168);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_168);
  }
  local_238.ComparisonIndex.Value = 0;
  local_238.Number = 0;
  puVar7 = local_168;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar7 = param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_238,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_238);
  }
  FVar2 = local_238;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_230 = local_238;
  uVar3 = ::GetTypeHash(local_238.ComparisonIndex);
  uVar3 = uVar3 + FVar2.Number;
  if (*(int *)(puVar7 + 0x38) != *(int *)(puVar7 + 100)) {
    puVar6 = *(uchar **)(puVar7 + 0x70);
    if (*(uchar **)(puVar7 + 0x70) == (uchar *)0x0) {
      puVar6 = puVar7 + 0x68;
    }
    uVar8 = *(uint *)(puVar6 + (ulonglong)(*(int *)(puVar7 + 0x78) - 1U & uVar3) * 4);
    if (uVar8 != 0xffffffff) {
      do {
        pFVar5 = (FName *)((longlong)(int)uVar8 * 200 + *(longlong *)(puVar7 + 0x30));
        if (*pFVar5 == local_230) {
          if (pFVar5 != (FName *)0x0) {
            pFVar4 = (FTargetChainSettings *)(pFVar5 + 1);
            goto LAB_14df645d4;
          }
          break;
        }
        uVar8 = pFVar5[0x18].ComparisonIndex.Value;
      } while (uVar8 != 0xffffffff);
    }
  }
  pFVar4 = TMapBase<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
           ::EmplaceByHash<FName_const_&>
                     ((TMapBase<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
                       *)(puVar7 + 0x30),uVar3,&local_230);
LAB_14df645d4:
  local_228._0_1_ = (pFVar4->FK).EnableFK;
  local_228._1_1_ = (pFVar4->FK).RotationMode;
  local_228._2_2_ = *(undefined2 *)&(pFVar4->FK).field_0x2;
  local_228._4_4_ = (pFVar4->FK).RotationAlpha;
  uStack_220._0_1_ = (pFVar4->FK).TranslationMode;
  uStack_220._1_3_ = *(undefined3 *)&(pFVar4->FK).field_0x9;
  uStack_220._4_4_ = (pFVar4->FK).TranslationAlpha;
  local_218._0_4_ = (pFVar4->FK).PoleVectorMatching;
  local_218._4_1_ = (pFVar4->FK).PoleVectorMaintainOffset;
  local_218._5_3_ = *(undefined3 *)&(pFVar4->FK).field_0x15;
  uStack_210 = *(undefined8 *)&(pFVar4->FK).PoleVectorOffset;
  local_208._0_1_ = (pFVar4->IK).EnableIK;
  local_208._1_3_ = *(undefined3 *)&(pFVar4->IK).field_0x1;
  local_208._4_4_ = (pFVar4->IK).BlendToSource;
  uStack_200._0_4_ = (pFVar4->IK).BlendToSourceTranslation;
  uStack_200._4_4_ = (pFVar4->IK).BlendToSourceRotation;
  local_1f8 = (pFVar4->IK).BlendToSourceWeights.field0_0x0._s_0.X;
  dStack_1f0 = (pFVar4->IK).BlendToSourceWeights.field0_0x0._s_0.Y;
  local_1e8 = (pFVar4->IK).BlendToSourceWeights.field0_0x0._s_0.Z;
  dStack_1e0 = (pFVar4->IK).StaticOffset.field0_0x0._s_0.X;
  local_1d8 = (pFVar4->IK).StaticOffset.field0_0x0._s_0.Y;
  dStack_1d0 = (pFVar4->IK).StaticOffset.field0_0x0._s_0.Z;
  local_1c8 = (pFVar4->IK).StaticLocalOffset.field0_0x0._s_0.X;
  dStack_1c0 = (pFVar4->IK).StaticLocalOffset.field0_0x0._s_0.Y;
  local_1a8 = (pFVar4->IK).StaticRotationOffset.Yaw;
  dStack_1a0 = (pFVar4->IK).StaticRotationOffset.Roll;
  local_1b8 = (pFVar4->IK).StaticLocalOffset.field0_0x0._s_0.Z;
  dStack_1b0 = (pFVar4->IK).StaticRotationOffset.Pitch;
  local_198._0_4_ = (pFVar4->IK).ScaleVertical;
  local_198._4_4_ = (pFVar4->IK).Extension;
  uStack_190 = *(undefined8 *)&(pFVar4->IK).bAffectedByIKWarping;
  local_188._0_1_ = (pFVar4->SpeedPlanting).EnableSpeedPlanting;
  local_188._1_3_ = *(undefined3 *)&(pFVar4->SpeedPlanting).field_0x1;
  local_188._4_4_ = (pFVar4->SpeedPlanting).SpeedCurveName.ComparisonIndex;
  uStack_180 = *(undefined8 *)&(pFVar4->SpeedPlanting).SpeedCurveName.Number;
  local_178._0_4_ = (pFVar4->SpeedPlanting).UnplantStiffness;
  local_178._4_4_ = (pFVar4->SpeedPlanting).UnplantCriticalDamping;
  local_f0 = 0;
  *(longlong *)param_3 = local_228;
  *(undefined8 *)((longlong)param_3 + 8) = uStack_220;
  *(undefined8 *)((longlong)param_3 + 0x10) = local_218;
  *(undefined8 *)((longlong)param_3 + 0x18) = uStack_210;
  *(undefined8 *)((longlong)param_3 + 0x20) = local_208;
  *(undefined8 *)((longlong)param_3 + 0x28) = uStack_200;
  *(double *)((longlong)param_3 + 0x30) = local_1f8;
  *(double *)((longlong)param_3 + 0x38) = dStack_1f0;
  *(double *)((longlong)param_3 + 0x40) = local_1e8;
  *(double *)((longlong)param_3 + 0x48) = dStack_1e0;
  *(double *)((longlong)param_3 + 0x50) = local_1d8;
  *(double *)((longlong)param_3 + 0x58) = dStack_1d0;
  *(double *)((longlong)param_3 + 0x60) = local_1c8;
  *(double *)((longlong)param_3 + 0x68) = dStack_1c0;
  *(double *)((longlong)param_3 + 0x70) = local_1b8;
  *(double *)((longlong)param_3 + 0x78) = dStack_1b0;
  *(double *)((longlong)param_3 + 0x80) = local_1a8;
  *(double *)((longlong)param_3 + 0x88) = dStack_1a0;
  *(undefined8 *)((longlong)param_3 + 0x90) = local_198;
  *(undefined8 *)((longlong)param_3 + 0x98) = uStack_190;
  *(undefined8 *)((longlong)param_3 + 0xa0) = local_188;
  *(undefined8 *)((longlong)param_3 + 0xa8) = uStack_180;
  *(undefined8 *)((longlong)param_3 + 0xb0) = local_178;
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_168 + 0x30));
  DestructItems<FRetargetOpProfile,int>((FRetargetOpProfile *)local_168._0_8_,local_168._8_4_);
  if ((FRetargetOpProfile *)local_168._0_8_ != (FRetargetOpProfile *)0x0) {
    FMemory::Free((void *)local_168._0_8_);
  }
  return;
}

// execGetChainUsingGoalFromRetargetAsset @ 14df64770

void __cdecl
UIKRetargeter::execGetChainUsingGoalFromRetargetAsset
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  UIKRetargeter *pUVar4;
  UIKRigDefinition *pUVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  FScriptContainerElement *pFVar8;
  undefined8 *puVar9;
  FScriptContainerElement *pFVar10;
  UObject *pUVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  longlong local_res18;
  UIKRetargeter *local_res20;
  undefined2 local_1b8;
  undefined2 uStack_1b6;
  undefined4 uStack_1b4;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  uint uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  uint local_118;
  undefined8 uStack_114;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  
  local_res20 = (UIKRetargeter *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  pUVar4 = local_res20;
  lVar3 = local_res18;
  local_1b8 = 1;
  uStack_1b4 = 0x3f800000;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dStack_170 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_158 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uStack_1b0 = uStack_1b0 & 0xffffff00;
  uStack_1ac = 0x3f800000;
  uStack_1a8 = 0;
  uStack_1a4 = uStack_1a4 & 0xffffff00;
  uStack_1a0 = 0;
  local_198 = CONCAT31(local_198._1_3_,1);
  uStack_194 = 0;
  uStack_190 = 0x3f800000;
  dStack_140 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  local_128 = 0x3f800000;
  uStack_124 = 0x3f800000;
  uStack_120 = CONCAT31(uStack_120._1_3_,1);
  local_118 = local_118 & 0xffffff00;
  uStack_114 = 0;
  uStack_10c = 0x41700000;
  local_108 = 0x437a0000;
  uStack_104 = 0x3f800000;
  local_188 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_180 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_178 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_168 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dStack_160 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dStack_150 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dStack_148 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_138 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  dStack_130 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  if ((local_res20 != (UIKRetargeter *)0x0) &&
     (pUVar5 = GetIKRig(local_res20,Target), pUVar5 != (UIKRigDefinition *)0x0)) {
    iVar1 = (pUVar5->RetargetDefinition).BoneChains.ArrayNum;
    pFVar10 = (pUVar5->RetargetDefinition).BoneChains.AllocatorInstance.Data;
    pFVar12 = pFVar10 + (longlong)iVar1 * 0x30;
    while( true ) {
      if ((pUVar5->RetargetDefinition).BoneChains.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FBoneChain_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar10 == pFVar12) goto LAB_14df64a37;
      if (*(longlong *)(pFVar10 + 0x28) == lVar3) break;
      pFVar10 = pFVar10 + 0x30;
    }
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      pFVar8 = (pUVar4->ChainSettings_DEPRECATED).AllocatorInstance.Data;
      pFVar12 = pFVar8 + (longlong)(pUVar4->ChainSettings_DEPRECATED).ArrayNum * 8;
      for (; pFVar8 != pFVar12; pFVar8 = pFVar8 + 8) {
        pUVar11 = *(UObject **)pFVar8;
        if (*(longlong *)&pUVar11[1].field_0x8 == *(longlong *)pFVar10) goto LAB_14df6499c;
      }
      pUVar11 = (UObject *)0x0;
LAB_14df6499c:
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar11);
      }
      puVar6 = (undefined8 *)&pUVar11[1].field_0x10;
      if (pUVar11 == (UObject *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      puVar9 = (undefined8 *)&local_1b8;
      if (puVar6 != (undefined8 *)0x0) {
        puVar9 = puVar6;
      }
      uVar7 = puVar9[0x16];
      local_f8 = *puVar9;
      uStack_f0 = puVar9[1];
      local_e8 = puVar9[2];
      uStack_e0 = puVar9[3];
      local_d8 = puVar9[4];
      uStack_d0 = puVar9[5];
      local_c8 = (double)puVar9[6];
      dStack_c0 = (double)puVar9[7];
      local_b8 = (double)puVar9[8];
      dStack_b0 = (double)puVar9[9];
      local_a8 = (double)puVar9[10];
      dStack_a0 = (double)puVar9[0xb];
      local_98 = (double)puVar9[0xc];
      dStack_90 = (double)puVar9[0xd];
      local_88 = (double)puVar9[0xe];
      dStack_80 = (double)puVar9[0xf];
      local_128 = *(undefined4 *)(puVar9 + 0x12);
      uStack_124 = *(undefined4 *)((longlong)puVar9 + 0x94);
      uStack_120 = *(undefined4 *)(puVar9 + 0x13);
      uStack_11c = *(undefined4 *)((longlong)puVar9 + 0x9c);
      local_78 = (double)puVar9[0x10];
      dStack_70 = (double)puVar9[0x11];
      local_118 = *(uint *)(puVar9 + 0x14);
      uStack_114._0_4_ = *(undefined4 *)((longlong)puVar9 + 0xa4);
      uStack_114._4_4_ = *(undefined4 *)(puVar9 + 0x15);
      uStack_10c = *(undefined4 *)((longlong)puVar9 + 0xac);
      goto LAB_14df64aa1;
    }
  }
LAB_14df64a37:
  local_f8 = CONCAT44(uStack_1b4,CONCAT22(uStack_1b6,local_1b8));
  uStack_f0 = CONCAT44(uStack_1ac,uStack_1b0);
  local_e8 = CONCAT44(uStack_1a4,uStack_1a8);
  uStack_e0 = CONCAT44(uStack_19c,uStack_1a0);
  local_d8 = CONCAT44(uStack_194,local_198);
  uStack_d0 = uStack_190;
  local_c8 = local_188;
  dStack_c0 = dStack_180;
  local_b8 = local_178;
  dStack_b0 = dStack_170;
  local_a8 = local_168;
  dStack_a0 = dStack_160;
  local_98 = local_158;
  dStack_90 = dStack_150;
  local_88 = dStack_148;
  dStack_80 = dStack_140;
  local_78 = local_138;
  dStack_70 = dStack_130;
  uVar7 = CONCAT44(uStack_104,local_108);
LAB_14df64aa1:
  *(undefined8 *)param_3 = local_f8;
  *(undefined8 *)((longlong)param_3 + 8) = uStack_f0;
  *(undefined8 *)((longlong)param_3 + 0x10) = local_e8;
  *(undefined8 *)((longlong)param_3 + 0x18) = uStack_e0;
  *(undefined8 *)((longlong)param_3 + 0x20) = local_d8;
  *(undefined8 *)((longlong)param_3 + 0x28) = uStack_d0;
  *(double *)((longlong)param_3 + 0x30) = local_c8;
  *(double *)((longlong)param_3 + 0x38) = dStack_c0;
  *(double *)((longlong)param_3 + 0x40) = local_b8;
  *(double *)((longlong)param_3 + 0x48) = dStack_b0;
  *(double *)((longlong)param_3 + 0x50) = local_a8;
  *(double *)((longlong)param_3 + 0x58) = dStack_a0;
  *(double *)((longlong)param_3 + 0x60) = local_98;
  *(double *)((longlong)param_3 + 0x68) = dStack_90;
  *(double *)((longlong)param_3 + 0x70) = local_88;
  *(double *)((longlong)param_3 + 0x78) = dStack_80;
  *(double *)((longlong)param_3 + 0x80) = local_78;
  *(double *)((longlong)param_3 + 0x88) = dStack_70;
  *(ulonglong *)((longlong)param_3 + 0x90) = CONCAT44(uStack_124,local_128);
  *(ulonglong *)((longlong)param_3 + 0x98) = CONCAT44(uStack_11c,uStack_120);
  *(ulonglong *)((longlong)param_3 + 0xa0) = CONCAT44((undefined4)uStack_114,local_118);
  *(ulonglong *)((longlong)param_3 + 0xa8) = CONCAT44(uStack_10c,uStack_114._4_4_);
  *(undefined8 *)((longlong)param_3 + 0xb0) = uVar7;
  return;
}

// execGetGlobalSettingsFromRetargetAsset @ 14df64cb0

void __cdecl
UIKRetargeter::execGetGlobalSettingsFromRetargetAsset
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  FName FVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  float fVar13;
  FRetargetProfile *pFVar14;
  uchar *puVar15;
  FName local_res10 [2];
  longlong local_res20;
  uchar local_60 [8];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar12 = __real_3f800000;
  builtin_memcpy(local_60,"\x01\x01\x01\x01",5);
  local_58 = 0;
  local_50 = 0x3f800000;
  local_4c = 0;
  local_48 = 0;
  local_44 = 1;
  local_3c = 0;
  local_38 = 0x3f800000;
  local_30 = 0x3f800000;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_60);
  }
  puVar15 = local_60;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar15 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == 0) {
LAB_14df64def:
    puVar15[0] = '\x01';
    puVar15[1] = '\x01';
    puVar15[2] = '\x01';
    puVar15[3] = '\x01';
    puVar15[4] = '\0';
    puVar15[5] = '\0';
    puVar15[6] = '\0';
    puVar15[7] = '\0';
    puVar15[8] = '\0';
    puVar15[9] = '\0';
    puVar15[10] = '\0';
    puVar15[0xb] = '\0';
    puVar15[0xc] = '\0';
    puVar15[0xd] = '\0';
    puVar15[0xe] = '\0';
    puVar15[0xf] = '\0';
    puVar15[0x10] = '\0';
    puVar15[0x11] = '\0';
    puVar15[0x12] = 0x80;
    puVar15[0x13] = '?';
    puVar15[0x14] = '\0';
    puVar15[0x15] = '\0';
    puVar15[0x16] = '\0';
    puVar15[0x17] = '\0';
    puVar15[0x18] = '\0';
    puVar15[0x19] = '\0';
    puVar15[0x1a] = '\0';
    puVar15[0x1b] = '\0';
    puVar15[0x1c] = '\x01';
    puVar15[0x1d] = '\0';
    puVar15[0x1e] = '\0';
    puVar15[0x1f] = '\0';
    puVar15[0x20] = '\0';
    puVar15[0x21] = '\0';
    puVar15[0x22] = '\0';
    puVar15[0x23] = '\0';
    puVar15[0x24] = '\0';
    puVar15[0x25] = '\0';
    puVar15[0x26] = '\0';
    puVar15[0x27] = '\0';
    puVar15[0x28] = '\0';
    puVar15[0x29] = '\0';
    puVar15[0x2a] = 0x80;
    puVar15[0x2b] = '?';
    puVar15[0x2c] = '\0';
    puVar15[0x2d] = '\0';
    puVar15[0x2e] = '\0';
    puVar15[0x2f] = '\0';
    *(undefined4 *)(puVar15 + 0x30) = uVar12;
  }
  else {
    if (local_res10[0] == (FName)0x0) {
      lVar2 = *(longlong *)(local_res20 + 0x1f8);
      uVar4 = *(undefined8 *)(lVar2 + 0x30);
      *(undefined8 *)puVar15 = *(undefined8 *)(lVar2 + 0x28);
      *(undefined8 *)(puVar15 + 8) = uVar4;
      uVar4 = *(undefined8 *)(lVar2 + 0x40);
      *(undefined8 *)(puVar15 + 0x10) = *(undefined8 *)(lVar2 + 0x38);
      *(undefined8 *)(puVar15 + 0x18) = uVar4;
      uVar4 = *(undefined8 *)(lVar2 + 0x50);
      *(undefined8 *)(puVar15 + 0x20) = *(undefined8 *)(lVar2 + 0x48);
      *(undefined8 *)(puVar15 + 0x28) = uVar4;
      fVar13 = *(float *)(lVar2 + 0x58);
    }
    else {
      pFVar14 = TMapBase<FName,FRetargetProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRetargetProfile,0>_>
                ::Find((TMapBase<FName,FRetargetProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRetargetProfile,0>_>
                        *)(local_res20 + 0x50),local_res10[0]);
      if ((pFVar14 == (FRetargetProfile *)0x0) || (pFVar14->bApplyGlobalSettings == false))
      goto LAB_14df64def;
      bVar5 = (pFVar14->GlobalSettings).bEnableFK;
      bVar6 = (pFVar14->GlobalSettings).bEnableIK;
      bVar7 = (pFVar14->GlobalSettings).bEnablePost;
      bVar8 = (pFVar14->GlobalSettings).bCopyBasePose;
      uVar9 = (pFVar14->GlobalSettings).field_0x5;
      uVar10 = (pFVar14->GlobalSettings).field_0x6;
      uVar11 = (pFVar14->GlobalSettings).field_0x7;
      FVar3 = (pFVar14->GlobalSettings).CopyBasePoseRoot;
      puVar15[0] = (pFVar14->GlobalSettings).bEnableRoot;
      puVar15[1] = bVar5;
      puVar15[2] = bVar6;
      puVar15[3] = bVar7;
      puVar15[4] = bVar8;
      puVar15[5] = uVar9;
      puVar15[6] = uVar10;
      puVar15[7] = uVar11;
      *(FName *)(puVar15 + 8) = FVar3;
      uVar4 = *(undefined8 *)&(pFVar14->GlobalSettings).DirectionSource;
      *(undefined8 *)(puVar15 + 0x10) = *(undefined8 *)&(pFVar14->GlobalSettings).SourceScaleFactor;
      *(undefined8 *)(puVar15 + 0x18) = uVar4;
      uVar4 = *(undefined8 *)&(pFVar14->GlobalSettings).WarpForwards;
      *(FName *)(puVar15 + 0x20) = (pFVar14->GlobalSettings).DirectionChain;
      *(undefined8 *)(puVar15 + 0x28) = uVar4;
      fVar13 = (pFVar14->GlobalSettings).WarpSplay;
    }
    *(float *)(puVar15 + 0x30) = fVar13;
  }
  return;
}

// execGetGlobalSettingsFromRetargetProfile @ 14df64ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UIKRetargeter::execGetGlobalSettingsFromRetargetProfile
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uchar *puVar8;
  undefined1 auStack_168 [32];
  undefined1 local_148 [112];
  void *local_d8;
  undefined4 local_d0;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  FRetargetProfile::FRetargetProfile((FRetargetProfile *)local_148);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_148,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_148);
  }
  puVar8 = local_148;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar8 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar3 = *(undefined8 *)(puVar8 + 0xfc);
  uVar1 = *(undefined4 *)(puVar8 + 0x124);
  uVar4 = *(undefined8 *)(puVar8 + 0x104);
  uVar5 = *(undefined8 *)(puVar8 + 0x10c);
  uVar6 = *(undefined8 *)(puVar8 + 0x114);
  uVar7 = *(undefined8 *)(puVar8 + 0x11c);
  local_d0 = 0;
  *(undefined8 *)param_3 = *(undefined8 *)(puVar8 + 0xf4);
  *(undefined8 *)((longlong)param_3 + 8) = uVar3;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar4;
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar5;
  *(undefined8 *)((longlong)param_3 + 0x20) = uVar6;
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar7;
  *(undefined4 *)((longlong)param_3 + 0x30) = uVar1;
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_148 + 0x30));
  DestructItems<FRetargetOpProfile,int>((FRetargetOpProfile *)local_148._0_8_,local_148._8_4_);
  if ((FRetargetOpProfile *)local_148._0_8_ != (FRetargetOpProfile *)0x0) {
    FMemory::Free((void *)local_148._0_8_);
  }
  return;
}

// execGetRootSettingsFromRetargetAsset @ 14df65380

void __cdecl
UIKRetargeter::execGetRootSettingsFromRetargetAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  FProperty *pFVar3;
  longlong lVar4;
  undefined8 uVar5;
  double dVar6;
  FRetargetProfile *pFVar7;
  uchar *puVar8;
  undefined4 uVar9;
  FName local_res10 [2];
  longlong local_res20;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uchar local_98 [16];
  double local_88;
  double dStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  double local_68;
  double dStack_60;
  undefined8 local_58;
  double local_50;
  double dStack_48;
  double local_40;
  undefined8 local_38;
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_98[0] = '\0';
  local_98[1] = '\0';
  local_98[2] = 0x80;
  local_98[3] = '?';
  local_98[4] = '\0';
  local_98[5] = '\0';
  local_98[6] = 0x80;
  local_98[7] = '?';
  local_98[8] = '\0';
  local_98[9] = '\0';
  local_98[10] = '\0';
  local_98[0xb] = '\0';
  local_70 = 0x3f800000;
  local_6c = 0x3f800000;
  local_88 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_80 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_78 = CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._20_4_,
                      UE::Math::TVector<double>::OneVector.field0_0x0._16_4_);
  local_38 = 0x3f800000;
  local_50 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  dStack_48 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_58 = CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                      UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
  local_40 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  puVar8 = local_98;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar8 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != 0) {
    if (local_res10[0] == (FName)0x0) {
      lVar4 = *(longlong *)(local_res20 + 0x1f0);
      uVar5 = *(undefined8 *)(lVar4 + 0x30);
      *(undefined8 *)puVar8 = *(undefined8 *)(lVar4 + 0x28);
      *(undefined8 *)(puVar8 + 8) = uVar5;
      uVar5 = *(undefined8 *)(lVar4 + 0x40);
      *(undefined8 *)(puVar8 + 0x10) = *(undefined8 *)(lVar4 + 0x38);
      *(undefined8 *)(puVar8 + 0x18) = uVar5;
      uVar5 = *(undefined8 *)(lVar4 + 0x50);
      *(undefined8 *)(puVar8 + 0x20) = *(undefined8 *)(lVar4 + 0x48);
      *(undefined8 *)(puVar8 + 0x28) = uVar5;
      uVar5 = *(undefined8 *)(lVar4 + 0x60);
      *(undefined8 *)(puVar8 + 0x30) = *(undefined8 *)(lVar4 + 0x58);
      *(undefined8 *)(puVar8 + 0x38) = uVar5;
      uVar5 = *(undefined8 *)(lVar4 + 0x70);
      *(undefined8 *)(puVar8 + 0x40) = *(undefined8 *)(lVar4 + 0x68);
      *(undefined8 *)(puVar8 + 0x48) = uVar5;
      uVar5 = *(undefined8 *)(lVar4 + 0x80);
      *(undefined8 *)(puVar8 + 0x50) = *(undefined8 *)(lVar4 + 0x78);
      *(undefined8 *)(puVar8 + 0x58) = uVar5;
      uVar9 = (undefined4)*(undefined8 *)(lVar4 + 0x88);
      uVar2 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x88) >> 0x20);
      goto LAB_14df65643;
    }
    pFVar7 = TMapBase<FName,FRetargetProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRetargetProfile,0>_>
             ::Find((TMapBase<FName,FRetargetProfile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRetargetProfile,0>_>
                     *)(local_res20 + 0x50),local_res10[0]);
    if ((pFVar7 != (FRetargetProfile *)0x0) && (pFVar7->bApplyRootSettings != false)) {
      uVar5 = *(undefined8 *)&(pFVar7->RootSettings).BlendToSource;
      *(undefined8 *)puVar8 = *(undefined8 *)&pFVar7->RootSettings;
      *(undefined8 *)(puVar8 + 8) = uVar5;
      dVar6 = (pFVar7->RootSettings).BlendToSourceWeights.field0_0x0._s_0.Y;
      *(double *)(puVar8 + 0x10) = (pFVar7->RootSettings).BlendToSourceWeights.field0_0x0._s_0.X;
      *(double *)(puVar8 + 0x18) = dVar6;
      uVar5 = *(undefined8 *)&(pFVar7->RootSettings).ScaleHorizontal;
      *(double *)(puVar8 + 0x20) = (pFVar7->RootSettings).BlendToSourceWeights.field0_0x0._s_0.Z;
      *(undefined8 *)(puVar8 + 0x28) = uVar5;
      dVar6 = (pFVar7->RootSettings).TranslationOffset.field0_0x0._s_0.Y;
      *(double *)(puVar8 + 0x30) = (pFVar7->RootSettings).TranslationOffset.field0_0x0._s_0.X;
      *(double *)(puVar8 + 0x38) = dVar6;
      dVar6 = (pFVar7->RootSettings).RotationOffset.Pitch;
      *(double *)(puVar8 + 0x40) = (pFVar7->RootSettings).TranslationOffset.field0_0x0._s_0.Z;
      *(double *)(puVar8 + 0x48) = dVar6;
      dVar6 = (pFVar7->RootSettings).RotationOffset.Roll;
      *(double *)(puVar8 + 0x50) = (pFVar7->RootSettings).RotationOffset.Yaw;
      *(double *)(puVar8 + 0x58) = dVar6;
      uVar1 = (pFVar7->RootSettings).AffectIKHorizontal;
      uVar2 = (pFVar7->RootSettings).AffectIKVertical;
      uVar9 = uVar1;
      goto LAB_14df65643;
    }
  }
  puVar8[0] = '\0';
  puVar8[1] = '\0';
  puVar8[2] = 0x80;
  puVar8[3] = '?';
  puVar8[4] = '\0';
  puVar8[5] = '\0';
  puVar8[6] = 0x80;
  puVar8[7] = '?';
  puVar8[8] = '\0';
  puVar8[9] = '\0';
  puVar8[10] = '\0';
  puVar8[0xb] = '\0';
  puVar8[0xc] = '\0';
  puVar8[0xd] = '\0';
  puVar8[0xe] = '\0';
  puVar8[0xf] = '\0';
  *(double *)(puVar8 + 0x10) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  *(double *)(puVar8 + 0x18) = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uStack_b8 = SUB84(UE::Math::TRotator<double>::ZeroRotator.Yaw,0);
  uStack_b4 = (undefined4)((ulonglong)UE::Math::TRotator<double>::ZeroRotator.Yaw >> 0x20);
  *(undefined4 *)(puVar8 + 0x20) = UE::Math::TVector<double>::OneVector.field0_0x0._16_4_;
  *(undefined4 *)(puVar8 + 0x24) = UE::Math::TVector<double>::OneVector.field0_0x0._20_4_;
  puVar8[0x28] = '\0';
  puVar8[0x29] = '\0';
  puVar8[0x2a] = 0x80;
  puVar8[0x2b] = '?';
  puVar8[0x2c] = '\0';
  puVar8[0x2d] = '\0';
  puVar8[0x2e] = 0x80;
  puVar8[0x2f] = '?';
  local_c0 = SUB84(UE::Math::TRotator<double>::ZeroRotator.Pitch,0);
  uStack_bc = (undefined4)((ulonglong)UE::Math::TRotator<double>::ZeroRotator.Pitch >> 0x20);
  *(double *)(puVar8 + 0x30) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(double *)(puVar8 + 0x38) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(undefined4 *)(puVar8 + 0x40) = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  *(undefined4 *)(puVar8 + 0x44) = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  *(undefined4 *)(puVar8 + 0x48) = local_c0;
  *(undefined4 *)(puVar8 + 0x4c) = uStack_bc;
  uVar2 = 0;
  *(undefined4 *)(puVar8 + 0x50) = uStack_b8;
  *(undefined4 *)(puVar8 + 0x54) = uStack_b4;
  *(int *)(puVar8 + 0x58) = SUB84(UE::Math::TRotator<double>::ZeroRotator.Roll,0);
  *(int *)(puVar8 + 0x5c) = (int)((ulonglong)UE::Math::TRotator<double>::ZeroRotator.Roll >> 0x20);
  uVar9 = __real_3f800000;
LAB_14df65643:
  *(ulonglong *)(puVar8 + 0x60) = CONCAT44(uVar2,uVar9);
  return;
}

// execGetRootSettingsFromRetargetProfile @ 14df65670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UIKRetargeter::execGetRootSettingsFromRetargetProfile
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uchar *puVar14;
  undefined1 auStack_178 [32];
  undefined1 local_158 [112];
  void *local_e8;
  undefined4 local_e0;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  FRetargetProfile::FRetargetProfile((FRetargetProfile *)local_158);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_158,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_158);
  }
  puVar14 = local_158;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar14 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar3 = *(undefined8 *)(puVar14 + 0x90);
  uVar1 = *(undefined8 *)(puVar14 + 0xe8);
  uVar4 = *(undefined8 *)(puVar14 + 0x98);
  uVar5 = *(undefined8 *)(puVar14 + 0xa0);
  uVar6 = *(undefined8 *)(puVar14 + 0xa8);
  uVar7 = *(undefined8 *)(puVar14 + 0xb0);
  uVar8 = *(undefined8 *)(puVar14 + 0xb8);
  uVar9 = *(undefined8 *)(puVar14 + 0xc0);
  uVar10 = *(undefined8 *)(puVar14 + 200);
  uVar11 = *(undefined8 *)(puVar14 + 0xd0);
  uVar12 = *(undefined8 *)(puVar14 + 0xd8);
  uVar13 = *(undefined8 *)(puVar14 + 0xe0);
  local_e0 = 0;
  *(undefined8 *)param_3 = *(undefined8 *)(puVar14 + 0x88);
  *(undefined8 *)((longlong)param_3 + 8) = uVar3;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar4;
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar5;
  *(undefined8 *)((longlong)param_3 + 0x20) = uVar6;
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar7;
  *(undefined8 *)((longlong)param_3 + 0x30) = uVar8;
  *(undefined8 *)((longlong)param_3 + 0x38) = uVar9;
  *(undefined8 *)((longlong)param_3 + 0x40) = uVar10;
  *(undefined8 *)((longlong)param_3 + 0x48) = uVar11;
  *(undefined8 *)((longlong)param_3 + 0x50) = uVar12;
  *(undefined8 *)((longlong)param_3 + 0x58) = uVar13;
  *(undefined8 *)((longlong)param_3 + 0x60) = uVar1;
  if (local_e8 != (void *)0x0) {
    FMemory::Free(local_e8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_158 + 0x30));
  DestructItems<FRetargetOpProfile,int>((FRetargetOpProfile *)local_158._0_8_,local_158._8_4_);
  if ((FRetargetOpProfile *)local_158._0_8_ != (FRetargetOpProfile *)0x0) {
    FMemory::Free((void *)local_158._0_8_);
  }
  return;
}

// execHasSourceIKRig @ 14df67020

void __cdecl UIKRetargeter::execHasSourceIKRig(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = *(longlong *)&param_1[1].field_0x8 != 0;
  return;
}

// execHasTargetIKRig @ 14df67050

void __cdecl UIKRetargeter::execHasTargetIKRig(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = *(longlong *)&param_1[1].field_0x10 != 0;
  return;
}

// execSetChainFKSettingsInRetargetProfile @ 14df67550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UIKRetargeter::execSetChainFKSettingsInRetargetProfile
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  longlong lVar2;
  FProperty *pFVar3;
  longlong lVar4;
  FName FVar5;
  uint uVar6;
  FTargetChainSettings *pFVar7;
  FName *pFVar8;
  uchar *puVar9;
  uint uVar10;
  longlong *plVar11;
  uchar *puVar12;
  undefined1 auStack_1b8 [32];
  FName local_198;
  undefined2 local_190 [2];
  undefined4 local_18c;
  undefined1 local_188;
  undefined8 local_184;
  undefined1 local_17c;
  undefined4 local_178;
  FName local_170;
  undefined1 local_168 [112];
  void *local_f8;
  undefined4 local_f0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  FRetargetProfile::FRetargetProfile((FRetargetProfile *)local_168);
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_168,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_168);
  }
  local_190[0] = 1;
  local_18c = 0x3f800000;
  puVar12 = local_168;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar12 = param_2->MostRecentPropertyAddress;
  }
  local_188 = 0;
  local_184 = 0x3f800000;
  local_17c = 0;
  local_178 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_190,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_190);
  }
  local_198.ComparisonIndex.Value = 0;
  local_198.Number = 0;
  plVar11 = (longlong *)local_190;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar11 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
  }
  FVar5 = local_198;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_170 = local_198;
  uVar6 = ::GetTypeHash(local_198.ComparisonIndex);
  uVar6 = uVar6 + FVar5.Number;
  if (*(int *)(puVar12 + 0x38) != *(int *)(puVar12 + 100)) {
    puVar9 = *(uchar **)(puVar12 + 0x70);
    if (*(uchar **)(puVar12 + 0x70) == (uchar *)0x0) {
      puVar9 = puVar12 + 0x68;
    }
    uVar10 = *(uint *)(puVar9 + (ulonglong)(*(int *)(puVar12 + 0x78) - 1U & uVar6) * 4);
    if (uVar10 != 0xffffffff) {
      do {
        pFVar8 = (FName *)((longlong)(int)uVar10 * 200 + *(longlong *)(puVar12 + 0x30));
        if (*pFVar8 == local_170) {
          if (pFVar8 != (FName *)0x0) {
            pFVar7 = (FTargetChainSettings *)(pFVar8 + 1);
            goto LAB_14df67724;
          }
          break;
        }
        uVar10 = pFVar8[0x18].ComparisonIndex.Value;
      } while (uVar10 != 0xffffffff);
    }
  }
  pFVar7 = TMapBase<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
           ::EmplaceByHash<FName_const_&>
                     ((TMapBase<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
                       *)(puVar12 + 0x30),uVar6,&local_170);
LAB_14df67724:
  lVar2 = *plVar11;
  lVar4 = plVar11[1];
  (pFVar7->FK).EnableFK = (bool)(char)lVar2;
  (pFVar7->FK).RotationMode = (char)((ulonglong)lVar2 >> 8);
  *(short *)&(pFVar7->FK).field_0x2 = (short)((ulonglong)lVar2 >> 0x10);
  (pFVar7->FK).RotationAlpha = (float)(int)((ulonglong)lVar2 >> 0x20);
  (pFVar7->FK).TranslationMode = (char)lVar4;
  *(int3 *)&(pFVar7->FK).field_0x9 = (int3)((ulonglong)lVar4 >> 8);
  (pFVar7->FK).TranslationAlpha = (float)(int)((ulonglong)lVar4 >> 0x20);
  lVar2 = plVar11[2];
  (pFVar7->FK).PoleVectorMatching = (float)(int)lVar2;
  (pFVar7->FK).PoleVectorMaintainOffset = (bool)(char)((ulonglong)lVar2 >> 0x20);
  *(int3 *)&(pFVar7->FK).field_0x15 = (int3)((ulonglong)lVar2 >> 0x28);
  (pFVar7->FK).PoleVectorOffset = *(float *)(plVar11 + 3);
  puVar12[0x29] = '\x01';
  local_f0 = 0;
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_168 + 0x30));
  DestructItems<FRetargetOpProfile,int>((FRetargetOpProfile *)local_168._0_8_,local_168._8_4_);
  if ((FRetargetOpProfile *)local_168._0_8_ != (FRetargetOpProfile *)0x0) {
    FMemory::Free((void *)local_168._0_8_);
  }
  return;
}

// execSetChainIKSettingsInRetargetProfile @ 14df677c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UIKRetargeter::execSetChainIKSettingsInRetargetProfile
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  FName FVar14;
  uint uVar15;
  FTargetChainSettings *pFVar16;
  FName *pFVar17;
  uchar *puVar18;
  uchar *puVar19;
  uint uVar20;
  uchar *puVar21;
  undefined1 auStack_218 [32];
  FName local_1f8;
  FName local_1f0;
  uchar local_1e8 [4];
  undefined4 local_1e4;
  undefined8 local_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double local_190;
  double dStack_188;
  double local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined1 local_170;
  undefined1 local_168 [112];
  void *local_f8;
  undefined4 local_f0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_218;
  FRetargetProfile::FRetargetProfile((FRetargetProfile *)local_168);
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_168,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_168);
  }
  local_1e8[0] = '\x01';
  local_1d8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_1d0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  puVar21 = local_168;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar21 = param_2->MostRecentPropertyAddress;
  }
  local_1c8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_1b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_198 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_1e4 = 0;
  local_1e0 = 0x3f800000;
  local_190 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  dStack_188 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_178 = 0x3f800000;
  local_180 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_174 = 0x3f800000;
  local_1a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_1a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_170 = 1;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1e8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1e8);
  }
  local_1f8.ComparisonIndex.Value = 0;
  local_1f8.Number = 0;
  puVar19 = local_1e8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar19 = param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f8);
  }
  FVar14 = local_1f8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_1f0 = local_1f8;
  uVar15 = ::GetTypeHash(local_1f8.ComparisonIndex);
  uVar15 = uVar15 + FVar14.Number;
  if (*(int *)(puVar21 + 0x38) != *(int *)(puVar21 + 100)) {
    puVar18 = *(uchar **)(puVar21 + 0x70);
    if (*(uchar **)(puVar21 + 0x70) == (uchar *)0x0) {
      puVar18 = puVar21 + 0x68;
    }
    uVar20 = *(uint *)(puVar18 + (ulonglong)(*(int *)(puVar21 + 0x78) - 1U & uVar15) * 4);
    if (uVar20 != 0xffffffff) {
      do {
        pFVar17 = (FName *)((longlong)(int)uVar20 * 200 + *(longlong *)(puVar21 + 0x30));
        if (*pFVar17 == local_1f0) {
          if (pFVar17 != (FName *)0x0) {
            pFVar16 = (FTargetChainSettings *)(pFVar17 + 1);
            goto LAB_14df679e4;
          }
          break;
        }
        uVar20 = pFVar17[0x18].ComparisonIndex.Value;
      } while (uVar20 != 0xffffffff);
    }
  }
  pFVar16 = TMapBase<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
            ::EmplaceByHash<FName_const_&>
                      ((TMapBase<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
                        *)(puVar21 + 0x30),uVar15,&local_1f0);
LAB_14df679e4:
  uVar3 = *(undefined8 *)puVar19;
  uVar4 = *(undefined8 *)(puVar19 + 8);
  (pFVar16->IK).EnableIK = (bool)(char)uVar3;
  *(int3 *)&(pFVar16->IK).field_0x1 = (int3)((ulonglong)uVar3 >> 8);
  (pFVar16->IK).BlendToSource = (float)(int)((ulonglong)uVar3 >> 0x20);
  (pFVar16->IK).BlendToSourceTranslation = (float)(int)uVar4;
  (pFVar16->IK).BlendToSourceRotation = (float)(int)((ulonglong)uVar4 >> 0x20);
  dVar5 = *(double *)(puVar19 + 0x18);
  (pFVar16->IK).BlendToSourceWeights.field0_0x0._s_0.X = *(double *)(puVar19 + 0x10);
  (pFVar16->IK).BlendToSourceWeights.field0_0x0._s_0.Y = dVar5;
  dVar5 = *(double *)(puVar19 + 0x28);
  (pFVar16->IK).BlendToSourceWeights.field0_0x0._s_0.Z = *(double *)(puVar19 + 0x20);
  (pFVar16->IK).StaticOffset.field0_0x0._s_0.X = dVar5;
  dVar5 = *(double *)(puVar19 + 0x38);
  (pFVar16->IK).StaticOffset.field0_0x0._s_0.Y = *(double *)(puVar19 + 0x30);
  (pFVar16->IK).StaticOffset.field0_0x0._s_0.Z = dVar5;
  dVar5 = *(double *)(puVar19 + 0x48);
  (pFVar16->IK).StaticLocalOffset.field0_0x0._s_0.X = *(double *)(puVar19 + 0x40);
  (pFVar16->IK).StaticLocalOffset.field0_0x0._s_0.Y = dVar5;
  dVar5 = *(double *)(puVar19 + 0x58);
  (pFVar16->IK).StaticLocalOffset.field0_0x0._s_0.Z = *(double *)(puVar19 + 0x50);
  (pFVar16->IK).StaticRotationOffset.Pitch = dVar5;
  dVar5 = *(double *)(puVar19 + 0x68);
  (pFVar16->IK).StaticRotationOffset.Yaw = *(double *)(puVar19 + 0x60);
  (pFVar16->IK).StaticRotationOffset.Roll = dVar5;
  uVar3 = *(undefined8 *)(puVar19 + 0x70);
  uVar6 = puVar19[0x78];
  uVar7 = puVar19[0x79];
  uVar8 = puVar19[0x7a];
  uVar9 = puVar19[0x7b];
  uVar10 = puVar19[0x7c];
  uVar11 = puVar19[0x7d];
  uVar12 = puVar19[0x7e];
  uVar13 = puVar19[0x7f];
  (pFVar16->IK).ScaleVertical = (float)(int)uVar3;
  (pFVar16->IK).Extension = (float)(int)((ulonglong)uVar3 >> 0x20);
  (pFVar16->IK).bAffectedByIKWarping = (bool)uVar6;
  (pFVar16->IK).field_0x79 = uVar7;
  (pFVar16->IK).field_0x7a = uVar8;
  (pFVar16->IK).field_0x7b = uVar9;
  (pFVar16->IK).field_0x7c = uVar10;
  (pFVar16->IK).field_0x7d = uVar11;
  (pFVar16->IK).field_0x7e = uVar12;
  (pFVar16->IK).field_0x7f = uVar13;
  puVar21[0x29] = '\x01';
  local_f0 = 0;
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_168 + 0x30));
  DestructItems<FRetargetOpProfile,int>((FRetargetOpProfile *)local_168._0_8_,local_168._8_4_);
  if ((FRetargetOpProfile *)local_168._0_8_ != (FRetargetOpProfile *)0x0) {
    FMemory::Free((void *)local_168._0_8_);
  }
  return;
}

// execSetChainSettingsInRetargetProfile @ 14df67ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UIKRetargeter::execSetChainSettingsInRetargetProfile(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  FTargetChainSettings *pFVar3;
  undefined1 auStack_248 [32];
  FName local_228;
  FName local_220;
  FTargetChainSettings local_218;
  undefined1 local_158 [112];
  void *local_e8;
  undefined4 local_e0;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_248;
  FRetargetProfile::FRetargetProfile((FRetargetProfile *)local_158);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_158,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_158);
  }
  local_218.FK.EnableFK = true;
  local_218.FK.RotationMode = Interpolated;
  local_218.IK.BlendToSourceWeights.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_218.IK.BlendToSourceWeights.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  puVar2 = local_158;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  local_218.IK.BlendToSourceWeights.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_218.IK.StaticOffset.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_218.IK.StaticLocalOffset.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_218.FK.RotationAlpha = 1.0;
  local_218.FK.TranslationMode = None;
  local_218.IK.StaticRotationOffset.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  local_218.IK.StaticRotationOffset.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_218.FK.TranslationAlpha = 1.0;
  local_218.FK.PoleVectorMatching = 0.0;
  local_218.IK.StaticRotationOffset.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_218.FK.PoleVectorMaintainOffset = false;
  local_218.FK.PoleVectorOffset = 0.0;
  local_218.IK.EnableIK = true;
  local_218.IK.BlendToSource = 0.0;
  local_218.IK.BlendToSourceTranslation = 1.0;
  local_218.IK.BlendToSourceRotation = 0.0;
  local_218.IK.StaticOffset.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_218.IK.StaticOffset.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_218.IK.ScaleVertical = 1.0;
  local_218.IK.StaticLocalOffset.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_218.IK.StaticLocalOffset.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_218.IK.Extension = 1.0;
  local_218.IK.bAffectedByIKWarping = true;
  local_218.SpeedPlanting.EnableSpeedPlanting = false;
  local_218.SpeedPlanting.SpeedCurveName.ComparisonIndex.Value = 0;
  local_218.SpeedPlanting.SpeedCurveName.Number = 0;
  local_218.SpeedPlanting.SpeedThreshold = 15.0;
  local_218.SpeedPlanting.UnplantStiffness = 250.0;
  local_218.SpeedPlanting.UnplantCriticalDamping = 1.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_218,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_218);
  }
  local_228.ComparisonIndex.Value = 0;
  local_228.Number = 0;
  pFVar3 = &local_218;
  if ((FTargetChainSettings *)param_2->MostRecentPropertyAddress != (FTargetChainSettings *)0x0) {
    pFVar3 = (FTargetChainSettings *)param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_228,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_228);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_220 = local_228;
  TMapBase<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
  ::Emplace<FName_const_&,FTargetChainSettings_const_&>
            ((TMapBase<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
              *)(puVar2 + 0x30),&local_220,pFVar3);
  puVar2[0x29] = '\x01';
  local_e0 = 0;
  if (local_e8 != (void *)0x0) {
    FMemory::Free(local_e8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_158 + 0x30));
  DestructItems<FRetargetOpProfile,int>((FRetargetOpProfile *)local_158._0_8_,local_158._8_4_);
  if ((FRetargetOpProfile *)local_158._0_8_ != (FRetargetOpProfile *)0x0) {
    FMemory::Free((void *)local_158._0_8_);
  }
  return;
}

// execSetChainSpeedPlantSettingsInRetargetProfile @ 14df67d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UIKRetargeter::execSetChainSpeedPlantSettingsInRetargetProfile
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  undefined8 uVar2;
  FProperty *pFVar3;
  undefined8 uVar4;
  FName FVar5;
  uint uVar6;
  FTargetChainSettings *pFVar7;
  FName *pFVar8;
  uchar *puVar9;
  uint uVar10;
  uchar *puVar11;
  uchar *puVar12;
  undefined1 auStack_1b8 [32];
  FName local_198;
  FName local_190;
  uchar local_188 [4];
  undefined8 local_184;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined1 local_168 [112];
  void *local_f8;
  undefined4 local_f0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  FRetargetProfile::FRetargetProfile((FRetargetProfile *)local_168);
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_168,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_168);
  }
  local_188[0] = '\0';
  local_184 = 0;
  puVar12 = local_168;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar12 = param_2->MostRecentPropertyAddress;
  }
  local_17c = 0x41700000;
  local_178 = 0x437a0000;
  local_174 = 0x3f800000;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_188,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_188);
  }
  local_198.ComparisonIndex.Value = 0;
  local_198.Number = 0;
  puVar11 = local_188;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar11 = param_2->MostRecentPropertyAddress;
  }
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
  }
  FVar5 = local_198;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_190 = local_198;
  uVar6 = ::GetTypeHash(local_198.ComparisonIndex);
  uVar6 = uVar6 + FVar5.Number;
  if (*(int *)(puVar12 + 0x38) != *(int *)(puVar12 + 100)) {
    puVar9 = *(uchar **)(puVar12 + 0x70);
    if (*(uchar **)(puVar12 + 0x70) == (uchar *)0x0) {
      puVar9 = puVar12 + 0x68;
    }
    uVar10 = *(uint *)(puVar9 + (ulonglong)(*(int *)(puVar12 + 0x78) - 1U & uVar6) * 4);
    if (uVar10 != 0xffffffff) {
      do {
        pFVar8 = (FName *)((longlong)(int)uVar10 * 200 + *(longlong *)(puVar12 + 0x30));
        if (*pFVar8 == local_190) {
          if (pFVar8 != (FName *)0x0) {
            pFVar7 = (FTargetChainSettings *)(pFVar8 + 1);
            goto LAB_14df67ef4;
          }
          break;
        }
        uVar10 = pFVar8[0x18].ComparisonIndex.Value;
      } while (uVar10 != 0xffffffff);
    }
  }
  pFVar7 = TMapBase<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
           ::EmplaceByHash<FName_const_&>
                     ((TMapBase<FName,FTargetChainSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTargetChainSettings,0>_>
                       *)(puVar12 + 0x30),uVar6,&local_190);
LAB_14df67ef4:
  uVar2 = *(undefined8 *)puVar11;
  uVar4 = *(undefined8 *)(puVar11 + 8);
  (pFVar7->SpeedPlanting).EnableSpeedPlanting = (bool)(char)uVar2;
  *(int3 *)&(pFVar7->SpeedPlanting).field_0x1 = (int3)((ulonglong)uVar2 >> 8);
  (pFVar7->SpeedPlanting).SpeedCurveName.ComparisonIndex =
       (FNameEntryId)(int)((ulonglong)uVar2 >> 0x20);
  *(undefined8 *)&(pFVar7->SpeedPlanting).SpeedCurveName.Number = uVar4;
  uVar2 = *(undefined8 *)(puVar11 + 0x10);
  (pFVar7->SpeedPlanting).UnplantStiffness = (float)(int)uVar2;
  (pFVar7->SpeedPlanting).UnplantCriticalDamping = (float)(int)((ulonglong)uVar2 >> 0x20);
  puVar12[0x29] = '\x01';
  local_f0 = 0;
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_168 + 0x30));
  DestructItems<FRetargetOpProfile,int>((FRetargetOpProfile *)local_168._0_8_,local_168._8_4_);
  if ((FRetargetOpProfile *)local_168._0_8_ != (FRetargetOpProfile *)0x0) {
    FMemory::Free((void *)local_168._0_8_);
  }
  return;
}

// execSetGlobalSettingsInRetargetProfile @ 14df680b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UIKRetargeter::execSetGlobalSettingsInRetargetProfile
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  uchar *puVar3;
  uchar *puVar4;
  undefined1 auStack_1a8 [32];
  uchar local_188 [8];
  undefined8 uStack_180;
  undefined4 local_178;
  undefined1 uStack_174;
  undefined4 uStack_170;
  undefined8 uStack_16c;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined1 local_148 [112];
  void *local_d8;
  undefined4 local_d0;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  FRetargetProfile::FRetargetProfile((FRetargetProfile *)local_148);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_148);
  }
  builtin_memcpy(local_188,"\x01\x01\x01\x01",5);
  puVar4 = local_148;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  uStack_180 = 0;
  local_178 = 0x3f800000;
  uStack_174 = 0;
  uStack_170 = 0;
  uStack_16c = 1;
  uStack_164 = 0;
  uStack_160 = 0x3f800000;
  local_158 = 0x3f800000;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_188);
  }
  puVar3 = local_188;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar4 + 0xf4) = *(undefined8 *)puVar3;
  *(undefined8 *)(puVar4 + 0xfc) = uVar2;
  uVar2 = *(undefined8 *)(puVar3 + 0x18);
  *(undefined8 *)(puVar4 + 0x104) = *(undefined8 *)(puVar3 + 0x10);
  *(undefined8 *)(puVar4 + 0x10c) = uVar2;
  uVar2 = *(undefined8 *)(puVar3 + 0x28);
  *(undefined8 *)(puVar4 + 0x114) = *(undefined8 *)(puVar3 + 0x20);
  *(undefined8 *)(puVar4 + 0x11c) = uVar2;
  *(undefined4 *)(puVar4 + 0x124) = *(undefined4 *)(puVar3 + 0x30);
  puVar4[0xf0] = '\x01';
  local_d0 = 0;
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_148 + 0x30));
  DestructItems<FRetargetOpProfile,int>((FRetargetOpProfile *)local_148._0_8_,local_148._8_4_);
  if ((FRetargetOpProfile *)local_148._0_8_ != (FRetargetOpProfile *)0x0) {
    FMemory::Free((void *)local_148._0_8_);
  }
  return;
}

// execSetRootSettingsInRetargetProfile @ 14df68b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UIKRetargeter::execSetRootSettingsInRetargetProfile(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  uchar *puVar3;
  uchar *puVar4;
  undefined1 auStack_1d8 [32];
  uchar local_1b8 [16];
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double dStack_168;
  double dStack_160;
  undefined8 local_158;
  undefined1 local_148 [112];
  void *local_d8;
  undefined4 local_d0;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  FRetargetProfile::FRetargetProfile((FRetargetProfile *)local_148);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_148);
  }
  local_1b8[0] = '\0';
  local_1b8[1] = '\0';
  local_1b8[2] = 0x80;
  local_1b8[3] = '?';
  local_1a8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_1a0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  puVar4 = local_148;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  local_198 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_1b8[4] = '\0';
  local_1b8[5] = '\0';
  local_1b8[6] = 0x80;
  local_1b8[7] = '?';
  local_1b8[8] = '\0';
  local_1b8[9] = '\0';
  local_1b8[10] = '\0';
  local_1b8[0xb] = '\0';
  uStack_190 = 0x3f800000;
  local_188 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_180 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_178 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dStack_160 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uStack_18c = 0x3f800000;
  dStack_170 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  dStack_168 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_158 = 0x3f800000;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1b8);
  }
  puVar3 = local_1b8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar4 + 0x88) = *(undefined8 *)puVar3;
  *(undefined8 *)(puVar4 + 0x90) = uVar2;
  uVar2 = *(undefined8 *)(puVar3 + 0x18);
  *(undefined8 *)(puVar4 + 0x98) = *(undefined8 *)(puVar3 + 0x10);
  *(undefined8 *)(puVar4 + 0xa0) = uVar2;
  uVar2 = *(undefined8 *)(puVar3 + 0x28);
  *(undefined8 *)(puVar4 + 0xa8) = *(undefined8 *)(puVar3 + 0x20);
  *(undefined8 *)(puVar4 + 0xb0) = uVar2;
  uVar2 = *(undefined8 *)(puVar3 + 0x38);
  *(undefined8 *)(puVar4 + 0xb8) = *(undefined8 *)(puVar3 + 0x30);
  *(undefined8 *)(puVar4 + 0xc0) = uVar2;
  uVar2 = *(undefined8 *)(puVar3 + 0x48);
  *(undefined8 *)(puVar4 + 200) = *(undefined8 *)(puVar3 + 0x40);
  *(undefined8 *)(puVar4 + 0xd0) = uVar2;
  uVar2 = *(undefined8 *)(puVar3 + 0x58);
  *(undefined8 *)(puVar4 + 0xd8) = *(undefined8 *)(puVar3 + 0x50);
  *(undefined8 *)(puVar4 + 0xe0) = uVar2;
  *(undefined8 *)(puVar4 + 0xe8) = *(undefined8 *)(puVar3 + 0x60);
  puVar4[0x80] = '\x01';
  local_d0 = 0;
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FTargetChainSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_148 + 0x30));
  DestructItems<FRetargetOpProfile,int>((FRetargetOpProfile *)local_148._0_8_,local_148._8_4_);
  if ((FRetargetOpProfile *)local_148._0_8_ != (FRetargetOpProfile *)0x0) {
    FMemory::Free((void *)local_148._0_8_);
  }
  return;
}

// operator() @ 150591840

bool __thiscall `UIKRetargeter::CleanOpStack'::__l2::<lambda_5>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4924496531068814053>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4924496531068814053>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

