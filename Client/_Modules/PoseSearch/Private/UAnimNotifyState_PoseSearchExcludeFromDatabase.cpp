// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 6

// StaticClass @ 14a89f490

UClass * __cdecl UAnimNotifyState_PoseSearchExcludeFromDatabase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"AnimNotifyState_PoseSearchExcludeFromDatabase",
               &Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase.
                InnerSingleton,StaticRegisterNativesUAnimNotifyState_PoseSearchExcludeFromDatabase,
               0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimNotifyState_PoseSearchExcludeFromDatabase>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchExcludeFromDatabase>,
               local_res8,UAnimNotifyState_PoseSearchBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase.InnerSingleton;
}

// UAnimNotifyState_PoseSearchExcludeFromDatabase @ 14a8acb40

UAnimNotifyState_PoseSearchExcludeFromDatabase * __thiscall
UAnimNotifyState_PoseSearchExcludeFromDatabase::UAnimNotifyState_PoseSearchExcludeFromDatabase
          (UAnimNotifyState_PoseSearchExcludeFromDatabase *this,FVTableHelper *param_1)

{
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  *(undefined ***)this = &___7UAnimNotifyState_PoseSearchExcludeFromDatabase__6B_;
  return this;
}

// UAnimNotifyState_PoseSearchExcludeFromDatabase @ 14a8acb70

UAnimNotifyState_PoseSearchExcludeFromDatabase * __thiscall
UAnimNotifyState_PoseSearchExcludeFromDatabase::UAnimNotifyState_PoseSearchExcludeFromDatabase
          (UAnimNotifyState_PoseSearchExcludeFromDatabase *this,FObjectInitializer *param_1)

{
  UAnimNotifyState::UAnimNotifyState((UAnimNotifyState *)this,param_1);
  *(undefined ***)this = &___7UAnimNotifyState_PoseSearchExcludeFromDatabase__6B_;
  return this;
}

// ~UAnimNotifyState_PoseSearchExcludeFromDatabase @ 14a8adf50

void __thiscall
UAnimNotifyState_PoseSearchExcludeFromDatabase::~UAnimNotifyState_PoseSearchExcludeFromDatabase
          (UAnimNotifyState_PoseSearchExcludeFromDatabase *this)

{
  *(undefined ***)this = &___7UAnimNotifyState_PoseSearchBase__6B_;
  UAnimNotifyState::~UAnimNotifyState((UAnimNotifyState *)this);
  return;
}

// GetPrivateStaticClass @ 14a8bc910

UClass * __cdecl UAnimNotifyState_PoseSearchExcludeFromDatabase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"AnimNotifyState_PoseSearchExcludeFromDatabase",
               &Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase.
                InnerSingleton,StaticRegisterNativesUAnimNotifyState_PoseSearchExcludeFromDatabase,
               0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimNotifyState_PoseSearchExcludeFromDatabase>,
               InternalVTableHelperCtorCaller<UAnimNotifyState_PoseSearchExcludeFromDatabase>,
               local_res8,UAnimNotifyState_PoseSearchBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyState_PoseSearchExcludeFromDatabase.InnerSingleton;
}

// StaticRegisterNativesUAnimNotifyState_PoseSearchExcludeFromDatabase @ 14a8ce250

void __cdecl
UAnimNotifyState_PoseSearchExcludeFromDatabase::
StaticRegisterNativesUAnimNotifyState_PoseSearchExcludeFromDatabase(void)

{
  return;
}

