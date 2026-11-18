// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// StaticClass @ 14741e520

UClass * __cdecl UAnimCurveCompressionCodec::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCurveCompressionCodec.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCurveCompressionCodec",
               &Z_Registration_Info_UClass_UAnimCurveCompressionCodec.InnerSingleton,
               StaticRegisterNativesUAnimCurveCompressionCodec,0x28,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UAnimCurveCompressionCodec>,
               InternalVTableHelperCtorCaller<UAnimCurveCompressionCodec>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCurveCompressionCodec.InnerSingleton;
}

// UAnimCurveCompressionCodec @ 147434e00

UAnimCurveCompressionCodec * __thiscall
UAnimCurveCompressionCodec::UAnimCurveCompressionCodec
          (UAnimCurveCompressionCodec *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAnimCurveCompressionCodec__6B_;
  return this;
}

// UAnimCurveCompressionCodec @ 147434e30

UAnimCurveCompressionCodec * __thiscall
UAnimCurveCompressionCodec::UAnimCurveCompressionCodec
          (UAnimCurveCompressionCodec *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAnimCurveCompressionCodec__6B_;
  return this;
}

// ~UAnimCurveCompressionCodec @ 147436a60

void __thiscall
UAnimCurveCompressionCodec::~UAnimCurveCompressionCodec(UAnimCurveCompressionCodec *this)

{
  *(undefined ***)this = &___7UAnimCurveCompressionCodec__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// DecompressCurve @ 1474456f0

float __thiscall
UAnimCurveCompressionCodec::DecompressCurve
          (UAnimCurveCompressionCodec *this,FCompressedAnimSequence *param_1,ushort param_2,
          float param_3)

{
  return 0.0;
}

// DecompressCurve @ 147445700

float __thiscall
UAnimCurveCompressionCodec::DecompressCurve
          (UAnimCurveCompressionCodec *this,FCompressedAnimSequence *param_1,FName param_2,
          float param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimCurveCompressionCodec.h"
             ,0x5c,L"Pure virtual not implemented (%s)");
  return 0.0;
}

// DecompressCurves @ 147445c10

void __thiscall
UAnimCurveCompressionCodec::DecompressCurves
          (UAnimCurveCompressionCodec *this,FCompressedAnimSequence *param_1,FBlendedCurve *param_2,
          float param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimCurveCompressionCodec.h"
             ,0x55,L"Pure virtual not implemented (%s)");
  return;
}

// GetCodec @ 1474546a0

UAnimCurveCompressionCodec * __thiscall
UAnimCurveCompressionCodec::GetCodec(UAnimCurveCompressionCodec *this,FString *param_1)

{
  return this;
}

// GetPrivateStaticClass @ 147462120

UClass * __cdecl UAnimCurveCompressionCodec::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCurveCompressionCodec.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCurveCompressionCodec",
               &Z_Registration_Info_UClass_UAnimCurveCompressionCodec.InnerSingleton,
               StaticRegisterNativesUAnimCurveCompressionCodec,0x28,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UAnimCurveCompressionCodec>,
               InternalVTableHelperCtorCaller<UAnimCurveCompressionCodec>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCurveCompressionCodec.InnerSingleton;
}

// Serialize @ 147476170

void __thiscall
UAnimCurveCompressionCodec::Serialize(UAnimCurveCompressionCodec *this,FArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FGuid local_18;
  
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))
            (param_1,&FFortniteReleaseBranchCustomObjectVersion::GUID);
  iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID)
  ;
  if (iVar3 < 0x77) {
    iVar3 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FFortniteReleaseBranchCustomObjectVersion::GUID);
    if (6 < iVar3) {
      if ((param_1->field_0x28 & 1) == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ar.IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimCurveCompressionCodec.cpp"
                           ,0x1f,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      local_18.A = 0;
      local_18.B = 0;
      local_18.C = 0;
      local_18.D = 0;
      ::operator<<(param_1,&local_18);
    }
  }
  return;
}

// Serialize @ 147476220

void __thiscall
UAnimCurveCompressionCodec::Serialize
          (UAnimCurveCompressionCodec *this,FStructuredArchiveRecord param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FArchiveState *this_00;
  FSlotBase local_res10 [3];
  FGuid local_18;
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,(FArchive *)this_00);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(this_00->_padding_ + 0x230))
            (this_00,&FFortniteReleaseBranchCustomObjectVersion::GUID);
  iVar3 = FArchiveState::CustomVer(this_00,&FFortniteMainBranchObjectVersion::GUID);
  if (iVar3 < 0x77) {
    iVar3 = FArchiveState::CustomVer(this_00,&FFortniteReleaseBranchCustomObjectVersion::GUID);
    if (6 < iVar3) {
      if (this_00->ArIsLoading == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ar.IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimCurveCompressionCodec.cpp"
                           ,0x1f,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      local_18.A = 0;
      local_18.B = 0;
      local_18.C = 0;
      local_18.D = 0;
      ::operator<<((FArchive *)this_00,&local_18);
    }
  }
  return;
}

// StaticRegisterNativesUAnimCurveCompressionCodec @ 14747b2b0

void __cdecl UAnimCurveCompressionCodec::StaticRegisterNativesUAnimCurveCompressionCodec(void)

{
  return;
}

// ValidateCompressedData @ 147482da0

bool __thiscall
UAnimCurveCompressionCodec::ValidateCompressedData
          (UAnimCurveCompressionCodec *this,UObject *param_1,FCompressedAnimSequence *param_2)

{
  return true;
}

