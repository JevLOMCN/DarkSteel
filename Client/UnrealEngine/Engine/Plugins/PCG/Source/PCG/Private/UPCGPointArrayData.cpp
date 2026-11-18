// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 67

// StaticClass @ 149852c80

UClass * __cdecl UPCGPointArrayData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPointArrayData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPointArrayData",
               &Z_Registration_Info_UClass_UPCGPointArrayData.InnerSingleton,
               StaticRegisterNativesUPCGPointArrayData,0x360,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGPointArrayData>,
               InternalVTableHelperCtorCaller<UPCGPointArrayData>,local_res8,
               UPCGBasePointData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPointArrayData.InnerSingleton;
}

// FlattenPropertyIfNeeded<1> @ 149861c20

bool __thiscall UPCGPointArrayData::FlattenPropertyIfNeeded<1>(UPCGPointArrayData *this)

{
  FPCGPointArray *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FPCGPointArrayProperty<UE::Math::TTransform<double>_> *this_01;
  uint uVar4;
  
  uVar4 = this->InheritedProperties;
  if ((uVar4 & 1) == 0) {
    return false;
  }
  if (((this->ParentData).field0_0x0.DebugPtr == (UPCGPointArrayData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                         ,0x50,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  this_01 = GetProperty<1>((this->ParentData).field0_0x0.DebugPtr,true);
  this_00 = &this->PointArray;
  if ((FPCGPointArray *)this_01 == this_00) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1684344263476773055>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                       ,0xbf,"InheritedProperty != Property");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    bVar2 = FPCGPointArrayProperty<UE::Math::TTransform<double>_>::IsAllocated(this_01);
    if (bVar2) {
      FPCGPointArrayProperty<UE::Math::TTransform<double>_>::SetNum
                (&this_00->Transform,(this->PointArray).Transform.NumValues,true,false);
    }
    if ((this_01->NumValues != (this->PointArray).Transform.NumValues) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InheritedProperty->Num() == Property->Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                           ,0xc6,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    FPCGPointArrayProperty<UE::Math::TTransform<double>_>::CopyTo
              (this_01,&this_00->Transform,0,0,(this->PointArray).Transform.NumValues);
  }
  uVar4 = uVar4 & 0xfffffffe;
  this->InheritedProperties = uVar4;
  if (uVar4 == 0) {
    (this->ParentData).field0_0x0.DebugPtr = (UPCGPointArrayData *)0x0;
  }
  return true;
}

// FlattenPropertyIfNeeded<2> @ 149861d90

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall UPCGPointArrayData::FlattenPropertyIfNeeded<2>(UPCGPointArrayData *this)

{
  FPCGPointArrayProperty<float> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FPCGPointArrayProperty<float> *this_01;
  uint uVar5;
  
  uVar5 = this->InheritedProperties;
  if ((uVar5 & 2) == 0) {
    return false;
  }
  if ((this->ParentData).field0_0x0.DebugPtr == (UPCGPointArrayData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                       ,0x50,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  this_01 = GetProperty<2>((this->ParentData).field0_0x0.DebugPtr,true);
  this_00 = &(this->PointArray).Density;
  if (this_01 == this_00) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1684344263476773055>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                       ,0xbf,"InheritedProperty != Property");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    bVar3 = FPCGPointArrayProperty<float>::IsAllocated(this_01);
    if ((bVar3) &&
       (iVar1 = (this->PointArray).Density.NumValues,
       (this->PointArray).Density.Values.ArrayNum != iVar1)) {
      TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&this_00->Values,iVar1,Default)
      ;
    }
    if (this_01->NumValues != (this->PointArray).Density.NumValues) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InheritedProperty->Num() == Property->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                         ,0xc6,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    FPCGPointArrayProperty<float>::CopyTo(this_01,this_00,0,0,(this->PointArray).Density.NumValues);
  }
  uVar5 = uVar5 & 0xfffffffd;
  this->InheritedProperties = uVar5;
  if (uVar5 == 0) {
    (this->ParentData).field0_0x0.DebugPtr = (UPCGPointArrayData *)0x0;
  }
  return true;
}

// FlattenPropertyIfNeeded<4> @ 149861ee0

bool __thiscall UPCGPointArrayData::FlattenPropertyIfNeeded<4>(UPCGPointArrayData *this)

{
  FPCGPointArrayProperty<UE::Math::TVector<double>_> *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FPCGPointArrayProperty<UE::Math::TVector<double>_> *this_01;
  uint uVar4;
  
  uVar4 = this->InheritedProperties;
  if ((uVar4 & 4) == 0) {
    return false;
  }
  if (((this->ParentData).field0_0x0.DebugPtr == (UPCGPointArrayData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                         ,0x50,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  this_01 = GetProperty<4>((this->ParentData).field0_0x0.DebugPtr,true);
  this_00 = &(this->PointArray).BoundsMin;
  if (this_01 == this_00) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1684344263476773055>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                       ,0xbf,"InheritedProperty != Property");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    bVar2 = FPCGPointArrayProperty<UE::Math::TVector<double>_>::IsAllocated(this_01);
    if (bVar2) {
      FPCGPointArrayProperty<UE::Math::TVector<double>_>::SetNum
                (this_00,(this->PointArray).BoundsMin.NumValues,true,false);
    }
    if ((this_01->NumValues != (this->PointArray).BoundsMin.NumValues) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InheritedProperty->Num() == Property->Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                           ,0xc6,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    FPCGPointArrayProperty<UE::Math::TVector<double>_>::CopyTo
              (this_01,this_00,0,0,(this->PointArray).BoundsMin.NumValues);
  }
  uVar4 = uVar4 & 0xfffffffb;
  this->InheritedProperties = uVar4;
  if (uVar4 == 0) {
    (this->ParentData).field0_0x0.DebugPtr = (UPCGPointArrayData *)0x0;
  }
  return true;
}

// FlattenPropertyIfNeeded<8> @ 149862050

bool __thiscall UPCGPointArrayData::FlattenPropertyIfNeeded<8>(UPCGPointArrayData *this)

{
  FPCGPointArrayProperty<UE::Math::TVector<double>_> *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FPCGPointArrayProperty<UE::Math::TVector<double>_> *this_01;
  uint uVar4;
  
  uVar4 = this->InheritedProperties;
  if ((uVar4 & 8) == 0) {
    return false;
  }
  if (((this->ParentData).field0_0x0.DebugPtr == (UPCGPointArrayData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                         ,0x50,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  this_01 = GetProperty<8>((this->ParentData).field0_0x0.DebugPtr,true);
  this_00 = &(this->PointArray).BoundsMax;
  if (this_01 == this_00) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1684344263476773055>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                       ,0xbf,"InheritedProperty != Property");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    bVar2 = FPCGPointArrayProperty<UE::Math::TVector<double>_>::IsAllocated(this_01);
    if (bVar2) {
      FPCGPointArrayProperty<UE::Math::TVector<double>_>::SetNum
                (this_00,(this->PointArray).BoundsMax.NumValues,true,false);
    }
    if ((this_01->NumValues != (this->PointArray).BoundsMax.NumValues) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InheritedProperty->Num() == Property->Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                           ,0xc6,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    FPCGPointArrayProperty<UE::Math::TVector<double>_>::CopyTo
              (this_01,this_00,0,0,(this->PointArray).BoundsMax.NumValues);
  }
  uVar4 = uVar4 & 0xfffffff7;
  this->InheritedProperties = uVar4;
  if (uVar4 == 0) {
    (this->ParentData).field0_0x0.DebugPtr = (UPCGPointArrayData *)0x0;
  }
  return true;
}

// FlattenPropertyIfNeeded<16> @ 1498621c0

bool __thiscall UPCGPointArrayData::FlattenPropertyIfNeeded<16>(UPCGPointArrayData *this)

{
  FPCGPointArrayProperty<UE::Math::TVector4<double>_> *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FPCGPointArrayProperty<UE::Math::TVector4<double>_> *this_01;
  uint uVar4;
  
  uVar4 = this->InheritedProperties;
  if ((uVar4 & 0x10) == 0) {
    return false;
  }
  if (((this->ParentData).field0_0x0.DebugPtr == (UPCGPointArrayData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                         ,0x50,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  this_01 = GetProperty<16>((this->ParentData).field0_0x0.DebugPtr,true);
  this_00 = &(this->PointArray).Color;
  if (this_01 == this_00) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1684344263476773055>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                       ,0xbf,"InheritedProperty != Property");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    bVar2 = FPCGPointArrayProperty<UE::Math::TVector4<double>_>::IsAllocated(this_01);
    if (bVar2) {
      FPCGPointArrayProperty<UE::Math::TVector4<double>_>::SetNum
                (this_00,(this->PointArray).Color.NumValues,true,false);
    }
    if ((this_01->NumValues != (this->PointArray).Color.NumValues) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InheritedProperty->Num() == Property->Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                           ,0xc6,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    FPCGPointArrayProperty<UE::Math::TVector4<double>_>::CopyTo
              (this_01,this_00,0,0,(this->PointArray).Color.NumValues);
  }
  uVar4 = uVar4 & 0xffffffef;
  this->InheritedProperties = uVar4;
  if (uVar4 == 0) {
    (this->ParentData).field0_0x0.DebugPtr = (UPCGPointArrayData *)0x0;
  }
  return true;
}

// FlattenPropertyIfNeeded<32> @ 149862330

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall UPCGPointArrayData::FlattenPropertyIfNeeded<32>(UPCGPointArrayData *this)

{
  FPCGPointArrayProperty<float> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FPCGPointArrayProperty<float> *this_01;
  uint uVar5;
  
  uVar5 = this->InheritedProperties;
  if ((uVar5 & 0x20) == 0) {
    return false;
  }
  if ((this->ParentData).field0_0x0.DebugPtr == (UPCGPointArrayData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                       ,0x50,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  this_01 = GetProperty<32>((this->ParentData).field0_0x0.DebugPtr,true);
  this_00 = &(this->PointArray).Steepness;
  if (this_01 == this_00) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1684344263476773055>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                       ,0xbf,"InheritedProperty != Property");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    bVar3 = FPCGPointArrayProperty<float>::IsAllocated(this_01);
    if ((bVar3) &&
       (iVar1 = (this->PointArray).Steepness.NumValues,
       (this->PointArray).Steepness.Values.ArrayNum != iVar1)) {
      TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&this_00->Values,iVar1,Default)
      ;
    }
    if (this_01->NumValues != (this->PointArray).Steepness.NumValues) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InheritedProperty->Num() == Property->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                         ,0xc6,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    FPCGPointArrayProperty<float>::CopyTo
              (this_01,this_00,0,0,(this->PointArray).Steepness.NumValues);
  }
  uVar5 = uVar5 & 0xffffffdf;
  this->InheritedProperties = uVar5;
  if (uVar5 == 0) {
    (this->ParentData).field0_0x0.DebugPtr = (UPCGPointArrayData *)0x0;
  }
  return true;
}

// FlattenPropertyIfNeeded<64> @ 149862480

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall UPCGPointArrayData::FlattenPropertyIfNeeded<64>(UPCGPointArrayData *this)

{
  FPCGPointArrayProperty<int> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FPCGPointArrayProperty<int> *this_01;
  uint uVar5;
  
  uVar5 = this->InheritedProperties;
  if ((uVar5 & 0x40) == 0) {
    return false;
  }
  if ((this->ParentData).field0_0x0.DebugPtr == (UPCGPointArrayData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                       ,0x50,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  this_01 = GetProperty<64>((this->ParentData).field0_0x0.DebugPtr,true);
  this_00 = &(this->PointArray).Seed;
  if (this_01 == this_00) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1684344263476773055>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                       ,0xbf,"InheritedProperty != Property");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    bVar3 = FPCGPointArrayProperty<int>::IsAllocated(this_01);
    if ((bVar3) &&
       (iVar1 = (this->PointArray).Seed.NumValues, (this->PointArray).Seed.Values.ArrayNum != iVar1)
       ) {
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&this_00->Values,iVar1,Default);
    }
    if (this_01->NumValues != (this->PointArray).Seed.NumValues) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InheritedProperty->Num() == Property->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                         ,0xc6,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    FPCGPointArrayProperty<int>::CopyTo(this_01,this_00,0,0,(this->PointArray).Seed.NumValues);
  }
  uVar5 = uVar5 & 0xffffffbf;
  this->InheritedProperties = uVar5;
  if (uVar5 == 0) {
    (this->ParentData).field0_0x0.DebugPtr = (UPCGPointArrayData *)0x0;
  }
  return true;
}

// FlattenPropertyIfNeeded<128> @ 1498625d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall UPCGPointArrayData::FlattenPropertyIfNeeded<128>(UPCGPointArrayData *this)

{
  FPCGPointArrayProperty<__int64> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FPCGPointArrayProperty<__int64> *this_01;
  uint uVar5;
  
  uVar5 = this->InheritedProperties;
  if (-1 < (char)uVar5) {
    return false;
  }
  if ((this->ParentData).field0_0x0.DebugPtr == (UPCGPointArrayData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                       ,0x50,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  this_01 = GetProperty<128>((this->ParentData).field0_0x0.DebugPtr,true);
  this_00 = &(this->PointArray).MetadataEntry;
  if (this_01 == this_00) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1684344263476773055>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                       ,0xbf,"InheritedProperty != Property");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    bVar3 = FPCGPointArrayProperty<__int64>::IsAllocated(this_01);
    if ((bVar3) &&
       (iVar1 = (this->PointArray).MetadataEntry.NumValues,
       (this->PointArray).MetadataEntry.Values.ArrayNum != iVar1)) {
      TArray<__int64,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this_00->Values,iVar1,Default);
    }
    if (this_01->NumValues != (this->PointArray).MetadataEntry.NumValues) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InheritedProperty->Num() == Property->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                         ,0xc6,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    FPCGPointArrayProperty<__int64>::CopyTo
              (this_01,this_00,0,0,(this->PointArray).MetadataEntry.NumValues);
  }
  uVar5 = uVar5 & 0xffffff7f;
  this->InheritedProperties = uVar5;
  if (uVar5 == 0) {
    (this->ParentData).field0_0x0.DebugPtr = (UPCGPointArrayData *)0x0;
  }
  return true;
}

// GetProperty<1> @ 1498628f0

FPCGPointArrayProperty<UE::Math::TTransform<double>_> * __thiscall
UPCGPointArrayData::GetProperty<1>(UPCGPointArrayData *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  FPCGPointArrayProperty<UE::Math::TTransform<double>_> *pFVar3;
  
  if (param_1) {
    for (; (this->InheritedProperties & 1) != 0; this = (this->ParentData).field0_0x0.DebugPtr) {
      if (((this->ParentData).field0_0x0.DebugPtr == (UPCGPointArrayData *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ParentData",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                             ,0x50,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FPCGPointArrayProperty<UE::Math::TTransform<double>_> *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  return &(this->PointArray).Transform;
}

// GetProperty<1> @ 149862960

FPCGPointArrayProperty<UE::Math::TTransform<double>_> * __thiscall
UPCGPointArrayData::GetProperty<1>(UPCGPointArrayData *this,bool param_1)

{
  UPCGPointArrayData *pUVar1;
  code *pcVar2;
  bool bVar3;
  FPCGPointArrayProperty<UE::Math::TTransform<double>_> *pFVar4;
  
  if ((!param_1) || ((this->InheritedProperties & 1) == 0)) {
    return &(this->PointArray).Transform;
  }
  if ((this->ParentData).field0_0x0.DebugPtr == (UPCGPointArrayData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                       ,0x83,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPCGPointArrayProperty<UE::Math::TTransform<double>_> *)(*pcVar2)();
      return pFVar4;
    }
  }
  pUVar1 = (this->ParentData).field0_0x0.DebugPtr;
  if ((pUVar1->InheritedProperties & 1) != 0) {
    if ((pUVar1->ParentData).field0_0x0.DebugPtr == (UPCGPointArrayData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                         ,0x50,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FPCGPointArrayProperty<UE::Math::TTransform<double>_> *)(*pcVar2)();
        return pFVar4;
      }
    }
    pFVar4 = GetProperty<1>((pUVar1->ParentData).field0_0x0.DebugPtr,param_1);
    return pFVar4;
  }
  return &(pUVar1->PointArray).Transform;
}

// GetProperty<2> @ 149862a40

FPCGPointArrayProperty<float> * __thiscall
UPCGPointArrayData::GetProperty<2>(UPCGPointArrayData *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  FPCGPointArrayProperty<float> *pFVar3;
  
  if (param_1) {
    for (; (this->InheritedProperties & 2) != 0; this = (this->ParentData).field0_0x0.DebugPtr) {
      if (((this->ParentData).field0_0x0.DebugPtr == (UPCGPointArrayData *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ParentData",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                             ,0x50,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FPCGPointArrayProperty<float> *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  return &(this->PointArray).Density;
}

// GetProperty<2> @ 149862ab0

FPCGPointArrayProperty<float> * __thiscall
UPCGPointArrayData::GetProperty<2>(UPCGPointArrayData *this,bool param_1)

{
  UPCGPointArrayData *pUVar1;
  code *pcVar2;
  bool bVar3;
  FPCGPointArrayProperty<float> *pFVar4;
  
  if ((!param_1) || ((this->InheritedProperties & 2) == 0)) {
    return &(this->PointArray).Density;
  }
  if ((this->ParentData).field0_0x0.DebugPtr == (UPCGPointArrayData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                       ,0x83,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPCGPointArrayProperty<float> *)(*pcVar2)();
      return pFVar4;
    }
  }
  pUVar1 = (this->ParentData).field0_0x0.DebugPtr;
  if ((pUVar1->InheritedProperties & 2) != 0) {
    if ((pUVar1->ParentData).field0_0x0.DebugPtr == (UPCGPointArrayData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                         ,0x50,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FPCGPointArrayProperty<float> *)(*pcVar2)();
        return pFVar4;
      }
    }
    pFVar4 = GetProperty<2>((pUVar1->ParentData).field0_0x0.DebugPtr,param_1);
    return pFVar4;
  }
  return &(pUVar1->PointArray).Density;
}

// GetProperty<4> @ 149862b90

FPCGPointArrayProperty<UE::Math::TVector<double>_> * __thiscall
UPCGPointArrayData::GetProperty<4>(UPCGPointArrayData *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  FPCGPointArrayProperty<UE::Math::TVector<double>_> *pFVar3;
  
  if (param_1) {
    for (; (this->InheritedProperties & 4) != 0; this = (this->ParentData).field0_0x0.DebugPtr) {
      if (((this->ParentData).field0_0x0.DebugPtr == (UPCGPointArrayData *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ParentData",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                             ,0x50,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FPCGPointArrayProperty<UE::Math::TVector<double>_> *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  return &(this->PointArray).BoundsMin;
}

// GetProperty<4> @ 149862c00

FPCGPointArrayProperty<UE::Math::TVector<double>_> * __thiscall
UPCGPointArrayData::GetProperty<4>(UPCGPointArrayData *this,bool param_1)

{
  UPCGPointArrayData *pUVar1;
  code *pcVar2;
  bool bVar3;
  FPCGPointArrayProperty<UE::Math::TVector<double>_> *pFVar4;
  
  if ((!param_1) || ((this->InheritedProperties & 4) == 0)) {
    return &(this->PointArray).BoundsMin;
  }
  if ((this->ParentData).field0_0x0.DebugPtr == (UPCGPointArrayData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                       ,0x83,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPCGPointArrayProperty<UE::Math::TVector<double>_> *)(*pcVar2)();
      return pFVar4;
    }
  }
  pUVar1 = (this->ParentData).field0_0x0.DebugPtr;
  if ((pUVar1->InheritedProperties & 4) != 0) {
    if ((pUVar1->ParentData).field0_0x0.DebugPtr == (UPCGPointArrayData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                         ,0x50,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FPCGPointArrayProperty<UE::Math::TVector<double>_> *)(*pcVar2)();
        return pFVar4;
      }
    }
    pFVar4 = GetProperty<4>((pUVar1->ParentData).field0_0x0.DebugPtr,param_1);
    return pFVar4;
  }
  return &(pUVar1->PointArray).BoundsMin;
}

// GetProperty<8> @ 149862ce0

FPCGPointArrayProperty<UE::Math::TVector<double>_> * __thiscall
UPCGPointArrayData::GetProperty<8>(UPCGPointArrayData *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  FPCGPointArrayProperty<UE::Math::TVector<double>_> *pFVar3;
  
  if (param_1) {
    for (; (this->InheritedProperties & 8) != 0; this = (this->ParentData).field0_0x0.DebugPtr) {
      if (((this->ParentData).field0_0x0.DebugPtr == (UPCGPointArrayData *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ParentData",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                             ,0x50,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FPCGPointArrayProperty<UE::Math::TVector<double>_> *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  return &(this->PointArray).BoundsMax;
}

// GetProperty<8> @ 149862d50

FPCGPointArrayProperty<UE::Math::TVector<double>_> * __thiscall
UPCGPointArrayData::GetProperty<8>(UPCGPointArrayData *this,bool param_1)

{
  UPCGPointArrayData *pUVar1;
  code *pcVar2;
  bool bVar3;
  FPCGPointArrayProperty<UE::Math::TVector<double>_> *pFVar4;
  
  if ((!param_1) || ((this->InheritedProperties & 8) == 0)) {
    return &(this->PointArray).BoundsMax;
  }
  if ((this->ParentData).field0_0x0.DebugPtr == (UPCGPointArrayData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                       ,0x83,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPCGPointArrayProperty<UE::Math::TVector<double>_> *)(*pcVar2)();
      return pFVar4;
    }
  }
  pUVar1 = (this->ParentData).field0_0x0.DebugPtr;
  if ((pUVar1->InheritedProperties & 8) != 0) {
    if ((pUVar1->ParentData).field0_0x0.DebugPtr == (UPCGPointArrayData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                         ,0x50,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FPCGPointArrayProperty<UE::Math::TVector<double>_> *)(*pcVar2)();
        return pFVar4;
      }
    }
    pFVar4 = GetProperty<8>((pUVar1->ParentData).field0_0x0.DebugPtr,param_1);
    return pFVar4;
  }
  return &(pUVar1->PointArray).BoundsMax;
}

// GetProperty<16> @ 149862e30

FPCGPointArrayProperty<UE::Math::TVector4<double>_> * __thiscall
UPCGPointArrayData::GetProperty<16>(UPCGPointArrayData *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  FPCGPointArrayProperty<UE::Math::TVector4<double>_> *pFVar3;
  
  if (param_1) {
    for (; (this->InheritedProperties & 0x10) != 0; this = (this->ParentData).field0_0x0.DebugPtr) {
      if (((this->ParentData).field0_0x0.DebugPtr == (UPCGPointArrayData *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ParentData",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                             ,0x50,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FPCGPointArrayProperty<UE::Math::TVector4<double>_> *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  return &(this->PointArray).Color;
}

// GetProperty<16> @ 149862ea0

FPCGPointArrayProperty<UE::Math::TVector4<double>_> * __thiscall
UPCGPointArrayData::GetProperty<16>(UPCGPointArrayData *this,bool param_1)

{
  UPCGPointArrayData *pUVar1;
  code *pcVar2;
  bool bVar3;
  FPCGPointArrayProperty<UE::Math::TVector4<double>_> *pFVar4;
  
  if ((!param_1) || ((this->InheritedProperties & 0x10) == 0)) {
    return &(this->PointArray).Color;
  }
  if ((this->ParentData).field0_0x0.DebugPtr == (UPCGPointArrayData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                       ,0x83,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPCGPointArrayProperty<UE::Math::TVector4<double>_> *)(*pcVar2)();
      return pFVar4;
    }
  }
  pUVar1 = (this->ParentData).field0_0x0.DebugPtr;
  if ((pUVar1->InheritedProperties & 0x10) != 0) {
    if ((pUVar1->ParentData).field0_0x0.DebugPtr == (UPCGPointArrayData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                         ,0x50,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FPCGPointArrayProperty<UE::Math::TVector4<double>_> *)(*pcVar2)();
        return pFVar4;
      }
    }
    pFVar4 = GetProperty<16>((pUVar1->ParentData).field0_0x0.DebugPtr,param_1);
    return pFVar4;
  }
  return &(pUVar1->PointArray).Color;
}

// GetProperty<32> @ 149862f80

FPCGPointArrayProperty<float> * __thiscall
UPCGPointArrayData::GetProperty<32>(UPCGPointArrayData *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  FPCGPointArrayProperty<float> *pFVar3;
  
  if (param_1) {
    for (; (this->InheritedProperties & 0x20) != 0; this = (this->ParentData).field0_0x0.DebugPtr) {
      if (((this->ParentData).field0_0x0.DebugPtr == (UPCGPointArrayData *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ParentData",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                             ,0x50,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FPCGPointArrayProperty<float> *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  return &(this->PointArray).Steepness;
}

// GetProperty<32> @ 149862ff0

FPCGPointArrayProperty<float> * __thiscall
UPCGPointArrayData::GetProperty<32>(UPCGPointArrayData *this,bool param_1)

{
  UPCGPointArrayData *pUVar1;
  code *pcVar2;
  bool bVar3;
  FPCGPointArrayProperty<float> *pFVar4;
  
  if ((!param_1) || ((this->InheritedProperties & 0x20) == 0)) {
    return &(this->PointArray).Steepness;
  }
  if ((this->ParentData).field0_0x0.DebugPtr == (UPCGPointArrayData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                       ,0x83,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPCGPointArrayProperty<float> *)(*pcVar2)();
      return pFVar4;
    }
  }
  pUVar1 = (this->ParentData).field0_0x0.DebugPtr;
  if ((pUVar1->InheritedProperties & 0x20) != 0) {
    if ((pUVar1->ParentData).field0_0x0.DebugPtr == (UPCGPointArrayData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                         ,0x50,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FPCGPointArrayProperty<float> *)(*pcVar2)();
        return pFVar4;
      }
    }
    pFVar4 = GetProperty<32>((pUVar1->ParentData).field0_0x0.DebugPtr,param_1);
    return pFVar4;
  }
  return &(pUVar1->PointArray).Steepness;
}

// GetProperty<64> @ 1498630d0

FPCGPointArrayProperty<int> * __thiscall
UPCGPointArrayData::GetProperty<64>(UPCGPointArrayData *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  FPCGPointArrayProperty<int> *pFVar3;
  
  if (param_1) {
    for (; (this->InheritedProperties & 0x40) != 0; this = (this->ParentData).field0_0x0.DebugPtr) {
      if (((this->ParentData).field0_0x0.DebugPtr == (UPCGPointArrayData *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ParentData",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                             ,0x50,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FPCGPointArrayProperty<int> *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  return &(this->PointArray).Seed;
}

// GetProperty<64> @ 149863140

FPCGPointArrayProperty<int> * __thiscall
UPCGPointArrayData::GetProperty<64>(UPCGPointArrayData *this,bool param_1)

{
  UPCGPointArrayData *pUVar1;
  code *pcVar2;
  bool bVar3;
  FPCGPointArrayProperty<int> *pFVar4;
  
  if ((!param_1) || ((this->InheritedProperties & 0x40) == 0)) {
    return &(this->PointArray).Seed;
  }
  if ((this->ParentData).field0_0x0.DebugPtr == (UPCGPointArrayData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                       ,0x83,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPCGPointArrayProperty<int> *)(*pcVar2)();
      return pFVar4;
    }
  }
  pUVar1 = (this->ParentData).field0_0x0.DebugPtr;
  if ((pUVar1->InheritedProperties & 0x40) != 0) {
    if ((pUVar1->ParentData).field0_0x0.DebugPtr == (UPCGPointArrayData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                         ,0x50,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FPCGPointArrayProperty<int> *)(*pcVar2)();
        return pFVar4;
      }
    }
    pFVar4 = GetProperty<64>((pUVar1->ParentData).field0_0x0.DebugPtr,param_1);
    return pFVar4;
  }
  return &(pUVar1->PointArray).Seed;
}

// GetProperty<128> @ 149863220

FPCGPointArrayProperty<__int64> * __thiscall
UPCGPointArrayData::GetProperty<128>(UPCGPointArrayData *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  FPCGPointArrayProperty<__int64> *pFVar3;
  
  if (param_1) {
    for (; (this->InheritedProperties & 0x80) != 0; this = (this->ParentData).field0_0x0.DebugPtr) {
      if (((this->ParentData).field0_0x0.DebugPtr == (UPCGPointArrayData *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ParentData",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                             ,0x50,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FPCGPointArrayProperty<__int64> *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  return &(this->PointArray).MetadataEntry;
}

// GetProperty<128> @ 149863290

FPCGPointArrayProperty<__int64> * __thiscall
UPCGPointArrayData::GetProperty<128>(UPCGPointArrayData *this,bool param_1)

{
  UPCGPointArrayData *pUVar1;
  code *pcVar2;
  bool bVar3;
  FPCGPointArrayProperty<__int64> *pFVar4;
  
  if ((!param_1) || ((this->InheritedProperties & 0x80) == 0)) {
    return &(this->PointArray).MetadataEntry;
  }
  if ((this->ParentData).field0_0x0.DebugPtr == (UPCGPointArrayData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                       ,0x83,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPCGPointArrayProperty<__int64> *)(*pcVar2)();
      return pFVar4;
    }
  }
  pUVar1 = (this->ParentData).field0_0x0.DebugPtr;
  if ((pUVar1->InheritedProperties & 0x80) != 0) {
    if ((pUVar1->ParentData).field0_0x0.DebugPtr == (UPCGPointArrayData *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGPointArrayData.h"
                         ,0x50,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FPCGPointArrayProperty<__int64> *)(*pcVar2)();
        return pFVar4;
      }
    }
    pFVar4 = GetProperty<128>((pUVar1->ParentData).field0_0x0.DebugPtr,param_1);
    return pFVar4;
  }
  return &(pUVar1->PointArray).MetadataEntry;
}

// UPCGPointArrayData @ 14988e3c0

UPCGPointArrayData * __thiscall
UPCGPointArrayData::UPCGPointArrayData(UPCGPointArrayData *this,FVTableHelper *param_1)

{
  UPCGBasePointData::UPCGBasePointData((UPCGBasePointData *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGPointArrayData__6B_;
  FPCGPointArray::FPCGPointArray(&this->PointArray);
  (this->ParentData).field0_0x0.DebugPtr = (UPCGPointArrayData *)0x0;
  this->InheritedProperties = 0;
  return this;
}

// UPCGPointArrayData @ 14988e410

UPCGPointArrayData * __thiscall
UPCGPointArrayData::UPCGPointArrayData(UPCGPointArrayData *this,FObjectInitializer *param_1)

{
  UPCGBasePointData::UPCGBasePointData((UPCGBasePointData *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGPointArrayData__6B_;
  FPCGPointArray::FPCGPointArray(&this->PointArray);
  (this->ParentData).field0_0x0.DebugPtr = (UPCGPointArrayData *)0x0;
  this->InheritedProperties = 0;
  return this;
}

// ~UPCGPointArrayData @ 1498916f0

void __thiscall UPCGPointArrayData::~UPCGPointArrayData(UPCGPointArrayData *this)

{
  this->_padding_ = (longlong)&___7UPCGPointArrayData__6B_;
  FPCGPointArray::~FPCGPointArray(&this->PointArray);
  UPCGBasePointData::~UPCGBasePointData((UPCGBasePointData *)this);
  return;
}

// AllocateProperties @ 14989ee30

void __thiscall
UPCGPointArrayData::AllocateProperties(UPCGPointArrayData *this,EPCGPointNativeProperties param_1)

{
  FlattenPropertiesIfNeeded(this,param_1);
  FPCGPointArray::Allocate(&this->PointArray,param_1);
  return;
}

// CopyInternal @ 1498a47e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSpatialData * __thiscall
UPCGPointArrayData::CopyInternal(UPCGPointArrayData *this,FPCGContext *param_1)

{
  char cVar1;
  UPCGPointArrayData *pUVar2;
  
  pUVar2 = FPCGContext::NewObject_AnyThread<UPCGPointArrayData>(param_1);
  cVar1 = (**(code **)(this->_padding_ + 0x438))(this);
  if (cVar1 == '\0') {
    FPCGPointArray::operator=(&pUVar2->PointArray,&this->PointArray);
  }
  return (UPCGSpatialData *)pUVar2;
}

// CopyPropertiesTo @ 1498a62a0

void __thiscall
UPCGPointArrayData::CopyPropertiesTo
          (UPCGPointArrayData *this,UPCGBasePointData *param_1,int param_2,int param_3,int param_4,
          EPCGPointNativeProperties param_5)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 uVar4;
  UClass *pUVar5;
  FPCGPointArrayProperty<UE::Math::TTransform<double>_> *this_00;
  FPCGPointArrayProperty<float> *pFVar6;
  FPCGPointArrayProperty<UE::Math::TVector<double>_> *pFVar7;
  FPCGPointArrayProperty<UE::Math::TVector4<double>_> *this_01;
  FPCGPointArrayProperty<int> *this_02;
  FPCGPointArrayProperty<__int64> *this_03;
  
  if (0 < param_4) {
    if (param_1 != (UPCGBasePointData *)0x0) {
      pUVar5 = StaticClass();
      lVar2 = param_1->_padding_;
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        pcVar3 = *(code **)(param_1->_padding_ + 0x498);
        uVar4 = (**(code **)(this->_padding_ + 0x640))
                          (this,CONCAT71((int7)((ulonglong)lVar2 >> 8),1));
        (*pcVar3)(param_1,uVar4);
        if ((param_5 & Transform) != None) {
          this_00 = GetProperty<1>(this,true);
          FPCGPointArrayProperty<UE::Math::TTransform<double>_>::CopyTo
                    (this_00,(FPCGPointArrayProperty<UE::Math::TTransform<double>_> *)(param_1 + 1),
                     param_2,param_3,param_4);
        }
        if ((param_5 >> 1 & 1) != 0) {
          pFVar6 = GetProperty<2>(this,true);
          FPCGPointArrayProperty<float>::CopyTo
                    (pFVar6,(FPCGPointArrayProperty<float> *)&param_1[1]._padding_,param_2,param_3,
                     param_4);
        }
        if ((param_5 >> 2 & 1) != 0) {
          pFVar7 = GetProperty<4>(this,true);
          FPCGPointArrayProperty<UE::Math::TVector<double>_>::CopyTo
                    (pFVar7,(FPCGPointArrayProperty<UE::Math::TVector<double>_> *)
                            &param_1[1].CachedDataLock,param_2,param_3,param_4);
        }
        if ((param_5 >> 3 & 1) != 0) {
          pFVar7 = GetProperty<8>(this,true);
          FPCGPointArrayProperty<UE::Math::TVector<double>_>::CopyTo
                    (pFVar7,(FPCGPointArrayProperty<UE::Math::TVector<double>_> *)
                            ((longlong)
                             &param_1[1].PCGPointOctree.RootNodeContext.Bounds.Center.field0_0x0 + 8
                            ),param_2,param_3,param_4);
        }
        if ((param_5 >> 4 & 1) != 0) {
          this_01 = GetProperty<16>(this,true);
          FPCGPointArrayProperty<UE::Math::TVector4<double>_>::CopyTo
                    (this_01,(FPCGPointArrayProperty<UE::Math::TVector4<double>_> *)
                             &param_1[1].PCGPointOctree.RootNodeContext.ChildExtent,param_2,param_3,
                     param_4);
        }
        if ((param_5 >> 5 & 1) != 0) {
          pFVar6 = GetProperty<32>(this,true);
          FPCGPointArrayProperty<float>::CopyTo
                    (pFVar6,(FPCGPointArrayProperty<float> *)&param_1[1].PCGPointOctree.TreeElements
                     ,param_2,param_3,param_4);
        }
        if ((param_5 >> 6 & 1) != 0) {
          this_02 = GetProperty<64>(this,true);
          FPCGPointArrayProperty<int>::CopyTo
                    (this_02,(FPCGPointArrayProperty<int> *)
                             &param_1[1].PCGPointOctree.FreeList.ArrayNum,param_2,param_3,param_4);
        }
        if ((param_5 >> 7 & 1) == 0) {
          return;
        }
        this_03 = GetProperty<128>(this,true);
        FPCGPointArrayProperty<__int64>::CopyTo
                  (this_03,(FPCGPointArrayProperty<__int64> *)&param_1[1].Bounds,param_2,param_3,
                   param_4);
        return;
      }
    }
    UPCGBasePointData::CopyPropertiesTo
              ((UPCGBasePointData *)this,param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

// CopyUnallocatedPropertiesFrom @ 1498a76a0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UPCGPointArrayData::CopyUnallocatedPropertiesFrom
          (UPCGPointArrayData *this,UPCGBasePointData *param_1)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  char cVar4;
  bool bVar5;
  UClass *pUVar6;
  FPCGPointArrayProperty<UE::Math::TTransform<double>_> *pFVar7;
  FPCGPointArrayProperty<float> *pFVar8;
  FPCGPointArrayProperty<UE::Math::TVector<double>_> *pFVar9;
  FPCGPointArrayProperty<UE::Math::TVector4<double>_> *pFVar10;
  FPCGPointArrayProperty<int> *pFVar11;
  FPCGPointArrayProperty<__int64> *pFVar12;
  
  cVar4 = (**(code **)(this->_padding_ + 0x440))();
  if ((cVar4 == '\0') && (param_1 != (UPCGBasePointData *)0x0)) {
    pUVar6 = StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      pFVar7 = GetProperty<1>((UPCGPointArrayData *)param_1,true);
      iVar1 = (pFVar7->Values).ArrayNum;
      if (((iVar1 != 0) && (iVar1 != pFVar7->NumValues)) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<581474658470068384>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                             ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((pFVar7->Values).ArrayNum == 0) {
        iVar1 = (this->PointArray).Transform.Values.ArrayNum;
        if (((iVar1 != 0) && (iVar1 != (this->PointArray).Transform.NumValues)) &&
           (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<581474658470068384>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                               ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((this->PointArray).Transform.Values.ArrayNum == 0) {
          dVar3 = (pFVar7->Value).Rotation.XY.m128d_f64[1];
          (this->PointArray).Transform.Value.Rotation.XY.m128d_f64[0] =
               (pFVar7->Value).Rotation.XY.m128d_f64[0];
          (this->PointArray).Transform.Value.Rotation.XY.m128d_f64[1] = dVar3;
          dVar3 = (pFVar7->Value).Rotation.ZW.m128d_f64[1];
          (this->PointArray).Transform.Value.Rotation.ZW.m128d_f64[0] =
               (pFVar7->Value).Rotation.ZW.m128d_f64[0];
          (this->PointArray).Transform.Value.Rotation.ZW.m128d_f64[1] = dVar3;
          dVar3 = (pFVar7->Value).Translation.XY.m128d_f64[1];
          (this->PointArray).Transform.Value.Translation.XY.m128d_f64[0] =
               (pFVar7->Value).Translation.XY.m128d_f64[0];
          (this->PointArray).Transform.Value.Translation.XY.m128d_f64[1] = dVar3;
          dVar3 = (pFVar7->Value).Translation.ZW.m128d_f64[1];
          (this->PointArray).Transform.Value.Translation.ZW.m128d_f64[0] =
               (pFVar7->Value).Translation.ZW.m128d_f64[0];
          (this->PointArray).Transform.Value.Translation.ZW.m128d_f64[1] = dVar3;
          dVar3 = (pFVar7->Value).Scale3D.XY.m128d_f64[1];
          (this->PointArray).Transform.Value.Scale3D.XY.m128d_f64[0] =
               (pFVar7->Value).Scale3D.XY.m128d_f64[0];
          (this->PointArray).Transform.Value.Scale3D.XY.m128d_f64[1] = dVar3;
          dVar3 = (pFVar7->Value).Scale3D.ZW.m128d_f64[1];
          (this->PointArray).Transform.Value.Scale3D.ZW.m128d_f64[0] =
               (pFVar7->Value).Scale3D.ZW.m128d_f64[0];
          (this->PointArray).Transform.Value.Scale3D.ZW.m128d_f64[1] = dVar3;
        }
      }
      pFVar8 = GetProperty<2>((UPCGPointArrayData *)param_1,true);
      FPCGPointArrayProperty<float>::CopyUnallocatedProperty(pFVar8,&(this->PointArray).Density);
      pFVar9 = GetProperty<4>((UPCGPointArrayData *)param_1,true);
      FPCGPointArrayProperty<UE::Math::TVector<double>_>::CopyUnallocatedProperty
                (pFVar9,&(this->PointArray).BoundsMin);
      pFVar9 = GetProperty<8>((UPCGPointArrayData *)param_1,true);
      FPCGPointArrayProperty<UE::Math::TVector<double>_>::CopyUnallocatedProperty
                (pFVar9,&(this->PointArray).BoundsMax);
      pFVar10 = GetProperty<16>((UPCGPointArrayData *)param_1,true);
      iVar1 = (pFVar10->Values).ArrayNum;
      if (((iVar1 != 0) && (iVar1 != pFVar10->NumValues)) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<581474658470068384>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                             ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((pFVar10->Values).ArrayNum == 0) {
        iVar1 = (this->PointArray).Color.Values.ArrayNum;
        if (((iVar1 != 0) && (iVar1 != (this->PointArray).Color.NumValues)) &&
           (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<581474658470068384>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                               ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((this->PointArray).Color.Values.ArrayNum == 0) {
          dVar3 = (pFVar10->Value).field0_0x0._s_0.Y;
          (this->PointArray).Color.Value.field0_0x0._s_0.X = (pFVar10->Value).field0_0x0._s_0.X;
          (this->PointArray).Color.Value.field0_0x0._s_0.Y = dVar3;
          dVar3 = (pFVar10->Value).field0_0x0._s_0.W;
          (this->PointArray).Color.Value.field0_0x0._s_0.Z = (pFVar10->Value).field0_0x0._s_0.Z;
          (this->PointArray).Color.Value.field0_0x0._s_0.W = dVar3;
        }
      }
      pFVar8 = GetProperty<32>((UPCGPointArrayData *)param_1,true);
      FPCGPointArrayProperty<float>::CopyUnallocatedProperty(pFVar8,&(this->PointArray).Steepness);
      pFVar11 = GetProperty<64>((UPCGPointArrayData *)param_1,true);
      iVar1 = (pFVar11->Values).ArrayNum;
      if (((iVar1 != 0) && (iVar1 != pFVar11->NumValues)) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<581474658470068384>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                             ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((pFVar11->Values).ArrayNum == 0) {
        iVar1 = (this->PointArray).Seed.Values.ArrayNum;
        if (((iVar1 != 0) && (iVar1 != (this->PointArray).Seed.NumValues)) &&
           (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<581474658470068384>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                               ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((this->PointArray).Seed.Values.ArrayNum == 0) {
          (this->PointArray).Seed.Value = pFVar11->Value;
        }
      }
      pFVar12 = GetProperty<128>((UPCGPointArrayData *)param_1,true);
      iVar1 = (pFVar12->Values).ArrayNum;
      if (((iVar1 != 0) && (iVar1 != pFVar12->NumValues)) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<581474658470068384>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                             ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((pFVar12->Values).ArrayNum == 0) {
        iVar1 = (this->PointArray).MetadataEntry.Values.ArrayNum;
        if (((iVar1 != 0) && (iVar1 != (this->PointArray).MetadataEntry.NumValues)) &&
           (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<581474658470068384>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                               ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((this->PointArray).MetadataEntry.Values.ArrayNum == 0) {
          (this->PointArray).MetadataEntry.Value = pFVar12->Value;
        }
      }
    }
  }
  return;
}

// Flatten @ 1498b4c40

void __thiscall UPCGPointArrayData::Flatten(UPCGPointArrayData *this)

{
  code *pcVar1;
  bool bVar2;
  
  UPCGBasePointData::Flatten((UPCGBasePointData *)this);
  FlattenPropertyIfNeeded<1>(this);
  FlattenPropertyIfNeeded<32>(this);
  FlattenPropertyIfNeeded<4>(this);
  FlattenPropertyIfNeeded<8>(this);
  FlattenPropertyIfNeeded<16>(this);
  FlattenPropertyIfNeeded<2>(this);
  FlattenPropertyIfNeeded<64>(this);
  FlattenPropertyIfNeeded<128>(this);
  if ((this->ParentData).field0_0x0.DebugPtr != (UPCGPointArrayData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ParentData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGPointArrayData.cpp"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// FlattenPropertiesIfNeeded @ 1498b4cd0

void __thiscall
UPCGPointArrayData::FlattenPropertiesIfNeeded
          (UPCGPointArrayData *this,EPCGPointNativeProperties param_1)

{
  if ((param_1 & Transform) != None) {
    FlattenPropertyIfNeeded<1>(this);
  }
  if ((param_1 & Steepness) != None) {
    FlattenPropertyIfNeeded<32>(this);
  }
  if ((param_1 & BoundsMin) != None) {
    FlattenPropertyIfNeeded<4>(this);
  }
  if ((param_1 & BoundsMax) != None) {
    FlattenPropertyIfNeeded<8>(this);
  }
  if ((param_1 & Color) != None) {
    FlattenPropertyIfNeeded<16>(this);
  }
  if ((param_1 & Density) != None) {
    FlattenPropertyIfNeeded<2>(this);
  }
  if ((param_1 & Seed) != None) {
    FlattenPropertyIfNeeded<64>(this);
  }
  if ((char)param_1 < '\0') {
    FlattenPropertyIfNeeded<128>(this);
  }
  return;
}

// FreeProperties @ 1498b4d60

void __thiscall
UPCGPointArrayData::FreeProperties(UPCGPointArrayData *this,EPCGPointNativeProperties param_1)

{
  FlattenPropertiesIfNeeded(this,param_1);
  FPCGPointArray::Free(&this->PointArray,param_1);
  return;
}

// GetAllocatedProperties @ 1498b4f10

EPCGPointNativeProperties __thiscall
UPCGPointArrayData::GetAllocatedProperties(UPCGPointArrayData *this,bool param_1)

{
  UPCGPointArrayData *pUVar1;
  EPCGPointNativeProperties EVar2;
  EPCGPointNativeProperties EVar3;
  
  EVar2 = FPCGPointArray::GetAllocatedProperties(&this->PointArray);
  if ((param_1) &&
     (pUVar1 = (this->ParentData).field0_0x0.DebugPtr, pUVar1 != (UPCGPointArrayData *)0x0)) {
    EVar3 = (**(code **)(pUVar1->_padding_ + 0x640))(pUVar1,1);
    EVar2 = EVar3 | EVar2;
  }
  return EVar2;
}

// GetBoundsMaxValueRange @ 1498b5f80

TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_> * __thiscall
UPCGPointArrayData::GetBoundsMaxValueRange
          (UPCGPointArrayData *this,
          TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
          *__return_storage_ptr__,bool param_1)

{
  FlattenPropertyIfNeeded<8>(this);
  FPCGPointArrayProperty<UE::Math::TVector<double>_>::GetValueRange
            (&(this->PointArray).BoundsMax,__return_storage_ptr__,param_1,
             (this->PointArray).bInitializedValues);
  return __return_storage_ptr__;
}

// GetBoundsMinValueRange @ 1498b60d0

TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_> * __thiscall
UPCGPointArrayData::GetBoundsMinValueRange
          (UPCGPointArrayData *this,
          TPCGValueRange<UE::Math::TVector<double>,TStridedView<UE::Math::TVector<double>,int>_>
          *__return_storage_ptr__,bool param_1)

{
  FlattenPropertyIfNeeded<4>(this);
  FPCGPointArrayProperty<UE::Math::TVector<double>_>::GetValueRange
            (&(this->PointArray).BoundsMin,__return_storage_ptr__,param_1,
             (this->PointArray).bInitializedValues);
  return __return_storage_ptr__;
}

// GetColorValueRange @ 1498b6640

TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_> *
__thiscall
UPCGPointArrayData::GetColorValueRange
          (UPCGPointArrayData *this,
          TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
          *__return_storage_ptr__,bool param_1)

{
  FPCGPointArrayProperty<UE::Math::TVector4<double>_> *this_00;
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_> *pTVar5;
  int iVar6;
  
  FlattenPropertyIfNeeded<16>(this);
  this_00 = &(this->PointArray).Color;
  if (param_1) {
    FPCGPointArrayProperty<UE::Math::TVector4<double>_>::SetNum
              (this_00,(this->PointArray).Color.NumValues,true,(this->PointArray).bInitializedValues
              );
  }
  iVar6 = (this->PointArray).Color.Values.ArrayNum;
  iVar1 = (this->PointArray).Color.NumValues;
  if (((iVar6 != 0) && (iVar6 != iVar1)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<581474658470068384>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                         ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
              *)(*pcVar3)();
    return pTVar5;
  }
  iVar6 = (this->PointArray).Color.Values.ArrayNum;
  if (iVar6 == 0) {
    pFVar2 = (FScriptContainerElement *)&(this->PointArray).Color.Value;
    iVar6 = 1;
  }
  else {
    pFVar2 = (this_00->Values).AllocatorInstance.Data;
    if ((iVar6 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                *)(*pcVar3)();
      return pTVar5;
    }
    if ((iVar6 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumElements >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                           ,0x3f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TPCGValueRange<UE::Math::TVector4<double>,TStridedView<UE::Math::TVector4<double>,int>_>
                *)(*pcVar3)();
      return pTVar5;
    }
  }
  (__return_storage_ptr__->ElementView).FirstElementPtr = (TVector4<double> *)pFVar2;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0x20;
  (__return_storage_ptr__->ElementView).NumElements = iVar6;
  (__return_storage_ptr__->StubValue).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->StubValue).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->StubValue).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->StubValue).field0_0x0._s_0.W = 1.0;
  __return_storage_ptr__->NumElements = iVar1;
  return __return_storage_ptr__;
}

// GetConstBoundsMaxValueRange @ 1498b68d0

TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
* __thiscall
UPCGPointArrayData::GetConstBoundsMaxValueRange
          (UPCGPointArrayData *this,
          TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
          *__return_storage_ptr__)

{
  FPCGPointArrayProperty<UE::Math::TVector<double>_> *this_00;
  
  this_00 = GetProperty<8>(this,true);
  FPCGPointArrayProperty<UE::Math::TVector<double>_>::GetConstValueRange
            (this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetConstBoundsMinValueRange @ 1498b69f0

TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
* __thiscall
UPCGPointArrayData::GetConstBoundsMinValueRange
          (UPCGPointArrayData *this,
          TPCGValueRange<UE::Math::TVector<double>_const_,TStridedView<UE::Math::TVector<double>_const_,int>_>
          *__return_storage_ptr__)

{
  FPCGPointArrayProperty<UE::Math::TVector<double>_> *this_00;
  
  this_00 = GetProperty<4>(this,true);
  FPCGPointArrayProperty<UE::Math::TVector<double>_>::GetConstValueRange
            (this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetConstColorValueRange @ 1498b6b10

TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
* __thiscall
UPCGPointArrayData::GetConstColorValueRange
          (UPCGPointArrayData *this,
          TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
          *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FPCGPointArrayProperty<UE::Math::TVector4<double>_> *pFVar5;
  TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
  *pTVar6;
  int iVar7;
  
  pFVar5 = GetProperty<16>(this,true);
  iVar1 = pFVar5->NumValues;
  iVar7 = (pFVar5->Values).ArrayNum;
  if (((iVar7 != 0) && (iVar7 != iVar1)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<581474658470068384>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                         ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
              *)(*pcVar3)();
    return pTVar6;
  }
  iVar7 = (pFVar5->Values).ArrayNum;
  if (iVar7 == 0) {
    pFVar2 = (FScriptContainerElement *)&pFVar5->Value;
    iVar7 = 1;
  }
  else {
    pFVar2 = (pFVar5->Values).AllocatorInstance.Data;
    if ((iVar7 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                *)(*pcVar3)();
      return pTVar6;
    }
    if ((iVar7 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumElements >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                           ,0x3f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TPCGValueRange<UE::Math::TVector4<double>_const_,TStridedView<UE::Math::TVector4<double>_const_,int>_>
                *)(*pcVar3)();
      return pTVar6;
    }
  }
  (__return_storage_ptr__->ElementView).FirstElementPtr = (TVector4<double> *)pFVar2;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 0x20;
  (__return_storage_ptr__->ElementView).NumElements = iVar7;
  (__return_storage_ptr__->StubValue).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->StubValue).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->StubValue).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->StubValue).field0_0x0._s_0.W = 1.0;
  __return_storage_ptr__->NumElements = iVar1;
  return __return_storage_ptr__;
}

// GetConstDensityValueRange @ 1498b6de0

TPCGValueRange<float_const_,TStridedView<float_const_,int>_> * __thiscall
UPCGPointArrayData::GetConstDensityValueRange
          (UPCGPointArrayData *this,
          TPCGValueRange<float_const_,TStridedView<float_const_,int>_> *__return_storage_ptr__)

{
  FPCGPointArrayProperty<float> *this_00;
  
  this_00 = GetProperty<2>(this,true);
  FPCGPointArrayProperty<float>::GetConstValueRange(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetConstMetadataEntryValueRange @ 1498b6f00

TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_> * __thiscall
UPCGPointArrayData::GetConstMetadataEntryValueRange
          (UPCGPointArrayData *this,
          TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FPCGPointArrayProperty<__int64> *pFVar5;
  TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_> *pTVar6;
  int iVar7;
  
  pFVar5 = GetProperty<128>(this,true);
  iVar1 = pFVar5->NumValues;
  iVar7 = (pFVar5->Values).ArrayNum;
  if (((iVar7 != 0) && (iVar7 != iVar1)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<581474658470068384>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                         ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_> *)(*pcVar3)();
    return pTVar6;
  }
  iVar7 = (pFVar5->Values).ArrayNum;
  if (iVar7 == 0) {
    pFVar2 = (FScriptContainerElement *)&pFVar5->Value;
    iVar7 = 1;
  }
  else {
    pFVar2 = (pFVar5->Values).AllocatorInstance.Data;
    if ((iVar7 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_> *)(*pcVar3)();
      return pTVar6;
    }
    if ((iVar7 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumElements >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                           ,0x3f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TPCGValueRange<__int64_const_,TStridedView<__int64_const_,int>_> *)(*pcVar3)();
      return pTVar6;
    }
  }
  __return_storage_ptr__->NumElements = iVar1;
  (__return_storage_ptr__->ElementView).FirstElementPtr = (long64 *)pFVar2;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 8;
  (__return_storage_ptr__->ElementView).NumElements = iVar7;
  return __return_storage_ptr__;
}

// GetConstSeedValueRange @ 1498b7120

TPCGValueRange<int_const_,TStridedView<int_const_,int>_> * __thiscall
UPCGPointArrayData::GetConstSeedValueRange
          (UPCGPointArrayData *this,
          TPCGValueRange<int_const_,TStridedView<int_const_,int>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FPCGPointArrayProperty<int> *pFVar5;
  TPCGValueRange<int_const_,TStridedView<int_const_,int>_> *pTVar6;
  int iVar7;
  
  pFVar5 = GetProperty<64>(this,true);
  iVar1 = pFVar5->NumValues;
  iVar7 = (pFVar5->Values).ArrayNum;
  if (((iVar7 != 0) && (iVar7 != iVar1)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<581474658470068384>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                         ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TPCGValueRange<int_const_,TStridedView<int_const_,int>_> *)(*pcVar3)();
    return pTVar6;
  }
  iVar7 = (pFVar5->Values).ArrayNum;
  if (iVar7 == 0) {
    pFVar2 = (FScriptContainerElement *)&pFVar5->Value;
    iVar7 = 1;
  }
  else {
    pFVar2 = (pFVar5->Values).AllocatorInstance.Data;
    if ((iVar7 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TPCGValueRange<int_const_,TStridedView<int_const_,int>_> *)(*pcVar3)();
      return pTVar6;
    }
    if ((iVar7 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumElements >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                           ,0x3f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TPCGValueRange<int_const_,TStridedView<int_const_,int>_> *)(*pcVar3)();
      return pTVar6;
    }
  }
  __return_storage_ptr__->NumElements = iVar1;
  (__return_storage_ptr__->ElementView).FirstElementPtr = (int *)pFVar2;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 4;
  (__return_storage_ptr__->ElementView).NumElements = iVar7;
  return __return_storage_ptr__;
}

// GetConstSteepnessValueRange @ 1498b7340

TPCGValueRange<float_const_,TStridedView<float_const_,int>_> * __thiscall
UPCGPointArrayData::GetConstSteepnessValueRange
          (UPCGPointArrayData *this,
          TPCGValueRange<float_const_,TStridedView<float_const_,int>_> *__return_storage_ptr__)

{
  FPCGPointArrayProperty<float> *this_00;
  
  this_00 = GetProperty<32>(this,true);
  FPCGPointArrayProperty<float>::GetConstValueRange(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetConstTransformValueRange @ 1498b7460

TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
* __thiscall
UPCGPointArrayData::GetConstTransformValueRange
          (UPCGPointArrayData *this,
          TPCGValueRange<UE::Math::TTransform<double>_const_,TStridedView<UE::Math::TTransform<double>_const_,int>_>
          *__return_storage_ptr__)

{
  FPCGPointArrayProperty<UE::Math::TTransform<double>_> *this_00;
  
  this_00 = GetProperty<1>(this,true);
  FPCGPointArrayProperty<UE::Math::TTransform<double>_>::GetConstValueRange
            (this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetDensityValueRange @ 1498b9810

TPCGValueRange<float,TStridedView<float,int>_> * __thiscall
UPCGPointArrayData::GetDensityValueRange
          (UPCGPointArrayData *this,
          TPCGValueRange<float,TStridedView<float,int>_> *__return_storage_ptr__,bool param_1)

{
  FlattenPropertyIfNeeded<2>(this);
  FPCGPointArrayProperty<float>::GetValueRange
            (&(this->PointArray).Density,__return_storage_ptr__,param_1,
             (this->PointArray).bInitializedValues);
  return __return_storage_ptr__;
}

// GetMetadataEntryValueRange @ 1498bb470

TPCGValueRange<__int64,TStridedView<__int64,int>_> * __thiscall
UPCGPointArrayData::GetMetadataEntryValueRange
          (UPCGPointArrayData *this,
          TPCGValueRange<__int64,TStridedView<__int64,int>_> *__return_storage_ptr__,bool param_1)

{
  FPCGPointArrayProperty<__int64> *this_00;
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TPCGValueRange<__int64,TStridedView<__int64,int>_> *pTVar5;
  int iVar6;
  
  FlattenPropertyIfNeeded<128>(this);
  this_00 = &(this->PointArray).MetadataEntry;
  if (param_1) {
    FPCGPointArrayProperty<__int64>::SetNum
              (this_00,(this->PointArray).MetadataEntry.NumValues,true,
               (this->PointArray).bInitializedValues);
  }
  iVar6 = (this->PointArray).MetadataEntry.Values.ArrayNum;
  iVar1 = (this->PointArray).MetadataEntry.NumValues;
  if (((iVar6 != 0) && (iVar6 != iVar1)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<581474658470068384>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                         ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TPCGValueRange<__int64,TStridedView<__int64,int>_> *)(*pcVar3)();
    return pTVar5;
  }
  iVar6 = (this->PointArray).MetadataEntry.Values.ArrayNum;
  if (iVar6 == 0) {
    pFVar2 = (FScriptContainerElement *)&(this->PointArray).MetadataEntry.Value;
    iVar6 = 1;
  }
  else {
    pFVar2 = (this_00->Values).AllocatorInstance.Data;
    if ((iVar6 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TPCGValueRange<__int64,TStridedView<__int64,int>_> *)(*pcVar3)();
      return pTVar5;
    }
    if ((iVar6 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumElements >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                           ,0x3f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TPCGValueRange<__int64,TStridedView<__int64,int>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->NumElements = iVar1;
  (__return_storage_ptr__->ElementView).FirstElementPtr = (long64 *)pFVar2;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 8;
  (__return_storage_ptr__->ElementView).NumElements = iVar6;
  return __return_storage_ptr__;
}

// GetNumPoints @ 1498bb910

int __thiscall UPCGPointArrayData::GetNumPoints(UPCGPointArrayData *this)

{
  return (this->PointArray).NumPoints;
}

// GetPrivateStaticClass @ 1498bc650

UClass * __cdecl UPCGPointArrayData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPointArrayData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPointArrayData",
               &Z_Registration_Info_UClass_UPCGPointArrayData.InnerSingleton,
               StaticRegisterNativesUPCGPointArrayData,0x360,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGPointArrayData>,
               InternalVTableHelperCtorCaller<UPCGPointArrayData>,local_res8,
               UPCGBasePointData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPointArrayData.InnerSingleton;
}

// GetResourceSizeEx @ 1498c5430

void __thiscall
UPCGPointArrayData::GetResourceSizeEx(UPCGPointArrayData *this,FResourceSizeEx *param_1)

{
  UPCGBasePointData::GetResourceSizeEx((UPCGBasePointData *)this,param_1);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,((longlong)(this->PointArray).Seed.Values.ArrayMax +
                      (((longlong)(this->PointArray).BoundsMax.Values.ArrayMax +
                       (longlong)(this->PointArray).BoundsMin.Values.ArrayMax) * 3 +
                       ((longlong)(this->PointArray).Transform.Values.ArrayMax * 3 +
                       (longlong)(this->PointArray).Color.Values.ArrayMax) * 4 +
                      (longlong)(this->PointArray).MetadataEntry.Values.ArrayMax) * 2 +
                      (longlong)(this->PointArray).Steepness.Values.ArrayMax +
                     (longlong)(this->PointArray).Density.Values.ArrayMax) * 4 + 0x164);
  return;
}

// GetSeedValueRange @ 1498c5a20

TPCGValueRange<int,TStridedView<int,int>_> * __thiscall
UPCGPointArrayData::GetSeedValueRange
          (UPCGPointArrayData *this,
          TPCGValueRange<int,TStridedView<int,int>_> *__return_storage_ptr__,bool param_1)

{
  FPCGPointArrayProperty<int> *this_00;
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TPCGValueRange<int,TStridedView<int,int>_> *pTVar5;
  int iVar6;
  
  FlattenPropertyIfNeeded<64>(this);
  this_00 = &(this->PointArray).Seed;
  if (param_1) {
    FPCGPointArrayProperty<int>::SetNum
              (this_00,(this->PointArray).Seed.NumValues,true,(this->PointArray).bInitializedValues)
    ;
  }
  iVar6 = (this->PointArray).Seed.Values.ArrayNum;
  iVar1 = (this->PointArray).Seed.NumValues;
  if (((iVar6 != 0) && (iVar6 != iVar1)) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<581474658470068384>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGPointArray.h"
                         ,0xa0,"Values.Num() == 0 || Values.Num() == NumValues"), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar5 = (TPCGValueRange<int,TStridedView<int,int>_> *)(*pcVar3)();
    return pTVar5;
  }
  iVar6 = (this->PointArray).Seed.Values.ArrayNum;
  if (iVar6 == 0) {
    pFVar2 = (FScriptContainerElement *)&(this->PointArray).Seed.Value;
    iVar6 = 1;
  }
  else {
    pFVar2 = (this_00->Values).AllocatorInstance.Data;
    if ((iVar6 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TPCGValueRange<int,TStridedView<int,int>_> *)(*pcVar3)();
      return pTVar5;
    }
    if ((iVar6 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumElements >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                           ,0x3f,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TPCGValueRange<int,TStridedView<int,int>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->NumElements = iVar1;
  (__return_storage_ptr__->ElementView).FirstElementPtr = (int *)pFVar2;
  (__return_storage_ptr__->ElementView).BytesBetweenElements = 4;
  (__return_storage_ptr__->ElementView).NumElements = iVar6;
  return __return_storage_ptr__;
}

// GetSteepnessValueRange @ 1498c7380

TPCGValueRange<float,TStridedView<float,int>_> * __thiscall
UPCGPointArrayData::GetSteepnessValueRange
          (UPCGPointArrayData *this,
          TPCGValueRange<float,TStridedView<float,int>_> *__return_storage_ptr__,bool param_1)

{
  FlattenPropertyIfNeeded<32>(this);
  FPCGPointArrayProperty<float>::GetValueRange
            (&(this->PointArray).Steepness,__return_storage_ptr__,param_1,
             (this->PointArray).bInitializedValues);
  return __return_storage_ptr__;
}

// GetTransformValueRange @ 1498c9980

TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_> *
__thiscall
UPCGPointArrayData::GetTransformValueRange
          (UPCGPointArrayData *this,
          TPCGValueRange<UE::Math::TTransform<double>,TStridedView<UE::Math::TTransform<double>,int>_>
          *__return_storage_ptr__,bool param_1)

{
  FlattenPropertyIfNeeded<1>(this);
  FPCGPointArrayProperty<UE::Math::TTransform<double>_>::GetValueRange
            (&(this->PointArray).Transform,__return_storage_ptr__,param_1,
             (this->PointArray).bInitializedValues);
  return __return_storage_ptr__;
}

// GetTransformsCopy @ 1498c9b10

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
UPCGPointArrayData::GetTransformsCopy
          (UPCGPointArrayData *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FPCGPointArray::GetTransformCopy(&this->PointArray,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HasSpatialDataParent @ 1498ca700

bool __thiscall UPCGPointArrayData::HasSpatialDataParent(UPCGPointArrayData *this)

{
  return (this->ParentData).field0_0x0.DebugPtr != (UPCGPointArrayData *)0x0;
}

// InitializeSpatialDataInternal @ 1498cf900

void __thiscall
UPCGPointArrayData::InitializeSpatialDataInternal
          (UPCGPointArrayData *this,FPCGInitializeFromDataParams *param_1)

{
  UPCGSpatialData *pUVar1;
  UPCGPointArrayData *pUVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  UClass *pUVar7;
  UPCGPointArrayData *pUVar8;
  
  pUVar1 = (param_1->Source).field0_0x0.DebugPtr;
  if (((pUVar1 != (UPCGSpatialData *)0x0) && ((int)this->_padding_ == 0)) &&
     (*(int *)((longlong)&this->_padding_ + 4) == 0)) {
    this->_padding_ = (longlong)(pUVar1->TargetActor).WeakPtr;
  }
  if ((param_1->Source).field0_0x0.DebugPtr != (UPCGSpatialData *)0x0) {
    pUVar7 = StaticClass();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)param_1,pUVar7);
    if (bVar4) {
      pUVar8 = (UPCGPointArrayData *)(param_1->Source).field0_0x0.DebugPtr;
      goto LAB_1498cf952;
    }
  }
  pUVar8 = (UPCGPointArrayData *)0x0;
LAB_1498cf952:
  if ((param_1->bInheritSpatialData != false) && (pUVar8 != (UPCGPointArrayData *)0x0)) {
    cVar5 = (**(code **)(this->_padding_ + 0x438))(this);
    if (cVar5 != '\0') {
      pUVar2 = (this->ParentData).field0_0x0.DebugPtr;
      if ((pUVar2 != (UPCGPointArrayData *)0x0) &&
         (pUVar2 != (UPCGPointArrayData *)(param_1->Source).field0_0x0.DebugPtr)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParentData == nullptr || ParentData == InParams.Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Data\\PCGPointArrayData.cpp"
                           ,0x77,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if ((this->ParentData).field0_0x0.DebugPtr !=
          (UPCGPointArrayData *)(param_1->Source).field0_0x0.DebugPtr) {
        pcVar3 = *(code **)(this->_padding_ + 0x490);
        uVar6 = (**(code **)(pUVar8->_padding_ + 0x488))(pUVar8);
        (*pcVar3)(this,uVar6,1);
        this->InheritedProperties = 0xff;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar8);
        }
        (this->ParentData).field0_0x0.DebugPtr = pUVar8;
      }
    }
  }
  return;
}

// IsValidRef @ 1498d1130

bool __thiscall UPCGPointArrayData::IsValidRef(UPCGPointArrayData *this,FPointRef *param_1)

{
  int iVar1;
  int iVar2;
  
  if (-1 < param_1->Index) {
    iVar1 = param_1->Index;
    iVar2 = (**(code **)(this->_padding_ + 0x488))();
    if (iVar1 < iVar2) {
      return true;
    }
  }
  return false;
}

// MoveRange @ 1498d2060

void __thiscall
UPCGPointArrayData::MoveRange(UPCGPointArrayData *this,int param_1,int param_2,int param_3)

{
  FlattenPropertyIfNeeded<1>(this);
  FlattenPropertyIfNeeded<32>(this);
  FlattenPropertyIfNeeded<4>(this);
  FlattenPropertyIfNeeded<8>(this);
  FlattenPropertyIfNeeded<16>(this);
  FlattenPropertyIfNeeded<2>(this);
  FlattenPropertyIfNeeded<64>(this);
  FlattenPropertyIfNeeded<128>(this);
  FPCGPointArray::MoveRange(&this->PointArray,param_1,param_2,param_3);
  return;
}

// RemoveAt @ 1498d69a0

void __thiscall UPCGPointArrayData::RemoveAt(UPCGPointArrayData *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < (this->PointArray).NumPoints)) {
    FlattenPropertyIfNeeded<1>(this);
    FlattenPropertyIfNeeded<32>(this);
    FlattenPropertyIfNeeded<4>(this);
    FlattenPropertyIfNeeded<8>(this);
    FlattenPropertyIfNeeded<16>(this);
    FlattenPropertyIfNeeded<2>(this);
    FlattenPropertyIfNeeded<64>(this);
    FlattenPropertyIfNeeded<128>(this);
    FPCGPointArray::RemoveAt(&this->PointArray,param_1);
    (**(code **)(this->_padding_ + 0x648))(this);
  }
  return;
}

// SetNumPoints @ 1498e0050

void __thiscall UPCGPointArrayData::SetNumPoints(UPCGPointArrayData *this,int param_1,bool param_2)

{
  UPCGPointArrayData *pUVar1;
  int iVar2;
  
  pUVar1 = (this->ParentData).field0_0x0.DebugPtr;
  if (pUVar1 != (UPCGPointArrayData *)0x0) {
    iVar2 = (**(code **)(pUVar1->_padding_ + 0x488))();
    if (iVar2 != param_1) {
      FlattenPropertyIfNeeded<1>(this);
      FlattenPropertyIfNeeded<32>(this);
      FlattenPropertyIfNeeded<4>(this);
      FlattenPropertyIfNeeded<8>(this);
      FlattenPropertyIfNeeded<16>(this);
      FlattenPropertyIfNeeded<2>(this);
      FlattenPropertyIfNeeded<64>(this);
      FlattenPropertyIfNeeded<128>(this);
    }
  }
  if (param_1 != (this->PointArray).NumPoints) {
    FPCGPointArray::SetNumPoints(&this->PointArray,param_1,param_2);
    (**(code **)(this->_padding_ + 0x648))(this);
  }
  return;
}

// StaticRegisterNativesUPCGPointArrayData @ 1498f6930

void __cdecl UPCGPointArrayData::StaticRegisterNativesUPCGPointArrayData(void)

{
  return;
}

// SupportsSpatialDataInheritance @ 1498f6cb0

bool __thiscall UPCGPointArrayData::SupportsSpatialDataInheritance(UPCGPointArrayData *this)

{
  TConsoleVariableData<bool> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarPCGEnablePointArrayDataParenting.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1];
    }
  }
  return pTVar1->ShadowedValue[0];
}

// ToPointArrayData @ 1498f7c90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGPointArrayData * __thiscall
UPCGPointArrayData::ToPointArrayData
          (UPCGPointArrayData *this,FPCGContext *param_1,TBox<double> *param_2)

{
  return this;
}

// ToPointData @ 1498f7f70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGPointData * __thiscall
UPCGPointArrayData::ToPointData(UPCGPointArrayData *this,FPCGContext *param_1,TBox<double> *param_2)

{
  UPCGPointData *pUVar1;
  TArrayView<int_const_,int> local_58;
  UPCGPointArrayData *local_48;
  undefined8 local_40;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined8 local_30;
  void *local_28;
  undefined8 local_20;
  TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *local_18;
  undefined8 local_10;
  
  pUVar1 = FPCGContext::NewObject_AnyThread<UPCGPointData>(param_1);
  local_48 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (this == (UPCGPointArrayData *)0x0)) {
    local_30 = 0;
    local_40 = 0;
    local_35 = 0;
    if (this != (UPCGPointArrayData *)0x0) {
      local_30 = (**(code **)(this->_padding_ + 800))(this);
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)this);
    local_40 = 0;
    local_35 = 0;
    local_30 = (**(code **)(this->_padding_ + 800))(this);
  }
  local_28 = (void *)0x0;
  local_20 = 0;
  local_18 = (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0;
  local_10 = 0;
  local_38 = 0x101;
  local_36 = 1;
  (**(code **)(pUVar1->_padding_ + 0x468))(pUVar1,&local_48);
  if ((this != (UPCGPointArrayData *)0x0) && ((char)local_38 != '\0')) {
    (**(code **)(pUVar1->_padding_ + 0x470))(pUVar1,&local_48);
  }
  DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
            (local_18,(int)local_10);
  if (local_18 != (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  local_58.DataPtr = (int *)0x0;
  local_58.ArrayNum = 0;
  UPCGBasePointData::SetPoints((UPCGBasePointData *)this,(UPCGBasePointData *)pUVar1,&local_58,true)
  ;
  return pUVar1;
}

// VisitDataNetwork @ 1498f9dc0

void __thiscall
UPCGPointArrayData::VisitDataNetwork
          (UPCGPointArrayData *this,TFunctionRef<void___cdecl(UPCGData_const_*)> *param_1)

{
  UPCGPointArrayData *pUVar1;
  TFunctionRef<void___cdecl(UPCGData_const_*)> local_18;
  
  local_18._0_8_ = *(undefined8 *)param_1;
  local_18._8_8_ = *(undefined8 *)&param_1->field_0x8;
  UPCGData::VisitDataNetwork((UPCGData *)this,&local_18);
  pUVar1 = (this->ParentData).field0_0x0.DebugPtr;
  if (pUVar1 != (UPCGPointArrayData *)0x0) {
    local_18._0_8_ = *(undefined8 *)param_1;
    local_18._8_8_ = *(undefined8 *)&param_1->field_0x8;
    (**(code **)(pUVar1->_padding_ + 0x2c0))(pUVar1,&local_18);
  }
  return;
}

