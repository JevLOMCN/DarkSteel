// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationSharing
// Functions: 4

// StaticStruct @ 14e2a7ad0

UScriptStruct * __cdecl FTickAnimationSharingFunction::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTickAnimationSharingFunction.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationSharing();
    Z_Registration_Info_UScriptStruct_FTickAnimationSharingFunction.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTickAnimationSharingFunction,(UObject *)pUVar1,
                         L"TickAnimationSharingFunction");
  }
  return Z_Registration_Info_UScriptStruct_FTickAnimationSharingFunction.OuterSingleton;
}

// DiagnosticContext @ 14e2aec10

FName __thiscall
FTickAnimationSharingFunction::DiagnosticContext(FTickAnimationSharingFunction *this,bool param_1)

{
  undefined7 in_register_00000011;
  FName this_00;
  
  this_00._1_7_ = in_register_00000011;
  this_00.ComparisonIndex.Value._0_1_ = param_1;
  ::FName::FName((FName *)this_00,L"TickAnimationSharing");
  return this_00;
}

// DiagnosticMessage @ 14e2aec40

FString * __thiscall
FTickAnimationSharingFunction::DiagnosticMessage
          (FTickAnimationSharingFunction *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FTickAnimationSharingFunction");
  return __return_storage_ptr__;
}

// ExecuteTick @ 14e2aee10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTickAnimationSharingFunction::ExecuteTick
          (FTickAnimationSharingFunction *this,float param_1,ELevelTick param_2,Type param_3,
          TRefCountPtr<FBaseGraphTask> *param_4)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Manager != (UAnimationSharingManager *)0x0) {
    UAnimationSharingManager::Tick(this->Manager,param_1);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4097645640744435884>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Developer\\AnimationSharing\\Source\\AnimationSharing\\Private\\AnimationSharingManager.cpp"
                     ,0xac,"Manager");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

