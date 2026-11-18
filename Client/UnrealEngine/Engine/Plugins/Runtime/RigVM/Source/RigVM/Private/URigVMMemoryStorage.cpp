// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 26

// StaticClass @ 14a0ad750

UClass * __cdecl URigVMMemoryStorage::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URigVMMemoryStorage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigVM",L"RigVMMemoryStorage",
               &Z_Registration_Info_UClass_URigVMMemoryStorage.InnerSingleton,
               StaticRegisterNativesURigVMMemoryStorage,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<URigVMMemoryStorage>,
               InternalVTableHelperCtorCaller<URigVMMemoryStorage>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URigVMMemoryStorage.InnerSingleton;
}

// GetData<unsigned_char> @ 14a0b85f0

uchar * __thiscall
URigVMMemoryStorage::GetData<unsigned_char>(URigVMMemoryStorage *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UClass *pUVar6;
  uchar *puVar7;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *pTVar8;
  
  lVar2 = *(longlong *)&this->field_0x10;
  if (lVar2 != 0) {
    pUVar6 = URigVMMemoryStorageGeneratorClass::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (pTVar8 = (TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x210),
       (longlong *)
       *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
       &pUVar6->_padding_)) goto LAB_14a0b8645;
  }
  pTVar8 = &EmptyProperties;
LAB_14a0b8645:
  if (((param_1 < 0) || (pTVar8->ArrayNum <= param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Properties.IsValidIndex(InPropertyIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMMemoryStorage.h"
                         ,0x518,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    puVar7 = (uchar *)(*pcVar3)();
    return puVar7;
  }
  uVar5 = 0;
  if (param_1 < pTVar8->ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    puVar7 = (uchar *)(*pcVar3)();
    return puVar7;
  }
  puVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal
                     (*(FProperty **)((pTVar8->AllocatorInstance).Data + (longlong)param_1 * 8),
                      (UObject *)this,0);
  return puVar7;
}

// URigVMMemoryStorage @ 14a0c20b0

URigVMMemoryStorage * __thiscall
URigVMMemoryStorage::URigVMMemoryStorage(URigVMMemoryStorage *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7URigVMMemoryStorage__6B_;
  return this;
}

// URigVMMemoryStorage @ 14a0c20e0

URigVMMemoryStorage * __thiscall
URigVMMemoryStorage::URigVMMemoryStorage(URigVMMemoryStorage *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7URigVMMemoryStorage__6B_;
  return this;
}

// ~URigVMMemoryStorage @ 14a0c3410

void __thiscall URigVMMemoryStorage::~URigVMMemoryStorage(URigVMMemoryStorage *this)

{
  *(undefined ***)this = &___7URigVMMemoryStorage__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CopyFrom @ 14a0d1960

void __thiscall
URigVMMemoryStorage::CopyFrom(URigVMMemoryStorage *this,URigVMMemoryStorage *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  int iVar6;
  int *piVar7;
  
  if (param_1 == (URigVMMemoryStorage *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSourceMemory",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                       ,0x4c0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(longlong *)&this->field_0x10 != *(longlong *)&param_1->field_0x10) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetClass() == InSourceMemory->GetClass()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                       ,0x4c1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = 0;
  do {
    lVar2 = *(longlong *)&this->field_0x10;
    if (lVar2 == 0) {
LAB_14a0d1a25:
      piVar7 = &EmptyProperties.ArrayNum;
    }
    else {
      pUVar5 = URigVMMemoryStorageGeneratorClass::StaticClass();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar5->_padding_)) goto LAB_14a0d1a25;
      piVar7 = (int *)(lVar2 + 0x218);
    }
    if (*piVar7 <= iVar6) {
      return;
    }
    CopyProperty(this,iVar6,&FRigVMPropertyPath::Empty,param_1,iVar6,&FRigVMPropertyPath::Empty);
    iVar6 = iVar6 + 1;
  } while( true );
}

// CopyProperty @ 14a0d2ac0

bool __cdecl
URigVMMemoryStorage::CopyProperty(FRigVMMemoryHandle *param_1,FRigVMMemoryHandle *param_2)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uchar *puVar5;
  FProperty *pFVar6;
  uchar *puVar7;
  FProperty *pFVar8;
  char *pcVar9;
  FRigVMPropertyPath *this;
  FRigVMPropertyPath *this_00;
  int iVar10;
  
  pFVar6 = param_1->Property;
  puVar1 = param_2->Ptr;
  pFVar8 = param_2->Property;
  this = &FRigVMPropertyPath::Empty;
  if (param_2->PropertyPath != (FRigVMPropertyPath *)0x0) {
    this = param_2->PropertyPath;
  }
  puVar5 = param_1->Ptr;
  this_00 = &FRigVMPropertyPath::Empty;
  if (param_1->PropertyPath != (FRigVMPropertyPath *)0x0) {
    this_00 = param_1->PropertyPath;
  }
  if ((pFVar6 == (FProperty *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTargetProperty != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x47c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((pFVar8 == (FProperty *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSourceProperty != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x47d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((puVar5 == (uchar *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTargetPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x47e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((puVar1 == (uchar *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSourcePtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x47f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((this_00->Segments).ArrayNum != 0) {
    puVar5 = FRigVMPropertyPath::GetData_Internal(this_00,puVar5,pFVar6);
    pFVar6 = FRigVMPropertyPath::GetTailProperty(this_00);
  }
  puVar7 = puVar1;
  if ((this->Segments).ArrayNum != 0) {
    puVar7 = FRigVMPropertyPath::GetData_Internal(this,puVar1,pFVar8);
    pFVar8 = FRigVMPropertyPath::GetTailProperty(this);
  }
  if (puVar5 == (uchar *)0x0) {
    if ((this_00->Segments).ArrayNum != 0) {
      return false;
    }
    iVar10 = 0x492;
    pcVar9 = "!InTargetPropertyPath.IsEmpty()";
  }
  else {
    if (puVar1 != (uchar *)0x0) {
      bVar3 = CopyProperty(pFVar6,puVar5,pFVar8,puVar7);
      return bVar3;
    }
    if ((this->Segments).ArrayNum != 0) {
      return false;
    }
    iVar10 = 0x497;
    pcVar9 = "!InSourcePropertyPath.IsEmpty()";
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar9,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                     ,iVar10,L"");
  if (!bVar3) {
    return false;
  }
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return (bool)uVar4;
}

// CopyProperty @ 14a0d2c90

bool __cdecl
URigVMMemoryStorage::CopyProperty
          (URigVMMemoryStorage *param_1,int param_2,FRigVMPropertyPath *param_3,
          URigVMMemoryStorage *param_4,int param_5,FRigVMPropertyPath *param_6)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UClass *pUVar5;
  uchar *puVar6;
  uchar *puVar7;
  FProperty *this;
  uchar *puVar8;
  FProperty *this_00;
  uint uVar9;
  char *pcVar10;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *pTVar11;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *pTVar12;
  int iVar13;
  
  if ((param_1 == (URigVMMemoryStorage *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTargetStorage != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x4a6,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((param_4 == (URigVMMemoryStorage *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSourceStorage != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x4a7,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  lVar1 = *(longlong *)&param_1->field_0x10;
  pTVar12 = &EmptyProperties;
  if (lVar1 != 0) {
    pUVar5 = URigVMMemoryStorageGeneratorClass::StaticClass();
    iVar13 = (int)pUVar5->_padding_;
    if ((iVar13 <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)iVar13 * 8)
        == &pUVar5->_padding_)) {
      pTVar11 = (TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)(lVar1 + 0x210);
      goto LAB_14a0d2d4d;
    }
  }
  pTVar11 = &EmptyProperties;
LAB_14a0d2d4d:
  uVar9 = 0;
  if (param_2 < pTVar11->ArrayNum) {
    uVar9 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  lVar1 = *(longlong *)&param_4->field_0x10;
  this = *(FProperty **)((pTVar11->AllocatorInstance).Data + (longlong)param_2 * 8);
  if (lVar1 != 0) {
    pUVar5 = URigVMMemoryStorageGeneratorClass::StaticClass();
    iVar13 = (int)pUVar5->_padding_;
    if ((iVar13 <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)iVar13 * 8)
        == &pUVar5->_padding_)) {
      pTVar12 = (TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)(lVar1 + 0x210);
    }
  }
  uVar9 = 0;
  if (param_5 < pTVar12->ArrayNum) {
    uVar9 = (uint)~param_5 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  this_00 = *(FProperty **)((pTVar12->AllocatorInstance).Data + (longlong)param_5 * 8);
  puVar6 = FProperty::ContainerUObjectPtrToValuePtrInternal(this,(UObject *)param_1,0);
  puVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_00,(UObject *)param_4,0);
  if ((this == (FProperty *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTargetProperty != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x47c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((this_00 == (FProperty *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSourceProperty != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x47d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((puVar6 == (uchar *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTargetPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x47e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((puVar7 == (uchar *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSourcePtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x47f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((param_3->Segments).ArrayNum != 0) {
    puVar6 = FRigVMPropertyPath::GetData_Internal(param_3,puVar6,this);
    this = FRigVMPropertyPath::GetTailProperty(param_3);
  }
  puVar8 = puVar7;
  if ((param_6->Segments).ArrayNum != 0) {
    puVar8 = FRigVMPropertyPath::GetData_Internal(param_6,puVar7,this_00);
    this_00 = FRigVMPropertyPath::GetTailProperty(param_6);
  }
  if (puVar6 == (uchar *)0x0) {
    if ((param_3->Segments).ArrayNum != 0) {
      return false;
    }
    iVar13 = 0x492;
    pcVar10 = "!InTargetPropertyPath.IsEmpty()";
  }
  else {
    if (puVar7 != (uchar *)0x0) {
      bVar3 = CopyProperty(this,puVar6,this_00,puVar8);
      return bVar3;
    }
    if ((param_6->Segments).ArrayNum != 0) {
      return false;
    }
    iVar13 = 0x497;
    pcVar10 = "!InSourcePropertyPath.IsEmpty()";
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar10,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                     ,iVar13,L"");
  if (!bVar3) {
    return false;
  }
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return (bool)uVar4;
}

// CopyProperty @ 14a0d2fd0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
URigVMMemoryStorage::CopyProperty
          (FProperty *param_1,uchar *param_2,FProperty *param_3,uchar *param_4)

{
  float fVar1;
  double dVar2;
  EArrayPropertyFlags EVar3;
  int iVar4;
  ulonglong uVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  int iVar10;
  UPackage *pUVar11;
  longlong lVar12;
  FProperty *pFVar13;
  FProperty *pFVar14;
  longlong lVar15;
  uchar *puVar16;
  longlong lVar17;
  FProperty *pFVar18;
  wchar_t *pwVar19;
  undefined8 uVar20;
  uint uVar21;
  int iVar22;
  FProperty *pFVar23;
  ForElementType<FSetElementId> FVar24;
  FScriptArrayHelper local_f8;
  FString local_d8;
  wchar_t *local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FName local_60;
  FString local_58;
  
  pFVar23 = (FProperty *)0x0;
  iVar22 = 0;
  if ((param_1 == (FProperty *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTargetProperty != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x3d6,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  if ((param_3 == (FProperty *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSourceProperty != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x3d7,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  if ((param_2 == (uchar *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTargetPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x3d8,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  if ((param_4 == (uchar *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSourcePtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x3d9,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  cVar9 = (**(code **)(param_1->_padding_ + 0x1a0))(param_1,param_3);
  if (cVar9 != '\0') goto LAB_14a0d391d;
  uVar5 = *(ulonglong *)(param_1->_padding_ + 0x18);
  if (((uVar5 >> 8 & 1) == 0) || (param_1 == (FProperty *)0x0)) {
    if (((uVar5 >> 0x20 & 1) == 0) || (param_1 == (FProperty *)0x0)) {
      if ((uVar5 & 0x40) == 0) {
        if ((uVar5 >> 0x30 & 1) == 0) {
          if ((uVar5 >> 0x15 & 1) != 0) {
            if ((param_3 == (FProperty *)0x0) ||
               (pFVar13 = param_3, (*(uint *)(param_3->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
              pFVar13 = pFVar23;
            }
            if (pFVar13 != (FProperty *)0x0) {
              EVar3 = (EArrayPropertyFlags)param_1[1]._padding_;
              local_f8.ElementAlignment = (**(code **)(*(longlong *)param_1[1]._padding_ + 0x168))()
              ;
              local_f8.InnerProperty = (FProperty *)param_1[1]._padding_;
              local_f8.ElementSize = (local_f8.InnerProperty)->ElementSize;
              local_f8.field1_0x8 = (FScriptArrayHelper_u_8)param_2;
              local_f8.ArrayFlags = EVar3;
              if ((local_f8.ElementSize < 1) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ElementSize > 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x1177,L""), bVar7)) {
                pcVar6 = (code *)swi(3);
                uVar8 = (*pcVar6)();
                return (bool)uVar8;
              }
              if ((local_f8.InnerProperty == (FProperty *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InnerProperty",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x1178,L""), bVar7)) {
                pcVar6 = (code *)swi(3);
                uVar8 = (*pcVar6)();
                return (bool)uVar8;
              }
              lVar17 = pFVar13[1]._padding_;
              (**(code **)(*(longlong *)pFVar13[1]._padding_ + 0x168))();
              local_a8 = pFVar13[1]._padding_;
              iVar10 = *(int *)(local_a8 + 0x34);
              if ((iVar10 < 1) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ElementSize > 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x1177,L""), bVar7)) {
                pcVar6 = (code *)swi(3);
                uVar8 = (*pcVar6)();
                return (bool)uVar8;
              }
              if ((local_a8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InnerProperty",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x1178,L""), bVar7)) {
                pcVar6 = (code *)swi(3);
                uVar8 = (*pcVar6)();
                return (bool)uVar8;
              }
              lVar15 = param_1[1]._padding_;
              uVar5 = *(ulonglong *)(*(longlong *)(lVar15 + 8) + 0x18);
              if ((uVar5 >> 8 & 1) == 0) {
                if ((uVar5 >> 0x20 & 1) == 0) {
                  if (lVar15 != 0) {
                    if ((uVar5 & 0x40) == 0) {
                      if ((((uVar5 >> 0x30 & 1) != 0) &&
                          (lVar17 = pFVar13[1]._padding_, lVar17 != 0)) &&
                         ((*(byte *)(*(longlong *)(lVar17 + 8) + 0x18) & 0x40) != 0)) {
                        if (*(longlong *)(lVar17 + 0x70) == 0) {
                          bVar7 = *(longlong *)(lVar15 + 0x78) == 0;
                        }
                        else {
                          bVar7 = *(longlong *)(lVar17 + 0x70) == *(longlong *)(lVar15 + 0x78);
                        }
LAB_14a0d3348:
                        if (bVar7) {
LAB_14a0d3353:
                          FProperty::CopyCompleteValue(param_1,param_2,param_4);
                          return true;
                        }
                      }
                    }
                    else {
                      lVar17 = pFVar13[1]._padding_;
                      if ((lVar17 != 0) &&
                         ((*(ulonglong *)(*(longlong *)(lVar17 + 8) + 0x18) & 0x1000000000000) != 0)
                         ) {
                        lVar12 = *(longlong *)(lVar17 + 0x78);
                        lVar17 = *(longlong *)(lVar15 + 0x70);
                        if (lVar17 != 0) goto LAB_14a0d3345;
                        bVar7 = lVar12 == 0;
                        goto LAB_14a0d3348;
                      }
                    }
                  }
                }
                else if ((*(uint *)(*(longlong *)(pFVar13[1]._padding_ + 8) + 0x18) >> 8 & 1) != 0)
                {
                  iVar22 = *(int *)(param_4 + 8);
                  if (-1 < iVar22) {
                    iVar4 = (local_f8.field1_0x8.FreezableArray)->ArrayNum;
                    if (iVar4 < iVar22) {
                      FScriptArrayHelper::AddValues(&local_f8,iVar22 - iVar4);
                    }
                    else if (iVar22 < iVar4) {
                      FScriptArrayHelper::RemoveValues(&local_f8,iVar22,iVar4 - iVar22);
                    }
                    pFVar13 = pFVar23;
                    while( true ) {
                      iVar22 = (int)pFVar13;
                      if ((local_f8.field1_0x8.FreezableArray)->ArrayNum <= iVar22) break;
                      pFVar18 = pFVar23;
                      if ((local_f8.field1_0x8.FreezableArray)->ArrayNum != 0) {
                        puVar16 = (uchar *)(local_f8.field1_0x8.FreezableArray)->_padding_;
                        if (((local_f8.ArrayFlags & UsesMemoryImageAllocator) != None) &&
                           (((ulonglong)puVar16 & 1) != 0)) {
                          puVar16 = &(local_f8.field1_0x8.HeapArray)->field_0x0 +
                                    ((longlong)puVar16 >> 0x18);
                        }
                        pFVar18 = (FProperty *)
                                  (puVar16 + (longlong)local_f8.ElementSize * (longlong)iVar22);
                      }
                      pFVar14 = pFVar23;
                      if (*(int *)(param_4 + 8) != 0) {
                        puVar16 = *(uchar **)param_4;
                        if (((lVar17 & 1) != 0) && (((ulonglong)puVar16 & 1) != 0)) {
                          puVar16 = param_4 + ((longlong)puVar16 >> 0x18);
                        }
                        pFVar14 = (FProperty *)(puVar16 + (longlong)iVar10 * (longlong)iVar22);
                      }
                      pFVar13 = (FProperty *)(ulonglong)(iVar22 + 1);
                      pFVar18->_padding_ = (longlong)(double)*(float *)&pFVar14->_padding_;
                    }
                    return true;
                  }
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((longlong)iVar22);
                }
              }
              else if ((*(ulonglong *)(*(longlong *)(pFVar13[1]._padding_ + 8) + 0x18) & 0x100000000
                       ) != 0) {
                iVar22 = *(int *)(param_4 + 8);
                if (-1 < iVar22) {
                  iVar4 = (local_f8.field1_0x8.FreezableArray)->ArrayNum;
                  if (iVar4 < iVar22) {
                    FScriptArrayHelper::AddValues(&local_f8,iVar22 - iVar4);
                  }
                  else if (iVar22 < iVar4) {
                    FScriptArrayHelper::RemoveValues(&local_f8,iVar22,iVar4 - iVar22);
                  }
                  pFVar13 = pFVar23;
                  while( true ) {
                    iVar22 = (int)pFVar13;
                    if ((local_f8.field1_0x8.FreezableArray)->ArrayNum <= iVar22) break;
                    pFVar18 = pFVar23;
                    if ((local_f8.field1_0x8.FreezableArray)->ArrayNum != 0) {
                      puVar16 = (uchar *)(local_f8.field1_0x8.FreezableArray)->_padding_;
                      if (((local_f8.ArrayFlags & UsesMemoryImageAllocator) != None) &&
                         (((ulonglong)puVar16 & 1) != 0)) {
                        puVar16 = &(local_f8.field1_0x8.HeapArray)->field_0x0 +
                                  ((longlong)puVar16 >> 0x18);
                      }
                      pFVar18 = (FProperty *)
                                (puVar16 + (longlong)local_f8.ElementSize * (longlong)iVar22);
                    }
                    pFVar14 = pFVar23;
                    if (*(int *)(param_4 + 8) != 0) {
                      puVar16 = *(uchar **)param_4;
                      if (((lVar17 & 1) != 0) && (((ulonglong)puVar16 & 1) != 0)) {
                        puVar16 = param_4 + ((longlong)puVar16 >> 0x18);
                      }
                      pFVar14 = (FProperty *)(puVar16 + (longlong)iVar10 * (longlong)iVar22);
                    }
                    pFVar13 = (FProperty *)(ulonglong)(iVar22 + 1);
                    *(float *)&pFVar18->_padding_ = (float)(double)pFVar14->_padding_;
                  }
                  return true;
                }
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((longlong)iVar22);
              }
            }
          }
        }
        else if ((param_3 != (FProperty *)0x0) &&
                ((*(byte *)(param_3->_padding_ + 0x18) & 0x40) != 0)) {
          lVar17 = param_3[1]._padding_;
          lVar12 = param_1[1]._padding_;
          if (lVar17 == 0) {
            bVar7 = lVar12 == 0;
          }
          else {
LAB_14a0d3345:
            bVar7 = lVar17 == lVar12;
          }
          goto LAB_14a0d3348;
        }
      }
      else if ((param_3 != (FProperty *)0x0) &&
              ((*(ulonglong *)(param_3->_padding_ + 0x18) & 0x1000000000000) != 0)) {
        if (param_1[1]._padding_ == 0) {
          bVar7 = param_3[1]._padding_ == 0;
        }
        else {
          bVar7 = param_1[1]._padding_ == param_3[1]._padding_;
        }
        if (bVar7) goto LAB_14a0d3353;
      }
    }
    else if (((param_3 != (FProperty *)0x0) &&
             ((*(uint *)(param_3->_padding_ + 0x18) >> 8 & 1) != 0)) &&
            (param_1->ArrayDim == param_3->ArrayDim)) {
      if (param_1->ArrayDim < 1) {
        return true;
      }
      do {
        fVar1 = *(float *)param_4;
        param_4 = (uchar *)((longlong)param_4 + 4);
        uVar21 = (int)pFVar23 + 1;
        pFVar23 = (FProperty *)(ulonglong)uVar21;
        *(double *)param_2 = (double)fVar1;
        param_2 = (uchar *)((longlong)param_2 + 8);
      } while ((int)uVar21 < param_1->ArrayDim);
      return true;
    }
  }
  else if (((param_3 != (FProperty *)0x0) &&
           ((*(ulonglong *)(param_3->_padding_ + 0x18) & 0x100000000) != 0)) &&
          (param_1->ArrayDim == param_3->ArrayDim)) {
    if (param_1->ArrayDim < 1) {
      return true;
    }
    do {
      dVar2 = *(double *)param_4;
      param_4 = (uchar *)((longlong)param_4 + 8);
      uVar21 = (int)pFVar23 + 1;
      pFVar23 = (FProperty *)(ulonglong)uVar21;
      *(float *)param_2 = (float)dVar2;
      param_2 = (uchar *)((longlong)param_2 + 4);
    } while ((int)uVar21 < param_1->ArrayDim);
    return true;
  }
  cVar9 = (**(code **)(param_1->_padding_ + 0x1a0))(param_1,param_3);
  if (cVar9 == '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`URigVMMemoryStorage::CopyProperty'::__l123::
             _dynamic_atexit_destructor_for__ReportedErrors__);
      _Init_thread_footer(&::_TSS0);
    }
    local_c8 = (wchar_t *)0x0;
    local_c0 = 0;
    (**(code **)(param_1->_padding_ + 0x68))(param_1,&local_90,&local_c8,0);
    iVar10 = (int)local_c0 + -1;
    if ((int)local_c0 == 0) {
      iVar10 = 0;
    }
    ::FString::AppendChars(&local_90,local_c8,iVar10);
    RigVMTypeUtils::CleanupCPPType(&local_90);
    if (local_c8 != (wchar_t *)0x0) {
      FMemory::Free(local_c8);
    }
    if ((param_3 == (FProperty *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMTypeUtils.h"
                           ,0x1ca,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    local_b8 = (wchar_t *)0x0;
    local_b0 = 0;
    (**(code **)(param_3->_padding_ + 0x68))(param_3,&local_a0,&local_b8,0);
    iVar10 = (int)local_b0 + -1;
    if ((int)local_b0 == 0) {
      iVar10 = 0;
    }
    ::FString::AppendChars(&local_a0,local_b8,iVar10);
    RigVMTypeUtils::CleanupCPPType(&local_a0);
    if (local_b8 != (wchar_t *)0x0) {
      FMemory::Free(local_b8);
    }
    pUVar11 = FField::GetOutermost((FField *)param_1);
    if (pUVar11 != (UPackage *)0x0) {
      local_60 = (FName)pUVar11->_padding_;
      ::FName::ToString(&local_60,&local_58);
    }
    bVar7 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar7) {
      ::FName::ToString((FName *)&param_1->_padding_,&local_70);
    }
    else {
      ::FString::FString(&local_70,L"None");
    }
    bVar7 = IsThisNotNull(param_3,"FField::GetName");
    if (bVar7) {
      ::FName::ToString((FName *)&param_3->_padding_,&local_80);
    }
    else {
      ::FString::FString(&local_80,L"None");
    }
    ::FString::PrintfImpl(&local_d8,L"Failed to copy %s (%s) to %s (%s) in package %s");
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if ((pUVar11 != (UPackage *)0x0) &&
       (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_d8.Data.ArrayNum == 0) {
      pwVar19 = L"";
    }
    else {
      iVar22 = local_d8.Data.ArrayNum + -1;
      pwVar19 = (wchar_t *)local_d8.Data.AllocatorInstance.Data;
    }
    uVar21 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar22,pwVar19);
    if (ReportedErrors.Elements._8_4_ != ReportedErrors.Elements._52_4_) {
      FVar24 = (ForElementType<FSetElementId>)0x154c97c08;
      if (ReportedErrors.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar24 = ReportedErrors.Hash.SecondaryData;
      }
      iVar22 = *(int *)((longlong)FVar24 + (ulonglong)(ReportedErrors.HashSize - 1U & uVar21) * 4);
      lVar17 = ReportedErrors.Elements._0_8_;
      uVar20 = local_d8.Data._8_8_;
      while (iVar22 != -1) {
        lVar15 = (longlong)iVar22;
        iVar10 = *(int *)(lVar17 + 8 + lVar15 * 0x18);
        if (iVar10 == (int)uVar20) {
          if (1 < iVar10) {
            iVar10 = FGenericPlatformStricmp::Stricmp
                               (*(wchar_t **)(lVar17 + lVar15 * 0x18),
                                (wchar_t *)local_d8.Data.AllocatorInstance.Data);
            bVar7 = iVar10 == 0;
            lVar17 = ReportedErrors.Elements._0_8_;
            uVar20 = local_d8.Data._8_8_;
            goto LAB_14a0d3895;
          }
LAB_14a0d38a7:
          if (iVar22 != -1) goto LAB_14a0d38ef;
          break;
        }
        bVar7 = iVar10 + (int)uVar20 == 1;
LAB_14a0d3895:
        if (bVar7) goto LAB_14a0d38a7;
        iVar22 = *(int *)(lVar17 + 0x10 + lVar15 * 0x18);
      }
    }
    if (1 < (byte)LogRigVM._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
    }
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (&ReportedErrors,(FString *)&stack0x00000020,(bool *)&local_d8);
LAB_14a0d38ef:
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    return false;
  }
LAB_14a0d391d:
  if (param_2 != param_4) {
    if (((uint)(int)param_1->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0xf0))(param_1,param_2,param_4,param_1->ArrayDim);
    }
    else {
      memcpy(param_2,param_4,(longlong)param_1->ElementSize * (longlong)param_1->ArrayDim);
    }
  }
  return true;
}

// CopyProperty @ 14a0d39d0

bool __cdecl
URigVMMemoryStorage::CopyProperty
          (FProperty *param_1,uchar *param_2,FRigVMPropertyPath *param_3,FProperty *param_4,
          uchar *param_5,FRigVMPropertyPath *param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uchar *puVar4;
  char *pcVar5;
  int iVar6;
  
  if ((param_1 == (FProperty *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTargetProperty != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x47c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((param_4 == (FProperty *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSourceProperty != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x47d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((param_2 == (uchar *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTargetPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x47e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((param_5 == (uchar *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSourcePtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                         ,0x47f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((param_3->Segments).ArrayNum != 0) {
    param_2 = FRigVMPropertyPath::GetData_Internal(param_3,param_2,param_1);
    param_1 = FRigVMPropertyPath::GetTailProperty(param_3);
  }
  puVar4 = param_5;
  if ((param_6->Segments).ArrayNum != 0) {
    puVar4 = FRigVMPropertyPath::GetData_Internal(param_6,param_5,param_4);
    param_4 = FRigVMPropertyPath::GetTailProperty(param_6);
  }
  if (param_2 == (uchar *)0x0) {
    if ((param_3->Segments).ArrayNum != 0) {
      return false;
    }
    iVar6 = 0x492;
    pcVar5 = "!InTargetPropertyPath.IsEmpty()";
  }
  else {
    if (param_5 != (uchar *)0x0) {
      bVar2 = CopyProperty(param_1,param_2,param_4,puVar4);
      return bVar2;
    }
    if ((param_6->Segments).ArrayNum != 0) {
      return false;
    }
    iVar6 = 0x497;
    pcVar5 = "!InSourcePropertyPath.IsEmpty()";
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar5,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                     ,iVar6,L"");
  if (!bVar2) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

// FindPropertyByName @ 14a0dda70

FProperty * __thiscall
URigVMMemoryStorage::FindPropertyByName(URigVMMemoryStorage *this,FName *param_1)

{
  FProperty *pFVar1;
  FName local_res8 [4];
  
  FRigVMPropertyDescription::SanitizeName(local_res8);
  pFVar1 = UStruct::FindPropertyByName(*(UStruct **)&this->field_0x10,local_res8[0]);
  return pFVar1;
}

// GetDataAsString @ 14a0e2fe0

FString * __thiscall
URigVMMemoryStorage::GetDataAsString
          (URigVMMemoryStorage *this,FString *__return_storage_ptr__,FRigVMOperand *param_1,
          int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  
  uVar3 = 0xffffffff;
  if (param_1->RegisterIndex != 0xffff) {
    uVar3 = (uint)param_1->RegisterIndex;
  }
  bVar2 = IsValidIndex(this,uVar3);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(PropertyIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                       ,0x3a9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
  }
  GetDataAsString(this,__return_storage_ptr__,uVar3,param_2);
  return __return_storage_ptr__;
}

// GetDataAsString @ 14a0e3080

FString * __thiscall
URigVMMemoryStorage::GetDataAsString
          (URigVMMemoryStorage *this,FString *__return_storage_ptr__,int param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FString *pFVar7;
  uchar *puVar8;
  UClass *pUVar9;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *pTVar10;
  
  bVar5 = IsValidIndex(this,param_1);
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(InPropertyIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                       ,0x39e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar4)();
      return pFVar7;
    }
  }
  puVar8 = GetData<unsigned_char>(this,param_1);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  lVar2 = *(longlong *)&this->field_0x10;
  if (lVar2 != 0) {
    pUVar9 = URigVMMemoryStorageGeneratorClass::StaticClass();
    iVar1 = (int)pUVar9->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar9->_padding_)) {
      pTVar10 = (TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x210);
      goto LAB_14a0e3128;
    }
  }
  pTVar10 = &EmptyProperties;
LAB_14a0e3128:
  uVar6 = 0;
  if (param_1 < pTVar10->ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FString *)(*pcVar4)();
      return pFVar7;
    }
  }
  plVar3 = *(longlong **)((pTVar10->AllocatorInstance).Data + (longlong)param_1 * 8);
  (**(code **)(*plVar3 + 0xe0))(plVar3,__return_storage_ptr__,puVar8,0,0,0,param_2,0);
  return __return_storage_ptr__;
}

// GetDataAsStringSafe @ 14a0e3250

FString * __thiscall
URigVMMemoryStorage::GetDataAsStringSafe
          (URigVMMemoryStorage *this,FString *__return_storage_ptr__,FRigVMOperand *param_1,
          int param_2)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  if (param_1->RegisterIndex != 0xffff) {
    uVar2 = (uint)param_1->RegisterIndex;
  }
  bVar1 = IsValidIndex(this,uVar2);
  if (bVar1) {
    GetDataAsString(this,__return_storage_ptr__,uVar2,param_2);
  }
  else {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  return __return_storage_ptr__;
}

// GetDataAsStringSafe @ 14a0e32d0

FString * __thiscall
URigVMMemoryStorage::GetDataAsStringSafe
          (URigVMMemoryStorage *this,FString *__return_storage_ptr__,int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = IsValidIndex(this,param_1);
  if (bVar1) {
    GetDataAsString(this,__return_storage_ptr__,param_1,param_2);
  }
  else {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  return __return_storage_ptr__;
}

// GetHandle @ 14a0e6590

FRigVMMemoryHandle * __thiscall
URigVMMemoryStorage::GetHandle
          (URigVMMemoryStorage *this,FRigVMMemoryHandle *__return_storage_ptr__,int param_1,
          FRigVMPropertyPath *param_2)

{
  int iVar1;
  longlong lVar2;
  FProperty *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FRigVMMemoryHandle *pFVar7;
  UClass *pUVar8;
  uchar *puVar9;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *pTVar10;
  
  bVar5 = IsValidIndex(this,param_1);
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(InPropertyIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                       ,0x3c8,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FRigVMMemoryHandle *)(*pcVar4)();
      return pFVar7;
    }
  }
  lVar2 = *(longlong *)&this->field_0x10;
  if (lVar2 != 0) {
    pUVar8 = URigVMMemoryStorageGeneratorClass::StaticClass();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar8->_padding_)) {
      pTVar10 = (TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x210);
      goto LAB_14a0e6623;
    }
  }
  pTVar10 = &EmptyProperties;
LAB_14a0e6623:
  uVar6 = 0;
  if (param_1 < pTVar10->ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FRigVMMemoryHandle *)(*pcVar4)();
      return pFVar7;
    }
  }
  pFVar3 = *(FProperty **)((pTVar10->AllocatorInstance).Data + (longlong)param_1 * 8);
  puVar9 = GetData<unsigned_char>(this,param_1);
  __return_storage_ptr__->Ptr = puVar9;
  __return_storage_ptr__->Property = pFVar3;
  __return_storage_ptr__->PropertyPath = param_2;
  __return_storage_ptr__->LazyBranch = (FRigVMLazyBranch *)0x0;
  return __return_storage_ptr__;
}

// GetOperand @ 14a0e8b20

FRigVMOperand __thiscall
URigVMMemoryStorage::GetOperand(URigVMMemoryStorage *this,int param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined2 uVar4;
  bool bVar5;
  undefined1 uVar6;
  UClass *pUVar7;
  undefined8 uVar8;
  undefined4 in_register_00000014;
  undefined1 *puVar9;
  undefined2 uVar10;
  int *piVar11;
  int in_R9D;
  
  puVar9 = (undefined1 *)CONCAT44(in_register_00000014,param_1);
  lVar2 = *(longlong *)&this->field_0x10;
  uVar10 = (undefined2)in_R9D;
  uVar4 = (undefined2)param_2;
  if (lVar2 == 0) {
LAB_14a0e8b79:
    piVar11 = &EmptyProperties.ArrayNum;
  }
  else {
    pUVar7 = URigVMMemoryStorageGeneratorClass::StaticClass();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar1) ||
       (piVar11 = (int *)(lVar2 + 0x218),
       (longlong *)
       *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
       &pUVar7->_padding_)) goto LAB_14a0e8b79;
  }
  if ((param_2 < 0) || (*piVar11 <= param_2)) {
    *puVar9 = 0;
    *(undefined4 *)(puVar9 + 2) = 0xffffffff;
    goto LAB_14a0e8ca8;
  }
  lVar2 = *(longlong *)&this->field_0x10;
  if (in_R9D == -1) {
    if (lVar2 != 0) {
      pUVar7 = URigVMMemoryStorageGeneratorClass::StaticClass();
      iVar1 = (int)pUVar7->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          == &pUVar7->_padding_)) {
        *puVar9 = *(undefined1 *)(lVar2 + 0x208);
        *(undefined2 *)(puVar9 + 2) = uVar4;
        *(undefined2 *)(puVar9 + 4) = 0xffff;
        goto LAB_14a0e8ca8;
      }
    }
    *(undefined2 *)(puVar9 + 2) = uVar4;
    *puVar9 = 3;
    *(undefined2 *)(puVar9 + 4) = 0xffff;
    goto LAB_14a0e8ca8;
  }
  if (lVar2 == 0) {
LAB_14a0e8bce:
    piVar11 = &EmptyPropertyPaths.ArrayNum;
  }
  else {
    pUVar7 = URigVMMemoryStorageGeneratorClass::StaticClass();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) goto LAB_14a0e8bce;
    piVar11 = (int *)(lVar2 + 0x228);
  }
  if ((in_R9D < 0) || (*piVar11 <= in_R9D)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetPropertyPaths().IsValidIndex(InPropertyPathIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                       ,0x501,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return SUB86(uVar8,0);
    }
  }
  lVar2 = *(longlong *)&this->field_0x10;
  if (lVar2 == 0) {
LAB_14a0e8c38:
    uVar6 = 3;
  }
  else {
    pUVar7 = URigVMMemoryStorageGeneratorClass::StaticClass();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) goto LAB_14a0e8c38;
    uVar6 = *(undefined1 *)(lVar2 + 0x208);
  }
  *puVar9 = uVar6;
  *(undefined2 *)(puVar9 + 2) = uVar4;
  if (in_R9D < 0) {
    uVar10 = 0xffff;
  }
  *(undefined2 *)(puVar9 + 4) = uVar10;
LAB_14a0e8ca8:
  return SUB86(puVar9,0);
}

// GetOperandByName @ 14a0e8de0

FRigVMOperand __thiscall
URigVMMemoryStorage::GetOperandByName(URigVMMemoryStorage *this,FName *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FProperty *pFVar4;
  UClass *pUVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong lVar10;
  FName local_res8;
  
  FRigVMPropertyDescription::SanitizeName(&local_res8);
  pFVar4 = UStruct::FindPropertyByName(*(UStruct **)&this->field_0x10,local_res8);
  lVar10 = *(longlong *)&this->field_0x10;
  if (lVar10 != 0) {
    pUVar5 = URigVMMemoryStorageGeneratorClass::StaticClass();
    iVar7 = (int)pUVar5->_padding_;
    if ((iVar7 <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)iVar7 * 8)
        == &pUVar5->_padding_)) {
      pTVar9 = (TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)(lVar10 + 0x210);
      goto LAB_14a0e8e51;
    }
  }
  pTVar9 = &EmptyProperties;
LAB_14a0e8e51:
  iVar7 = pTVar9->ArrayNum;
  uVar8 = 0;
  if (0 < iVar7) {
    lVar10 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar8 < iVar7) {
        uVar3 = ~uVar8 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar6 = (*pcVar1)();
          return SUB86(uVar6,0);
        }
      }
      if (*(FProperty **)((pTVar9->AllocatorInstance).Data + lVar10) == pFVar4) goto LAB_14a0e8ec4;
      iVar7 = pTVar9->ArrayNum;
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 8;
    } while ((int)uVar8 < iVar7);
  }
  uVar8 = 0xffffffff;
LAB_14a0e8ec4:
  GetOperand(this,(int)param_1,uVar8);
  return SUB86(param_1,0);
}

// GetPrivateStaticClass @ 14a0eab80

UClass * __cdecl URigVMMemoryStorage::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URigVMMemoryStorage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/RigVM",L"RigVMMemoryStorage",
               &Z_Registration_Info_UClass_URigVMMemoryStorage.InnerSingleton,
               StaticRegisterNativesURigVMMemoryStorage,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<URigVMMemoryStorage>,
               InternalVTableHelperCtorCaller<URigVMMemoryStorage>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URigVMMemoryStorage.InnerSingleton;
}

// GetProperties @ 14a0eadb0

TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> * __thiscall
URigVMMemoryStorage::GetProperties(URigVMMemoryStorage *this)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  lVar2 = *(longlong *)&this->field_0x10;
  if (lVar2 != 0) {
    pUVar3 = URigVMMemoryStorageGeneratorClass::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return (TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x210);
    }
  }
  return &EmptyProperties;
}

// GetPropertyIndex @ 14a0eae50

int __thiscall URigVMMemoryStorage::GetPropertyIndex(URigVMMemoryStorage *this,FProperty *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  UClass *pUVar5;
  uint uVar6;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  
  lVar8 = *(longlong *)&this->field_0x10;
  if (lVar8 != 0) {
    pUVar5 = URigVMMemoryStorageGeneratorClass::StaticClass();
    iVar4 = (int)pUVar5->_padding_;
    if ((iVar4 <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar4 * 8) ==
        &pUVar5->_padding_)) {
      pTVar7 = (TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)(lVar8 + 0x210);
      goto LAB_14a0eae9f;
    }
  }
  pTVar7 = &EmptyProperties;
LAB_14a0eae9f:
  iVar4 = pTVar7->ArrayNum;
  uVar6 = 0;
  if (0 < iVar4) {
    lVar8 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < iVar4) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(FProperty **)((pTVar7->AllocatorInstance).Data + lVar8) == param_1) {
        return uVar6;
      }
      iVar4 = pTVar7->ArrayNum;
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar6 < iVar4);
  }
  return -1;
}

// GetPropertyIndexByName @ 14a0eafb0

int __thiscall URigVMMemoryStorage::GetPropertyIndexByName(URigVMMemoryStorage *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FProperty *pFVar5;
  UClass *pUVar6;
  uint uVar7;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  FName local_res8;
  
  FRigVMPropertyDescription::SanitizeName(&local_res8);
  pFVar5 = UStruct::FindPropertyByName(*(UStruct **)&this->field_0x10,local_res8);
  lVar9 = *(longlong *)&this->field_0x10;
  if (lVar9 != 0) {
    pUVar6 = URigVMMemoryStorageGeneratorClass::StaticClass();
    iVar4 = (int)pUVar6->_padding_;
    if ((iVar4 <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar4 * 8) ==
        &pUVar6->_padding_)) {
      pTVar8 = (TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)(lVar9 + 0x210);
      goto LAB_14a0eb016;
    }
  }
  pTVar8 = &EmptyProperties;
LAB_14a0eb016:
  iVar4 = pTVar8->ArrayNum;
  uVar7 = 0;
  if (0 < iVar4) {
    lVar9 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar7 < iVar4) {
        uVar3 = ~uVar7 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(FProperty **)((pTVar8->AllocatorInstance).Data + lVar9) == pFVar5) {
        return uVar7;
      }
      iVar4 = pTVar8->ArrayNum;
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar7 < iVar4);
  }
  return -1;
}

// GetPropertyPaths @ 14a0eb0c0

TArray<FRigVMPropertyPath,TSizedDefaultAllocator<32>_> * __thiscall
URigVMMemoryStorage::GetPropertyPaths(URigVMMemoryStorage *this)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  
  lVar2 = *(longlong *)&this->field_0x10;
  if (lVar2 != 0) {
    pUVar3 = URigVMMemoryStorageGeneratorClass::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return (TArray<FRigVMPropertyPath,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x220);
    }
  }
  return &EmptyPropertyPaths;
}

// IsValidIndex @ 14a0fa100

bool __thiscall URigVMMemoryStorage::IsValidIndex(URigVMMemoryStorage *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  int *piVar4;
  
  lVar2 = *(longlong *)&this->field_0x10;
  if (lVar2 != 0) {
    pUVar3 = URigVMMemoryStorageGeneratorClass::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (piVar4 = (int *)(lVar2 + 0x218),
       (longlong *)
       *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
       &pUVar3->_padding_)) goto LAB_14a0fa146;
  }
  piVar4 = &EmptyProperties.ArrayNum;
LAB_14a0fa146:
  if ((-1 < param_1) && (param_1 < *piVar4)) {
    return true;
  }
  return false;
}

// SetDataFromString @ 14a110e60

bool __thiscall
URigVMMemoryStorage::SetDataFromString(URigVMMemoryStorage *this,int param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  FProperty *this_00;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uchar *puVar7;
  UClass *pUVar8;
  wchar_t *pwVar9;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *pTVar10;
  FOutputDevice local_28;
  undefined1 local_18;
  int local_14;
  
  bVar4 = IsValidIndex(this,param_1);
  pwVar9 = L"";
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(InPropertyIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorage.cpp"
                       ,0x3be,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  puVar7 = GetData<unsigned_char>(this,param_1);
  FOutputDevice::FOutputDevice(&local_28);
  lVar2 = *(longlong *)&this->field_0x10;
  local_28._padding_ = (longlong)&___7FRigVMMemoryStorageImportErrorContext__6B_;
  local_18 = 1;
  local_14 = 0;
  if (lVar2 != 0) {
    pUVar8 = URigVMMemoryStorageGeneratorClass::StaticClass();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar8->_padding_)) {
      pTVar10 = (TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x210);
      goto LAB_14a110f23;
    }
  }
  pTVar10 = &EmptyProperties;
LAB_14a110f23:
  uVar6 = 0;
  if (param_1 < pTVar10->ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  this_00 = *(FProperty **)((pTVar10->AllocatorInstance).Data + (longlong)param_1 * 8);
  if ((param_2->Data).ArrayNum != 0) {
    pwVar9 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  bVar4 = FProperty::ValidateImportFlags(this_00,0,&local_28);
  if ((bVar4) && ((FScriptContainerElement *)pwVar9 != (FScriptContainerElement *)0x0)) {
    (**(code **)(this_00->_padding_ + 0xe8))(this_00,pwVar9,puVar7,0,0,0x8000000,&local_28);
  }
  bVar4 = local_14 == 0;
  FOutputDevice::~FOutputDevice(&local_28);
  return bVar4;
}

// StaticRegisterNativesURigVMMemoryStorage @ 14a1119a0

void __cdecl URigVMMemoryStorage::StaticRegisterNativesURigVMMemoryStorage(void)

{
  return;
}

