// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 7

// StaticClass @ 14a895030

UClass * __cdecl UAnimNotifyState_PoseSearchBranchIn::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBranchIn.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"AnimNotifyState_PoseSearchBranchIn",
               &Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBranchIn.InnerSingleton,
               StaticRegisterNativesUAnimNotifyState_PoseSearchBranchIn,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotifyState_PoseSearchBranchIn>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchBranchIn>,local_res8,
               UAnimNotifyState_PoseSearchBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBranchIn.InnerSingleton;
}

// UAnimNotifyState_PoseSearchBranchIn @ 14a8acae0

UAnimNotifyState_PoseSearchBranchIn * __thiscall
UAnimNotifyState_PoseSearchBranchIn::UAnimNotifyState_PoseSearchBranchIn
          (UAnimNotifyState_PoseSearchBranchIn *this,FVTableHelper *param_1)

{
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchBranchIn__6B_;
  (this->Database).field0_0x0.DebugPtr = (UPoseSearchDatabase *)0x0;
  return this;
}

// UAnimNotifyState_PoseSearchBranchIn @ 14a8acb10

UAnimNotifyState_PoseSearchBranchIn * __thiscall
UAnimNotifyState_PoseSearchBranchIn::UAnimNotifyState_PoseSearchBranchIn
          (UAnimNotifyState_PoseSearchBranchIn *this,FObjectInitializer *param_1)

{
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchBranchIn__6B_;
  (this->Database).field0_0x0.DebugPtr = (UPoseSearchDatabase *)0x0;
  return this;
}

// ~UAnimNotifyState_PoseSearchBranchIn @ 14a8adf30

void __thiscall
UAnimNotifyState_PoseSearchBranchIn::~UAnimNotifyState_PoseSearchBranchIn
          (UAnimNotifyState_PoseSearchBranchIn *this)

{
  this->_padding_ = (longlong)&___7UAnimNotifyState_PoseSearchBase__6B_;
  UAnimNotifyState::~UAnimNotifyState((UAnimNotifyState *)this);
  return;
}

// GetBranchInId @ 14a8ba010

uint __thiscall
UAnimNotifyState_PoseSearchBranchIn::GetBranchInId(UAnimNotifyState_PoseSearchBranchIn *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  int iVar6;
  wchar_t *pwVar7;
  FString local_18;
  
  pFVar5 = UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0,None)
  ;
  iVar1 = (pFVar5->Data).ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar7 = L"";
    iVar6 = 0;
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BranchInId != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchAnimNotifies.cpp"
                         ,10,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  return uVar4;
}

// GetPrivateStaticClass @ 14a8bc850

UClass * __cdecl UAnimNotifyState_PoseSearchBranchIn::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBranchIn.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"AnimNotifyState_PoseSearchBranchIn",
               &Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBranchIn.InnerSingleton,
               StaticRegisterNativesUAnimNotifyState_PoseSearchBranchIn,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotifyState_PoseSearchBranchIn>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchBranchIn>,local_res8,
               UAnimNotifyState_PoseSearchBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchBranchIn.InnerSingleton;
}

// StaticRegisterNativesUAnimNotifyState_PoseSearchBranchIn @ 14a8ce240

void __cdecl
UAnimNotifyState_PoseSearchBranchIn::StaticRegisterNativesUAnimNotifyState_PoseSearchBranchIn(void)

{
  return;
}

