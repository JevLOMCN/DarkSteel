// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 7

// GetTestFlags @ 14d77d780

EAutomationTestFlags __thiscall
FMediaIODeinterlacerTests::GetTestFlags(FMediaIODeinterlacerTests *this)

{
  return EngineFilter|EditorContext;
}

// GetTestSourceFileName @ 14d77d790

FString * __thiscall
FMediaIODeinterlacerTests::GetTestSourceFileName
          (FMediaIODeinterlacerTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\Tests\\MediaIODeinterlacerTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14d77d7c0

int __thiscall FMediaIODeinterlacerTests::GetTestSourceFileLine(FMediaIODeinterlacerTests *this)

{
  return 0xbe;
}

// GetTestSourceFileName @ 14d77d7d0

FString * __thiscall
FMediaIODeinterlacerTests::GetTestSourceFileName
          (FMediaIODeinterlacerTests *this,FString *__return_storage_ptr__,FString *param_1)

{
  (**(code **)(*(longlong *)this + 0xb8))();
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 14d77d800

int __thiscall
FMediaIODeinterlacerTests::GetTestSourceFileLine(FMediaIODeinterlacerTests *this,FString *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d77d803. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(*(longlong *)this + 200))();
  return iVar1;
}

// GetBeautifiedTestName @ 14d77d810

FString * __thiscall
FMediaIODeinterlacerTests::GetBeautifiedTestName
          (FMediaIODeinterlacerTests *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Plugins.MediaIO.Deinterlace");
  return __return_storage_ptr__;
}

// Define @ 14d77d840

void __thiscall FMediaIODeinterlacerTests::Define(FMediaIODeinterlacerTests *this)

{
  FString local_68;
  FSourceLocation local_58;
  code *local_38 [2];
  undefined **local_28;
  FMediaIODeinterlacerTests *local_20;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FMediaIODeinterlacerTests::Define'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FMediaIODeinterlacerTests::Define'::__l2::<lambda_1>,void>::Call
  ;
  local_10 = 0;
  local_20 = this;
  ::FString::FString(&local_68,"BobDeinterlace");
  local_58.Impl._Line = 0xc1;
  local_58.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\Tests\\MediaIODeinterlacerTests.cpp"
  ;
  local_58.Impl._Function = "void __cdecl FMediaIODeinterlacerTests::Define(void)";
  local_58.Impl._Column = 2;
  FAutomationSpecBase::It
            ((FAutomationSpecBase *)this,&local_68,(TFunction<void___cdecl(void)> *)local_38,
             &local_58);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FMediaIODeinterlacerTests::Define'::`2'::<lambda_2>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FMediaIODeinterlacerTests::Define'::__l2::<lambda_2>,void>::Call
  ;
  local_20 = this;
  ::FString::FString(&local_68,"BlendDeinterlace");
  local_58.Impl._Line = 0xc6;
  local_58.Impl._Column = 2;
  local_58.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\Tests\\MediaIODeinterlacerTests.cpp"
  ;
  local_58.Impl._Function = "void __cdecl FMediaIODeinterlacerTests::Define(void)";
  FAutomationSpecBase::It
            ((FAutomationSpecBase *)this,&local_68,(TFunction<void___cdecl(void)> *)local_38,
             &local_58);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FMediaIODeinterlacerTests::Define'::`2'::<lambda_3>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FMediaIODeinterlacerTests::Define'::__l2::<lambda_3>,void>::Call
  ;
  local_20 = this;
  ::FString::FString(&local_68,"DiscardDeinterlace");
  local_58.Impl._Line = 0xcb;
  local_58.Impl._Column = 2;
  local_58.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\Tests\\MediaIODeinterlacerTests.cpp"
  ;
  local_58.Impl._Function = "void __cdecl FMediaIODeinterlacerTests::Define(void)";
  FAutomationSpecBase::It
            ((FAutomationSpecBase *)this,&local_68,(TFunction<void___cdecl(void)> *)local_38,
             &local_58);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FMediaIODeinterlacerTests::Define'::`2'::<lambda_4>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FMediaIODeinterlacerTests::Define'::__l2::<lambda_4>,void>::Call
  ;
  local_20 = this;
  ::FString::FString(&local_68,"DiscardDeinterlaceBottomFieldOrder");
  local_58.Impl._Line = 0xd0;
  local_58.Impl._Column = 2;
  local_58.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\Tests\\MediaIODeinterlacerTests.cpp"
  ;
  local_58.Impl._Function = "void __cdecl FMediaIODeinterlacerTests::Define(void)";
  FAutomationSpecBase::It
            ((FAutomationSpecBase *)this,&local_68,(TFunction<void___cdecl(void)> *)local_38,
             &local_58);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return;
}

