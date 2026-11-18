// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b50bf10

UClass * __cdecl UDS_M_CommonLevelGauge_PlayerSkillLevelup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_CommonLevelGauge_PlayerSkillLevelup.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_CommonLevelGauge_PlayerSkillLevelup",
               &Z_Registration_Info_UClass_UDS_M_CommonLevelGauge_PlayerSkillLevelup.InnerSingleton,
               StaticRegisterNativesUDS_M_CommonLevelGauge_PlayerSkillLevelup,0x1a8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_M_CommonLevelGauge_PlayerSkillLevelup>,
               InternalVTableHelperCtorCaller<UDS_M_CommonLevelGauge_PlayerSkillLevelup>,local_res8,
               UDS_M_CommonLevelGauge::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_CommonLevelGauge_PlayerSkillLevelup.InnerSingleton;
}

// UDS_M_CommonLevelGauge_PlayerSkillLevelup @ 14b510080

UDS_M_CommonLevelGauge_PlayerSkillLevelup * __thiscall
UDS_M_CommonLevelGauge_PlayerSkillLevelup::UDS_M_CommonLevelGauge_PlayerSkillLevelup
          (UDS_M_CommonLevelGauge_PlayerSkillLevelup *this,FVTableHelper *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined ***)this = &___7UDS_M_CommonLevelGauge_PlayerSkillLevelup__6B_;
  return this;
}

// UDS_M_CommonLevelGauge_PlayerSkillLevelup @ 14b5100b0

UDS_M_CommonLevelGauge_PlayerSkillLevelup * __thiscall
UDS_M_CommonLevelGauge_PlayerSkillLevelup::UDS_M_CommonLevelGauge_PlayerSkillLevelup
          (UDS_M_CommonLevelGauge_PlayerSkillLevelup *this,FObjectInitializer *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined ***)this = &___7UDS_M_CommonLevelGauge_PlayerSkillLevelup__6B_;
  return this;
}

// ~UDS_M_CommonLevelGauge_PlayerSkillLevelup @ 14b5128e0

void __thiscall
UDS_M_CommonLevelGauge_PlayerSkillLevelup::~UDS_M_CommonLevelGauge_PlayerSkillLevelup
          (UDS_M_CommonLevelGauge_PlayerSkillLevelup *this)

{
  *(undefined ***)this = &___7UDS_M_CommonLevelGauge__6B_;
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b515180

UClass * __cdecl UDS_M_CommonLevelGauge_PlayerSkillLevelup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_CommonLevelGauge_PlayerSkillLevelup.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_CommonLevelGauge_PlayerSkillLevelup",
               &Z_Registration_Info_UClass_UDS_M_CommonLevelGauge_PlayerSkillLevelup.InnerSingleton,
               StaticRegisterNativesUDS_M_CommonLevelGauge_PlayerSkillLevelup,0x1a8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_M_CommonLevelGauge_PlayerSkillLevelup>,
               InternalVTableHelperCtorCaller<UDS_M_CommonLevelGauge_PlayerSkillLevelup>,local_res8,
               UDS_M_CommonLevelGauge::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_CommonLevelGauge_PlayerSkillLevelup.InnerSingleton;
}

// GetViewModelContext @ 14b516b20

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_M_CommonLevelGauge_PlayerSkillLevelup::GetViewModelContext
          (UDS_M_CommonLevelGauge_PlayerSkillLevelup *this,
          TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (FDS_ViewModelContext_ModelBase *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUDS_M_CommonLevelGauge_PlayerSkillLevelup @ 14b516bb0

void __cdecl
UDS_M_CommonLevelGauge_PlayerSkillLevelup::
StaticRegisterNativesUDS_M_CommonLevelGauge_PlayerSkillLevelup(void)

{
  return;
}

// GetDefaultContextViewModel @ 14bcf6420

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_M_CommonLevelGauge_PlayerSkillLevelup::GetDefaultContextViewModel
          (UDS_M_CommonLevelGauge_PlayerSkillLevelup *this,
          TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__,
          EDS_PlayerSkillType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TSharedPtr<FDS_ViewModelContext_ModelBase,1> *pTVar4;
  UObject *pUVar5;
  UDS_PlayerSkillData *pUVar6;
  FWeakObjectPtr local_res8;
  TSharedPtr<FDS_ViewModelContext_LevelExpGauge,1> local_18;
  
  MakeContext<FDS_ViewModelContext_LevelExpGauge>(&local_18);
  if (local_18.Object == (FDS_ViewModelContext_LevelExpGauge *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FDS_ViewModelContext_ModelBase,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  *(undefined4 *)&(local_18.Object)->_padding_ = 0x10d;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UDS_M_CommonLevelGauge_PlayerSkillLevelup *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  (((TObjectPtr<UDS_ModelBase> *)&(local_18.Object)->_padding_)->field0_0x0).DebugPtr =
       (UDS_ModelBase *)this;
  UDS_PlayerSkillData::GetMainPlayerData((EDS_PlayerSkillType)&local_res8);
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    pUVar5 = FWeakObjectPtr::Get(&local_res8);
    (local_18.Object)->CurLevel = *(int *)&pUVar5[2].field_0x14;
    pUVar6 = (UDS_PlayerSkillData *)FWeakObjectPtr::Get(&local_res8);
    iVar3 = UDS_PlayerSkillData::GetMaxLevel(pUVar6);
    (local_18.Object)->LimitLevel = iVar3;
    pUVar6 = (UDS_PlayerSkillData *)FWeakObjectPtr::Get(&local_res8);
    iVar3 = UDS_PlayerSkillData::GetMaxLevel(pUVar6);
    (local_18.Object)->MaxLevel = iVar3;
    if (0 < (local_18.Object)->MaxExp) {
      (local_18.Object)->CurExpRatio =
           (float)(local_18.Object)->CurExp / (float)(local_18.Object)->MaxExp;
      __return_storage_ptr__->Object = (FDS_ViewModelContext_ModelBase *)local_18.Object;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           local_18.SharedReferenceCount.ReferenceController;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      goto LAB_14bcf6569;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6291604507084193677>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_CommonLevelGauge.cpp"
                       ,0x73,"context->MaxExp > 0");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FDS_ViewModelContext_ModelBase,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = (FDS_ViewModelContext_ModelBase *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_14bcf6569:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

