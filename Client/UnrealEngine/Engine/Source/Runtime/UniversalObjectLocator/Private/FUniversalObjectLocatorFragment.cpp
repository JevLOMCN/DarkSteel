// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UniversalObjectLocator
// Functions: 35

// StaticStruct @ 144344460

UScriptStruct * __cdecl FUniversalObjectLocatorFragment::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUniversalObjectLocatorFragment.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UniversalObjectLocator();
    Z_Registration_Info_UScriptStruct_FUniversalObjectLocatorFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUniversalObjectLocatorFragment,(UObject *)pUVar1
                         ,L"UniversalObjectLocatorFragment");
  }
  return Z_Registration_Info_UScriptStruct_FUniversalObjectLocatorFragment.OuterSingleton;
}

// FUniversalObjectLocatorFragment<FDirectPathObjectLocator,FSoftObjectPath_const_&> @ 144344a60

FUniversalObjectLocatorFragment * __thiscall
FUniversalObjectLocatorFragment::
FUniversalObjectLocatorFragment<FDirectPathObjectLocator,FSoftObjectPath_const_&>
          (FUniversalObjectLocatorFragment *this,
          TFragmentTypeHandle<FDirectPathObjectLocator> param_1,FSoftObjectPath *param_2)

{
  undefined1 *puVar1;
  FName *pFVar2;
  uint uVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  FUniversalObjectLocatorFragment *pFVar7;
  FAllocatedPayload local_18;
  
  this->bIsInitialized = '\0';
  this->DebugHeaderSizeLog2 = '\0';
  (this->FragmentType).Handle = (uchar)param_1;
  if (param_1 == (TFragmentTypeHandle<FDirectPathObjectLocator>)0xff) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorFragment.h"
                       ,0x17c,
                       L"Attempting to construct a new fragment from an invalid fragment type handle - was it registered?"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FUniversalObjectLocatorFragment *)(*pcVar4)();
      return pFVar7;
    }
  }
  AllocatePayload(this,&local_18,0x20,8);
  *(undefined ***)local_18.DebugVFTablePtr =
       &___7__TFragmentPayload_UFDirectPathObjectLocator___UniversalObjectLocator_UE__6B_;
  FVar5 = (param_2->AssetPath).AssetName;
  pFVar2 = (FName *)((longlong)local_18.Payload + 0x10);
  *(FName *)local_18.Payload = (param_2->AssetPath).PackageName;
  *(FName *)((longlong)local_18.Payload + 8) = FVar5;
  *(FScriptContainerElement **)&pFVar2->ComparisonIndex = (FScriptContainerElement *)0x0;
  uVar3 = (param_2->SubPathString).Data.ArrayNum;
  _Src = (param_2->SubPathString).Data.AllocatorInstance.Data;
  (((FName *)((longlong)local_18.Payload + 0x18))->ComparisonIndex).Value = uVar3;
  if (uVar3 == 0) {
    ((FName *)((longlong)local_18.Payload + 0x18))->Number = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar3,0,(ForAnyElementType *)pFVar2,uVar3,
               (int *)&((FName *)((longlong)local_18.Payload + 0x18))->Number);
    memcpy(*(FScriptContainerElement **)&pFVar2->ComparisonIndex,_Src,(longlong)(int)uVar3);
  }
  return this;
}

// FUniversalObjectLocatorFragment<FDirectPathObjectLocator,FSoftObjectPath> @ 144344b50

FUniversalObjectLocatorFragment * __thiscall
FUniversalObjectLocatorFragment::
FUniversalObjectLocatorFragment<FDirectPathObjectLocator,FSoftObjectPath>
          (FUniversalObjectLocatorFragment *this,
          TFragmentTypeHandle<FDirectPathObjectLocator> param_1,FSoftObjectPath *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FUniversalObjectLocatorFragment *pFVar5;
  FAllocatedPayload local_18;
  
  this->bIsInitialized = '\0';
  this->DebugHeaderSizeLog2 = '\0';
  (this->FragmentType).Handle = (uchar)param_1;
  if (param_1 == (TFragmentTypeHandle<FDirectPathObjectLocator>)0xff) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorFragment.h"
                       ,0x17c,
                       L"Attempting to construct a new fragment from an invalid fragment type handle - was it registered?"
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FUniversalObjectLocatorFragment *)(*pcVar2)();
      return pFVar5;
    }
  }
  AllocatePayload(this,&local_18,0x20,8);
  *(undefined ***)local_18.DebugVFTablePtr =
       &___7__TFragmentPayload_UFDirectPathObjectLocator___UniversalObjectLocator_UE__6B_;
  FVar3 = (param_2->AssetPath).AssetName;
  *(FName *)local_18.Payload = (param_2->AssetPath).PackageName;
  *(FName *)((longlong)local_18.Payload + 8) = FVar3;
  ((FName *)((longlong)local_18.Payload + 0x10))->ComparisonIndex = 0;
  ((FName *)((longlong)local_18.Payload + 0x10))->Number = 0;
  *(FScriptContainerElement **)((longlong)local_18.Payload + 0x10) =
       (param_2->SubPathString).Data.AllocatorInstance.Data;
  (param_2->SubPathString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (((FName *)((longlong)local_18.Payload + 0x18))->ComparisonIndex).Value =
       (param_2->SubPathString).Data.ArrayNum;
  ((FName *)((longlong)local_18.Payload + 0x18))->Number = (param_2->SubPathString).Data.ArrayMax;
  (param_2->SubPathString).Data.ArrayNum = 0;
  (param_2->SubPathString).Data.ArrayMax = 0;
  return this;
}

// FUniversalObjectLocatorFragment @ 144345ba0

FUniversalObjectLocatorFragment * __thiscall
FUniversalObjectLocatorFragment::FUniversalObjectLocatorFragment
          (FUniversalObjectLocatorFragment *this,FUniversalObjectLocatorFragment *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  byte bVar3;
  
  (this->FragmentType).Handle = (param_1->FragmentType).Handle;
  bVar3 = (this->bIsInitialized ^ param_1->bIsInitialized) & 1 ^ this->field_0x1f;
  this->field_0x1f = bVar3;
  bVar3 = (bVar3 ^ param_1->field_0x1f) & 2 ^ bVar3;
  this->field_0x1f = bVar3;
  this->field_0x1f = (bVar3 ^ param_1->field_0x1f) & 3 ^ param_1->field_0x1f;
  uVar2 = *(undefined8 *)(param_1->Data + 8);
  *(undefined8 *)this->Data = *(undefined8 *)param_1->Data;
  *(undefined8 *)(this->Data + 8) = uVar2;
  *(undefined8 *)(this->Data + 0x10) = *(undefined8 *)(param_1->Data + 0x10);
  *(undefined4 *)(this->Data + 0x18) = *(undefined4 *)(param_1->Data + 0x18);
  *(undefined2 *)(this->Data + 0x1c) = *(undefined2 *)(param_1->Data + 0x1c);
  *(undefined2 *)&param_1->FragmentType = 0xff;
  return this;
}

// FUniversalObjectLocatorFragment @ 144345c10

FUniversalObjectLocatorFragment * __thiscall
FUniversalObjectLocatorFragment::FUniversalObjectLocatorFragment
          (FUniversalObjectLocatorFragment *this,FUniversalObjectLocatorFragment *param_1)

{
  undefined1 *puVar1;
  uchar uVar2;
  UScriptStruct *this_00;
  code *pcVar3;
  bool bVar4;
  FFragmentType *pFVar5;
  FUniversalObjectLocatorFragment *pFVar6;
  void *pvVar7;
  void *pvVar8;
  
  uVar2 = (param_1->FragmentType).Handle;
  puVar1 = &this->field_0x1f;
  this->bIsInitialized = '\0';
  this->DebugHeaderSizeLog2 = '\0';
  this->bIsInline = '\0';
  (this->FragmentType).Handle = uVar2;
  if (param_1->bIsInitialized != 0) {
    pFVar5 = UE::UniversalObjectLocator::FFragmentTypeHandle::Resolve(&this->FragmentType);
    if (pFVar5 == (FFragmentType *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ResolvedFragmentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorFragment.cpp"
                         ,0x94,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FUniversalObjectLocatorFragment *)(*pcVar3)();
        return pFVar6;
      }
    }
    DefaultConstructPayload(this,pFVar5);
    this_00 = (pFVar5->PayloadType).field0_0x0.DebugPtr;
    pvVar7 = GetPayload(param_1);
    pvVar8 = GetPayload(this);
    UScriptStruct::CopyScriptStruct(this_00,pvVar8,pvVar7,1);
  }
  return this;
}

// FUniversalObjectLocatorFragment @ 144345cc0

FUniversalObjectLocatorFragment * __thiscall
FUniversalObjectLocatorFragment::FUniversalObjectLocatorFragment
          (FUniversalObjectLocatorFragment *this,FFragmentType *param_1)

{
  undefined1 *puVar1;
  short sVar2;
  UScriptStruct *pUVar3;
  FAllocatedPayload local_18;
  
  UE::UniversalObjectLocator::MakeFragmentTypeHandle((FFragmentType *)&this->FragmentType);
  puVar1 = &this->field_0x1f;
  this->bIsInitialized = '\0';
  this->DebugHeaderSizeLog2 = '\0';
  this->bIsInline = '\0';
  pUVar3 = (param_1->PayloadType).field0_0x0.DebugPtr;
  sVar2 = *(short *)((longlong)&pUVar3->_padding_ + 4);
  AllocatePayload(this,&local_18,(longlong)((int)pUVar3->_padding_ + -1 + (int)sVar2 & -(int)sVar2),
                  (longlong)sVar2);
  (*(param_1->StaticBindings).FragmentDebugInitializer)(local_18.DebugVFTablePtr);
  (**(code **)(pUVar3->_padding_ + 0x2f8))(pUVar3,local_18.Payload,1);
  return this;
}

// FUniversalObjectLocatorFragment @ 144345d50

FUniversalObjectLocatorFragment * __thiscall
FUniversalObjectLocatorFragment::FUniversalObjectLocatorFragment
          (FUniversalObjectLocatorFragment *this,UObject *param_1,UObject *param_2)

{
  code *pcVar1;
  bool bVar2;
  FFragmentType *pFVar3;
  FRegistry *pFVar4;
  FUniversalObjectLocatorFragment *pFVar5;
  void *pvVar6;
  longlong lVar7;
  uchar uVar8;
  ulonglong uVar9;
  FInitializeParams local_28;
  FInitializeResult local_18;
  
  *(undefined2 *)&this->FragmentType = 0xff;
  DestroyPayload(this);
  (this->FragmentType).Handle = 0xff;
  pFVar3 = UE::UniversalObjectLocator::FindBestFragmentType(param_1,param_2);
  if (pFVar3 != (FFragmentType *)0x0) {
    pFVar4 = UE::UniversalObjectLocator::FRegistry::Get();
    lVar7 = (longlong)pFVar3 - (longlong)(pFVar4->FragmentTypes).AllocatorInstance.Data;
    lVar7 = lVar7 / 6 + (lVar7 >> 0x3f);
    uVar9 = (lVar7 >> 4) - (lVar7 >> 0x3f);
    if (0xfe < uVar9) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FragmentTypeOffset < std::numeric_limits<uint8>::max()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorFragment.cpp"
                         ,0x3e,L"Maximum number of UOL FragmentTypes reached");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FUniversalObjectLocatorFragment *)(*pcVar1)();
        return pFVar5;
      }
    }
    uVar8 = (uchar)uVar9;
    if (uVar8 == 0xff) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHandleOffset != 0xff",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorFragmentTypeHandle.h"
                         ,0x1c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FUniversalObjectLocatorFragment *)(*pcVar1)();
        return pFVar5;
      }
    }
    (this->FragmentType).Handle = uVar8;
    DefaultConstructPayload(this,pFVar3);
    local_28.Object = param_1;
    local_28.Context = param_2;
    pvVar6 = GetPayload(this);
    (*(pFVar3->InstanceBindings).Initialize)(&local_18,pvVar6,&local_28);
  }
  return this;
}

// FUniversalObjectLocatorFragment @ 144345e80

FUniversalObjectLocatorFragment * __thiscall
FUniversalObjectLocatorFragment::FUniversalObjectLocatorFragment
          (FUniversalObjectLocatorFragment *this)

{
  *(undefined2 *)&this->FragmentType = 0xff;
  return this;
}

// ~FUniversalObjectLocatorFragment @ 144346070

void __thiscall
FUniversalObjectLocatorFragment::~FUniversalObjectLocatorFragment
          (FUniversalObjectLocatorFragment *this)

{
  bool bVar1;
  void *pvVar2;
  FFragmentType *pFVar3;
  UScriptStruct *pUVar4;
  undefined1 auStackX_8 [8];
  
  if ((this->bIsInitialized == 0) || (GIsRequestingExit)) {
    return;
  }
  if (this->bIsInitialized == 0) {
    return;
  }
  pvVar2 = GetPayload(this);
  pFVar3 = UE::UniversalObjectLocator::FFragmentTypeHandle::Resolve(&this->FragmentType);
  if (pFVar3 == (FFragmentType *)0x0) {
    pUVar4 = (UScriptStruct *)0x0;
LAB_144347590:
    bVar1 = `FUniversalObjectLocatorFragment::DestroyPayload'::__l6::<lambda_1>::operator()
                      (auStackX_8);
    if (!bVar1) goto LAB_1443475b3;
  }
  else {
    pUVar4 = (pFVar3->PayloadType).field0_0x0.DebugPtr;
    if (pUVar4 == (UScriptStruct *)0x0) goto LAB_144347590;
  }
  (**(code **)(pUVar4->_padding_ + 0x300))(pUVar4,pvVar2,1);
LAB_1443475b3:
  if (this->bIsInline == '\0') {
    FMemory::Free((void *)((longlong)pvVar2 -
                          ((ulonglong)(uint)(1 << (this->DebugHeaderSizeLog2 & 0x1f)) & 0xfffffffe))
                 );
  }
  this->bIsInitialized = '\0';
  return;
}

// operator= @ 1443461c0

FUniversalObjectLocatorFragment * __thiscall
FUniversalObjectLocatorFragment::operator=
          (FUniversalObjectLocatorFragment *this,FUniversalObjectLocatorFragment *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  
  DestroyPayload(this);
  bVar2 = (this->bIsInitialized ^ param_1->bIsInitialized) & 1 ^ this->field_0x1f;
  this->field_0x1f = bVar2;
  bVar2 = (bVar2 ^ param_1->field_0x1f) & 2 ^ bVar2;
  this->field_0x1f = bVar2;
  this->field_0x1f = (bVar2 ^ param_1->field_0x1f) & 3 ^ param_1->field_0x1f;
  (this->FragmentType).Handle = (param_1->FragmentType).Handle;
  uVar1 = *(undefined8 *)(param_1->Data + 8);
  *(undefined8 *)this->Data = *(undefined8 *)param_1->Data;
  *(undefined8 *)(this->Data + 8) = uVar1;
  *(undefined8 *)(this->Data + 0x10) = *(undefined8 *)(param_1->Data + 0x10);
  *(undefined4 *)(this->Data + 0x18) = *(undefined4 *)(param_1->Data + 0x18);
  *(undefined2 *)(this->Data + 0x1c) = *(undefined2 *)(param_1->Data + 0x1c);
  *(undefined2 *)&param_1->FragmentType = 0xff;
  return this;
}

// operator= @ 144346250

FUniversalObjectLocatorFragment * __thiscall
FUniversalObjectLocatorFragment::operator=
          (FUniversalObjectLocatorFragment *this,FUniversalObjectLocatorFragment *param_1)

{
  UScriptStruct *this_00;
  code *pcVar1;
  bool bVar2;
  FFragmentType *pFVar3;
  FUniversalObjectLocatorFragment *pFVar4;
  void *pvVar5;
  void *pvVar6;
  
  DestroyPayload(this);
  if (param_1->bIsInitialized == 0) {
    this->bIsInitialized = '\0';
    (this->FragmentType).Handle = 0xff;
    return this;
  }
  pFVar3 = UE::UniversalObjectLocator::FFragmentTypeHandle::Resolve(&this->FragmentType);
  if (pFVar3 == (FFragmentType *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResolvedFragmentType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorFragment.cpp"
                       ,0xa9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FUniversalObjectLocatorFragment *)(*pcVar1)();
      return pFVar4;
    }
  }
  (this->FragmentType).Handle = (param_1->FragmentType).Handle;
  DefaultConstructPayload(this,pFVar3);
  this_00 = (pFVar3->PayloadType).field0_0x0.DebugPtr;
  pvVar5 = GetPayload(param_1);
  pvVar6 = GetPayload(this);
  UScriptStruct::CopyScriptStruct(this_00,pvVar6,pvVar5,1);
  return this;
}

// AddStructReferencedObjects @ 144346cc0

void __thiscall
FUniversalObjectLocatorFragment::AddStructReferencedObjects
          (FUniversalObjectLocatorFragment *this,FReferenceCollector *param_1)

{
  TObjectPtr<UScriptStruct_const_> *pTVar1;
  FFragmentType *pFVar2;
  void *pvVar3;
  
  pFVar2 = UE::UniversalObjectLocator::FFragmentTypeHandle::Resolve(&this->FragmentType);
  if (pFVar2 != (FFragmentType *)0x0) {
    pTVar1 = &pFVar2->PayloadType;
    (**(code **)(param_1->_padding_ + 0x88))(param_1,pTVar1,0);
    if ((this->bIsInitialized != 0) && ((pTVar1->field0_0x0).DebugPtr != (UScriptStruct *)0x0)) {
      pvVar3 = GetPayload(this);
      FReferenceCollector::AddReferencedObjects
                (param_1,pTVar1,pvVar3,(UObject *)0x0,(FProperty *)0x0);
    }
  }
  return;
}

// AllocatePayload @ 144346d40

FAllocatedPayload * __thiscall
FUniversalObjectLocatorFragment::AllocatePayload
          (FUniversalObjectLocatorFragment *this,FAllocatedPayload *__return_storage_ptr__,
          ulong64 param_1,ulong64 param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAllocatedPayload *pFVar5;
  FUniversalObjectLocatorFragment *pFVar6;
  byte bVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  if (this->bIsInitialized != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorFragment.cpp"
                       ,0x1fa,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FAllocatedPayload *)(*pcVar2)();
      return pFVar5;
    }
  }
  this->bIsInitialized = '\x01';
  uVar10 = 8;
  if (8 < param_2) {
    uVar10 = param_2;
  }
  uVar9 = (uint)uVar10;
  uVar4 = 1;
  if (uVar9 != 0) {
    uVar4 = uVar9;
  }
  uVar8 = (ulonglong)(uVar4 - 1) * 2 + 1;
  lVar1 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  if (0x3f < (uint)lVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("HeaderCapacityLog2 <= 63",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorFragment.cpp"
                       ,0x5c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FAllocatedPayload *)(*pcVar2)();
      return pFVar5;
    }
  }
  bVar7 = this->field_0x1f;
  this->DebugHeaderSizeLog2 = lVar1;
  uVar8 = param_1 + ((ulonglong)(uint)(1 << ((byte)lVar1 & 0x1f)) & 0xfffffffe);
  if ((uVar8 < 0x1f) && (uVar10 < 9)) {
    bVar7 = bVar7 & 3 | (byte)lVar1 << 2 | 2;
    this->field_0x1f = bVar7;
    pFVar6 = this;
  }
  else {
    pFVar6 = FMemory::Malloc(uVar8,uVar9);
    this->bIsInline = '\0';
    bVar7 = this->field_0x1f;
    *(FUniversalObjectLocatorFragment **)this->Data = pFVar6;
  }
  __return_storage_ptr__->Payload =
       pFVar6->Data + ((ulonglong)(uint)(1 << (bVar7 >> 2 & 0x1f)) & 0xfffffffe);
  __return_storage_ptr__->DebugVFTablePtr =
       pFVar6->Data + ((ulonglong)(uint)(1 << (bVar7 >> 2 & 0x1f)) & 0xfffffffe) + -8;
  return __return_storage_ptr__;
}

// CheckPayloadType @ 144346f90

void __thiscall
FUniversalObjectLocatorFragment::CheckPayloadType
          (FUniversalObjectLocatorFragment *this,UScriptStruct *param_1)

{
  UScriptStruct *pUVar1;
  code *pcVar2;
  FFragmentType *pFVar3;
  bool bVar4;
  FName local_res8;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  pFVar3 = UE::UniversalObjectLocator::FFragmentTypeHandle::Resolve(&this->FragmentType);
  if (pFVar3 != (FFragmentType *)0x0) {
    pUVar1 = (pFVar3->PayloadType).field0_0x0.DebugPtr;
    if (pUVar1 == (UScriptStruct *)0x0) {
      bVar4 = param_1 == (UScriptStruct *)0x0;
    }
    else {
      bVar4 = pUVar1 == param_1;
    }
    if (!bVar4) {
      if (param_1 != (UScriptStruct *)0x0) {
        local_res8 = (FName)param_1->_padding_;
        ::FName::ToString(&local_res8,&local_28);
      }
      pUVar1 = (pFVar3->PayloadType).field0_0x0.DebugPtr;
      if (pUVar1 != (UScriptStruct *)0x0) {
        local_res18[0] = (FName)pUVar1->_padding_;
        ::FName::ToString(local_res18,&local_38);
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FragmentTypePtr == nullptr || FragmentTypePtr->PayloadType == TypeToCompare"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorFragment.cpp"
                         ,0x123,
                         L"Type mismatch when accessing payload data! Attempting to access a stored %s payload as %s."
                        );
      if ((pUVar1 != (UScriptStruct *)0x0) &&
         (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if ((param_1 != (UScriptStruct *)0x0) &&
         (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// DefaultConstructPayload @ 144347250

void __thiscall
FUniversalObjectLocatorFragment::DefaultConstructPayload
          (FUniversalObjectLocatorFragment *this,FFragmentType *param_1)

{
  short sVar1;
  UScriptStruct *pUVar2;
  FAllocatedPayload local_18;
  
  pUVar2 = (param_1->PayloadType).field0_0x0.DebugPtr;
  sVar1 = *(short *)((longlong)&pUVar2->_padding_ + 4);
  AllocatePayload(this,&local_18,(longlong)((int)pUVar2->_padding_ + -1 + (int)sVar1 & -(int)sVar1),
                  (longlong)sVar1);
  (*(param_1->StaticBindings).FragmentDebugInitializer)(local_18.DebugVFTablePtr);
                    /* WARNING: Could not recover jumptable at 0x0001443472ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar2->_padding_ + 0x2f8))(pUVar2,local_18.Payload,1);
  return;
}

// DestroyPayload @ 144347550

void __thiscall
FUniversalObjectLocatorFragment::DestroyPayload(FUniversalObjectLocatorFragment *this)

{
  bool bVar1;
  void *pvVar2;
  FFragmentType *pFVar3;
  UScriptStruct *pUVar4;
  undefined1 local_res8 [8];
  
  if (this->bIsInitialized == 0) {
    return;
  }
  pvVar2 = GetPayload(this);
  pFVar3 = UE::UniversalObjectLocator::FFragmentTypeHandle::Resolve(&this->FragmentType);
  if (pFVar3 == (FFragmentType *)0x0) {
    pUVar4 = (UScriptStruct *)0x0;
LAB_144347590:
    bVar1 = `FUniversalObjectLocatorFragment::DestroyPayload'::__l6::<lambda_1>::operator()
                      (local_res8);
    if (!bVar1) goto LAB_1443475b3;
  }
  else {
    pUVar4 = (pFVar3->PayloadType).field0_0x0.DebugPtr;
    if (pUVar4 == (UScriptStruct *)0x0) goto LAB_144347590;
  }
  (**(code **)(pUVar4->_padding_ + 0x300))(pUVar4,pvVar2,1);
LAB_1443475b3:
  if (this->bIsInline == '\0') {
    FMemory::Free((void *)((longlong)pvVar2 -
                          ((ulonglong)(uint)(1 << (this->DebugHeaderSizeLog2 & 0x1f)) & 0xfffffffe))
                 );
  }
  this->bIsInitialized = '\0';
  return;
}

// ExportTextItem @ 144347770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FUniversalObjectLocatorFragment::ExportTextItem
          (FUniversalObjectLocatorFragment *this,FString *param_1,
          FUniversalObjectLocatorFragment *param_2,UObject *param_3,int param_4,UObject *param_5)

{
  wchar_t *pwVar1;
  FFragmentType *this_00;
  void *pvVar2;
  ulong64 uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_1c8 [32];
  TStringBuilderBase<wchar_t> local_1a8;
  wchar_t local_188 [32];
  TStringBuilderBase<wchar_t> local_148;
  wchar_t local_128 [128];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_1c8;
  local_1a8.Base = local_188;
  local_1a8.CurPos = local_188;
  local_1a8.bIsDynamic = false;
  local_1a8.bIsExternal = false;
  local_1a8.End = (wchar_t *)&local_148;
  this_00 = UE::UniversalObjectLocator::FFragmentTypeHandle::Resolve(&this->FragmentType);
  if ((this_00 != (FFragmentType *)0x0) &&
     ((this_00->PayloadType).field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    ::FName::AppendString(&this_00->FragmentTypeID,&local_1a8);
    local_148.Base = local_128;
    local_148.bIsDynamic = false;
    local_148.bIsExternal = false;
    local_148.CurPos = local_128;
    local_148.End = (wchar_t *)local_28;
    pvVar2 = GetPayload(this);
    UE::UniversalObjectLocator::FFragmentType::ToString(this_00,pvVar2,&local_148);
    if ((int)((longlong)local_148.CurPos - (longlong)local_148.Base >> 1) != 0) {
      if (local_1a8.End < (TStringBuilderBase<wchar_t> *)(local_1a8.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_1a8,1);
      }
      pwVar1 = local_148.Base;
      *local_1a8.CurPos = L'=';
      local_1a8.CurPos = local_1a8.CurPos + 1;
      iVar4 = (int)((longlong)local_148.CurPos - (longlong)local_148.Base >> 1);
      uVar3 = (ulong64)iVar4;
      if (local_1a8.End < (TStringBuilderBase<wchar_t> *)(local_1a8.CurPos + uVar3)) {
        TStringBuilderBase<wchar_t>::Extend(&local_1a8,uVar3);
      }
      if (iVar4 != 0) {
        pvVar2 = FGenericPlatformString::Memcpy(local_1a8.CurPos,pwVar1,uVar3 * 2);
        local_1a8.CurPos = (wchar_t *)((longlong)pvVar2 + uVar3 * 2);
      }
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_148);
  }
  ::FString::AppendChar(param_1,L'(');
  lVar5 = (longlong)local_1a8.CurPos - (longlong)local_1a8.Base;
  if (local_1a8.End < (TStringBuilderBase<wchar_t> *)(local_1a8.CurPos + 1)) {
    TStringBuilderBase<wchar_t>::Extend(&local_1a8,1);
  }
  *local_1a8.CurPos = L'\0';
  ::FString::AppendChars(param_1,local_1a8.Base,(int)(lVar5 >> 1));
  ::FString::AppendChar(param_1,L')');
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1a8);
  return true;
}

// GetFragmentStruct @ 144347e50

UScriptStruct * __thiscall
FUniversalObjectLocatorFragment::GetFragmentStruct(FUniversalObjectLocatorFragment *this)

{
  FFragmentType *pFVar1;
  
  pFVar1 = UE::UniversalObjectLocator::FFragmentTypeHandle::Resolve(&this->FragmentType);
  if (pFVar1 != (FFragmentType *)0x0) {
    return (pFVar1->PayloadType).field0_0x0.DebugPtr;
  }
  return (UScriptStruct *)0x0;
}

// GetFragmentType @ 144347e80

FFragmentType * __thiscall
FUniversalObjectLocatorFragment::GetFragmentType(FUniversalObjectLocatorFragment *this)

{
  FFragmentType *pFVar1;
  
  pFVar1 = UE::UniversalObjectLocator::FFragmentTypeHandle::Resolve(&this->FragmentType);
  return pFVar1;
}

// GetFragmentTypeHandle @ 144347e90

FFragmentTypeHandle __thiscall
FUniversalObjectLocatorFragment::GetFragmentTypeHandle(FUniversalObjectLocatorFragment *this)

{
  FFragmentType *pFVar1;
  FFragmentType *in_RDX;
  
  pFVar1 = UE::UniversalObjectLocator::FFragmentTypeHandle::Resolve(&this->FragmentType);
  if (pFVar1 != (FFragmentType *)0x0) {
    UE::UniversalObjectLocator::MakeFragmentTypeHandle(in_RDX);
    return (FFragmentTypeHandle)(uchar)in_RDX;
  }
  *(undefined1 *)&(in_RDX->InstanceBindings).Initialize = 0xff;
  return (FFragmentTypeHandle)(uchar)in_RDX;
}

// GetPayload @ 1443481b0

void * __thiscall FUniversalObjectLocatorFragment::GetPayload(FUniversalObjectLocatorFragment *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  if (this->bIsInitialized == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorFragment.cpp"
                       ,0x1e8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  if (this->bIsInline == '\0') {
    this = *(FUniversalObjectLocatorFragment **)this->Data;
  }
  return this->Data + ((ulonglong)(uint)(1 << (this->DebugHeaderSizeLog2 & 0x1f)) & 0xfffffffe);
}

// GetPayload @ 144348220

void * __thiscall FUniversalObjectLocatorFragment::GetPayload(FUniversalObjectLocatorFragment *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  if (this->bIsInitialized == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsInitialized",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorFragment.cpp"
                       ,0x1f0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  if (this->bIsInline == '\0') {
    this = *(FUniversalObjectLocatorFragment **)this->Data;
  }
  return this->Data + ((ulonglong)(uint)(1 << (this->DebugHeaderSizeLog2 & 0x1f)) & 0xfffffffe);
}

// GetPreloadDependencies @ 144348290

void __thiscall
FUniversalObjectLocatorFragment::GetPreloadDependencies
          (FUniversalObjectLocatorFragment *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// ImportTextItem @ 1443485f0

bool __thiscall
FUniversalObjectLocatorFragment::ImportTextItem
          (FUniversalObjectLocatorFragment *this,wchar_t **param_1,int param_2,UObject *param_3,
          FOutputDevice *param_4,FArchive *param_5)

{
  bool bVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  FParseStringResult *pFVar4;
  FParseStringParams local_res10 [24];
  TStringView<wchar_t> local_38;
  FParseStringResult local_28;
  
  pwVar2 = *param_1;
  if ((pwVar2 != (wchar_t *)0x0) && (*pwVar2 == L'(')) {
    pwVar2 = wcschr(pwVar2,L')');
    local_38.DataPtr = *param_1;
    if ((local_38.DataPtr != pwVar2) &&
       (lVar3 = (longlong)pwVar2 - (longlong)local_38.DataPtr >> 1, lVar3 < 0x7fffffff)) {
      local_38.DataPtr = local_38.DataPtr + 1;
      local_res10[0].Flags = None;
      local_38.Size = (int)lVar3 + -1;
      pFVar4 = TryParseString(this,&local_28,&local_38,local_res10);
      bVar1 = pFVar4->bSuccess;
      if (local_28.ErrorMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28.ErrorMessage.TextData.Reference + 0x10))();
      }
      return bVar1 != false;
    }
  }
  return false;
}

// Reset @ 144349530

void __thiscall
FUniversalObjectLocatorFragment::Reset
          (FUniversalObjectLocatorFragment *this,UObject *param_1,UObject *param_2)

{
  code *pcVar1;
  bool bVar2;
  FFragmentType *pFVar3;
  FRegistry *pFVar4;
  void *pvVar5;
  longlong lVar6;
  uchar uVar7;
  ulonglong uVar8;
  FInitializeParams local_28;
  FInitializeResult local_18;
  
  DestroyPayload(this);
  (this->FragmentType).Handle = 0xff;
  pFVar3 = UE::UniversalObjectLocator::FindBestFragmentType(param_1,param_2);
  if (pFVar3 != (FFragmentType *)0x0) {
    pFVar4 = UE::UniversalObjectLocator::FRegistry::Get();
    lVar6 = (longlong)pFVar3 - (longlong)(pFVar4->FragmentTypes).AllocatorInstance.Data;
    lVar6 = lVar6 / 6 + (lVar6 >> 0x3f);
    uVar8 = (lVar6 >> 4) - (lVar6 >> 0x3f);
    if (0xfe < uVar8) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FragmentTypeOffset < std::numeric_limits<uint8>::max()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorFragment.cpp"
                         ,0x3e,L"Maximum number of UOL FragmentTypes reached");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar7 = (uchar)uVar8;
    if (uVar7 == 0xff) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHandleOffset != 0xff",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorFragmentTypeHandle.h"
                         ,0x1c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (this->FragmentType).Handle = uVar7;
    DefaultConstructPayload(this,pFVar3);
    local_28.Object = param_1;
    local_28.Context = param_2;
    pvVar5 = GetPayload(this);
    (*(pFVar3->InstanceBindings).Initialize)(&local_18,pvVar5,&local_28);
  }
  return;
}

// Reset @ 144349650

void __thiscall
FUniversalObjectLocatorFragment::Reset
          (FUniversalObjectLocatorFragment *this,UObject *param_1,UObject *param_2,
          TFunctionRef<bool___cdecl(UE::UniversalObjectLocator::FFragmentTypeHandle)> *param_3)

{
  undefined1 *puVar1;
  short sVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  FRegistry *pFVar9;
  longlong lVar10;
  byte bVar11;
  uchar uVar12;
  ulonglong uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  byte bVar17;
  byte local_78 [8];
  FAllocatedPayload local_70;
  UObject *local_60;
  UObject *local_58;
  undefined1 local_50 [24];
  
  DestroyPayload(this);
  uVar14 = 0;
  (this->FragmentType).Handle = 0xff;
  pFVar15 = (FScriptContainerElement *)0x0;
  pFVar9 = UE::UniversalObjectLocator::FRegistry::Get();
  iVar3 = (pFVar9->FragmentTypes).ArrayNum;
  if (iVar3 < 0xff) {
    bVar11 = 0;
    bVar17 = (byte)iVar3;
    if (bVar17 != 0) {
      do {
        if ((bVar11 == 0xff) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InHandleOffset != 0xff",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorFragmentTypeHandle.h"
                               ,0x1c,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_78[0] = bVar11;
        cVar7 = (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_78);
        if (cVar7 != '\0') {
          if (((pFVar9->FragmentTypes).ArrayNum <= (int)(uint)bVar11) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar16 = (pFVar9->FragmentTypes).AllocatorInstance.Data + (ulonglong)bVar11 * 0x60;
          uVar8 = (**(code **)(pFVar16 + 0x20))(param_1,param_2);
          if (uVar14 < uVar8) {
            pFVar15 = pFVar16;
            uVar14 = uVar8;
          }
        }
        bVar11 = bVar11 + 1;
      } while (bVar11 < bVar17);
      if ((pFVar15 != (FScriptContainerElement *)0x0) && (*(longlong *)(pFVar15 + 0x30) != 0)) {
        pFVar9 = UE::UniversalObjectLocator::FRegistry::Get();
        lVar10 = (longlong)pFVar15 - (longlong)(pFVar9->FragmentTypes).AllocatorInstance.Data;
        lVar10 = lVar10 / 6 + (lVar10 >> 0x3f);
        uVar13 = (lVar10 >> 4) - (lVar10 >> 0x3f);
        if ((0xfe < uVar13) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("FragmentTypeOffset < std::numeric_limits<uint8>::max()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorFragment.cpp"
                               ,0x3e,L"Maximum number of UOL FragmentTypes reached"), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar12 = (uchar)uVar13;
        if ((uVar12 == 0xff) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InHandleOffset != 0xff",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorFragmentTypeHandle.h"
                               ,0x1c,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (this->FragmentType).Handle = uVar12;
        plVar4 = *(longlong **)(pFVar15 + 0x30);
        sVar2 = *(short *)((longlong)plVar4 + 0x5c);
        AllocatePayload(this,&local_70,(longlong)((int)plVar4[0xb] + -1 + (int)sVar2 & -(int)sVar2),
                        (longlong)sVar2);
        (**(code **)(pFVar15 + 0x28))(local_70.DebugVFTablePtr);
        (**(code **)(*plVar4 + 0x2f8))(plVar4,local_70.Payload,1);
        local_60 = param_1;
        local_58 = param_2;
        if ((this->bIsInitialized == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("bIsInitialized",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorFragment.cpp"
                               ,0x1e8,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (this->bIsInline == '\0') {
          this = *(FUniversalObjectLocatorFragment **)this->Data;
        }
        (**(code **)pFVar15)
                  (local_50,this->Data +
                            ((ulonglong)(uint)(1 << (this->DebugHeaderSizeLog2 & 0x1f)) & 0xfffffffe
                            ),&local_60);
      }
    }
  }
  else {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3427333741284950606>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorFragment.cpp"
                       ,0x24e,"FragmentTypes.Num() < 255");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// Reset @ 144349940

void __thiscall FUniversalObjectLocatorFragment::Reset(FUniversalObjectLocatorFragment *this)

{
  DestroyPayload(this);
  (this->FragmentType).Handle = 0xff;
  return;
}

// Resolve @ 144349d40

FResolveResult * __thiscall
FUniversalObjectLocatorFragment::Resolve
          (FUniversalObjectLocatorFragment *this,FResolveResult *__return_storage_ptr__,
          FResolveParams *param_1)

{
  longlong *plVar1;
  FFragmentType *pFVar2;
  void *pvVar3;
  
  pFVar2 = UE::UniversalObjectLocator::FFragmentTypeHandle::Resolve(&this->FragmentType);
  if ((pFVar2 == (FFragmentType *)0x0) || (this->bIsInitialized == 0)) {
    plVar1 = &(__return_storage_ptr__->Value)._padding_;
    *(byte *)plVar1 = (byte)*plVar1 & 0xfc;
    (__return_storage_ptr__->Value)._padding_ = 0;
    (__return_storage_ptr__->Value).TypeIndex = '\0';
  }
  else {
    pvVar3 = GetPayload(this);
    (*(pFVar2->InstanceBindings).Resolve)(__return_storage_ptr__,pvVar3,param_1);
  }
  return __return_storage_ptr__;
}

// Serialize @ 14434a670

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FUniversalObjectLocatorFragment::Serialize(FUniversalObjectLocatorFragment *this,FArchive *param_1)

{
  FTlsAutoCleanup FVar1;
  FFragmentTypeHandle FVar2;
  FRegistry *this_00;
  FFragmentType *pFVar3;
  undefined7 extraout_var;
  FString *pFVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  uint *puVar8;
  FTlsAutoCleanup *pFVar9;
  TSharedRef<FUObjectToken,1> *pTVar10;
  UPackage *pUVar11;
  void *pvVar12;
  UScriptStruct *this_01;
  TReferenceControllerBase<1> local_res10;
  FName local_res20;
  TSharedRef<IMessageToken,1> local_b8;
  TSharedRef<FUObjectToken,1> local_a8;
  TSharedRef<FTokenizedMessage,1> local_98;
  TSharedRef<FTokenizedMessage,1> local_88;
  FText local_78;
  FMessageLog local_68;
  FTextFormat local_38;
  
  if ((param_1->field_0x28 & 1) == 0) {
    if ((param_1->field_0x28 & 4) == 0) {
      if ((param_1->field_0x2b & 2) == 0) {
        return true;
      }
      pFVar3 = UE::UniversalObjectLocator::FFragmentTypeHandle::Resolve(&this->FragmentType);
      if (pFVar3 == (FFragmentType *)0x0) {
        return true;
      }
      this_01 = (pFVar3->PayloadType).field0_0x0.DebugPtr;
      if (this_01 == (UScriptStruct *)0x0) {
        return true;
      }
      if (this->bIsInitialized == 0) {
        return true;
      }
    }
    else {
      pFVar3 = UE::UniversalObjectLocator::FFragmentTypeHandle::Resolve(&this->FragmentType);
      if (pFVar3 == (FFragmentType *)0x0) {
        local_res10._padding_ = (longlong)pFVar3;
        (**(code **)(*(longlong *)param_1 + 0x178))();
        return true;
      }
      local_res10._padding_ = *(longlong *)&pFVar3->FragmentTypeID;
      (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_res10);
      this_01 = (pFVar3->PayloadType).field0_0x0.DebugPtr;
    }
  }
  else {
    local_res20.ComparisonIndex.Value = 0;
    local_res20.Number = 0;
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_res20);
    if (local_res20 == (FName)0x0) {
      DestroyPayload(this);
      (this->FragmentType).Handle = 0xff;
      return true;
    }
    this_00 = UE::UniversalObjectLocator::FRegistry::Get();
    pFVar3 = UE::UniversalObjectLocator::FRegistry::FindFragmentType(this_00,local_res20);
    if ((pFVar3 == (FFragmentType *)0x0) ||
       ((pFVar3->PayloadType).field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
      DestroyPayload(this);
      (this->FragmentType).Handle = 0xff;
      ::FName::FName((FName *)&local_res10,"UOL");
      FMessageLog::FMessageLog(&local_68,(FName *)&local_res10);
      pFVar4 = ::FName::ToString(&local_res20,(FString *)&local_98);
      pFVar5 = FText::FromString(&local_78,pFVar4);
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_a8,L"UOL",L"DataLossWarning",
                          L"WARNING: POTENTIAL DATA LOSS! Universal Object Reference FragmentType {0}! This reference will be lost if re-saved."
                         );
      pFVar7 = FTextFormat::FTextFormat(&local_38,pFVar6,Default);
      pFVar5 = FText::Format<FText>((FText *)&local_b8,pFVar7,pFVar5);
      FMessageLog::Error(&local_68,&local_88,pFVar5);
      if (local_b8.Object != (IMessageToken *)0x0) {
        (**(code **)((local_b8.Object)->_padding_ + 0x10))();
      }
      if (local_a8.Object != (FUObjectToken *)0x0) {
        (**(code **)((local_a8.Object)->_padding_ + 0x10))();
      }
      if (local_98.Object != (FTokenizedMessage *)0x0) {
        FMemory::Free(local_98.Object);
      }
      puVar8 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
      local_b8.SharedReferenceCount.ReferenceController = &local_res10;
      local_b8.Object =
           (IMessageToken *)
           UE::Core::Private::Function::
           TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
           ::Call;
      pFVar9 = FThreadSingletonInitializer::Get
                         ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_b8,puVar8);
      FVar1 = pFVar9[0x2f];
      if ((FVar1 != (FTlsAutoCleanup)0x0) && (*(longlong *)((longlong)FVar1 + 0x30) != 0)) {
        pFVar5 = FText::FText(&local_78);
        pTVar10 = FUObjectToken::Create(&local_a8,*(UObject **)((longlong)FVar1 + 0x30),pFVar5);
        local_b8.Object = (IMessageToken *)pTVar10->Object;
        local_b8.SharedReferenceCount.ReferenceController =
             (pTVar10->SharedReferenceCount).ReferenceController;
        if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        FTokenizedMessage::AddToken(local_88.Object,&local_98,&local_b8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a8.SharedReferenceCount.ReferenceController);
        if (local_78.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
        }
      }
      FMessageLog::Open(&local_68,Error,false);
      if (Z_Registration_Info_UScriptStruct_FUniversalObjectLocatorEmptyPayload.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar11 = Z_Construct_UPackage__Script_UniversalObjectLocator();
        Z_Registration_Info_UScriptStruct_FUniversalObjectLocatorEmptyPayload.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FUniversalObjectLocatorEmptyPayload,
                             (UObject *)pUVar11,L"UniversalObjectLocatorEmptyPayload");
      }
      UScriptStruct::SerializeItem
                (Z_Registration_Info_UScriptStruct_FUniversalObjectLocatorEmptyPayload.
                 OuterSingleton,param_1,&local_res10.SharedReferenceCount,(void *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      FMessageLog::~FMessageLog(&local_68);
      return true;
    }
    FVar2 = UE::UniversalObjectLocator::MakeFragmentTypeHandle((FFragmentType *)&local_res10);
    (this->FragmentType).Handle = *(uchar *)CONCAT71(extraout_var,FVar2.Handle);
    this_01 = (pFVar3->PayloadType).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)param_1 + 0x1b0))(param_1,this_01);
    DefaultConstructPayload(this,pFVar3);
  }
  pvVar12 = GetPayload(this);
  UScriptStruct::SerializeItem(this_01,param_1,pvVar12,(void *)0x0);
  return true;
}

// SerializeFromMismatchedTag @ 14434af60

bool __thiscall
FUniversalObjectLocatorFragment::SerializeFromMismatchedTag
          (FUniversalObjectLocatorFragment *this,FPropertyTag *param_1,
          FStructuredArchiveSlot param_2)

{
  return false;
}

// ToString @ 14434ba60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FUniversalObjectLocatorFragment::ToString
          (FUniversalObjectLocatorFragment *this,TStringBuilderBase<wchar_t> *param_1)

{
  FFragmentType *this_00;
  void *pvVar1;
  undefined1 auStack_158 [32];
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_158;
  this_00 = UE::UniversalObjectLocator::FFragmentTypeHandle::Resolve(&this->FragmentType);
  if ((this_00 != (FFragmentType *)0x0) &&
     ((this_00->PayloadType).field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    ::FName::AppendString(&this_00->FragmentTypeID,param_1);
    local_138.Base = local_118;
    local_138.bIsDynamic = false;
    local_138.bIsExternal = false;
    local_138.CurPos = local_118;
    local_138.End = (wchar_t *)local_18;
    pvVar1 = GetPayload(this);
    UE::UniversalObjectLocator::FFragmentType::ToString(this_00,pvVar1,&local_138);
    if ((int)((longlong)local_138.CurPos - (longlong)local_138.Base >> 1) != 0) {
      if (param_1->End < param_1->CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(param_1,1);
      }
      *param_1->CurPos = L'=';
      param_1->CurPos = param_1->CurPos + 1;
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                (param_1,local_138.Base,
                 (int)((longlong)local_138.CurPos - (longlong)local_138.Base >> 1));
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  }
  return;
}

// TryParseFragmentPayload @ 14434bb80

FParseStringResult * __thiscall
FUniversalObjectLocatorFragment::TryParseFragmentPayload
          (FUniversalObjectLocatorFragment *this,FParseStringResult *__return_storage_ptr__,
          TStringView<wchar_t> *param_1,FParseStringParams *param_2)

{
  ITextData *pIVar1;
  UScriptStruct *this_00;
  FText *pFVar2;
  FParseStringResult *pFVar3;
  FFragmentType *pFVar4;
  void *pvVar5;
  bool bVar6;
  undefined4 local_res8 [2];
  FText local_68;
  TStringView<wchar_t> local_58;
  FParseStringResult local_48;
  
  local_res8[0] = 0;
  if (this->bIsInitialized == 0) {
    local_48.ErrorMessage.TextData.Reference = (ITextData *)0x0;
    local_48.ErrorMessage.Flags = 0;
    local_48.ErrorMessage._12_4_ = 0;
    local_48.NumCharsParsed = 0;
    local_48.bSuccess = false;
    local_48._21_3_ = 0;
    FText::FText(&local_48.ErrorMessage);
    bVar6 = (param_2->Flags & ErrorMessaging) == None;
    local_48._16_8_ = local_48._16_8_ & 0xffffff0000000000;
    if (bVar6) {
      pFVar2 = FText::FText(&local_68);
    }
    else {
      pFVar2 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_58,L"UOL",L"Error_Uninitialized",
                          L"Unable to parse a payload for an uninitialized fragment.");
    }
    pFVar3 = UE::UniversalObjectLocator::FParseStringResult::Failure(&local_48,pFVar2);
    (__return_storage_ptr__->ErrorMessage).TextData.Reference = (ITextData *)0x0;
    pIVar1 = (pFVar3->ErrorMessage).TextData.Reference;
    (__return_storage_ptr__->ErrorMessage).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    (__return_storage_ptr__->ErrorMessage).Flags = (pFVar3->ErrorMessage).Flags;
    __return_storage_ptr__->NumCharsParsed = pFVar3->NumCharsParsed;
    __return_storage_ptr__->bSuccess = pFVar3->bSuccess;
    if ((bVar6) && (local_68.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    if (bVar6) goto LAB_14434bdc5;
    local_68.TextData.Reference =
         (ITextData *)CONCAT44(local_58.DataPtr._4_4_,local_58.DataPtr._0_4_);
  }
  else {
    pFVar4 = UE::UniversalObjectLocator::FFragmentTypeHandle::Resolve(&this->FragmentType);
    if ((pFVar4 != (FFragmentType *)0x0) &&
       (this_00 = (pFVar4->PayloadType).field0_0x0.DebugPtr, this_00 != (UScriptStruct *)0x0)) {
      pvVar5 = GetPayload(this);
      if (param_1->Size != 0) {
        local_58.DataPtr._0_4_ = *(undefined4 *)&param_1->DataPtr;
        local_58.DataPtr._4_4_ = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
        local_58.Size = param_1->Size;
        local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
        (*(pFVar4->InstanceBindings).TryParseString)
                  (__return_storage_ptr__,pvVar5,&local_58,param_2);
        return __return_storage_ptr__;
      }
      UScriptStruct::ClearScriptStruct(this_00,pvVar5,1);
      local_48.ErrorMessage.TextData.Reference = (ITextData *)0x0;
      local_48.ErrorMessage.Flags = 0;
      local_48.ErrorMessage._12_4_ = 0;
      local_48.NumCharsParsed = 0;
      local_48.bSuccess = false;
      local_48._21_3_ = 0;
      FText::FText(&local_48.ErrorMessage);
      local_48._16_8_ = CONCAT35(local_48._21_3_,0x100000000);
      UE::UniversalObjectLocator::FParseStringResult::FParseStringResult
                (__return_storage_ptr__,&local_48);
      goto LAB_14434bdc5;
    }
    local_48.ErrorMessage.TextData.Reference = (ITextData *)0x0;
    local_48.ErrorMessage.Flags = 0;
    local_48.ErrorMessage._12_4_ = 0;
    local_48.NumCharsParsed = 0;
    local_48.bSuccess = false;
    local_48._21_3_ = 0;
    FText::FText(&local_48.ErrorMessage);
    bVar6 = (param_2->Flags & ErrorMessaging) == None;
    local_48._16_8_ = local_48._16_8_ & 0xffffff0000000000;
    if (bVar6) {
      pFVar2 = FText::FText((FText *)&local_58);
    }
    else {
      pFVar2 = FText::AsLocalizable_Advanced_LocText
                         (&local_68,L"UOL",L"Error_Expired",
                          L"Unable to parse a payload for a fragment whose type has expired.");
    }
    pFVar3 = UE::UniversalObjectLocator::FParseStringResult::Failure(&local_48,pFVar2);
    (__return_storage_ptr__->ErrorMessage).TextData.Reference = (ITextData *)0x0;
    pIVar1 = (pFVar3->ErrorMessage).TextData.Reference;
    (__return_storage_ptr__->ErrorMessage).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    (__return_storage_ptr__->ErrorMessage).Flags = (pFVar3->ErrorMessage).Flags;
    __return_storage_ptr__->NumCharsParsed = pFVar3->NumCharsParsed;
    __return_storage_ptr__->bSuccess = pFVar3->bSuccess;
    if ((bVar6) &&
       ((longlong *)CONCAT44(local_58.DataPtr._4_4_,local_58.DataPtr._0_4_) != (longlong *)0x0)) {
      (**(code **)(*(longlong *)CONCAT44(local_58.DataPtr._4_4_,local_58.DataPtr._0_4_) + 0x10))();
    }
    if (bVar6) goto LAB_14434bdc5;
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
LAB_14434bdc5:
  if (local_48.ErrorMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.ErrorMessage.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// TryParseFragmentType @ 14434be00

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FParseStringResult * __thiscall
FUniversalObjectLocatorFragment::TryParseFragmentType
          (FUniversalObjectLocatorFragment *this,FParseStringResult *__return_storage_ptr__,
          TStringView<wchar_t> *param_1,FParseStringParams *param_2)

{
  ITextData *pIVar1;
  FFragmentTypeHandle FVar2;
  int iVar3;
  FText *pFVar4;
  FParseStringResult *pFVar5;
  FRegistry *this_00;
  FFragmentType *pFVar6;
  undefined7 extraout_var;
  FText *pFVar7;
  FTextFormat *pFVar8;
  TRefCountPtr<ITextData> TVar9;
  int iVar10;
  bool bVar11;
  undefined4 local_res18 [2];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  FName local_a0;
  FParseStringResult local_98;
  FText local_80;
  TStringView<wchar_t> local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  
  local_res18[0] = 0;
  iVar10 = param_1->Size;
  if (iVar10 == 0) {
    local_b8._0_8_ = (ITextData *)0x0;
    local_b8._8_8_ = (TReferenceControllerBase<1> *)0x0;
    local_a8 = 0;
    FText::FText((FText *)local_b8);
    bVar11 = (param_2->Flags & ErrorMessaging) == None;
    local_a8 = local_a8 & 0xffffff0000000000;
    if (bVar11) {
      pFVar4 = FText::FText(&local_80);
    }
    else {
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)&local_68,L"UOL",L"Error_EmptyFragmentType",
                          L"Fragment type specifier is empty.");
    }
    pFVar5 = UE::UniversalObjectLocator::FParseStringResult::Failure
                       ((FParseStringResult *)local_b8,pFVar4);
    (__return_storage_ptr__->ErrorMessage).TextData.Reference = (ITextData *)0x0;
    pIVar1 = (pFVar5->ErrorMessage).TextData.Reference;
    (__return_storage_ptr__->ErrorMessage).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
    }
    (__return_storage_ptr__->ErrorMessage).Flags = (pFVar5->ErrorMessage).Flags;
    __return_storage_ptr__->NumCharsParsed = pFVar5->NumCharsParsed;
    __return_storage_ptr__->bSuccess = pFVar5->bSuccess;
    if ((bVar11) && (local_80.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
    }
    if ((!bVar11) && (local_68.DataPtr != (wchar_t *)0x0)) {
      (**(code **)(*(longlong *)local_68.DataPtr + 0x10))();
    }
    if ((ITextData *)local_b8._0_8_ == (ITextData *)0x0) {
      return __return_storage_ptr__;
    }
    (**(code **)((longlong)*(ITextData *)local_b8._0_8_ + 0x10))();
    return __return_storage_ptr__;
  }
  iVar3 = 4;
  if (iVar10 < 4) {
    iVar3 = iVar10;
  }
  iVar3 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,NoneString.DataPtr,(longlong)iVar3);
  if ((iVar3 == 0) && (iVar10 == 4)) {
    DestroyPayload(this);
    (this->FragmentType).Handle = 0xff;
    local_b8._0_8_ = (ITextData *)0x0;
    local_b8._8_8_ = (TReferenceControllerBase<1> *)0x0;
    local_a8._0_4_ = 0;
    local_a8._4_1_ = false;
    local_a8._5_3_ = 0;
    FText::FText((FText *)local_b8);
    local_a8._0_4_ = 4;
    local_a8._4_1_ = true;
    (__return_storage_ptr__->ErrorMessage).TextData.Reference = (ITextData *)local_b8._0_8_;
    bVar11 = true;
    iVar10 = 4;
    if ((ITextData *)local_b8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_b8._0_8_ + 8))(local_b8._0_8_,local_res18);
      bVar11 = local_a8._4_1_;
      iVar10 = (int)local_a8;
    }
    (__return_storage_ptr__->ErrorMessage).Flags = local_b8._8_4_;
    __return_storage_ptr__->NumCharsParsed = iVar10;
    __return_storage_ptr__->bSuccess = bVar11;
    TVar9.Reference = (ITextData *)local_b8._0_8_;
  }
  else {
    ::FName::FName(&local_a0,iVar10,param_1->DataPtr,FNAME_Find);
    if (local_a0 != (FName)0x0) {
      this_00 = UE::UniversalObjectLocator::FRegistry::Get();
      pFVar6 = UE::UniversalObjectLocator::FRegistry::FindFragmentType(this_00,local_a0);
      if ((pFVar6 != (FFragmentType *)0x0) &&
         ((pFVar6->PayloadType).field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
        DestroyPayload(this);
        FVar2 = UE::UniversalObjectLocator::MakeFragmentTypeHandle((FFragmentType *)local_res18);
        (this->FragmentType).Handle = *(uchar *)CONCAT71(extraout_var,FVar2.Handle);
        DefaultConstructPayload(this,pFVar6);
        local_b8._0_8_ = (ITextData *)0x0;
        local_b8._8_8_ = (TReferenceControllerBase<1> *)0x0;
        local_a8._0_4_ = 0;
        local_a8._4_1_ = false;
        local_a8._5_3_ = 0;
        FText::FText((FText *)local_b8);
        local_a8._4_1_ = true;
        local_a8._0_4_ = iVar10;
        UE::UniversalObjectLocator::FParseStringResult::FParseStringResult
                  (__return_storage_ptr__,(FParseStringResult *)local_b8);
        TVar9.Reference = (ITextData *)local_b8._0_8_;
        goto LAB_14434c147;
      }
    }
    local_98.ErrorMessage.TextData.Reference = (ITextData *)0x0;
    local_98.ErrorMessage.Flags = 0;
    local_98.ErrorMessage._12_4_ = 0;
    local_98.NumCharsParsed = 0;
    local_98.bSuccess = false;
    local_98._21_3_ = 0;
    FText::FText(&local_98.ErrorMessage);
    bVar11 = (param_2->Flags & ErrorMessaging) == None;
    local_98._16_8_ = local_98._16_8_ & 0xffffff0000000000;
    if (bVar11) {
      pFVar4 = FText::FText(&local_80);
    }
    else {
      local_68.DataPtr = param_1->DataPtr;
      local_68.Size = param_1->Size;
      local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
      pFVar4 = FText::FromStringView(&local_38,&local_68);
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_48,L"UOL",L"Error_UnknownFragmentType",
                          L"Unknown fragment type specifier {0}.");
      pFVar8 = FTextFormat::FTextFormat((FTextFormat *)local_b8,pFVar7,Default);
      pFVar4 = FText::Format<FText>(&local_58,pFVar8,pFVar4);
    }
    pFVar5 = UE::UniversalObjectLocator::FParseStringResult::Failure(&local_98,pFVar4);
    (__return_storage_ptr__->ErrorMessage).TextData.Reference = (ITextData *)0x0;
    pIVar1 = (pFVar5->ErrorMessage).TextData.Reference;
    (__return_storage_ptr__->ErrorMessage).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res18);
    }
    (__return_storage_ptr__->ErrorMessage).Flags = (pFVar5->ErrorMessage).Flags;
    __return_storage_ptr__->NumCharsParsed = pFVar5->NumCharsParsed;
    __return_storage_ptr__->bSuccess = pFVar5->bSuccess;
    if ((bVar11) && (local_80.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
    }
    if ((!bVar11) && (local_58.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    TVar9.Reference = local_98.ErrorMessage.TextData.Reference;
    if ((!bVar11) && (local_48.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      TVar9.Reference = local_98.ErrorMessage.TextData.Reference;
    }
  }
LAB_14434c147:
  if (TVar9.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar9.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// TryParseString @ 14434d210

FParseStringResult * __thiscall
FUniversalObjectLocatorFragment::TryParseString
          (FUniversalObjectLocatorFragment *this,FParseStringResult *__return_storage_ptr__,
          TStringView<wchar_t> *param_1,FParseStringParams *param_2)

{
  ITextData *pIVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  FText *pFVar7;
  FParseStringResult *pFVar8;
  TRefCountPtr<ITextData> TVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined1 local_res18 [8];
  TStringView<wchar_t> local_b8;
  undefined8 local_a8;
  FText local_98;
  FParseStringResult local_88;
  FParseStringResult local_70;
  FParseStringResult local_58 [2];
  
  uVar11 = param_1->Size;
  if (uVar11 == 0) {
    DestroyPayload(this);
    (this->FragmentType).Handle = 0xff;
    local_b8.DataPtr = (wchar_t *)0x0;
    local_b8.Size = 0;
    local_b8._12_4_ = 0;
    local_a8 = 0;
    FText::FText((FText *)&local_b8);
    local_a8 = CONCAT35((int3)((ulonglong)local_a8 >> 0x28),0x100000000);
    (__return_storage_ptr__->ErrorMessage).TextData.Reference = (ITextData *)local_b8.DataPtr;
    uVar11 = 0;
    uVar10 = true;
    if ((ITextData *)local_b8.DataPtr != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_b8.DataPtr + 8))(local_b8.DataPtr,local_res18);
      uVar11 = (uint)local_a8;
      uVar10 = local_a8._4_1_;
    }
    (__return_storage_ptr__->ErrorMessage).Flags = local_b8.Size;
    __return_storage_ptr__->NumCharsParsed = uVar11;
    __return_storage_ptr__->bSuccess = (bool)uVar10;
    if ((ITextData *)local_b8.DataPtr == (ITextData *)0x0) {
      return __return_storage_ptr__;
    }
    (**(code **)((longlong)*(ITextData *)local_b8.DataPtr + 0x10))();
    return __return_storage_ptr__;
  }
  uVar12 = 4;
  if ((int)uVar11 < 4) {
    uVar12 = uVar11;
  }
  iVar4 = FGenericPlatformStricmp::Strnicmp
                    (param_1->DataPtr,NoneString.DataPtr,(longlong)(int)uVar12);
  if ((iVar4 == 0) && (uVar11 == 4)) {
    DestroyPayload(this);
    (this->FragmentType).Handle = 0xff;
    local_b8.DataPtr = (wchar_t *)0x0;
    local_b8.Size = 0;
    local_b8._12_4_ = 0;
    local_a8 = 0;
    FText::FText((FText *)&local_b8);
    local_a8 = CONCAT35(local_a8._5_3_,0x100000004);
    (__return_storage_ptr__->ErrorMessage).TextData.Reference = (ITextData *)local_b8.DataPtr;
    iVar4 = 4;
    uVar10 = true;
    if ((ITextData *)local_b8.DataPtr != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_b8.DataPtr + 8))(local_b8.DataPtr,local_res18);
      iVar4 = (uint)local_a8;
      uVar10 = local_a8._4_1_;
    }
    (__return_storage_ptr__->ErrorMessage).Flags = local_b8.Size;
    __return_storage_ptr__->NumCharsParsed = iVar4;
    __return_storage_ptr__->bSuccess = (bool)uVar10;
    if ((ITextData *)local_b8.DataPtr == (ITextData *)0x0) {
      return __return_storage_ptr__;
    }
    (**(code **)((longlong)*(ITextData *)local_b8.DataPtr + 0x10))();
    return __return_storage_ptr__;
  }
  uVar2 = *(undefined4 *)&param_1->DataPtr;
  uVar3 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  local_b8.DataPtr = param_1->DataPtr;
  uVar12 = param_1->Size;
  uVar13 = *(undefined4 *)&param_1->field_0xc;
  local_98.TextData.Reference = (ITextData *)0x0;
  local_98.Flags = 0;
  local_b8.Size = uVar12;
  local_b8._12_4_ = uVar13;
  uVar5 = UE::String::FindFirstChar(&local_b8,L'=',CaseSensitive);
  local_b8.DataPtr._0_4_ = uVar2;
  local_b8.DataPtr._4_4_ = uVar3;
  if (uVar5 != 0xffffffff) {
    pIVar1 = (ITextData *)param_1->DataPtr;
    uVar6 = uVar11;
    if ((int)uVar5 < (int)uVar11) {
      uVar6 = uVar5;
    }
    uVar12 = 0;
    if (0 < (int)uVar6) {
      uVar12 = uVar6;
    }
    uVar6 = (uVar11 - uVar5) - 1;
    local_b8.Size = uVar12;
    local_b8.DataPtr._0_4_ = SUB84(pIVar1,0);
    local_b8.DataPtr._4_4_ = (undefined4)((ulonglong)pIVar1 >> 0x20);
    uVar5 = uVar11;
    if ((int)uVar6 < (int)uVar11) {
      uVar5 = uVar6;
    }
    local_98.Flags = 0;
    if (0 < (int)uVar5) {
      local_98.Flags = uVar5;
    }
    local_98.TextData.Reference =
         (ITextData *)
         ((longlong)pIVar1 + ((longlong)(int)uVar11 - (longlong)(int)local_98.Flags) * 2);
    local_98._12_4_ = local_b8._12_4_;
    uVar13 = local_b8._12_4_;
    if (uVar12 == 0) {
      local_88.ErrorMessage.TextData.Reference = (ITextData *)0x0;
      local_88.ErrorMessage.Flags = 0;
      local_88.ErrorMessage._12_4_ = 0;
      local_88.NumCharsParsed = 0;
      local_88.bSuccess = false;
      local_88._21_3_ = 0;
      local_b8.DataPtr = (wchar_t *)pIVar1;
      FText::FText(&local_88.ErrorMessage);
      local_88._16_8_ = local_88._16_8_ & 0xffffff0000000000;
      if ((param_2->Flags & ErrorMessaging) == None) {
        pFVar7 = FText::FText(&local_98);
        pFVar8 = UE::UniversalObjectLocator::FParseStringResult::Failure(&local_88,pFVar7);
        UE::UniversalObjectLocator::FParseStringResult::FParseStringResult
                  (__return_storage_ptr__,pFVar8);
        TVar9.Reference = local_98.TextData.Reference;
      }
      else {
        pFVar7 = FText::AsLocalizable_Advanced_LocText
                           ((FText *)&local_b8,L"UOL",L"Error_UnexpectedEquals",
                            L"Unexpected \'=\'\' when expecting a fragment type.");
        pFVar8 = UE::UniversalObjectLocator::FParseStringResult::Failure(&local_88,pFVar7);
        UE::UniversalObjectLocator::FParseStringResult::FParseStringResult
                  (__return_storage_ptr__,pFVar8);
        TVar9.Reference = (ITextData *)local_b8.DataPtr;
      }
      local_70.ErrorMessage.TextData.Reference = local_88.ErrorMessage.TextData.Reference;
      if (TVar9.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar9.Reference + 0x10))();
        local_70.ErrorMessage.TextData.Reference = local_88.ErrorMessage.TextData.Reference;
      }
      goto LAB_14434d507;
    }
  }
  local_b8._12_4_ = uVar13;
  local_b8.Size = uVar12;
  TryParseFragmentType(this,&local_70,&local_b8,param_2);
  if (local_70.bSuccess == false) {
    FText::FText(&__return_storage_ptr__->ErrorMessage,&local_70.ErrorMessage);
    __return_storage_ptr__->NumCharsParsed = local_70.NumCharsParsed;
    __return_storage_ptr__->bSuccess = local_70.bSuccess;
  }
  else {
    local_b8._12_4_ = local_98._12_4_;
    local_b8.Size = local_98.Flags;
    local_b8.DataPtr = (wchar_t *)local_98.TextData.Reference;
    TryParseFragmentPayload(this,local_58,&local_b8,param_2);
    local_58[0].NumCharsParsed = local_70.NumCharsParsed + local_58[0].NumCharsParsed + 1;
    FText::FText(&__return_storage_ptr__->ErrorMessage,&local_58[0].ErrorMessage);
    __return_storage_ptr__->NumCharsParsed = local_58[0].NumCharsParsed;
    __return_storage_ptr__->bSuccess = local_58[0].bSuccess;
    if (local_58[0].ErrorMessage.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58[0].ErrorMessage.TextData.Reference + 0x10))();
    }
  }
LAB_14434d507:
  if (local_70.ErrorMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.ErrorMessage.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 1504bd000

bool __thiscall
`FUniversalObjectLocatorFragment::DestroyPayload'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3427333741284950488>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3427333741284950488>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

