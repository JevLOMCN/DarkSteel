// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 8

// StaticClass @ 147065c10

UClass * __cdecl UMassTestWorldSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestWorldSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestWorldSubsystem",
               &Z_Registration_Info_UClass_UMassTestWorldSubsystem.InnerSingleton,
               StaticRegisterNativesUMassTestWorldSubsystem,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMassTestWorldSubsystem>,
               InternalVTableHelperCtorCaller<UMassTestWorldSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestWorldSubsystem.InnerSingleton;
}

// UMassTestWorldSubsystem @ 1470f6810

UMassTestWorldSubsystem * __thiscall
UMassTestWorldSubsystem::UMassTestWorldSubsystem
          (UMassTestWorldSubsystem *this,FVTableHelper *param_1)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMassTestWorldSubsystem__6B_;
  this->AccessDetector = (atomic<unsigned_int>)0x0;
  this->Number = 0;
  return this;
}

// UMassTestWorldSubsystem @ 1470f6840

UMassTestWorldSubsystem * __thiscall
UMassTestWorldSubsystem::UMassTestWorldSubsystem(UMassTestWorldSubsystem *this)

{
  UWorldSubsystem::UWorldSubsystem((UWorldSubsystem *)this);
  this->_padding_ = (longlong)&___7UMassTestWorldSubsystem__6B_;
  this->AccessDetector = (atomic<unsigned_int>)0x0;
  this->Number = 0;
  return this;
}

// ~UMassTestWorldSubsystem @ 1470f8f80

void __thiscall UMassTestWorldSubsystem::~UMassTestWorldSubsystem(UMassTestWorldSubsystem *this)

{
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ = (longlong)&___7UMassTestWorldSubsystem__6B_;
  if ((this->AccessDetector).AtomicValue != (atomic<unsigned_int>)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicValue.load(std::memory_order_relaxed) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MTAccessDetector.h"
                       ,0x3a,L"Detector cannot be destroyed while other threads access it");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UWorldSubsystem::~UWorldSubsystem((UWorldSubsystem *)this);
  return;
}

// GetPrivateStaticClass @ 147121680

UClass * __cdecl UMassTestWorldSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassTestWorldSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"MassTestWorldSubsystem",
               &Z_Registration_Info_UClass_UMassTestWorldSubsystem.InnerSingleton,
               StaticRegisterNativesUMassTestWorldSubsystem,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMassTestWorldSubsystem>,
               InternalVTableHelperCtorCaller<UMassTestWorldSubsystem>,local_res8,
               UWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassTestWorldSubsystem.InnerSingleton;
}

// Read @ 147199f90

int __thiscall UMassTestWorldSubsystem::Read(UMassTestWorldSubsystem *this)

{
  int iVar1;
  TScopedReaderAccessDetector<FRWAccessDetector_const_> local_20;
  TScopedReaderAccessDetector<FRWAccessDetector_const_> *local_18;
  
  TScopedReaderAccessDetector<FRWAccessDetector_const_>::
  TScopedReaderAccessDetector<FRWAccessDetector_const_>(&local_20,&this->AccessDetector);
  local_18 = &local_20;
  iVar1 = this->Number;
  FRWAccessDetector::ReleaseReadAccess(local_20.AccessDetector);
  return iVar1;
}

// StaticRegisterNativesUMassTestWorldSubsystem @ 1471abbe0

void __cdecl UMassTestWorldSubsystem::StaticRegisterNativesUMassTestWorldSubsystem(void)

{
  return;
}

// Write @ 1471b20e0

void __thiscall UMassTestWorldSubsystem::Write(UMassTestWorldSubsystem *this,int param_1)

{
  TScopedWriterDetector<FRWAccessDetector> local_18;
  TScopedWriterDetector<FRWAccessDetector> *local_10;
  
  TScopedWriterDetector<FRWAccessDetector>::TScopedWriterDetector<FRWAccessDetector>
            (&local_18,&this->AccessDetector);
  local_10 = &local_18;
  this->Number = param_1;
  FRWAccessDetector::ReleaseWriteAccess(local_18.AccessDetector);
  return;
}

