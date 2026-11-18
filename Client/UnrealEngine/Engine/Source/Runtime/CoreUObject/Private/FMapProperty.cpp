// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 49

// ContainsObjectReference @ 142024780

bool __thiscall
FMapProperty::ContainsObjectReference
          (FMapProperty *this,TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_1,
          EPropertyObjectReferenceType param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  
  if (this->KeyProp == (FProperty *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyProp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x1992,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (this->ValueProp == (FProperty *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ValueProp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x1993,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  cVar4 = (**(code **)(this->KeyProp->_padding_ + 0x170))(this->KeyProp,param_1,param_2);
  if (cVar4 == '\0') {
    cVar4 = (**(code **)(this->ValueProp->_padding_ + 0x170))(this->ValueProp,param_1,param_2);
    if (cVar4 == '\0') {
      return false;
    }
  }
  return true;
}

// EmitIntrusiveOptionalReferenceInfo @ 14203d7f0

void __thiscall
FMapProperty::EmitIntrusiveOptionalReferenceInfo
          (FMapProperty *this,FSchemaBuilder *param_1,int param_2,
          TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_3,
          FPropertyStack *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00014203d7fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x178))();
  return;
}

// EmitReferenceInfo @ 14203deb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMapProperty::EmitReferenceInfo
          (FMapProperty *this,FSchemaBuilder *param_1,int param_2,
          TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_3,
          FPropertyStack *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FProperty *pFVar4;
  FScriptContainerElement *pFVar5;
  FMemberWord FVar6;
  code *pcVar7;
  FSchemaBuilder *this_00;
  char cVar8;
  bool bVar9;
  int iVar10;
  FSchemaView FVar11;
  FString *pFVar12;
  FName *pFVar13;
  uint uVar14;
  FProperty **ppFVar15;
  undefined1 auStackY_2b8 [32];
  FProperty *local_268;
  int local_260;
  FString local_258;
  FMemberWord local_248;
  FSchemaBuilder *local_240;
  FProperty *local_238;
  FProperty *local_230;
  FProperty *local_228;
  FName local_220;
  initializer_list<UE::GC::FMemberDeclaration> local_218;
  FMemberDeclaration local_208;
  FSchemaBuilder local_1e8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_260 = param_2;
  local_240 = param_1;
  cVar8 = (**(code **)(this->_padding_ + 0x170))(this,param_3,1);
  if (cVar8 != '\0') {
    local_218._First = (FMemberDeclaration *)0x0;
    local_218._Last = (FMemberDeclaration *)0x0;
    UE::GC::FSchemaBuilder::FSchemaBuilder(&local_1e8,(this->MapLayout).SetLayout.Size,&local_218);
    ppFVar15 = &local_238;
    local_238 = this->KeyProp;
    local_230 = this->ValueProp;
    do {
      pFVar4 = *ppFVar15;
      cVar8 = (**(code **)(pFVar4->_padding_ + 0x170))(pFVar4,param_3,1);
      if (cVar8 != '\0') {
        pFVar5 = (param_4->Props).AllocatorInstance.Data;
        local_268 = pFVar4;
        if ((pFVar5 <= (FScriptContainerElement *)&local_268) &&
           ((FScriptContainerElement *)&local_268 < pFVar5 + (longlong)(param_4->Props).ArrayMax * 8
           )) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        iVar10 = (param_4->Props).ArrayNum;
        piVar1 = &(param_4->Props).ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)param_4,piVar1);
        }
        (param_4->Props).ArrayNum = iVar10 + 1;
        *(FProperty **)((param_4->Props).AllocatorInstance.Data + (longlong)iVar10 * 8) = local_268;
        (**(code **)(pFVar4->_padding_ + 0x178))(pFVar4,&local_1e8,0,param_3);
        if ((param_4->Props).ArrayNum < 1) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        iVar10 = (param_4->Props).ArrayNum;
        uVar14 = iVar10 - 1;
        pFVar5 = (param_4->Props).AllocatorInstance.Data + (longlong)(int)uVar14 * 8;
        iVar10 = ~uVar14 + iVar10;
        if (iVar10 != 0) {
          memmove(pFVar5,pFVar5 + 8,(longlong)iVar10 << 3);
        }
        piVar2 = &(param_4->Props).ArrayNum;
        *piVar2 = *piVar2 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,(ForAnyElementType *)param_4,(param_4->Props).ArrayNum,piVar1);
      }
      ppFVar15 = ppFVar15 + 1;
    } while (ppFVar15 != &local_228);
    FVar11 = UE::GC::FSchemaBuilder::Build
                       (&local_1e8,
                        (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)&local_228);
    uVar14 = local_260 + *(int *)((longlong)&this->_padding_ + 4);
    FVar6 = *(FMemberWord *)FVar11.Handle;
    pFVar12 = UE::GC::FPropertyStack::GetPropertyPath(param_4,&local_258);
    iVar3 = (pFVar12->Data).ArrayNum;
    iVar10 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar10 = 0;
    }
    pFVar13 = ::FName::FName(&local_220,iVar10,(wchar_t *)(pFVar12->Data).AllocatorInstance.Data,
                             FNAME_Add);
    this_00 = local_240;
    local_208.DebugName = *pFVar13;
    if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258.Data.AllocatorInstance.Data);
    }
    local_258.Data.ArrayMax = CONCAT31(local_258.Data.ArrayMax._1_3_,6);
    local_208._12_4_ = local_258.Data.ArrayMax;
    local_208.Offset = uVar14;
    local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_208.DebugName;
    local_258.Data.ArrayNum = uVar14;
    local_248 = FVar6;
    local_208.ExtraWord = FVar6;
    UE::GC::FSchemaBuilder::Add(this_00,&local_208);
    UE::GC::FSchemaBuilder::~FSchemaBuilder(&local_1e8);
  }
  return;
}

// FMapProperty @ 1421614e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FMapProperty * __thiscall
FMapProperty::FMapProperty(FMapProperty *this,FFieldVariant param_1,FMapPropertyParams *param_2)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  local_res8 = uVar1;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  FProperty::FProperty
            ((FProperty *)this,(FFieldVariant)&local_res8,(FPropertyParamsBaseWithOffset *)param_2,
             CPF_None);
  this->_padding_ = (longlong)&___7__TProperty_VFScriptMap__VFProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,0x50);
  this->_padding_ = (longlong)&___7FMapProperty__6B_;
  this->KeyProp = (FProperty *)0x0;
  this->ValueProp = (FProperty *)0x0;
  this->MapFlags = param_2->MapFlags;
  return this;
}

// FMapProperty @ 1421615a0

FMapProperty * __thiscall
FMapProperty::FMapProperty
          (FMapProperty *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3,
          EMapPropertyFlags param_4)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  local_res8 = uVar1;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  FProperty::FProperty((FProperty *)this,(FFieldVariant)&local_res8,param_2,param_3);
  this->_padding_ = (longlong)&___7__TProperty_VFScriptMap__VFProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,0x50);
  this->_padding_ = (longlong)&___7FMapProperty__6B_;
  this->KeyProp = (FProperty *)0x0;
  this->ValueProp = (FProperty *)0x0;
  this->MapFlags = param_4;
  return this;
}

// ~FMapProperty @ 1421635b0

void __thiscall FMapProperty::~FMapProperty(FMapProperty *this)

{
  FProperty *pFVar1;
  
  this->_padding_ = (longlong)&___7FMapProperty__6B_;
  pFVar1 = this->KeyProp;
  if (pFVar1 != (FProperty *)0x0) {
    (**(code **)(pFVar1->_padding_ + 8))(pFVar1,1);
  }
  pFVar1 = this->ValueProp;
  this->KeyProp = (FProperty *)0x0;
  if (pFVar1 != (FProperty *)0x0) {
    (**(code **)(pFVar1->_padding_ + 8))(pFVar1,1);
  }
  this->ValueProp = (FProperty *)0x0;
  FField::~FField((FField *)this);
  return;
}

// operator() @ 142165030

bool __thiscall
`FMapProperty::ConvertFromType'::__l2::<lambda_2>::operator()
          (void *this,bool param_1,FProperty *param_2,FPropertyTag *param_3,FName param_4,
          FStructuredArchiveSlot param_5,uchar *param_6,UStruct *param_7)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FName *pFVar5;
  void *local_res8;
  
  local_res8 = this;
  if (!param_1) {
    iVar4 = (**(code **)(param_2->_padding_ + 0xb0))
                      (param_2,param_3,param_5,param_6,param_7,0,param_4,0);
    if (iVar4 != 0) {
      if (iVar4 == 1) {
        return true;
      }
      if (iVar4 != 2) {
        if (iVar4 == 3) {
          return true;
        }
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyMap.cpp"
                           ,0x5d8,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      return false;
    }
    pFVar5 = (FName *)(**(code **)(param_2->_padding_ + 0x158))(param_2,&local_res8);
    if (param_3->Type != *pFVar5) {
      return false;
    }
  }
  iVar4 = param_3->ArrayIndex;
  if (((iVar4 < 0) || (param_2->ArrayDim <= iVar4)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar2))
  {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((param_6 == (uchar *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  (**(code **)(param_2->_padding_ + 0xc0))
            (param_2,param_5,
             param_6 + (longlong)param_2->Offset_Internal +
                       (longlong)iVar4 * (longlong)param_2->ElementSize,0);
  return true;
}

// operator() @ 1421651d0

void __thiscall
`FMapProperty::SerializeItem'::__l102::<lambda_3>::operator()
          (void *this,FStructuredArchiveArray *param_1,uchar *param_2)

{
  FStructuredArchiveArray FVar1;
  longlong lVar2;
  longlong *plVar3;
  FSerializedPropertyScope local_18;
  
  FVar1 = *param_1;
  lVar2 = *(longlong *)this;
  local_18.Ar = *(FArchive **)((longlong)this + 0x10);
  local_18.Property = *(FProperty **)(lVar2 + 0x70);
  if ((lVar2 == 0) || (*(longlong *)&(local_18.Ar)->field_0x70 == lVar2)) {
    FSerializedPropertyScope::PushProperty(&local_18);
  }
  else {
    local_18.Property = (FProperty *)0x0;
  }
  (**(code **)(**(longlong **)(*(longlong *)this + 0x70) + 0xc0))
            (*(longlong **)(*(longlong *)this + 0x70),FVar1,param_2,0);
  FSerializedPropertyScope::PopProperty(&local_18);
  lVar2 = *(longlong *)this;
  local_18.Ar = *(FArchive **)((longlong)this + 0x10);
  local_18.Property = *(FProperty **)(lVar2 + 0x78);
  if ((lVar2 == 0) || (*(longlong *)&(local_18.Ar)->field_0x70 == lVar2)) {
    FSerializedPropertyScope::PushProperty(&local_18);
  }
  else {
    local_18.Property = (FProperty *)0x0;
  }
  plVar3 = *(longlong **)(*(longlong *)this + 0x78);
  (**(code **)(*plVar3 + 0xc0))(plVar3,FVar1,param_2 + *(int *)(*(longlong *)this + 0x80),0);
  FSerializedPropertyScope::PopProperty(&local_18);
  return;
}

// AddCppProperty @ 1421660d0

void __thiscall FMapProperty::AddCppProperty(FMapProperty *this,FProperty *param_1)

{
  code *pcVar1;
  bool bVar2;
  FProperty **local_res8;
  FProperty *local_res10 [3];
  
  local_res10[0] = param_1;
  if (param_1 == (FProperty *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Property",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyMap.cpp"
                       ,0x4d1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->KeyProp == (FProperty *)0x0) {
    if ((local_res10[0]->PropertyFlags & CPF_HasGetValueTypeHash) == CPF_None) {
      local_res8 = local_res10;
      `FMapProperty::AddCppProperty'::__l12::<lambda_1>::operator()(&local_res8);
    }
    this->KeyProp = local_res10[0];
    return;
  }
  if (this->ValueProp != (FProperty *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ValueProp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyMap.cpp"
                       ,0x4dd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->ValueProp = local_res10[0];
  return;
}

// AddReferencedObjects @ 142166b80

void __thiscall FMapProperty::AddReferencedObjects(FMapProperty *this,FReferenceCollector *param_1)

{
  FProperty *pFVar1;
  
  FField::AddReferencedObjects((FField *)this,param_1);
  pFVar1 = this->KeyProp;
  if (pFVar1 != (FProperty *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,param_1);
  }
  pFVar1 = this->ValueProp;
  if (pFVar1 != (FProperty *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,param_1);
  }
  return;
}

// CanSerializeFromTypeName @ 142169250

bool __thiscall FMapProperty::CanSerializeFromTypeName(FMapProperty *this,FPropertyTypeName param_1)

{
  FProperty *pFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  
  bVar4 = FProperty::CanSerializeFromTypeName((FProperty *)this,param_1);
  if (!bVar4) {
    return false;
  }
  pFVar1 = this->ValueProp;
  pFVar2 = this->KeyProp;
  if ((pFVar2 == (FProperty *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("LocalKeyProp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyMap.cpp"
                         ,0x6fd,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if ((pFVar1 == (FProperty *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("LocalValueProp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyMap.cpp"
                         ,0x6fe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar9 = 0;
  lVar10 = (ulonglong)(param_1.Index & 0x1fff) * 0xc;
  iVar7 = 0;
  if (0 < *(int *)(lVar10 + 8 +
                  (longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)param_1.Index >> 0xd])) {
    iVar7 = param_1.Index + 1;
  }
  cVar6 = (**(code **)(pFVar2->_padding_ + 0x198))(pFVar2,iVar7);
  if (cVar6 != '\0') {
    lVar10 = (longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)param_1.Index >> 0xd] + lVar10;
    if (1 < *(int *)(lVar10 + 8)) {
      lVar8 = lVar10 + 0xc;
      iVar7 = 1;
      do {
        iVar7 = iVar7 + -1 + *(int *)(lVar8 + 8);
        lVar8 = lVar8 + 0xc;
      } while (0 < iVar7);
      lVar10 = (lVar8 - lVar10) / 6 + (lVar8 - lVar10 >> 0x3f);
      iVar9 = ((int)(lVar10 >> 1) - (int)(lVar10 >> 0x3f)) + param_1.Index;
    }
    cVar6 = (**(code **)(pFVar1->_padding_ + 0x198))(pFVar1,iVar9);
    if (cVar6 != '\0') {
      return true;
    }
  }
  return false;
}

// ClearIntrusiveOptionalValue @ 1421699e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FMapProperty::ClearIntrusiveOptionalValue(FMapProperty *this,void *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  <lambda_1> local_58;
  FScriptMapHelper local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  cVar1 = (**(code **)(this->_padding_ + 0x1b8))();
  if (cVar1 != '\0') {
    FScriptMapHelper::FScriptMapHelper(&local_48,this,param_1);
    if ((local_48.MapFlags & UsesMemoryImageAllocator) == None) {
      iVar2 = *(int *)&((local_48.field2_0x10.FreezableMap)->Pairs).field_0x34;
    }
    else {
      iVar2 = ((local_48.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices;
    }
    iVar2 = ((local_48.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum - iVar2;
    if (iVar2 != 0) {
      FScriptMapHelper::DestructItems(&local_48,0,iVar2);
      local_58.__this = &local_48;
      local_58.Slack = 0;
      FScriptMapHelper::WithScriptMap<_FScriptMapHelper::EmptyValues_::__l9::<lambda_1>_>
                (&local_48,&local_58);
    }
    TOptional<FScriptMap>::Reset(param_1);
  }
  return;
}

// ClearValueInternal @ 142169f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FMapProperty::ClearValueInternal(FMapProperty *this,void *param_1)

{
  int iVar1;
  undefined1 auStack_78 [32];
  <lambda_1> local_58;
  FScriptMapHelper local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  FScriptMapHelper::FScriptMapHelper(&local_48,this,param_1);
  if ((local_48.MapFlags & UsesMemoryImageAllocator) == None) {
    iVar1 = *(int *)&((local_48.field2_0x10.FreezableMap)->Pairs).field_0x34;
  }
  else {
    iVar1 = ((local_48.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices;
  }
  iVar1 = ((local_48.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum - iVar1;
  if (iVar1 != 0) {
    FScriptMapHelper::DestructItems(&local_48,0,iVar1);
    local_58.__this = &local_48;
    local_58.Slack = 0;
    FScriptMapHelper::WithScriptMap<_FScriptMapHelper::EmptyValues_::__l9::<lambda_1>_>
              (&local_48,&local_58);
  }
  return;
}

// Construct @ 14216b840

FField * __cdecl FMapProperty::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong uVar1;
  FProperty *this;
  FFieldClass *pFVar2;
  ulonglong local_res20;
  
  this = FMemory::Malloc(0xa0,0);
  if (this != (FProperty *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pFVar2 = FProperty::StaticClass();
        FFieldClass::FFieldClass
                  (&::StaticFieldClass,L"FMapProperty",0x400000000000,
                   CASTCLASS_FMapProperty|CASTCLASS_FProperty|CASTCLASS_UField,pFVar2,Construct);
        atexit(`FMapProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__
              );
        _Init_thread_footer(&::_TSS0);
      }
    }
    FField::FField((FField *)this,EC_InternalUseOnlyConstructor,&::StaticFieldClass);
    this->PropertyLinkNext = (FProperty *)0x0;
    this->NextRef = (FProperty *)0x0;
    this->DestructorLinkNext = (FProperty *)0x0;
    this->PostConstructLinkNext = (FProperty *)0x0;
    (this->RepNotifyFunc).ComparisonIndex = 0;
    (this->RepNotifyFunc).Number = 0;
    this->_padding_ = (longlong)&___7FMapProperty__6B_;
    uVar1 = (param_1->Container).Unknown;
    if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    local_res20 = uVar1;
    if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    FProperty::FProperty(this,(FFieldVariant)&local_res20,param_2,param_3);
    this->_padding_ = (longlong)&___7__TProperty_VFScriptMap__VFProperty____6B_;
    FProperty::SetElementSize(this,0x50);
    this->_padding_ = (longlong)&___7FMapProperty__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    return (FField *)this;
  }
  return (FField *)0x0;
}

// ContainsClearOnFinishDestroyInternal @ 14216cdc0

bool __thiscall
FMapProperty::ContainsClearOnFinishDestroyInternal
          (FMapProperty *this,TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  
  if ((this->KeyProp == (FProperty *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("KeyProp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyMap.cpp"
                         ,0x515,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((this->ValueProp == (FProperty *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ValueProp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyMap.cpp"
                         ,0x516,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar1 = this->KeyProp;
  if (((pFVar1->PropertyFlags & (CPF_NoDestructor|CPF_IsPlainOldData)) == CPF_None) &&
     (cVar5 = (**(code **)(pFVar1->_padding_ + 0x140))(pFVar1,param_1), cVar5 != '\0')) {
    return true;
  }
  pFVar1 = this->ValueProp;
  if (((pFVar1->PropertyFlags & (CPF_NoDestructor|CPF_IsPlainOldData)) == CPF_None) &&
     (cVar5 = (**(code **)(pFVar1->_padding_ + 0x140))(pFVar1,param_1), cVar5 != '\0')) {
    return true;
  }
  return false;
}

// ConvertFromType @ 14216e8f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

EConvertFromTypeResult __thiscall
FMapProperty::ConvertFromType
          (FMapProperty *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2,uchar *param_3,
          UStruct *param_4,uchar *param_5)

{
  FScriptSparseArrayLayout *pFVar1;
  FScriptSparseSetLayout *pFVar2;
  uint uVar3;
  FName FVar4;
  FProperty *pFVar5;
  longlong lVar6;
  code *pcVar7;
  FSlotBase FVar8;
  FPropertyTag *pFVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  EConvertFromTypeResult EVar13;
  FNameEntryId FVar14;
  int iVar15;
  FArchive *pFVar16;
  ICppStructOps *pIVar17;
  undefined4 extraout_var;
  uint *puVar18;
  FTlsAutoCleanup *pFVar19;
  uchar *_Dst;
  longlong *plVar20;
  FPropertyTypeName *pFVar21;
  FName FVar22;
  uchar *puVar23;
  FPropertyTypeName FVar24;
  longlong lVar25;
  uchar *puVar26;
  UStruct *pUVar27;
  int iVar28;
  FPropertyTypeName FVar29;
  uchar *puVar30;
  longlong lVar31;
  FMapProperty *pFVar32;
  FSlotBase local_res18;
  undefined1 auStackY_5a8 [32];
  bool local_567;
  bool local_566;
  uint local_564;
  uint local_560 [2];
  FMapProperty *local_558;
  UStruct *local_550;
  undefined1 local_548 [4];
  int local_544;
  FTlsAutoCleanup local_540;
  undefined4 local_538 [2];
  undefined4 local_530 [2];
  undefined4 local_528 [2];
  undefined4 local_520 [2];
  FProperty *local_518 [2];
  FArchive *local_508;
  FPropertyTag *local_500;
  FPropertyTag local_4f8;
  FPropertyTag local_478;
  FScriptMapHelper *local_3f8;
  int local_3f0;
  undefined4 local_3ec;
  FScriptMapHelper *local_3e8;
  int local_3e0;
  undefined4 local_3dc;
  undefined1 local_3d8 [4];
  FPropertyTypeName local_3d4;
  FPropertyTypeName local_3d0 [2];
  FScriptMapHelper *local_3c8;
  FScriptMapHelper *local_3c0;
  FName local_3b8;
  undefined4 local_3b0;
  undefined4 local_3ac;
  FName local_3a8;
  undefined4 local_3a0;
  undefined4 local_39c;
  <lambda_1> local_398;
  code *local_388;
  FScriptMapHelper **local_380;
  code *local_378;
  FScriptMapHelper **local_370;
  <lambda_1> local_368;
  code *local_358;
  undefined1 *local_350;
  FPropertyTag *local_348;
  FProperty **local_340;
  FArchive *local_338;
  FScriptMapHelper *local_330;
  uchar *local_328;
  undefined4 *local_320;
  FScriptMapHelper *local_318;
  uchar *local_310;
  undefined4 *local_308;
  FScriptMapHelper *local_300;
  uchar *local_2f8;
  undefined4 *local_2f0;
  FScriptMapHelper *local_2e8;
  uchar *local_2e0;
  undefined4 *local_2d8;
  undefined1 local_2d0 [8];
  undefined1 local_2c8 [8];
  void *local_2c0 [2];
  undefined1 local_2b0 [8];
  undefined1 local_2a8 [8];
  FScriptMapHelper local_2a0;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [32];
  TStringBuilderBase<wchar_t> local_208;
  wchar_t local_1e8 [32];
  TStringBuilderBase<wchar_t> local_1a8;
  wchar_t local_188 [32];
  TStringBuilderBase<wchar_t> local_148;
  wchar_t local_128 [32];
  FScriptMapHelper local_e8;
  TStringBuilderBase<wchar_t> local_a8;
  wchar_t local_88 [32];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  local_550 = param_4;
  local_res18.StructuredArchive = (FStructuredArchive *)param_2;
  local_558 = this;
  local_500 = param_1;
  pFVar16 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res18);
  local_518[0] = this->KeyProp;
  FVar29.Index = 0;
  local_508 = pFVar16;
  if ((local_518[0] == (FProperty *)0x0) ||
     ((*(uint *)(local_518[0]->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
    local_518[0] = (FProperty *)0x0;
  }
  else if (((UScriptStruct *)local_518[0][1]._padding_ == (UScriptStruct *)0x0) ||
          ((pIVar17 = UScriptStruct::GetCppStructOps((UScriptStruct *)local_518[0][1]._padding_),
           pIVar17 != (ICppStructOps *)0x0 &&
           (pIVar17 = UScriptStruct::GetCppStructOps((UScriptStruct *)local_518[0][1]._padding_),
           !(pIVar17->FakeVPtr->Capabilities).HasGetTypeHash)))) {
    local_340 = local_518;
    local_348 = param_1;
    local_338 = pFVar16;
    `FMapProperty::ConvertFromType'::__l10::<lambda_1>::operator()(&local_348);
    if (((int)this->_padding_ < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      EVar13 = (*pcVar7)();
      return EVar13;
    }
    if ((param_3 == (uchar *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ContainerPtr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2de,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      EVar13 = (*pcVar7)();
      return EVar13;
    }
    FScriptMapHelper::FScriptMapHelper
              (&local_e8,this,param_3 + *(int *)((longlong)&this->_padding_ + 4));
    if ((local_e8.MapFlags & UsesMemoryImageAllocator) == None) {
      iVar28 = *(int *)&((local_e8.field2_0x10.FreezableMap)->Pairs).field_0x34;
    }
    else {
      iVar28 = ((local_e8.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices;
    }
    iVar28 = ((local_e8.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum - iVar28;
    if (iVar28 == 0) {
      return CannotConvert;
    }
    FScriptMapHelper::DestructItems(&local_e8,0,iVar28);
    local_368.__this = &local_e8;
    local_368.Slack = 0;
    FScriptMapHelper::WithScriptMap<_FScriptMapHelper::EmptyValues_::__l9::<lambda_1>_>
              (&local_e8,&local_368);
    return CannotConvert;
  }
  FVar4 = param_1->Type;
  FVar14 = FNameEntryId::FromValidEName((EName)local_3d8);
  FVar22.Number = 0;
  FVar22.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar14.Value);
  if (FVar4 != FVar22) {
    return UseSerializeItem;
  }
  uVar3 = (param_1->TypeName).Index;
  FVar24.Index = FVar29.Index;
  if (0 < *(int *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar3 >> 0xd] + 8 +
                  (ulonglong)(uVar3 & 0x1fff) * 0xc)) {
    FVar24.Index = uVar3 + 1;
  }
  uVar3 = (param_1->TypeName).Index;
  lVar31 = (longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar3 >> 0xd] +
           (ulonglong)(uVar3 & 0x1fff) * 0xc;
  if (1 < *(int *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar3 >> 0xd] + 8 +
                  (ulonglong)(uVar3 & 0x1fff) * 0xc)) {
    lVar25 = lVar31 + 0xc;
    iVar28 = 1;
    do {
      iVar28 = iVar28 + -1 + *(int *)(lVar25 + 8);
      lVar25 = lVar25 + 0xc;
    } while (0 < iVar28);
    lVar25 = lVar25 - lVar31;
    lVar31 = lVar25 / 6 + (lVar25 >> 0x3f);
    FVar29.Index = ((int)(lVar31 >> 1) - (int)(lVar31 >> 0x3f)) + uVar3;
  }
  lVar31 = *(longlong *)
            ((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)FVar24.Index >> 0xd] +
            (ulonglong)(FVar24.Index & 0x1fff) * 0xc);
  lVar25 = *(longlong *)
            ((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)FVar29.Index >> 0xd] +
            (ulonglong)(FVar29.Index & 0x1fff) * 0xc);
  pFVar5 = this->KeyProp;
  if ((int)((ulonglong)*(undefined8 *)&local_508->field_0x40 >> 0x20) < 0x3f4) {
    plVar20 = (longlong *)(**(code **)(pFVar5->_padding_ + 0x158))(pFVar5,local_2b0);
    lVar6 = *plVar20;
    local_567 = lVar31 == lVar6;
    plVar20 = (longlong *)
              (**(code **)(local_558->ValueProp->_padding_ + 0x158))(local_558->ValueProp,local_2d0)
    ;
    local_566 = lVar25 == *plVar20;
    this = local_558;
    if ((lVar31 == lVar6) || (lVar31 == 0)) {
      if (lVar25 == *plVar20) {
        return UseSerializeItem;
      }
      if (lVar25 == 0) {
        return UseSerializeItem;
      }
    }
  }
  else {
    local_567 = (bool)(**(code **)(pFVar5->_padding_ + 0x198))(pFVar5,FVar24.Index);
    local_566 = (bool)(**(code **)(this->ValueProp->_padding_ + 0x198))
                                (this->ValueProp,FVar29.Index);
    if ((local_567 != false) && (local_566 != false)) {
      return UseSerializeItem;
    }
  }
  pFVar9 = local_500;
  if (local_500->bExperimentalOverridableLogic != false) {
    return CannotConvert;
  }
  puVar18 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_350 = local_548;
  local_358 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar19 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_358,puVar18);
  local_540 = pFVar19[0x2f];
  if (((int)this->_padding_ < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar10)
     ) {
    pcVar7 = (code *)swi(3);
    EVar13 = (*pcVar7)();
    return EVar13;
  }
  if ((param_3 == (uchar *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ContainerPtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x2de,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    EVar13 = (*pcVar7)();
    return EVar13;
  }
  pFVar32 = local_558;
  FScriptMapHelper::FScriptMapHelper
            (&local_2a0,local_558,param_3 + *(int *)((longlong)&local_558->_padding_ + 4));
  local_4f8.Prop = pFVar32->KeyProp;
  local_4f8.TypeName.Index = 0;
  local_4f8.Type.ComparisonIndex.Value = 0;
  local_4f8.Type.Number = 0;
  local_4f8.Name.ComparisonIndex.Value = 0;
  local_4f8.Name.Number = 0;
  local_4f8.StructName.ComparisonIndex.Value = 0;
  local_4f8.StructName.Number = 0;
  local_4f8.EnumName.ComparisonIndex.Value = 0;
  local_4f8.EnumName.Number = 0;
  local_4f8.InnerType.ComparisonIndex.Value = 0;
  local_4f8.InnerType.Number = 0;
  local_4f8.ValueType.ComparisonIndex.Value = 0;
  local_4f8.ValueType.Number = 0;
  local_4f8.Size = 0;
  local_4f8.ArrayIndex = -1;
  local_4f8.SizeOffset = -1;
  local_4f8.StructGuid.A = 0;
  local_4f8.StructGuid.B = 0;
  local_4f8.StructGuid.C = 0;
  local_4f8.StructGuid.D = 0;
  local_4f8.PropertyGuid.A = 0;
  local_4f8.PropertyGuid.B = 0;
  local_4f8.PropertyGuid.C = 0;
  local_4f8.PropertyGuid.D = 0;
  local_4f8.HasPropertyGuid = '\0';
  local_4f8.BoolVal = '\0';
  local_4f8.SerializeType = Unknown;
  local_4f8.OverrideOperation = None;
  local_4f8.bExperimentalOverridableLogic = false;
  FPropertyTag::SetType(&local_4f8,FVar24);
  FVar4 = pFVar9->Name;
  local_4f8.Name.ComparisonIndex = FVar4.ComparisonIndex.Value;
  local_4f8.Name.Number = FVar4.Number;
  local_478.Prop = pFVar32->ValueProp;
  local_4f8.ArrayIndex = 0;
  local_478.TypeName.Index = 0;
  local_478.Type.ComparisonIndex.Value = 0;
  local_478.Type.Number = 0;
  local_478.Name.ComparisonIndex.Value = 0;
  local_478.Name.Number = 0;
  local_478.StructName.ComparisonIndex.Value = 0;
  local_478.StructName.Number = 0;
  local_478.EnumName.ComparisonIndex.Value = 0;
  local_478.EnumName.Number = 0;
  local_478.InnerType.ComparisonIndex.Value = 0;
  local_478.InnerType.Number = 0;
  local_478.ValueType.ComparisonIndex.Value = 0;
  local_478.ValueType.Number = 0;
  local_478.Size = 0;
  local_478.ArrayIndex = -1;
  local_478.SizeOffset = -1;
  local_478.StructGuid.A = 0;
  local_478.StructGuid.B = 0;
  local_478.StructGuid.C = 0;
  local_478.StructGuid.D = 0;
  local_478.PropertyGuid.A = 0;
  local_478.PropertyGuid.B = 0;
  local_478.PropertyGuid.C = 0;
  local_478.PropertyGuid.D = 0;
  local_478.HasPropertyGuid = '\0';
  local_478.BoolVal = '\0';
  local_478.SerializeType = Unknown;
  local_478.OverrideOperation = None;
  local_478.bExperimentalOverridableLogic = false;
  FPropertyTag::SetType(&local_478,FVar29);
  FVar8.StructuredArchive = local_res18.StructuredArchive;
  FVar4 = pFVar9->Name;
  local_478.Name.ComparisonIndex = FVar4.ComparisonIndex.Value;
  local_478.Name.Number = FVar4.Number;
  local_478.ArrayIndex = 0;
  local_564 = 0;
  bVar10 = true;
  pFVar16 = (local_res18.StructuredArchive)->Formatter->Inner;
  puVar18 = (uint *)**(undefined8 **)&pFVar16->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar16->field_0x8)[1] < puVar18 + 1) {
    if ((pFVar16->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar16 + 0x188))(pFVar16,&local_564,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar16,&local_564);
    }
  }
  else {
    local_564 = *puVar18;
    **(longlong **)&pFVar16->field_0x8 = **(longlong **)&pFVar16->field_0x8 + 4;
  }
  pFVar32 = local_558;
  if (local_564 == 0) {
    _Dst = (uchar *)0x0;
LAB_14216f0bc:
    bVar11 = true;
    pUVar27 = local_550;
  }
  else {
    _Dst = FMemory::Malloc((longlong)(local_558->MapLayout).SetLayout.Size,0);
    pFVar5 = pFVar32->KeyProp;
    if (((uint)(int)pFVar5->PropertyFlags >> 9 & 1) == 0) {
      (**(code **)(pFVar5->_padding_ + 0x150))(pFVar5,_Dst);
    }
    else {
      memset(_Dst,0,(longlong)pFVar5->ElementSize * (longlong)pFVar5->ArrayDim);
    }
    pUVar27 = local_550;
    bVar11 = `FMapProperty::ConvertFromType'::__l2::<lambda_2>::operator()
                       (&local_540,local_567,pFVar32->KeyProp,&local_4f8,UE::NAME_Key,
                        (FStructuredArchiveSlot)FVar8.StructuredArchive,_Dst,local_550);
    if (bVar11) {
      local_2e8 = &local_2a0;
      local_538[0] = 0;
      local_2d8 = local_538;
      local_2e0 = _Dst;
      iVar28 = FScriptMapHelper::
               WithScriptMap<_FScriptMapHelper::FindMapIndexWithKey_::__l2::<lambda_1>_>
                         (&local_2a0,(<lambda_1> *)&local_2e8);
      if (iVar28 != -1) {
        local_3e8 = &local_2a0;
        local_3dc = 1;
        local_3e0 = iVar28;
        if ((local_2a0.MapFlags & UsesMemoryImageAllocator) == None) {
          `FScriptMapHelper::RemoveAt'::__l2::<lambda_1>::operator()<FScriptMap>
                    (&local_3e8,local_2a0.field2_0x10.HeapMap);
        }
        else {
          `FScriptMapHelper::RemoveAt'::__l2::<lambda_1>::
          operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>
                    (&local_3e8,local_2a0.field2_0x10.FreezableMap);
        }
      }
      iVar28 = 1;
      if (1 < (int)local_564) {
        do {
          bVar11 = `FMapProperty::ConvertFromType'::__l2::<lambda_2>::operator()
                             (&local_540,local_567,pFVar32->KeyProp,&local_4f8,UE::NAME_Key,
                              (FStructuredArchiveSlot)FVar8.StructuredArchive,_Dst,local_550);
          if ((!bVar11) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SerializeOrConvert(bCanSerializeKey, KeyProp, KeyPropertyTag, UE::NAME_Key, KeysToRemoveArray.EnterElement(), TempKeyValueStorage, DefaultsStruct)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyMap.cpp"
                                  ,0x615,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            EVar13 = (*pcVar7)();
            return EVar13;
          }
          local_330 = &local_2a0;
          local_530[0] = 0;
          local_320 = local_530;
          local_328 = _Dst;
          iVar15 = FScriptMapHelper::
                   WithScriptMap<_FScriptMapHelper::FindMapIndexWithKey_::__l2::<lambda_1>_>
                             (&local_2a0,(<lambda_1> *)&local_330);
          if (iVar15 != -1) {
            local_3f8 = &local_2a0;
            local_3ec = 1;
            local_3f0 = iVar15;
            if ((local_2a0.MapFlags & UsesMemoryImageAllocator) == None) {
              `FScriptMapHelper::RemoveAt'::__l2::<lambda_1>::operator()<FScriptMap>
                        (&local_3f8,local_2a0.field2_0x10.HeapMap);
            }
            else {
              `FScriptMapHelper::RemoveAt'::__l2::<lambda_1>::
              operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>
                        (&local_3f8,local_2a0.field2_0x10.FreezableMap);
            }
          }
          iVar28 = iVar28 + 1;
        } while (iVar28 < (int)local_564);
      }
      goto LAB_14216f0bc;
    }
    bVar11 = false;
    bVar10 = false;
  }
  local_560[0] = 0;
  pFVar16 = (FVar8.StructuredArchive)->Formatter->Inner;
  puVar18 = (uint *)**(undefined8 **)&pFVar16->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar16->field_0x8)[1] < puVar18 + 1) {
    if ((pFVar16->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar16 + 0x188))(pFVar16,local_560,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar16,local_560);
    }
  }
  else {
    local_560[0] = *puVar18;
    **(longlong **)&pFVar16->field_0x8 = **(longlong **)&pFVar16->field_0x8 + 4;
  }
  if (bVar11) {
    if (local_560[0] == 0) goto LAB_14216fcf2;
    if (_Dst == (uchar *)0x0) {
      _Dst = FMemory::Malloc((longlong)(pFVar32->MapLayout).SetLayout.Size,0);
      pFVar5 = pFVar32->KeyProp;
      if (((uint)(int)pFVar5->PropertyFlags >> 9 & 1) == 0) {
        (**(code **)(pFVar5->_padding_ + 0x150))(pFVar5,_Dst);
      }
      else {
        memset(_Dst,0,(longlong)pFVar5->ElementSize * (longlong)pFVar5->ArrayDim);
      }
    }
    bVar11 = `FMapProperty::ConvertFromType'::__l2::<lambda_2>::operator()
                       (&local_540,local_567,pFVar32->KeyProp,&local_4f8,UE::NAME_Key,
                        (FStructuredArchiveSlot)FVar8.StructuredArchive,_Dst,pUVar27);
    if (bVar11) {
      local_318 = &local_2a0;
      local_528[0] = 0;
      local_308 = local_528;
      bVar11 = true;
      local_310 = _Dst;
      iVar28 = FScriptMapHelper::
               WithScriptMap<_FScriptMapHelper::FindMapIndexWithKey_::__l2::<lambda_1>_>
                         (&local_2a0,(<lambda_1> *)&local_318);
      if (iVar28 == -1) {
        pFVar1 = &local_2a0.MapLayout.SetLayout.SparseArrayLayout;
        bVar11 = false;
        if ((local_2a0.MapFlags & UsesMemoryImageAllocator) == None) {
          iVar28 = TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                   ::AddUninitialized((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                       *)local_2a0.field2_0x10.HeapMap,pFVar1);
        }
        else {
          iVar28 = TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
                   ::AddUninitialized((TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
                                       *)local_2a0.field2_0x10.HeapMap,pFVar1);
        }
        FScriptMapHelper::ConstructItem(&local_2a0,iVar28);
      }
      if ((local_2a0.MapFlags & UsesMemoryImageAllocator) == None) {
        puVar26 = (uchar *)((longlong)
                            (local_2a0.MapLayout.SetLayout.SparseArrayLayout.Size * iVar28) +
                           (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                              *)&(local_2a0.field2_0x10.FreezableMap)->Pairs)->Data)._padding_);
      }
      else {
        puVar26 = (uchar *)(((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                              *)&(local_2a0.field2_0x10.FreezableMap)->Pairs)->Data)._padding_;
        if (((ulonglong)puVar26 & 1) != 0) {
          puVar26 = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                       *)&(local_2a0.field2_0x10.HeapMap)->field_0x0)->AllocationFlags).
                    AllocatorInstance.InlineData + ((longlong)puVar26 >> 0x18) + -0x10;
        }
        puVar26 = puVar26 + local_2a0.MapLayout.SetLayout.SparseArrayLayout.Size * iVar28;
      }
      pFVar5 = pFVar32->KeyProp;
      if ((pFVar5->ArrayDim < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        EVar13 = (*pcVar7)();
        return EVar13;
      }
      if ((_Dst == (uchar *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        EVar13 = (*pcVar7)();
        return EVar13;
      }
      puVar30 = _Dst + pFVar5->Offset_Internal;
      if ((pFVar5->ArrayDim < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        EVar13 = (*pcVar7)();
        return EVar13;
      }
      if ((puVar26 == (uchar *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        EVar13 = (*pcVar7)();
        return EVar13;
      }
      puVar23 = puVar26 + pFVar5->Offset_Internal;
      if (puVar23 != puVar30) {
        if (((uint)(int)pFVar5->PropertyFlags >> 0x1e & 1) == 0) {
          (**(code **)(pFVar5->_padding_ + 0xf0))(pFVar5,puVar23,puVar30,pFVar5->ArrayDim);
        }
        else {
          memcpy(puVar23,puVar30,(longlong)pFVar5->ElementSize * (longlong)pFVar5->ArrayDim);
        }
      }
      pFVar32 = local_558;
      bVar12 = `FMapProperty::ConvertFromType'::__l2::<lambda_2>::operator()
                         (&local_540,local_566,local_558->ValueProp,&local_478,UE::NAME_Value,
                          (FStructuredArchiveSlot)FVar8.StructuredArchive,puVar26,local_550);
      if (!bVar12) {
        if (!bVar11) {
          if ((local_2a0.MapFlags & UsesMemoryImageAllocator) == None) {
            iVar28 = ((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                       *)&(local_2a0.field2_0x10.FreezableMap)->Pairs)->NumFreeIndices;
          }
          else {
            iVar28 = *(int *)&(((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                 *)&(local_2a0.field2_0x10.FreezableMap)->Pairs)->AllocationFlags).
                              AllocatorInstance.SecondaryData.field_0x4;
          }
          iVar28 = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                      *)&(local_2a0.field2_0x10.FreezableMap)->Pairs)->Data).ArrayNum - iVar28;
          if (iVar28 != 0) {
            FScriptMapHelper::DestructItems(&local_2a0,0,iVar28);
            local_398.__this = &local_2a0;
            local_398.Slack = 0;
            FScriptMapHelper::WithScriptMap<_FScriptMapHelper::EmptyValues_::__l9::<lambda_1>_>
                      (&local_2a0,&local_398);
          }
        }
        goto LAB_14216f8f5;
      }
      local_544 = 1;
      if (1 < (int)local_560[0]) {
        do {
          pFVar5 = pFVar32->KeyProp;
          local_3b8 = UE::NAME_Key;
          local_3b0 = 0;
          local_3ac = 0xffffffff;
          if (local_567 == false) {
            iVar28 = (**(code **)(pFVar5->_padding_ + 0xb0))
                               (pFVar5,&local_4f8,FVar8.StructuredArchive,_Dst);
            if (iVar28 == 0) {
              plVar20 = (longlong *)(**(code **)(pFVar5->_padding_ + 0x158))(pFVar5,local_2c8);
              if (CONCAT44(local_4f8.Type.Number,local_4f8.Type.ComparisonIndex.Value) != *plVar20)
              goto LAB_14216f48d;
              goto LAB_14216f4b8;
            }
            if (iVar28 != 1) {
              if (iVar28 != 2) {
                if (iVar28 == 3) goto LAB_14216f54b;
                bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!\"Enclosing block should never be called\"",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyMap.cpp"
                                    ,0x5d8,L"");
                if (bVar11) {
                  pcVar7 = (code *)swi(3);
                  EVar13 = (*pcVar7)();
                  return EVar13;
                }
              }
LAB_14216f48d:
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SerializeOrConvert(bCanSerializeKey, KeyProp, KeyPropertyTag, UE::NAME_Key, PropertyRecord.EnterField(L\"Key\"), TempKeyValueStorage, DefaultsStruct)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyMap.cpp"
                                  ,0x649,L"");
              if (bVar11) {
                pcVar7 = (code *)swi(3);
                EVar13 = (*pcVar7)();
                return EVar13;
              }
            }
          }
          else {
LAB_14216f4b8:
            lVar31 = (longlong)local_4f8.ArrayIndex;
            if (((local_4f8.ArrayIndex < 0) || (pFVar5->ArrayDim <= local_4f8.ArrayIndex)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x2dd,L"Array index out of bounds: %i from an array of size %i"
                                   ), bVar11)) {
              pcVar7 = (code *)swi(3);
              EVar13 = (*pcVar7)();
              return EVar13;
            }
            if ((_Dst == (uchar *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ContainerPtr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x2de,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              EVar13 = (*pcVar7)();
              return EVar13;
            }
            (**(code **)(pFVar5->_padding_ + 0xc0))
                      (pFVar5,FVar8.StructuredArchive,
                       _Dst + (longlong)pFVar5->Offset_Internal + lVar31 * pFVar5->ElementSize,0);
          }
LAB_14216f54b:
          local_300 = &local_2a0;
          local_520[0] = 0;
          local_2f0 = local_520;
          local_2f8 = _Dst;
          iVar28 = FScriptMapHelper::
                   WithScriptMap<_FScriptMapHelper::FindMapIndexWithKey_::__l2::<lambda_1>_>
                             (&local_2a0,(<lambda_1> *)&local_300);
          if (iVar28 == -1) {
            pFVar1 = &local_2a0.MapLayout.SetLayout.SparseArrayLayout;
            if ((local_2a0.MapFlags & UsesMemoryImageAllocator) == None) {
              iVar28 = TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                       ::AddUninitialized((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                           *)local_2a0.field2_0x10.HeapMap,pFVar1);
            }
            else {
              iVar28 = TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
                       ::AddUninitialized((TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
                                           *)local_2a0.field2_0x10.HeapMap,pFVar1);
            }
            FScriptMapHelper::ConstructItem(&local_2a0,iVar28);
          }
          if ((local_2a0.MapFlags & UsesMemoryImageAllocator) == None) {
            puVar26 = (uchar *)((longlong)
                                (local_2a0.MapLayout.SetLayout.SparseArrayLayout.Size * iVar28) +
                               (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                  *)&(local_2a0.field2_0x10.FreezableMap)->Pairs)->Data)._padding_);
          }
          else {
            puVar26 = (uchar *)(((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                  *)&(local_2a0.field2_0x10.FreezableMap)->Pairs)->Data)._padding_;
            if (((ulonglong)puVar26 & 1) != 0) {
              puVar26 = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                           *)&(local_2a0.field2_0x10.HeapMap)->field_0x0)->AllocationFlags).
                        AllocatorInstance.InlineData + ((longlong)puVar26 >> 0x18) + -0x10;
            }
            puVar26 = puVar26 + local_2a0.MapLayout.SetLayout.SparseArrayLayout.Size * iVar28;
          }
          pFVar5 = pFVar32->KeyProp;
          if ((pFVar5->ArrayDim < 1) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            EVar13 = (*pcVar7)();
            return EVar13;
          }
          if ((_Dst == (uchar *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ContainerPtr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2de,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            EVar13 = (*pcVar7)();
            return EVar13;
          }
          puVar30 = _Dst + pFVar5->Offset_Internal;
          if ((pFVar5->ArrayDim < 1) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            EVar13 = (*pcVar7)();
            return EVar13;
          }
          if ((puVar26 == (uchar *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ContainerPtr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x2de,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            EVar13 = (*pcVar7)();
            return EVar13;
          }
          puVar23 = puVar26 + pFVar5->Offset_Internal;
          if (puVar23 != puVar30) {
            if (((uint)(int)pFVar5->PropertyFlags >> 0x1e & 1) == 0) {
              (**(code **)(pFVar5->_padding_ + 0xf0))(pFVar5,puVar23,puVar30);
            }
            else {
              memcpy(puVar23,puVar30,(longlong)pFVar5->ElementSize * (longlong)pFVar5->ArrayDim);
            }
          }
          pFVar32 = local_558;
          local_3a8 = UE::NAME_Value;
          local_3a0 = 0;
          local_39c = 0xffffffff;
          pFVar5 = local_558->ValueProp;
          if (local_566 == false) {
            iVar28 = (**(code **)(pFVar5->_padding_ + 0xb0))
                               (pFVar5,&local_478,FVar8.StructuredArchive);
            if (iVar28 == 0) {
              plVar20 = (longlong *)(**(code **)(pFVar5->_padding_ + 0x158))(pFVar5,local_2a8);
              if (CONCAT44(local_478.Type.Number,local_478.Type.ComparisonIndex.Value) != *plVar20)
              goto LAB_14216f7bd;
              goto LAB_14216f7e8;
            }
            if (iVar28 != 1) {
              if (iVar28 != 2) {
                if (iVar28 == 3) goto LAB_14216f87c;
                bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!\"Enclosing block should never be called\"",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyMap.cpp"
                                    ,0x5d8,L"");
                if (bVar11) {
                  pcVar7 = (code *)swi(3);
                  EVar13 = (*pcVar7)();
                  return EVar13;
                }
              }
LAB_14216f7bd:
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SerializeOrConvert(bCanSerializeValue, ValueProp, ValuePropertyTag, UE::NAME_Value, PropertyRecord.EnterField(L\"Value\"), NextPairPtr, DefaultsStruct)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyMap.cpp"
                                  ,0x653,L"");
              if (bVar11) {
                pcVar7 = (code *)swi(3);
                EVar13 = (*pcVar7)();
                return EVar13;
              }
            }
          }
          else {
LAB_14216f7e8:
            lVar31 = (longlong)local_478.ArrayIndex;
            if (((local_478.ArrayIndex < 0) || (pFVar5->ArrayDim <= local_478.ArrayIndex)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x2dd,L"Array index out of bounds: %i from an array of size %i"
                                   ), bVar11)) {
              pcVar7 = (code *)swi(3);
              EVar13 = (*pcVar7)();
              return EVar13;
            }
            if ((puVar26 == (uchar *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ContainerPtr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x2de,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              EVar13 = (*pcVar7)();
              return EVar13;
            }
            (**(code **)(pFVar5->_padding_ + 0xc0))
                      (pFVar5,FVar8.StructuredArchive,
                       puVar26 + (longlong)pFVar5->Offset_Internal + lVar31 * pFVar5->ElementSize);
            pFVar32 = local_558;
          }
LAB_14216f87c:
          local_544 = local_544 + 1;
        } while (local_544 < (int)local_560[0]);
      }
    }
    else {
LAB_14216f8f5:
      bVar10 = false;
    }
    pFVar2 = &local_2a0.MapLayout.SetLayout;
    if ((local_2a0.MapFlags & UsesMemoryImageAllocator) == None) {
      local_378 = UE::Core::Private::Function::
                  TFunctionRefCaller<``FScriptMapHelper::Rehash'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_1>,unsigned_int,void_const_*>
                  ::Call;
      local_370 = &local_3c0;
      local_3c0 = &local_2a0;
      TScriptSparseSet<FDefaultSetAllocator>::Rehash
                ((TScriptSparseSet<FDefaultSetAllocator> *)local_2a0.field2_0x10.HeapMap,pFVar2,
                 (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_378);
    }
    else {
      local_388 = UE::Core::Private::Function::
                  TFunctionRefCaller<``FScriptMapHelper::Rehash'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_1>,unsigned_int,void_const_*>
                  ::Call;
      local_380 = &local_3c8;
      local_3c8 = &local_2a0;
      TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
      ::Rehash((TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
                *)local_2a0.field2_0x10.HeapMap,pFVar2,
               (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_388);
    }
    if (bVar10) goto LAB_14216fcf2;
  }
  if (2 < (byte)LogClass._0_1_) {
    (**(code **)(*(longlong *)local_508 + 0x18))(local_508,local_2c0);
    pFVar21 = UE::FPropertyTypeName::FPropertyTypeName(&local_3d4,pFVar32->ValueProp);
    local_1a8.Base = local_188;
    local_1a8.bIsDynamic = false;
    local_1a8.bIsExternal = false;
    local_1a8.CurPos = local_188;
    local_1a8.End = (wchar_t *)&local_148;
    UE::AppendNode(&local_1a8,
                   (FPropertyTypeNameNode *)
                   ((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)pFVar21->Index >> 0xd] +
                   (ulonglong)(pFVar21->Index & 0x1fff) * 0xc));
    if (local_1a8.End < (TStringBuilderBase<wchar_t> *)(local_1a8.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_1a8,1);
    }
    *local_1a8.CurPos = L'\0';
    pFVar21 = UE::FPropertyTypeName::FPropertyTypeName(local_3d0,pFVar32->KeyProp);
    local_a8.Base = local_88;
    local_a8.bIsDynamic = false;
    local_a8.bIsExternal = false;
    local_a8.CurPos = local_88;
    local_a8.End = (wchar_t *)local_48;
    UE::AppendNode(&local_a8,
                   (FPropertyTypeNameNode *)
                   ((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)pFVar21->Index >> 0xd] +
                   (ulonglong)(pFVar21->Index & 0x1fff) * 0xc));
    TStringBuilderBase<wchar_t>::operator*(&local_a8);
    local_208.bIsDynamic = false;
    local_208.bIsExternal = false;
    local_208.Base = local_1e8;
    local_208.CurPos = local_1e8;
    local_208.End = (wchar_t *)&local_1a8;
    UE::AppendNode(&local_208,
                   (FPropertyTypeNameNode *)
                   ((longlong)
                    UE::GPropertyTypeNameTable.Blocks[(longlong)local_478.TypeName.Index >> 0xd] +
                   (ulonglong)(local_478.TypeName.Index & 0x1fff) * 0xc));
    if (local_208.End < (TStringBuilderBase<wchar_t> *)(local_208.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_208,1);
    }
    *local_208.CurPos = L'\0';
    local_268.Base = local_248;
    local_268.CurPos = local_248;
    local_268.End = (wchar_t *)&local_208;
    local_268.bIsDynamic = false;
    local_268.bIsExternal = false;
    UE::AppendNode(&local_268,
                   (FPropertyTypeNameNode *)
                   ((longlong)
                    UE::GPropertyTypeNameTable.Blocks[(longlong)local_4f8.TypeName.Index >> 0xd] +
                   (ulonglong)(local_4f8.TypeName.Index & 0x1fff) * 0xc));
    if (local_268.End < (TStringBuilderBase<wchar_t> *)(local_268.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_268,1);
    }
    *local_268.CurPos = L'\0';
    local_148.Base = local_128;
    local_148.CurPos = local_128;
    local_148.End = (wchar_t *)&local_e8;
    local_148.bIsDynamic = false;
    local_148.bIsExternal = false;
    ::FName::AppendString(&local_500->Name,&local_148);
    if (local_148.End < (FScriptMapHelper *)(local_148.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_148,1);
    }
    *local_148.CurPos = L'\0';
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_148);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_208);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_a8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1a8);
    if (local_2c0[0] != (void *)0x0) {
      FMemory::Free(local_2c0[0]);
    }
  }
LAB_14216fcf2:
  if (_Dst != (uchar *)0x0) {
    pFVar5 = local_558->KeyProp;
    if ((pFVar5->PropertyFlags & CPF_NoDestructor) == CPF_None) {
      (**(code **)(pFVar5->_padding_ + 0x138))(pFVar5,_Dst);
    }
    FMemory::Free(_Dst);
  }
  return bVar10 + CannotConvert;
}

// CopyValuesInternal @ 1421746f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMapProperty::CopyValuesInternal(FMapProperty *this,void *param_1,void *param_2,int param_3)

{
  FScriptSparseArrayLayout *pFVar1;
  FScriptSparseSetLayout *pFVar2;
  FProperty *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uchar *_Dst;
  uchar *puVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 *_Src;
  int iVar10;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  int local_f0;
  int local_e8 [2];
  FScriptMapHelper *local_e0;
  FScriptMapHelper *local_d8;
  <lambda_1> local_d0;
  code *local_c0;
  FScriptMapHelper **local_b8;
  code *local_b0;
  FScriptMapHelper **local_a8;
  FScriptMapHelper local_a0;
  FScriptMapHelper local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_118;
  if ((param_3 != 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyMap.cpp"
                         ,0x4e4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FScriptMapHelper::FScriptMapHelper(&local_68,this,param_2);
  FScriptMapHelper::FScriptMapHelper(&local_a0,this,param_1);
  if ((local_68.MapFlags & UsesMemoryImageAllocator) == None) {
    iVar10 = *(int *)&((local_68.field2_0x10.FreezableMap)->Pairs).field_0x34;
  }
  else {
    iVar10 = ((local_68.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices;
  }
  iVar10 = ((local_68.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum - iVar10;
  if ((local_a0.MapFlags & UsesMemoryImageAllocator) == None) {
    iVar9 = ((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
              *)&(local_a0.field2_0x10.FreezableMap)->Pairs)->NumFreeIndices;
  }
  else {
    iVar9 = *(int *)&(((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                        *)&(local_a0.field2_0x10.FreezableMap)->Pairs)->AllocationFlags).
                     AllocatorInstance.SecondaryData.field_0x4;
  }
  iVar9 = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
             *)&(local_a0.field2_0x10.FreezableMap)->Pairs)->Data).ArrayNum - iVar9;
  if (iVar9 == 0) {
    if (iVar10 == 0) {
      return;
    }
  }
  else {
    FScriptMapHelper::DestructItems(&local_a0,0,iVar9);
  }
  local_d0.__this = &local_a0;
  local_d0.Slack = iVar10;
  FScriptMapHelper::WithScriptMap<_FScriptMapHelper::EmptyValues_::__l9::<lambda_1>_>
            (&local_a0,&local_d0);
  if (iVar10 != 0) {
    iVar9 = 0;
    do {
      local_e8[0] = iVar9;
      bVar5 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                        (&local_68,(<lambda_1> *)local_e8);
      if (bVar5) {
        pFVar1 = &local_a0.MapLayout.SetLayout.SparseArrayLayout;
        if ((local_a0.MapFlags & UsesMemoryImageAllocator) == None) {
          iVar6 = TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                  ::AddUninitialized((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                      *)local_a0.field2_0x10.HeapMap,pFVar1);
        }
        else {
          iVar6 = TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
                  ::AddUninitialized((TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
                                      *)local_a0.field2_0x10.HeapMap,pFVar1);
        }
        FScriptMapHelper::ConstructItem(&local_a0,iVar6);
        if ((local_68.MapFlags & UsesMemoryImageAllocator) == None) {
          puVar8 = (undefined1 *)
                   ((longlong)(local_68.MapLayout.SetLayout.SparseArrayLayout.Size * iVar9) +
                   ((local_68.field2_0x10.FreezableMap)->Pairs).Elements.Data._padding_);
        }
        else {
          puVar8 = (undefined1 *)
                   ((local_68.field2_0x10.FreezableMap)->Pairs).Elements.Data._padding_;
          if (((ulonglong)puVar8 & 1) != 0) {
            puVar8 = &(local_68.field2_0x10.HeapMap)->field_0x0 + ((longlong)puVar8 >> 0x18);
          }
          puVar8 = puVar8 + local_68.MapLayout.SetLayout.SparseArrayLayout.Size * iVar9;
        }
        if ((local_a0.MapFlags & UsesMemoryImageAllocator) == None) {
          puVar7 = (uchar *)((longlong)(local_a0.MapLayout.SetLayout.SparseArrayLayout.Size * iVar6)
                            + (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                 *)&(local_a0.field2_0x10.FreezableMap)->Pairs)->Data)._padding_);
        }
        else {
          puVar7 = (uchar *)(((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                               *)&(local_a0.field2_0x10.FreezableMap)->Pairs)->Data)._padding_;
          if (((ulonglong)puVar7 & 1) != 0) {
            puVar7 = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                        *)&(local_a0.field2_0x10.HeapMap)->field_0x0)->AllocationFlags).
                     AllocatorInstance.InlineData + ((longlong)puVar7 >> 0x18) + -0x10;
          }
          puVar7 = puVar7 + local_a0.MapLayout.SetLayout.SparseArrayLayout.Size * iVar6;
        }
        pFVar3 = this->KeyProp;
        if (pFVar3->ArrayDim < 1) {
          local_f8 = 0;
          local_f0 = pFVar3->ArrayDim;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if ((puVar8 == (undefined1 *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        _Src = puVar8 + pFVar3->Offset_Internal;
        if (pFVar3->ArrayDim < 1) {
          local_f8 = 0;
          local_f0 = pFVar3->ArrayDim;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if ((puVar7 == (uchar *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        _Dst = puVar7 + pFVar3->Offset_Internal;
        if (_Dst != _Src) {
          if (((uint)(int)pFVar3->PropertyFlags >> 0x1e & 1) == 0) {
            (**(code **)(pFVar3->_padding_ + 0xf0))(pFVar3,_Dst,_Src,pFVar3->ArrayDim);
          }
          else {
            memcpy(_Dst,_Src,(longlong)pFVar3->ElementSize * (longlong)pFVar3->ArrayDim);
          }
        }
        pFVar3 = this->ValueProp;
        if (pFVar3->ArrayDim < 1) {
          local_f8 = 0;
          local_f0 = pFVar3->ArrayDim;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if ((puVar8 == (undefined1 *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar8 = puVar8 + pFVar3->Offset_Internal;
        if (pFVar3->ArrayDim < 1) {
          local_f8 = 0;
          local_f0 = pFVar3->ArrayDim;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if ((puVar7 == (uchar *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar7 = puVar7 + pFVar3->Offset_Internal;
        if (puVar7 != puVar8) {
          if (((uint)(int)pFVar3->PropertyFlags >> 0x1e & 1) == 0) {
            (**(code **)(pFVar3->_padding_ + 0xf0))(pFVar3,puVar7,puVar8,pFVar3->ArrayDim);
          }
          else {
            memcpy(puVar7,puVar8,(longlong)pFVar3->ElementSize * (longlong)pFVar3->ArrayDim);
          }
        }
        iVar10 = iVar10 + -1;
      }
      iVar9 = iVar9 + 1;
    } while (iVar10 != 0);
    local_e0 = &local_a0;
    pFVar2 = &local_a0.MapLayout.SetLayout;
    if ((local_a0.MapFlags & UsesMemoryImageAllocator) == None) {
      local_b0 = UE::Core::Private::Function::
                 TFunctionRefCaller<``FScriptMapHelper::Rehash'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_1>,unsigned_int,void_const_*>
                 ::Call;
      local_a8 = &local_d8;
      local_d8 = local_e0;
      TScriptSparseSet<FDefaultSetAllocator>::Rehash
                ((TScriptSparseSet<FDefaultSetAllocator> *)local_a0.field2_0x10.HeapMap,pFVar2,
                 (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_b0);
    }
    else {
      local_c0 = UE::Core::Private::Function::
                 TFunctionRefCaller<``FScriptMapHelper::Rehash'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_1>,unsigned_int,void_const_*>
                 ::Call;
      local_b8 = &local_e0;
      TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
      ::Rehash((TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
                *)local_a0.field2_0x10.HeapMap,pFVar2,
               (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_c0);
    }
  }
  return;
}

// DestroyValueInternal @ 1421755a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FMapProperty::DestroyValueInternal(FMapProperty *this,void *param_1)

{
  int iVar1;
  undefined1 auStack_78 [32];
  <lambda_1> local_58;
  FScriptMapHelper local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  FScriptMapHelper::FScriptMapHelper(&local_48,this,param_1);
  if ((local_48.MapFlags & UsesMemoryImageAllocator) == None) {
    iVar1 = *(int *)&((local_48.field2_0x10.FreezableMap)->Pairs).field_0x34;
  }
  else {
    iVar1 = ((local_48.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices;
  }
  iVar1 = ((local_48.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum - iVar1;
  if (iVar1 != 0) {
    FScriptMapHelper::DestructItems(&local_48,0,iVar1);
    local_58.__this = &local_48;
    local_58.Slack = 0;
    FScriptMapHelper::WithScriptMap<_FScriptMapHelper::EmptyValues_::__l9::<lambda_1>_>
              (&local_48,&local_58);
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return;
}

// ExportText_Internal @ 142176190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMapProperty::ExportText_Internal
          (FMapProperty *this,FString *param_1,void *param_2,EPropertyPointerType param_3,
          void *param_4,UObject *param_5,int param_6,UObject *param_7)

{
  FProperty *pFVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  undefined1 *puVar8;
  wchar_t wVar9;
  void *pvVar10;
  int iVar11;
  void *pvVar12;
  int iVar13;
  undefined1 auStack_148 [32];
  longlong local_128;
  UObject *local_120;
  uint local_118;
  UObject *local_110;
  int local_108 [2];
  uint local_100;
  UObject *local_f8;
  UObject *local_f0;
  void *local_e8;
  void *local_e0;
  FScriptMapHelper *local_d8;
  void *local_d0;
  int *local_c8;
  FScriptMapHelper local_b0;
  FScriptMapHelper local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_f0 = param_5;
  local_f8 = param_7;
  local_e0 = (void *)0x0;
  pvVar6 = param_2;
  if (param_3 == Container) {
    cVar3 = (**(code **)(this->_padding_ + 0x78))();
    if (cVar3 == '\0') {
      pvVar6 = (void *)((longlong)*(int *)((longlong)&this->_padding_ + 4) + (longlong)param_2);
    }
    else {
      pvVar6 = FProperty::AllocateAndInitializeValue((FProperty *)this);
      local_e0 = pvVar6;
      FProperty::GetValue_InContainer((FProperty *)this,param_2,pvVar6);
    }
  }
  FScriptMapHelper::FScriptMapHelper(&local_78,this,pvVar6);
  if ((local_78.MapFlags & UsesMemoryImageAllocator) == None) {
    iVar11 = *(int *)&((local_78.field2_0x10.FreezableMap)->Pairs).field_0x34;
  }
  else {
    iVar11 = ((local_78.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices;
  }
  if (((local_78.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum == iVar11) {
    ::FString::AppendChars(param_1,L"()",2);
  }
  else {
    pvVar6 = (void *)0x0;
    local_100 = param_6 & 0x40;
    local_e8 = (void *)0x0;
    if (((this->ValueProp != (FProperty *)0x0) &&
        ((*(uint *)(this->ValueProp->_padding_ + 0x18) >> 0x14 & 1) != 0)) && (local_100 == 0)) {
      pvVar6 = FMemory::Malloc((longlong)(this->MapLayout).SetLayout.Size,0);
      pFVar1 = this->ValueProp;
      pvVar12 = (void *)((longlong)(this->MapLayout).ValueOffset + (longlong)pvVar6);
      local_e8 = pvVar6;
      if (((uint)(int)pFVar1->PropertyFlags >> 9 & 1) == 0) {
        (**(code **)(pFVar1->_padding_ + 0x150))(pFVar1,pvVar12);
      }
      else {
        memset(pvVar12,0,(longlong)pFVar1->ElementSize * (longlong)pFVar1->ArrayDim);
      }
    }
    FScriptMapHelper::FScriptMapHelper(&local_b0,this,param_4);
    pvVar12 = (void *)((local_78.field2_0x10.FreezableMap)->Pairs).Elements.Data._padding_;
    local_78.MapFlags = local_78.MapFlags & UsesMemoryImageAllocator;
    if ((local_78.MapFlags != None) && (((ulonglong)pvVar12 & 1) != 0)) {
      pvVar12 = &(local_78.field2_0x10.HeapMap)->field_0x0 + ((longlong)pvVar12 >> 0x18);
    }
    iVar11 = ((local_78.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
    iVar13 = 0;
    if (((uint)param_6 >> 0x19 & 1) == 0) {
      bVar2 = true;
      if (local_78.MapFlags == None) {
        iVar5 = *(int *)&((local_78.field2_0x10.FreezableMap)->Pairs).field_0x34;
      }
      else {
        iVar5 = ((local_78.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices;
      }
      iVar11 = iVar11 - iVar5;
      while (iVar11 != 0) {
        local_108[0] = iVar13;
        bVar4 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          (&local_78,(<lambda_1> *)local_108);
        if (bVar4) {
          wVar9 = L'(';
          if (!bVar2) {
            wVar9 = L',';
          }
          ::FString::AppendChar(param_1,wVar9);
          ::FString::AppendChars(param_1,L"(",1);
          local_110 = local_f8;
          local_120 = local_f0;
          local_128 = 0;
          local_118 = param_6 | 1U;
          (**(code **)(this->KeyProp->_padding_ + 0xe0))(this->KeyProp,param_1,pvVar12,0);
          ::FString::AppendChars(param_1,L", ",2);
          pvVar10 = pvVar6;
          if (pvVar6 == (void *)0x0) {
            if (param_4 != (void *)0x0) {
              local_d8 = &local_b0;
              local_108[0] = 0;
              local_c8 = local_108;
              local_d0 = pvVar12;
              iVar5 = FScriptMapHelper::
                      WithScriptMap<_FScriptMapHelper::FindMapIndexWithKey_::__l2::<lambda_1>_>
                                (&local_b0,(<lambda_1> *)&local_d8);
              if (-1 < iVar5) {
                if ((local_b0.MapFlags & UsesMemoryImageAllocator) == None) {
                  pvVar10 = (void *)((longlong)
                                     (local_b0.MapLayout.SetLayout.SparseArrayLayout.Size * iVar5) +
                                    ((local_b0.field2_0x10.FreezableMap)->Pairs).Elements.Data.
                                    _padding_);
                }
                else {
                  puVar8 = (undefined1 *)
                           ((local_b0.field2_0x10.FreezableMap)->Pairs).Elements.Data._padding_;
                  if (((ulonglong)puVar8 & 1) != 0) {
                    puVar8 = &(local_b0.field2_0x10.HeapMap)->field_0x0 + ((longlong)puVar8 >> 0x18)
                    ;
                  }
                  pvVar10 = puVar8 + local_b0.MapLayout.SetLayout.SparseArrayLayout.Size * iVar5;
                }
                goto LAB_142176610;
              }
            }
            pvVar10 = (void *)0x0;
          }
LAB_142176610:
          lVar7 = (longlong)(this->MapLayout).ValueOffset;
          local_110 = local_f8;
          if (local_100 != 0) {
            pvVar10 = pvVar12;
          }
          local_128 = (longlong)pvVar10 + lVar7;
          local_120 = local_f0;
          local_118 = param_6 | 1U;
          (**(code **)(this->ValueProp->_padding_ + 0xe0))
                    (this->ValueProp,param_1,lVar7 + (longlong)pvVar12);
          ::FString::AppendChars(param_1,L")",1);
          iVar11 = iVar11 + -1;
          bVar2 = false;
        }
        iVar13 = iVar13 + 1;
        pvVar12 = (void *)((longlong)pvVar12 + (longlong)(this->MapLayout).SetLayout.Size);
      }
      ::FString::AppendChars(param_1,L")",1);
    }
    else {
      bVar2 = true;
      if (local_78.MapFlags == None) {
        iVar5 = *(int *)&((local_78.field2_0x10.FreezableMap)->Pairs).field_0x34;
      }
      else {
        iVar5 = ((local_78.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices;
      }
      iVar11 = iVar11 - iVar5;
      while (iVar11 != 0) {
        local_108[0] = iVar13;
        bVar4 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          (&local_78,(<lambda_1> *)local_108);
        if (bVar4) {
          if (bVar2) {
            bVar2 = false;
          }
          else {
            ::FString::AppendChar(param_1,L'\n');
          }
          ::FString::AppendChars(param_1,L"[",1);
          local_110 = local_f8;
          local_120 = local_f0;
          local_128 = 0;
          local_118 = param_6 | 1U;
          (**(code **)(this->KeyProp->_padding_ + 0xe0))(this->KeyProp,param_1,pvVar12,0);
          ::FString::AppendChars(param_1,L"] ",2);
          pvVar6 = local_e8;
          if (local_e8 == (void *)0x0) {
            if (param_4 != (void *)0x0) {
              local_d8 = &local_b0;
              local_108[0] = 0;
              local_c8 = local_108;
              local_d0 = pvVar12;
              iVar5 = FScriptMapHelper::
                      WithScriptMap<_FScriptMapHelper::FindMapIndexWithKey_::__l2::<lambda_1>_>
                                (&local_b0,(<lambda_1> *)&local_d8);
              if (-1 < iVar5) {
                if ((local_b0.MapFlags & UsesMemoryImageAllocator) == None) {
                  pvVar6 = (void *)((longlong)
                                    (local_b0.MapLayout.SetLayout.SparseArrayLayout.Size * iVar5) +
                                   ((local_b0.field2_0x10.FreezableMap)->Pairs).Elements.Data.
                                   _padding_);
                }
                else {
                  puVar8 = (undefined1 *)
                           ((local_b0.field2_0x10.FreezableMap)->Pairs).Elements.Data._padding_;
                  if (((ulonglong)puVar8 & 1) != 0) {
                    puVar8 = &(local_b0.field2_0x10.HeapMap)->field_0x0 + ((longlong)puVar8 >> 0x18)
                    ;
                  }
                  pvVar6 = puVar8 + local_b0.MapLayout.SetLayout.SparseArrayLayout.Size * iVar5;
                }
                goto LAB_142176461;
              }
            }
            pvVar6 = (void *)0x0;
          }
LAB_142176461:
          lVar7 = (longlong)(this->MapLayout).ValueOffset;
          local_110 = local_f8;
          pvVar10 = pvVar12;
          if (local_100 == 0) {
            pvVar10 = pvVar6;
          }
          local_128 = (longlong)pvVar10 + lVar7;
          local_120 = local_f0;
          local_118 = param_6 | 1U;
          (**(code **)(this->ValueProp->_padding_ + 0xe0))
                    (this->ValueProp,param_1,lVar7 + (longlong)pvVar12);
          iVar11 = iVar11 + -1;
        }
        iVar13 = iVar13 + 1;
        pvVar12 = (void *)((longlong)pvVar12 + (longlong)(this->MapLayout).SetLayout.Size);
      }
    }
    pvVar6 = local_e8;
    if (local_e8 != (void *)0x0) {
      pFVar1 = this->ValueProp;
      if ((pFVar1->PropertyFlags & CPF_NoDestructor) == CPF_None) {
        (**(code **)(pFVar1->_padding_ + 0x138))
                  (pFVar1,(longlong)(this->MapLayout).ValueOffset + (longlong)local_e8);
      }
      FMemory::Free(pvVar6);
    }
  }
  FProperty::DestroyAndFreeValue((FProperty *)this,local_e0);
  return;
}

// FinishDestroyInternal @ 1421784d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FMapProperty::FinishDestroyInternal(FMapProperty *this,void *param_1)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  FScriptMapHelper_u_16 FVar4;
  bool bVar5;
  int iVar6;
  undefined1 *puVar7;
  EPropertyFlags EVar8;
  EPropertyFlags EVar9;
  undefined1 auStack_a8 [32];
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78 [2];
  FScriptMapHelper local_70;
  ulonglong local_38;
  
  if (param_1 != (void *)0x0) {
    local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
    if ((this->KeyProp == (FProperty *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("KeyProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyMap.cpp"
                           ,0x521,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((this->ValueProp == (FProperty *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ValueProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyMap.cpp"
                           ,0x522,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    EVar9 = this->ValueProp->PropertyFlags & (CPF_NoDestructor|CPF_IsPlainOldData);
    EVar8 = this->KeyProp->PropertyFlags & (CPF_NoDestructor|CPF_IsPlainOldData);
    if ((EVar8 == CPF_None) || (EVar9 == CPF_None)) {
      FScriptMapHelper::FScriptMapHelper(&local_70,this,param_1);
      iVar6 = 0;
      iVar1 = ((local_70.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
      if (0 < iVar1) {
        do {
          local_84 = iVar6;
          bVar5 = FScriptMapHelper::
                  WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                            (&local_70,(<lambda_1> *)&local_84);
          if (bVar5) break;
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar1);
      }
      local_88 = iVar6;
      bVar5 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                        (&local_70,(<lambda_1> *)&local_88);
      if (bVar5) {
        do {
          FVar4 = local_70.field2_0x10;
          if ((local_70.MapFlags & UsesMemoryImageAllocator) == None) {
            local_7c = iVar6;
            bVar5 = FScriptMapHelper::
                    WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                              (&local_70,(<lambda_1> *)&local_7c);
            if ((!bVar5) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Iterator",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1303,
                                   L"Invalid Iterator. Test Iterator before calling this method."),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            puVar7 = (undefined1 *)
                     ((longlong)(local_70.MapLayout.SetLayout.SparseArrayLayout.Size * iVar6) +
                     ((FVar4.FreezableMap)->Pairs).Elements.Data._padding_);
          }
          else {
            local_80 = iVar6;
            bVar5 = FScriptMapHelper::
                    WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                              (&local_70,(<lambda_1> *)&local_80);
            if ((!bVar5) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Iterator",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1303,
                                   L"Invalid Iterator. Test Iterator before calling this method."),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            puVar7 = (undefined1 *)((FVar4.FreezableMap)->Pairs).Elements.Data._padding_;
            if (((ulonglong)puVar7 & 1) != 0) {
              puVar7 = &(FVar4.HeapMap)->field_0x0 + ((longlong)puVar7 >> 0x18);
            }
            puVar7 = puVar7 + local_70.MapLayout.SetLayout.SparseArrayLayout.Size * iVar6;
          }
          if ((EVar8 == CPF_None) &&
             (pFVar2 = this->KeyProp,
             (pFVar2->PropertyFlags & (CPF_NoDestructor|CPF_IsPlainOldData)) == CPF_None)) {
            (**(code **)(pFVar2->_padding_ + 0x148))(pFVar2,puVar7);
          }
          if ((EVar9 == CPF_None) &&
             (pFVar2 = this->ValueProp,
             (pFVar2->PropertyFlags & (CPF_NoDestructor|CPF_IsPlainOldData)) == CPF_None)) {
            (**(code **)(pFVar2->_padding_ + 0x148))(pFVar2,puVar7 + (this->MapLayout).ValueOffset);
          }
          iVar1 = ((local_70.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
          do {
            iVar6 = iVar6 + 1;
            if (iVar1 <= iVar6) break;
            local_78[0] = iVar6;
            bVar5 = FScriptMapHelper::
                    WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                              (&local_70,(<lambda_1> *)local_78);
          } while (!bVar5);
          local_88 = iVar6;
          bVar5 = FScriptMapHelper::
                  WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                            (&local_70,(<lambda_1> *)&local_88);
        } while (bVar5);
      }
    }
  }
  return;
}

// GetCPPMacroType @ 142179690

FString * __thiscall
FMapProperty::GetCPPMacroType(FMapProperty *this,FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FString local_38;
  void *local_28 [2];
  void *local_18 [2];
  
  (**(code **)(this->ValueProp->_padding_ + 0x68))(this->ValueProp,local_18,0,0);
  (**(code **)(this->KeyProp->_padding_ + 0x68))(this->KeyProp,local_28,0,0);
  ::FString::PrintfImpl(&local_38,L"%s,%s");
  if (param_1 != &local_38) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
    (param_1->Data).ArrayNum = local_38.Data.ArrayNum;
    (param_1->Data).ArrayMax = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  ::FString::FString(__return_storage_ptr__,L"TMAP");
  return __return_storage_ptr__;
}

// GetCPPType @ 14217aaf0

FString * __thiscall
FMapProperty::GetCPPType
          (FMapProperty *this,FString *__return_storage_ptr__,FString *param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  void *local_38 [2];
  
  pFVar1 = (FScriptContainerElement *)0x0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  pFVar3 = pFVar1;
  if (param_1 != (FString *)0x0) {
    pFVar2 = (FString *)
             (**(code **)(this->KeyProp->_padding_ + 0x68))
                       (this->KeyProp,local_38,&local_48,param_2 & 0xfffffffd);
    if (&local_68 != pFVar2) {
      pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = (pFVar2->Data).ArrayNum;
      local_68.Data.ArrayMax = (pFVar2->Data).ArrayMax;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
      local_68.Data.AllocatorInstance.Data = pFVar3;
    }
    if (local_38[0] != (void *)0x0) {
      FMemory::Free(local_38[0]);
    }
    pFVar2 = (FString *)
             (**(code **)(this->ValueProp->_padding_ + 0x68))
                       (this->ValueProp,local_38,&local_58,param_2 & 0xfffffffd);
    if (&local_78 != pFVar2) {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = (pFVar2->Data).ArrayNum;
      local_78.Data.ArrayMax = (pFVar2->Data).ArrayMax;
      (pFVar2->Data).ArrayNum = 0;
      (pFVar2->Data).ArrayMax = 0;
      local_78.Data.AllocatorInstance.Data = pFVar1;
    }
    if (local_38[0] != (void *)0x0) {
      FMemory::Free(local_38[0]);
    }
  }
  GetCPPTypeCustom(this,__return_storage_ptr__,param_1,param_2,&local_68,&local_48,&local_78,
                   &local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return __return_storage_ptr__;
}

// GetCPPTypeCustom @ 14217b550

FString * __thiscall
FMapProperty::GetCPPTypeCustom
          (FMapProperty *this,FString *__return_storage_ptr__,FString *param_1,uint param_2,
          FString *param_3,FString *param_4,FString *param_5,FString *param_6)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ForAnyElementType FVar9;
  int iVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if (param_1 == (FString *)0x0) goto LAB_14217b975;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = (param_4->Data).ArrayNum;
  lVar11 = (longlong)local_78.Data.ArrayNum;
  pFVar1 = (param_4->Data).AllocatorInstance.Data;
  if (local_78.Data.ArrayNum == 0) {
    local_78.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_78.Data.ArrayNum,0,(ForAnyElementType *)&local_78,local_78.Data.ArrayNum,
               &local_78.Data.ArrayMax);
    memcpy(local_78.Data.AllocatorInstance.Data,pFVar1,lVar11 * 2);
  }
  iVar6 = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  iVar7 = 0;
  iVar10 = 0;
  bVar2 = false;
  if (iVar6 == 0) {
LAB_14217b659:
    bVar4 = bVar2;
    iVar6 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      iVar6 = iVar7;
    }
    bVar2 = false;
    if (iVar6 == 0) {
      iVar6 = (param_3->Data).ArrayNum;
      iVar8 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar8 = iVar7;
      }
      if (iVar8 != 0) {
        bVar3 = true;
        if (iVar6 == 0) {
          pwVar12 = L"";
          iVar6 = iVar7;
        }
        else {
          pwVar12 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
          iVar6 = iVar6 + -1;
        }
        iVar8 = iVar6;
        if (1 < iVar6) {
          iVar8 = 1;
        }
        iVar5 = iVar10;
        if (0 < iVar8) {
          iVar5 = iVar8;
        }
        ::FString::FString(&local_58,
                           (wchar_t *)((longlong)pwVar12 + ((longlong)iVar6 - (longlong)iVar5) * 2))
        ;
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_58.Data.ArrayNum != 0) {
          FVar9.Data = local_58.Data.AllocatorInstance.Data;
        }
        iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar9.Data,L">");
        bVar2 = true;
        if (iVar6 == 0) {
          bVar2 = true;
          goto LAB_14217b6da;
        }
      }
    }
    bVar3 = bVar2;
    bVar2 = false;
  }
  else {
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar9.Data = local_78.Data.AllocatorInstance.Data;
    }
    iVar8 = iVar6;
    if (1 < iVar6) {
      iVar8 = 1;
    }
    iVar5 = iVar7;
    if (0 < iVar8) {
      iVar5 = iVar8;
    }
    ::FString::FString(&local_48,(wchar_t *)(FVar9.Data + ((longlong)iVar6 - (longlong)iVar5) * 2));
    bVar4 = true;
    bVar3 = false;
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar9.Data = local_48.Data.AllocatorInstance.Data;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar9.Data,L">");
    bVar2 = true;
    if (iVar6 != 0) goto LAB_14217b659;
    bVar2 = true;
  }
LAB_14217b6da:
  if ((bVar3) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  bVar3 = false;
  if (bVar2) {
    ::FString::AppendChars(&local_78,L" ",1);
  }
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = (param_6->Data).ArrayNum;
  lVar11 = (longlong)local_88.Data.ArrayNum;
  pFVar1 = (param_6->Data).AllocatorInstance.Data;
  if (local_88.Data.ArrayNum == 0) {
    local_88.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_88,local_88.Data.ArrayNum,
               &local_88.Data.ArrayMax);
    memcpy(local_88.Data.AllocatorInstance.Data,pFVar1,lVar11 * 2);
  }
  bVar2 = true;
  iVar6 = local_88.Data.ArrayNum + -1;
  if (local_88.Data.ArrayNum == 0) {
    iVar6 = iVar10;
  }
  if (iVar6 == 0) {
LAB_14217b7e3:
    iVar6 = local_88.Data.ArrayNum + -1;
    if (local_88.Data.ArrayNum == 0) {
      iVar6 = iVar10;
    }
    bVar2 = false;
    if (iVar6 == 0) {
      iVar6 = (param_5->Data).ArrayNum;
      iVar8 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar8 = iVar10;
      }
      if (iVar8 != 0) {
        bVar4 = true;
        if (iVar6 == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = (wchar_t *)(param_5->Data).AllocatorInstance.Data;
          iVar10 = iVar6 + -1;
        }
        iVar6 = iVar10;
        if (1 < iVar10) {
          iVar6 = 1;
        }
        if (0 < iVar6) {
          iVar7 = iVar6;
        }
        ::FString::FString(&local_48,
                           (wchar_t *)((longlong)pwVar12 + ((longlong)iVar10 - (longlong)iVar7) * 2)
                          );
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_48.Data.ArrayNum != 0) {
          FVar9.Data = local_48.Data.AllocatorInstance.Data;
        }
        iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar9.Data,L">");
        bVar2 = true;
        if (iVar6 == 0) {
          bVar2 = true;
          goto LAB_14217b861;
        }
      }
    }
    bVar4 = bVar2;
    bVar2 = false;
  }
  else {
    bVar3 = true;
    bVar4 = false;
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_88.Data.ArrayNum != 0) {
      FVar9.Data = local_88.Data.AllocatorInstance.Data;
    }
    iVar8 = iVar6;
    if (1 < iVar6) {
      iVar8 = 1;
    }
    iVar5 = iVar10;
    if (0 < iVar8) {
      iVar5 = iVar8;
    }
    ::FString::FString(&local_58,(wchar_t *)(FVar9.Data + ((longlong)iVar6 - (longlong)iVar5) * 2));
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar9.Data = local_58.Data.AllocatorInstance.Data;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar9.Data,L">");
    if (iVar6 != 0) goto LAB_14217b7e3;
  }
LAB_14217b861:
  if ((bVar4) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    ::FString::AppendChars(&local_88,L" ",1);
  }
  ::FString::PrintfImpl(&local_68,L"<%s%s,%s%s>");
  if (param_1 != &local_68) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
    (param_1->Data).ArrayNum = local_68.Data.ArrayNum;
    (param_1->Data).ArrayMax = local_68.Data.ArrayMax;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
LAB_14217b975:
  ::FString::FString(__return_storage_ptr__,L"TMap");
  return __return_storage_ptr__;
}

// GetFieldSize @ 14217bc70

ulong64 __thiscall FMapProperty::GetFieldSize(FMapProperty *this)

{
  return 0xa0;
}

// GetInnerFieldByName @ 14217be80

FField * __thiscall FMapProperty::GetInnerFieldByName(FMapProperty *this,FName *param_1)

{
  FProperty *pFVar1;
  bool bVar2;
  FName FVar3;
  FName FVar4;
  
  pFVar1 = this->KeyProp;
  FVar4.ComparisonIndex.Value = 0;
  FVar4.Number = 0;
  if (pFVar1 != (FProperty *)0x0) {
    bVar2 = IsThisNotNull(pFVar1,"FField::GetFName");
    FVar3 = FVar4;
    if (bVar2) {
      FVar3 = (FName)pFVar1->_padding_;
    }
    if (FVar3 == *param_1) {
      return (FField *)this->KeyProp;
    }
  }
  pFVar1 = this->ValueProp;
  if (pFVar1 != (FProperty *)0x0) {
    bVar2 = IsThisNotNull(pFVar1,"FField::GetFName");
    if (bVar2) {
      FVar4 = (FName)pFVar1->_padding_;
    }
    if (FVar4 == *param_1) {
      return (FField *)this->ValueProp;
    }
  }
  return (FField *)0x0;
}

// GetInnerFields @ 14217c000

void __thiscall
FMapProperty::GetInnerFields
          (FMapProperty *this,TArray<FField_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FProperty *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  FProperty *local_28;
  FProperty *local_20;
  
  pFVar1 = this->KeyProp;
  if (pFVar1 != (FProperty *)0x0) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    local_28 = pFVar1;
    if (((pFVar2 <= (FScriptContainerElement *)&local_28) &&
        ((FScriptContainerElement *)&local_28 < pFVar2 + (longlong)param_1->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = param_1->ArrayNum;
    if (iVar5 == param_1->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar5 + 1;
    *(FProperty **)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_28;
    (**(code **)(this->KeyProp->_padding_ + 0x58))(this->KeyProp,param_1);
  }
  piVar6 = &param_1->ArrayMax;
  local_20 = this->ValueProp;
  if (local_20 != (FProperty *)0x0) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_20) &&
        ((FScriptContainerElement *)&local_20 < pFVar2 + (longlong)*piVar6 * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    piVar7 = &param_1->ArrayNum;
    iVar5 = *piVar7;
    if (iVar5 == *piVar6) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,piVar6);
      *piVar7 = iVar5;
    }
    *piVar7 = iVar5 + 1;
    *(FProperty **)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_20;
    (**(code **)(this->ValueProp->_padding_ + 0x58))(this->ValueProp,param_1);
  }
  return;
}

// GetPreloadDependencies @ 14217d490

void __thiscall
FMapProperty::GetPreloadDependencies
          (FMapProperty *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FProperty *pFVar1;
  
  FField::GetPreloadDependencies((FField *)this,param_1);
  pFVar1 = this->KeyProp;
  if (pFVar1 != (FProperty *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,param_1);
  }
  pFVar1 = this->ValueProp;
  if (pFVar1 != (FProperty *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,param_1);
  }
  return;
}

// GetValueAddressAtIndex_Direct @ 14217dbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __thiscall
FMapProperty::GetValueAddressAtIndex_Direct
          (FMapProperty *this,FProperty *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  uchar *puVar4;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  int local_60;
  undefined1 local_58 [72];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  if ((param_1 != this->KeyProp) && (param_1 != this->ValueProp)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Inner == KeyProp || Inner == ValueProp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyMap.cpp"
                       ,0x6b0,L"Inner property must be either KeyProp or ValueProp");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  FScriptMapHelper::FScriptMapHelper((FScriptMapHelper *)(local_58 + 0x10),this,param_2);
  local_68 = local_58 + 0x10;
  local_60 = param_3;
  local_58._8_4_ =
       FScriptMapHelper::WithScriptMap<_FScriptMapHelper::FindInternalIndex_::__l2::<lambda_1>_>
                 ((FScriptMapHelper *)(local_58 + 0x10),(<lambda_1> *)&local_68);
  if (local_58._8_4_ == -1) {
    puVar4 = (uchar *)0x0;
  }
  else {
    local_58._0_8_ = local_58 + 0x10;
    if (param_1 == this->KeyProp) {
      puVar4 = FScriptMapHelper::GetKeyPtr((FScriptMapHelper *)local_58._0_8_,local_58._8_4_);
    }
    else {
      puVar4 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::GetValuePtr_::__l2::<lambda_1>_>
                         ((FScriptMapHelper *)(local_58 + 0x10),(<lambda_1> *)local_58);
    }
  }
  return puVar4;
}

// HasIntrusiveUnsetOptionalState @ 14217e000

bool __thiscall FMapProperty::HasIntrusiveUnsetOptionalState(FMapProperty *this)

{
  return true;
}

// Identical @ 14217e670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FMapProperty::Identical(FMapProperty *this,void *param_1,void *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_a8 [32];
  FScriptMapHelper local_88;
  FScriptMapHelper local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  FScriptMapHelper::FScriptMapHelper(&local_50,this,param_1);
  iVar1 = ((local_50.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
  if ((local_50.MapFlags & UsesMemoryImageAllocator) == None) {
    iVar2 = *(int *)&((local_50.field2_0x10.FreezableMap)->Pairs).field_0x34;
  }
  else {
    iVar2 = ((local_50.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices;
  }
  if (param_2 == (void *)0x0) {
    bVar4 = iVar1 == iVar2;
  }
  else {
    FScriptMapHelper::FScriptMapHelper(&local_88,this,param_2);
    if ((local_88.MapFlags & UsesMemoryImageAllocator) == None) {
      iVar3 = *(int *)&((local_88.field2_0x10.FreezableMap)->Pairs).field_0x34;
    }
    else {
      iVar3 = ((local_88.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices;
    }
    if (iVar1 - iVar2 == ((local_88.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum - iVar3
       ) {
      bVar4 = UEMapProperty_Private::IsPermutation(&local_50,&local_88,param_3);
    }
    else {
      bVar4 = false;
    }
  }
  return bVar4;
}

// ImportText_Internal @ 142180910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wchar_t * __thiscall
FMapProperty::ImportText_Internal
          (FMapProperty *this,wchar_t *param_1,void *param_2,EPropertyPointerType param_3,
          UObject *param_4,int param_5,FOutputDevice *param_6)

{
  FScriptSparseArrayLayout *pFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  FScriptSparseSetLayout *pFVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  FScriptMapHelper *pFVar8;
  void *pvVar9;
  wint_t *pwVar10;
  wchar_t *pwVar11;
  uchar *_Dst;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  wint_t *pwVar14;
  undefined1 *puVar15;
  uint uVar16;
  int iVar17;
  uchar *puVar18;
  undefined1 auStack_198 [32];
  UObject *local_178;
  uint local_170;
  FOutputDevice *local_168;
  uint local_158;
  undefined4 local_150 [2];
  UObject *local_148;
  FOutputDevice *local_140;
  void *local_138;
  void *local_130;
  FMapProperty *local_128;
  FScriptMapHelper *local_118;
  FScriptMapHelper *local_110;
  <lambda_1> local_108;
  code *local_f8;
  FScriptMapHelper **local_f0;
  code *local_e8;
  FScriptMapHelper **local_e0;
  <lambda_1> local_d8;
  FScriptMapHelper *local_c8;
  void *local_c0;
  undefined4 *local_b8;
  FScriptMapHelper local_b0;
  FScriptMapHelper local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_148 = param_4;
  local_158 = param_5;
  local_140 = param_6;
  local_138 = param_2;
  local_128 = this;
  if (param_3 == Container) {
    FScriptMapHelper::FScriptMapHelper
              (&local_78,this,
               (void *)((longlong)*(int *)((longlong)&this->_padding_ + 4) + (longlong)param_2));
    local_130 = (void *)0x0;
    cVar5 = (**(code **)(this->_padding_ + 0x70))(this);
    if (cVar5 != '\0') {
      local_130 = FProperty::AllocateAndInitializeValue((FProperty *)this);
      pFVar8 = FScriptMapHelper::FScriptMapHelper(&local_b0,this,local_130);
      local_78.KeyProp = pFVar8->KeyProp;
      local_78.ValueProp = pFVar8->ValueProp;
      local_78.field2_0x10 = (FScriptMapHelper_u_16)(pFVar8->field2_0x10).FreezableMap;
      local_78.MapLayout.ValueOffset = (pFVar8->MapLayout).ValueOffset;
      local_78.MapLayout.SetLayout.HashNextIdOffset = (pFVar8->MapLayout).SetLayout.HashNextIdOffset
      ;
      local_78.MapLayout.SetLayout.HashIndexOffset = (pFVar8->MapLayout).SetLayout.HashIndexOffset;
      local_78.MapLayout.SetLayout.Size = (pFVar8->MapLayout).SetLayout.Size;
      local_78.MapLayout.SetLayout.SparseArrayLayout =
           (pFVar8->MapLayout).SetLayout.SparseArrayLayout;
      local_78._48_8_ = *(undefined8 *)&pFVar8->MapFlags;
      local_128 = this;
    }
  }
  else {
    FScriptMapHelper::FScriptMapHelper(&local_78,this,param_2);
    local_130 = (void *)0x0;
  }
  pwVar11 = (wchar_t *)0x0;
  if ((local_78._48_8_ & 1) == 0) {
    iVar17 = ((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
               *)&(local_78.field2_0x10.FreezableMap)->Pairs)->NumFreeIndices;
  }
  else {
    iVar17 = *(int *)&(((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                         *)&(local_78.field2_0x10.FreezableMap)->Pairs)->AllocationFlags).
                      AllocatorInstance.SecondaryData.field_0x4;
  }
  iVar17 = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
              *)&(local_78.field2_0x10.FreezableMap)->Pairs)->Data).ArrayNum - iVar17;
  if (iVar17 != 0) {
    FScriptMapHelper::DestructItems(&local_78,0,iVar17);
    local_108.__this = &local_78;
    local_108.Slack = 0;
    FScriptMapHelper::WithScriptMap<_FScriptMapHelper::EmptyValues_::__l9::<lambda_1>_>
              (&local_78,&local_108);
  }
  pwVar12 = param_1 + 1;
  if (*param_1 == L'(') {
    iVar17 = iswspace(*pwVar12);
    while (iVar17 != 0) {
      pwVar13 = pwVar12 + 1;
      pwVar12 = pwVar12 + 1;
      iVar17 = iswspace(*pwVar13);
    }
    if (*pwVar12 == L')') {
      pwVar11 = pwVar12 + 1;
    }
    else {
      pvVar9 = FMemory::Malloc((longlong)
                               (this->ValueProp->ElementSize + (this->MapLayout).ValueOffset),0);
      while( true ) {
        pFVar2 = this->KeyProp;
        if (((uint)(int)pFVar2->PropertyFlags >> 9 & 1) == 0) {
          (**(code **)(pFVar2->_padding_ + 0x150))();
        }
        else {
          memset(pvVar9,0,(longlong)pFVar2->ElementSize * (longlong)pFVar2->ArrayDim);
        }
        pFVar2 = this->ValueProp;
        if (((uint)(int)pFVar2->PropertyFlags >> 9 & 1) == 0) {
          (**(code **)(pFVar2->_padding_ + 0x150))();
        }
        else {
          memset((void *)((longlong)(this->MapLayout).ValueOffset + (longlong)pvVar9),0,
                 (longlong)pFVar2->ElementSize * (longlong)pFVar2->ArrayDim);
        }
        pwVar13 = pwVar12 + 1;
        if (*pwVar12 != L'(') break;
        iVar17 = iswspace(*pwVar13);
        while (iVar17 != 0) {
          pwVar12 = pwVar13 + 1;
          pwVar13 = pwVar13 + 1;
          iVar17 = iswspace(*pwVar12);
        }
        uVar16 = local_158 | 1;
        local_178 = param_4;
        local_170 = uVar16;
        local_168 = param_6;
        pwVar10 = (wint_t *)
                  (**(code **)(this->KeyProp->_padding_ + 0xe8))(this->KeyProp,pwVar13,pvVar9,0);
        if (pwVar10 == (wint_t *)0x0) break;
        local_c8 = &local_78;
        local_150[0] = 0;
        local_b8 = local_150;
        local_c0 = pvVar9;
        iVar17 = FScriptMapHelper::
                 WithScriptMap<_FScriptMapHelper::FindMapIndexWithKey_::__l2::<lambda_1>_>
                           (&local_78,(<lambda_1> *)&local_c8);
        iVar7 = iswspace(*pwVar10);
        while (iVar7 != 0) {
          pwVar14 = pwVar10 + 1;
          pwVar10 = pwVar10 + 1;
          iVar7 = iswspace(*pwVar14);
        }
        pwVar14 = pwVar10 + 1;
        if (*pwVar10 != 0x2c) break;
        iVar7 = iswspace(*pwVar14);
        while (iVar7 != 0) {
          pwVar10 = pwVar14 + 1;
          pwVar14 = pwVar14 + 1;
          iVar7 = iswspace(*pwVar10);
        }
        local_178 = param_4;
        local_170 = uVar16;
        local_168 = local_140;
        pwVar10 = (wint_t *)
                  (**(code **)(this->ValueProp->_padding_ + 0xe8))
                            (this->ValueProp,pwVar14,
                             (longlong)(this->MapLayout).ValueOffset + (longlong)pvVar9,0);
        if (pwVar10 == (wint_t *)0x0) break;
        iVar7 = iswspace(*pwVar10);
        while (iVar7 != 0) {
          pwVar14 = pwVar10 + 1;
          pwVar10 = pwVar10 + 1;
          iVar7 = iswspace(*pwVar14);
        }
        pwVar14 = pwVar10 + 1;
        if (*pwVar10 != 0x29) break;
        if (iVar17 == -1) {
          pFVar1 = &local_78.MapLayout.SetLayout.SparseArrayLayout;
          if ((local_78._48_8_ & 1) == 0) {
            iVar17 = TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                     ::AddUninitialized((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                         *)local_78.field2_0x10.HeapMap,pFVar1);
          }
          else {
            iVar17 = TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
                     ::AddUninitialized((TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
                                         *)local_78.field2_0x10.HeapMap,pFVar1);
          }
          FScriptMapHelper::ConstructItem(&local_78,iVar17);
          if ((local_78._48_8_ & 1) == 0) {
            puVar18 = (uchar *)((longlong)
                                (local_78.MapLayout.SetLayout.SparseArrayLayout.Size * iVar17) +
                               (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                  *)&(local_78.field2_0x10.FreezableMap)->Pairs)->Data)._padding_);
          }
          else {
            puVar18 = (uchar *)(((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                  *)&(local_78.field2_0x10.FreezableMap)->Pairs)->Data)._padding_;
            if (((ulonglong)puVar18 & 1) != 0) {
              puVar18 = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                           *)&(local_78.field2_0x10.HeapMap)->field_0x0)->AllocationFlags).
                        AllocatorInstance.InlineData + ((longlong)puVar18 >> 0x18) + -0x10;
            }
            puVar18 = puVar18 + local_78.MapLayout.SetLayout.SparseArrayLayout.Size * iVar17;
          }
          pFVar2 = this->KeyProp;
          if (pFVar2->ArrayDim < 1) {
            local_178 = (UObject *)((ulonglong)local_178 & 0xffffffff00000000);
            local_170 = pFVar2->ArrayDim;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              pwVar11 = (wchar_t *)(*pcVar3)();
              return pwVar11;
            }
          }
          if ((pvVar9 == (void *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            pwVar11 = (wchar_t *)(*pcVar3)();
            return pwVar11;
          }
          puVar15 = (undefined1 *)((longlong)pFVar2->Offset_Internal + (longlong)pvVar9);
          if (pFVar2->ArrayDim < 1) {
            local_178 = (UObject *)((ulonglong)local_178 & 0xffffffff00000000);
            local_170 = pFVar2->ArrayDim;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              pwVar11 = (wchar_t *)(*pcVar3)();
              return pwVar11;
            }
          }
          if ((puVar18 == (uchar *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            pwVar11 = (wchar_t *)(*pcVar3)();
            return pwVar11;
          }
          _Dst = puVar18 + pFVar2->Offset_Internal;
          if (_Dst != puVar15) {
            if (((uint)(int)pFVar2->PropertyFlags >> 0x1e & 1) == 0) {
              (**(code **)(pFVar2->_padding_ + 0xf0))(pFVar2,_Dst,puVar15,pFVar2->ArrayDim);
            }
            else {
              memcpy(_Dst,puVar15,(longlong)pFVar2->ElementSize * (longlong)pFVar2->ArrayDim);
            }
          }
          pFVar2 = this->ValueProp;
          if (pFVar2->ArrayDim < 1) {
            local_178 = (UObject *)((ulonglong)local_178 & 0xffffffff00000000);
            local_170 = pFVar2->ArrayDim;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              pwVar11 = (wchar_t *)(*pcVar3)();
              return pwVar11;
            }
          }
          if ((pvVar9 == (void *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            pwVar11 = (wchar_t *)(*pcVar3)();
            return pwVar11;
          }
          puVar15 = (undefined1 *)((longlong)pFVar2->Offset_Internal + (longlong)pvVar9);
          if (pFVar2->ArrayDim < 1) {
            local_178 = (UObject *)((ulonglong)local_178 & 0xffffffff00000000);
            local_170 = pFVar2->ArrayDim;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              pwVar11 = (wchar_t *)(*pcVar3)();
              return pwVar11;
            }
          }
          if ((puVar18 == (uchar *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            pwVar11 = (wchar_t *)(*pcVar3)();
            return pwVar11;
          }
          puVar18 = puVar18 + pFVar2->Offset_Internal;
          param_4 = local_148;
          if (puVar18 != puVar15) {
            if (((uint)(int)pFVar2->PropertyFlags >> 0x1e & 1) == 0) {
              (**(code **)(pFVar2->_padding_ + 0xf0))(pFVar2,puVar18,puVar15,pFVar2->ArrayDim);
              param_4 = local_148;
            }
            else {
              memcpy(puVar18,puVar15,(longlong)pFVar2->ElementSize * (longlong)pFVar2->ArrayDim);
              param_4 = local_148;
            }
          }
        }
        iVar17 = iswspace(*pwVar14);
        while (iVar17 != 0) {
          pwVar10 = pwVar14 + 1;
          pwVar14 = pwVar14 + 1;
          iVar17 = iswspace(*pwVar10);
        }
        pwVar12 = (wchar_t *)(pwVar14 + 1);
        if (*pwVar14 == 0x29) {
          pFVar4 = &local_78.MapLayout.SetLayout;
          if ((local_78._48_8_ & 1) == 0) {
            local_e8 = UE::Core::Private::Function::
                       TFunctionRefCaller<``FScriptMapHelper::Rehash'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_1>,unsigned_int,void_const_*>
                       ::Call;
            local_e0 = &local_110;
            local_110 = &local_78;
            TScriptSparseSet<FDefaultSetAllocator>::Rehash
                      ((TScriptSparseSet<FDefaultSetAllocator> *)local_78.field2_0x10.HeapMap,pFVar4
                       ,(TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_e8);
            bVar6 = true;
          }
          else {
            local_f8 = UE::Core::Private::Function::
                       TFunctionRefCaller<``FScriptMapHelper::Rehash'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_1>,unsigned_int,void_const_*>
                       ::Call;
            local_f0 = &local_118;
            local_118 = &local_78;
            TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
            ::Rehash((TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
                      *)local_78.field2_0x10.HeapMap,pFVar4,
                     (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_f8);
            bVar6 = true;
          }
          goto LAB_142180fef;
        }
        if (*pwVar14 != 0x2c) break;
        iVar17 = iswspace(*pwVar12);
        while (iVar17 != 0) {
          pwVar13 = pwVar12 + 1;
          pwVar12 = pwVar12 + 1;
          iVar17 = iswspace(*pwVar13);
        }
        if ((this->ValueProp->PropertyFlags & CPF_NoDestructor) == CPF_None) {
          (**(code **)(this->ValueProp->_padding_ + 0x138))();
        }
        param_6 = local_140;
        if ((this->KeyProp->PropertyFlags & CPF_NoDestructor) == CPF_None) {
          (**(code **)(this->KeyProp->_padding_ + 0x138))();
        }
      }
      bVar6 = false;
      pwVar12 = pwVar11;
LAB_142180fef:
      if ((this->ValueProp->PropertyFlags & CPF_NoDestructor) == CPF_None) {
        (**(code **)(this->ValueProp->_padding_ + 0x138))();
      }
      if ((this->KeyProp->PropertyFlags & CPF_NoDestructor) == CPF_None) {
        (**(code **)(this->KeyProp->_padding_ + 0x138))();
      }
      FMemory::Free(pvVar9);
      pwVar11 = pwVar12;
      param_2 = local_138;
      if (!bVar6) {
        if ((local_78._48_8_ & 1) == 0) {
          iVar17 = ((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                     *)&(local_78.field2_0x10.FreezableMap)->Pairs)->NumFreeIndices;
        }
        else {
          iVar17 = *(int *)&(((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                               *)&(local_78.field2_0x10.FreezableMap)->Pairs)->AllocationFlags).
                            AllocatorInstance.SecondaryData.field_0x4;
        }
        iVar17 = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                    *)&(local_78.field2_0x10.FreezableMap)->Pairs)->Data).ArrayNum - iVar17;
        if (iVar17 != 0) {
          FScriptMapHelper::DestructItems(&local_78,0,iVar17);
          local_d8.__this = &local_78;
          local_d8.Slack = 0;
          FScriptMapHelper::WithScriptMap<_FScriptMapHelper::EmptyValues_::__l9::<lambda_1>_>
                    (&local_78,&local_d8);
          param_2 = local_138;
        }
      }
    }
  }
  pvVar9 = local_130;
  if (local_130 != (void *)0x0) {
    FProperty::SetValue_InContainer((FProperty *)local_128,param_2,local_130);
    FProperty::DestroyAndFreeValue((FProperty *)local_128,pvVar9);
  }
  return pwVar11;
}

// InitializeIntrusiveUnsetOptionalValue @ 142182700

void __thiscall
FMapProperty::InitializeIntrusiveUnsetOptionalValue(FMapProperty *this,void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// InitializeValueInternal @ 142182ad0

void __thiscall FMapProperty::InitializeValueInternal(FMapProperty *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if ((this->MapFlags & UsesMemoryImageAllocator) == None) {
    uVar3 = 0;
    uVar6 = uVar3;
    if (0 < (int)this->_padding_) {
      do {
        uVar5 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar5;
        lVar4 = (longlong)*(int *)((longlong)&this->_padding_ + 4) * uVar6;
        *(undefined8 *)(lVar4 + (longlong)param_1) = 0;
        *(undefined8 *)(lVar4 + 8 + (longlong)param_1) = 0;
        *(undefined8 *)(lVar4 + 0x20 + (longlong)param_1) = 0;
        *(undefined8 *)(lVar4 + 0x28 + (longlong)param_1) = 0;
        *(undefined4 *)(lVar4 + 0x30 + (longlong)param_1) = 0xffffffff;
        *(undefined4 *)(lVar4 + 0x34 + (longlong)param_1) = 0;
        *(undefined8 *)(lVar4 + 0x40 + (longlong)param_1) = 0;
        *(undefined4 *)(lVar4 + 0x48 + (longlong)param_1) = 0;
        uVar6 = uVar6 + 1;
      } while ((int)uVar5 < (int)this->_padding_);
    }
  }
  else {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0xf61,L"FFreezableScriptMap is not supported at the moment");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar3 = 0;
    uVar6 = uVar3;
    if (0 < (int)this->_padding_) {
      do {
        uVar5 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar5;
        lVar4 = (longlong)*(int *)((longlong)&this->_padding_ + 4) * uVar6;
        *(undefined8 *)(lVar4 + (longlong)param_1) = 0;
        *(undefined8 *)(lVar4 + 8 + (longlong)param_1) = 0;
        *(undefined8 *)(lVar4 + 0x10 + (longlong)param_1) = 0;
        *(undefined8 *)(lVar4 + 0x18 + (longlong)param_1) = 0;
        *(undefined4 *)(lVar4 + 0x20 + (longlong)param_1) = 0xffffffff;
        *(undefined4 *)(lVar4 + 0x24 + (longlong)param_1) = 0;
        *(undefined8 *)(lVar4 + 0x28 + (longlong)param_1) = 0;
        *(undefined4 *)(lVar4 + 0x30 + (longlong)param_1) = 0;
        uVar6 = uVar6 + 1;
      } while ((int)uVar5 < (int)this->_padding_);
      return;
    }
  }
  return;
}

// InstanceSubobjects @ 142182e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMapProperty::InstanceSubobjects
          (FMapProperty *this,void *param_1,void *param_2,TNotNull<UObject_*> param_3,
          FObjectInstancingGraph *param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uchar *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 *puVar9;
  char cVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined1 *puVar13;
  char cVar14;
  undefined1 auStack_138 [32];
  FObjectInstancingGraph *local_118;
  char local_108;
  char local_107;
  uint local_104 [3];
  FScriptMapHelper *local_f8;
  undefined8 uStack_f0;
  FObjectInstancingGraph *local_e8;
  uint local_e0 [2];
  uint local_d8;
  int local_d4 [3];
  TScriptContainerIterator<FScriptMapHelper> local_c8;
  FScriptMapHelper *local_b8;
  uchar *local_b0;
  uint *local_a8;
  undefined1 local_a0 [28];
  FScriptSparseSetLayout local_84;
  EMapPropertyFlags local_70;
  FScriptMapHelper local_68;
  ulonglong local_30;
  undefined1 *puVar8;
  
  if (param_1 != (void *)0x0) {
    local_30 = __security_cookie.value ^ (ulonglong)auStack_138;
    local_e8 = param_4;
    cVar10 = *(char *)(*(longlong *)&(param_3.Val)->field_0x10 + 0x128);
    if (((this->KeyProp->PropertyFlags & (CPF_ContainsInstancedReference|CPF_InstancedReference)) ==
         CPF_None) && (cVar10 == '\0')) {
      cVar14 = '\0';
    }
    else {
      cVar14 = '\x01';
    }
    if (((this->ValueProp->PropertyFlags & (CPF_ContainsInstancedReference|CPF_InstancedReference))
         == CPF_None) && (cVar10 == '\0')) {
      cVar10 = '\0';
    }
    else {
      cVar10 = '\x01';
    }
    if ((cVar14 != '\0') || (cVar10 != '\0')) {
      local_108 = cVar14;
      local_107 = cVar10;
      FScriptMapHelper::FScriptMapHelper((FScriptMapHelper *)local_a0,this,param_1);
      if (param_2 == (void *)0x0) {
        iVar12 = 0;
        local_f8 = (FScriptMapHelper *)local_a0;
        uVar7 = 0;
        uStack_f0 = (FObjectInstancingGraph **)((ulonglong)uStack_f0._4_4_ << 0x20);
        iVar4 = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                   *)local_a0._16_8_)->Data).ArrayNum;
        if (0 < iVar4) {
          do {
            local_d8 = uVar7;
            bVar3 = FScriptMapHelper::
                    WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                              ((FScriptMapHelper *)local_a0,(<lambda_1> *)&local_d8);
            if (bVar3) break;
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < iVar4);
          uStack_f0 = (FObjectInstancingGraph **)(ulonglong)uVar7;
        }
        uStack_f0 = (FObjectInstancingGraph **)((ulonglong)uStack_f0 & 0xffffffff);
        local_104[0] = uVar7;
        bVar3 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          ((FScriptMapHelper *)local_a0,(<lambda_1> *)local_104);
        if (bVar3) {
          do {
            local_c8.Container = local_f8;
            local_c8.InternalIndex = (uint)uStack_f0;
            local_c8.LogicalIndex = uStack_f0._4_4_;
            puVar5 = FScriptMapHelper::GetPairPtr((FScriptMapHelper *)local_a0,&local_c8);
            if (cVar14 != '\0') {
              local_118 = local_e8;
              (**(code **)(this->KeyProp->_padding_ + 0x160))(this->KeyProp,puVar5,0,param_3.Val);
            }
            if (cVar10 != '\0') {
              local_118 = local_e8;
              (**(code **)(this->ValueProp->_padding_ + 0x160))
                        (this->ValueProp,puVar5 + (this->MapLayout).ValueOffset,0,param_3.Val);
            }
            uVar7 = uVar7 + 1;
            uStack_f0 = (FObjectInstancingGraph **)CONCAT44(uStack_f0._4_4_,uVar7);
            iVar4 = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                       *)local_a0._16_8_)->Data).ArrayNum;
            if ((int)uVar7 < iVar4) {
              do {
                local_e0[0] = uVar7;
                bVar3 = FScriptMapHelper::
                        WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                  ((FScriptMapHelper *)local_a0,(<lambda_1> *)local_e0);
                if (bVar3) break;
                uVar7 = uVar7 + 1;
              } while ((int)uVar7 < iVar4);
              uStack_f0 = (FObjectInstancingGraph **)(ulonglong)uVar7;
            }
            iVar12 = iVar12 + 1;
            uStack_f0 = (FObjectInstancingGraph **)CONCAT44(iVar12,(uint)uStack_f0);
            local_104[0] = uVar7;
            bVar3 = FScriptMapHelper::
                    WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                              ((FScriptMapHelper *)local_a0,(<lambda_1> *)local_104);
          } while (bVar3);
        }
      }
      else {
        FScriptMapHelper::FScriptMapHelper(&local_68,this,param_2);
        puVar13 = (undefined1 *)0x0;
        local_f8 = (FScriptMapHelper *)local_a0;
        uStack_f0 = (FObjectInstancingGraph **)0xffffffff00000000;
        iVar4 = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                   *)local_a0._16_8_)->Data).ArrayNum;
        puVar8 = puVar13;
        puVar11 = (undefined1 *)uStack_f0;
        if (0 < iVar4) {
          do {
            local_d4[0] = (int)puVar8;
            bVar3 = FScriptMapHelper::
                    WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                              ((FScriptMapHelper *)local_a0,(<lambda_1> *)local_d4);
            puVar11 = puVar8;
            if (bVar3) break;
            uVar7 = (int)puVar8 + 1;
            puVar8 = (undefined1 *)(ulonglong)uVar7;
            puVar11 = puVar8;
          } while ((int)uVar7 < iVar4);
        }
        uStack_f0 = (FObjectInstancingGraph **)puVar11;
        uStack_f0 = (FObjectInstancingGraph **)((ulonglong)uStack_f0 & 0xffffffff);
        local_104[0] = (uint)puVar8;
        bVar3 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          ((FScriptMapHelper *)local_a0,(<lambda_1> *)local_104);
        puVar11 = puVar13;
        if (bVar3) {
          do {
            local_c8.Container = local_f8;
            local_c8.InternalIndex = (uint)uStack_f0;
            local_c8.LogicalIndex = uStack_f0._4_4_;
            puVar5 = FScriptMapHelper::GetPairPtr((FScriptMapHelper *)local_a0,&local_c8);
            local_b8 = &local_68;
            local_a8 = local_e0;
            local_e0[0] = (uint)puVar11;
            local_b0 = puVar5;
            iVar4 = FScriptMapHelper::
                    WithScriptMap<_FScriptMapHelper::FindMapIndexWithKey_::__l2::<lambda_1>_>
                              (&local_68,(<lambda_1> *)&local_b8);
            puVar6 = puVar13;
            if (-1 < iVar4) {
              if ((local_68.MapFlags & UsesMemoryImageAllocator) == None) {
                puVar6 = (undefined1 *)
                         ((longlong)(local_68.MapLayout.SetLayout.SparseArrayLayout.Size * iVar4) +
                         ((local_68.field2_0x10.FreezableMap)->Pairs).Elements.Data._padding_);
              }
              else {
                puVar6 = (undefined1 *)
                         ((local_68.field2_0x10.FreezableMap)->Pairs).Elements.Data._padding_;
                if (((ulonglong)puVar6 & 1) != 0) {
                  puVar6 = &(local_68.field2_0x10.HeapMap)->field_0x0 + ((longlong)puVar6 >> 0x18);
                }
                puVar6 = puVar6 + local_68.MapLayout.SetLayout.SparseArrayLayout.Size * iVar4;
              }
            }
            if (local_108 != '\0') {
              local_118 = local_e8;
              (**(code **)(this->KeyProp->_padding_ + 0x160))
                        (this->KeyProp,puVar5,puVar6,param_3.Val);
            }
            if (local_107 != '\0') {
              puVar9 = puVar13;
              if (puVar6 != (undefined1 *)0x0) {
                puVar9 = puVar6 + (this->MapLayout).ValueOffset;
              }
              local_118 = local_e8;
              (**(code **)(this->ValueProp->_padding_ + 0x160))
                        (this->ValueProp,puVar5 + (this->MapLayout).ValueOffset,puVar9,param_3.Val);
            }
            uVar7 = (int)puVar8 + 1;
            puVar8 = (undefined1 *)(ulonglong)uVar7;
            uStack_f0 = (FObjectInstancingGraph **)CONCAT44(uStack_f0._4_4_,uVar7);
            iVar4 = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                       *)local_a0._16_8_)->Data).ArrayNum;
            puVar6 = (undefined1 *)uStack_f0;
            while( true ) {
              uVar1 = (uint)puVar8;
              uVar2 = (uint)puVar6;
              if ((iVar4 <= (int)uVar7) ||
                 (local_d8 = uVar1,
                 bVar3 = FScriptMapHelper::
                         WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                   ((FScriptMapHelper *)local_a0,(<lambda_1> *)&local_d8),
                 uVar2 = uVar1, bVar3)) break;
              uVar7 = uVar1 + 1;
              puVar8 = (undefined1 *)(ulonglong)uVar7;
              puVar6 = puVar8;
            }
            uStack_f0._0_4_ = uVar2;
            uVar7 = (uint)puVar11 + 1;
            puVar11 = (undefined1 *)(ulonglong)uVar7;
            uStack_f0 = (FObjectInstancingGraph **)CONCAT44(uVar7,(uint)uStack_f0);
            local_104[0] = uVar1;
            bVar3 = FScriptMapHelper::
                    WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                              ((FScriptMapHelper *)local_a0,(<lambda_1> *)local_104);
            cVar14 = local_108;
          } while (bVar3);
        }
      }
      if (cVar14 != '\0') {
        local_e8 = (FObjectInstancingGraph *)local_a0;
        if ((local_70 & UsesMemoryImageAllocator) == None) {
          local_f8 = (FScriptMapHelper *)
                     UE::Core::Private::Function::
                     TFunctionRefCaller<``FScriptMapHelper::Rehash'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_1>,unsigned_int,void_const_*>
                     ::Call;
          uStack_f0 = &local_e8;
          TScriptSparseSet<FDefaultSetAllocator>::Rehash
                    ((TScriptSparseSet<FDefaultSetAllocator> *)local_a0._16_8_,
                     (FScriptSparseSetLayout *)(local_a0 + 0x1c),
                     (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_f8);
        }
        else {
          local_f8 = (FScriptMapHelper *)
                     UE::Core::Private::Function::
                     TFunctionRefCaller<``FScriptMapHelper::Rehash'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_1>,unsigned_int,void_const_*>
                     ::Call;
          uStack_f0 = &local_e8;
          TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
          ::Rehash((TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
                    *)local_a0._16_8_,(FScriptSparseSetLayout *)(local_a0 + 0x1c),
                   (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_f8);
        }
      }
    }
  }
  return;
}

// IsIntrusiveOptionalValueSet @ 142184050

bool __thiscall FMapProperty::IsIntrusiveOptionalValueSet(FMapProperty *this,void *param_1)

{
  return *(int *)((longlong)param_1 + 0xc) != -1;
}

// LinkInternal @ 142184fa0

void __thiscall FMapProperty::LinkInternal(FMapProperty *this,FArchive *param_1)

{
  FProperty **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  FScriptSparseArrayLayout FVar11;
  uint uVar12;
  int iVar13;
  
  ppFVar1 = &this->ValueProp;
  if ((this->KeyProp == (FProperty *)0x0) || (*ppFVar1 == (FProperty *)0x0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("KeyProp && ValueProp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyMap.cpp"
                       ,0xd6,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = this->KeyProp;
  (**(code **)(pFVar3->_padding_ + 0xa8))(pFVar3,param_1);
  FProperty::SetupOffset(pFVar3);
  pFVar3 = *ppFVar1;
  (**(code **)(pFVar3->_padding_ + 0xa8))(pFVar3,param_1);
  FProperty::SetupOffset(pFVar3);
  pFVar3 = this->KeyProp;
  iVar8 = (*ppFVar1)->ElementSize;
  iVar13 = (*ppFVar1)->ArrayDim;
  iVar9 = pFVar3->ElementSize;
  iVar2 = pFVar3->ArrayDim;
  iVar6 = (**(code **)(pFVar3->_padding_ + 0x168))();
  iVar7 = (**(code **)((*ppFVar1)->_padding_ + 0x168))();
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  uVar12 = iVar9 * iVar2 + -1 + iVar7 & -iVar7;
  (this->MapLayout).ValueOffset = uVar12;
  if (iVar7 < iVar6) {
    iVar7 = iVar6;
  }
  iVar9 = iVar7;
  if (iVar7 < 0) {
    iVar9 = 0;
  }
  uVar12 = (iVar7 + -1 + uVar12 + iVar8 * iVar13 & ~(iVar7 - 1U)) + 3 & 0xfffffffc;
  (this->MapLayout).SetLayout.HashNextIdOffset = uVar12;
  iVar8 = 4;
  if (4 < iVar9) {
    iVar8 = iVar9;
  }
  (this->MapLayout).SetLayout.HashIndexOffset = uVar12 + 4;
  iVar13 = 4;
  if (4 < iVar8) {
    iVar13 = iVar8;
  }
  uVar10 = ~(iVar13 - 1U) & uVar12 + 7 + iVar13;
  (this->MapLayout).SetLayout.Size = uVar10;
  uVar12 = 8;
  if (8 < (int)uVar10) {
    uVar12 = uVar10;
  }
  iVar8 = 4;
  if (4 < iVar13) {
    iVar8 = iVar13;
  }
  FVar11.Size = uVar12;
  FVar11.Alignment = iVar8;
  (this->MapLayout).SetLayout.SparseArrayLayout = FVar11;
  FProperty::SetOffset_Internal(*ppFVar1,(this->MapLayout).ValueOffset);
  FProperty::SetElementSize((FProperty *)this,0x50);
  return;
}

// LoadTypeName @ 142186200

bool __thiscall
FMapProperty::LoadTypeName(FMapProperty *this,FPropertyTypeName param_1,FPropertyTag *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  FProperty *pFVar6;
  FProperty *pFVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  FProperty *pFVar11;
  longlong lVar12;
  FProperty *pFVar13;
  FName local_res20;
  FName local_58;
  FFieldObjectUnion local_50;
  FName local_48;
  FFieldObjectUnion local_40;
  FName local_38 [2];
  
  bVar2 = FProperty::LoadTypeName((FProperty *)this,param_1,param_2);
  if (bVar2) {
    pFVar11 = (FProperty *)0x0;
    lVar12 = (ulonglong)(param_1.Index & 0x1fff) * 0xc;
    uVar5 = 0;
    if (0 < *(int *)(lVar12 + 8 +
                    (longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)param_1.Index >> 0xd])) {
      uVar5 = param_1.Index + 1;
    }
    lVar12 = (longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)param_1.Index >> 0xd] + lVar12;
    if (*(int *)(lVar12 + 8) < 2) {
      uVar10 = 0;
    }
    else {
      lVar8 = lVar12 + 0xc;
      iVar9 = 1;
      do {
        iVar9 = iVar9 + -1 + *(int *)(lVar8 + 8);
        lVar8 = lVar8 + 0xc;
      } while (0 < iVar9);
      lVar12 = (lVar8 - lVar12) / 6 + (lVar8 - lVar12 >> 0x3f);
      uVar10 = ((int)(lVar12 >> 1) - (int)(lVar12 >> 0x3f)) + param_1.Index;
    }
    bVar2 = IsThisNotNull(this,"FField::GetFName");
    if (bVar2) {
      local_res20 = (FName)this->_padding_;
    }
    else {
      local_res20.ComparisonIndex.Value = 0;
      local_res20.Number = 0;
    }
    local_50 = (FFieldObjectUnion)this;
    if ((((ulonglong)this & 1) != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsUObject()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x180,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    local_48 = *(FName *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar5 >> 0xd] +
                         (ulonglong)(uVar5 & 0x1fff) * 0xc);
    pFVar6 = (FProperty *)
             FField::TryConstruct(&local_48,(FFieldVariant *)&local_50,&local_res20,RF_NoFlags);
    bVar2 = IsThisNotNull(this,"FField::GetFName");
    if (bVar2) {
      local_58 = (FName)this->_padding_;
    }
    else {
      local_58.ComparisonIndex.Value = 0;
      local_58.Number = 0;
    }
    local_40 = (FFieldObjectUnion)this;
    if ((((ulonglong)this & 1) != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsUObject()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x180,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    local_38[0] = *(FName *)((longlong)
                             UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar10 >> 0xd] +
                            (ulonglong)(uVar10 & 0x1fff) * 0xc);
    pFVar7 = (FProperty *)
             FField::TryConstruct(local_38,(FFieldVariant *)&local_40,&local_58,RF_NoFlags);
    if ((pFVar6 == (FProperty *)0x0) ||
       (pFVar13 = pFVar6, ((uint)(int)((FFieldClass *)pFVar6->_padding_)->CastFlags >> 0xf & 1) == 0
       )) {
      pFVar13 = pFVar11;
    }
    if ((pFVar7 != (FProperty *)0x0) &&
       (((uint)(int)((FFieldClass *)pFVar7->_padding_)->CastFlags >> 0xf & 1) != 0)) {
      pFVar11 = pFVar7;
    }
    if ((((pFVar13 != (FProperty *)0x0) && (pFVar11 != (FProperty *)0x0)) &&
        (cVar4 = (**(code **)(pFVar13->_padding_ + 0x188))(pFVar13,uVar5,param_2), cVar4 != '\0'))
       && (cVar4 = (**(code **)(pFVar11->_padding_ + 0x188))(pFVar11,uVar10,param_2), cVar4 != '\0')
       ) {
      this->KeyProp = pFVar13;
      this->ValueProp = pFVar11;
      return true;
    }
    if (pFVar6 != (FProperty *)0x0) {
      (**(code **)(pFVar6->_padding_ + 8))(pFVar6,1);
    }
    if (pFVar7 != (FProperty *)0x0) {
      (**(code **)(pFVar7->_padding_ + 8))(pFVar7,1);
    }
  }
  return false;
}

// NetSerializeItem @ 142186cd0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMapProperty::NetSerializeItem
          (FMapProperty *this,FArchive *param_1,UPackageMap *param_2,void *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  if (1 < (byte)LogProperty._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogProperty);
  }
  return true;
}

// PostDuplicate @ 142187160

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FMapProperty::PostDuplicate(FMapProperty *this,FField *param_1)

{
  code *pcVar1;
  uint uVar2;
  EObjectFlags EVar3;
  undefined4 uVar4;
  bool bVar5;
  FProperty *pFVar6;
  FMapProperty *local_res18;
  FMapProperty *local_res20;
  
  local_res18 = this;
  if ((((ulonglong)this & 1) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsUObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x180,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar6 = (FProperty *)
           FField::Duplicate(param_1[2].Owner.Container.Field,(FFieldVariant)&local_res18,(FName)0x0
                             ,RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                              RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                              RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                              RF_InheritableComponentTemplate|RF_LoadCompleted|
                              RF_TextExportTransient|RF_WasLoaded|RF_DefaultSubObject|
                              RF_BeingRegenerated|RF_FinishDestroyed|RF_BeginDestroyed|
                              RF_NewerVersionExists|RF_NeedPostLoadSubobjects|RF_NeedPostLoad|
                              RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|RF_TagGarbageTemp|
                              RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|RF_ClassDefaultObject
                              |RF_Transactional|RF_MarkAsNative|RF_Standalone|RF_Public,
                             PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native
                             |ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport
                             |AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|
                             ReachabilityFlag0);
  if (((pFVar6 == (FProperty *)0x0) ||
      (((uint)(int)((FFieldClass *)pFVar6->_padding_)->CastFlags >> 0xf & 1) == 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x472,L"CastFieldChecked failed with 0x%016llx"),
     pFVar6 = (FProperty *)0x0, bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->KeyProp = pFVar6;
  local_res20 = this;
  if ((((ulonglong)this & 1) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsUObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x180,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar6 = (FProperty *)
           FField::Duplicate(param_1[2].Next,(FFieldVariant)&local_res20,(FName)0x0,
                             RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                             RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                             RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                             RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient
                             |RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|
                             RF_FinishDestroyed|RF_BeginDestroyed|RF_NewerVersionExists|
                             RF_NeedPostLoadSubobjects|RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|
                             RF_NeedInitialization|RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|
                             RF_ArchetypeObject|RF_ClassDefaultObject|RF_Transactional|
                             RF_MarkAsNative|RF_Standalone|RF_Public,
                             PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native
                             |ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport
                             |AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|
                             ReachabilityFlag0);
  if (((pFVar6 == (FProperty *)0x0) ||
      (((uint)(int)((FFieldClass *)pFVar6->_padding_)->CastFlags >> 0xf & 1) == 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x472,L"CastFieldChecked failed with 0x%016llx"),
     pFVar6 = (FProperty *)0x0, bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->ValueProp = pFVar6;
  uVar2 = param_1[2].NamePrivate.Number;
  EVar3 = param_1[2].FlagsPrivate;
  uVar4 = *(undefined4 *)&param_1[2].field_0x2c;
  (this->MapLayout).ValueOffset = param_1[2].NamePrivate.ComparisonIndex.Value;
  (this->MapLayout).SetLayout.HashNextIdOffset = uVar2;
  (this->MapLayout).SetLayout.HashIndexOffset = EVar3;
  (this->MapLayout).SetLayout.Size = uVar4;
  uVar4 = *(undefined4 *)((longlong)&param_1[3]._padding_ + 4);
  (this->MapLayout).SetLayout.SparseArrayLayout.Alignment = *(undefined4 *)&param_1[3]._padding_;
  (this->MapLayout).SetLayout.SparseArrayLayout.Size = uVar4;
  FProperty::PostDuplicate((FProperty *)this,param_1);
  return;
}

// ResolveVisitedPathInfo @ 142189740

void * __thiscall
FMapProperty::ResolveVisitedPathInfo(FMapProperty *this,void *param_1,FPropertyVisitorInfo *param_2)

{
  void *pvVar1;
  FProperty *pFVar2;
  
  if (param_2->PropertyInfo == MapKey) {
    pFVar2 = param_2->Property;
    if (pFVar2 == this->KeyProp) {
LAB_142189765:
                    /* WARNING: Could not recover jumptable at 0x00014218976f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar1 = (void *)(**(code **)(this->_padding_ + 0xd8))(this,pFVar2,param_1,param_2->Index);
      return pvVar1;
    }
  }
  else if ((param_2->PropertyInfo == MapValue) &&
          (pFVar2 = param_2->Property, pFVar2 == this->ValueProp)) goto LAB_142189765;
  return (void *)0x0;
}

// SameType @ 142189900

bool __thiscall FMapProperty::SameType(FMapProperty *this,FProperty *param_1)

{
  FProperty *pFVar1;
  bool bVar2;
  char cVar3;
  
  bVar2 = FProperty::SameType((FProperty *)this,param_1);
  if (((bVar2) && (pFVar1 = this->KeyProp, pFVar1 != (FProperty *)0x0)) &&
     (this->ValueProp != (FProperty *)0x0)) {
    cVar3 = (**(code **)(pFVar1->_padding_ + 0x1a0))(pFVar1,param_1[1]._padding_);
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(this->ValueProp->_padding_ + 0x1a0))
                        (this->ValueProp,param_1[1]._padding_);
      if (cVar3 != '\0') {
        return true;
      }
    }
  }
  return false;
}

// SaveTypeName @ 142189c00

void __thiscall FMapProperty::SaveTypeName(FMapProperty *this,FPropertyTypeNameBuilder *param_1)

{
  FProperty *pFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  FProperty::SaveTypeName((FProperty *)this,param_1);
  pFVar1 = this->KeyProp;
  pFVar2 = this->ValueProp;
  if (pFVar1 == (FProperty *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("LocalKeyProp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyMap.cpp"
                       ,0x6ec,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (pFVar2 == (FProperty *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("LocalValueProp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyMap.cpp"
                       ,0x6ed,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((param_1->Nodes).ArrayNum == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Nodes.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyTypeName.cpp"
                       ,0x1ca,L"A type name must be added prior to setting type parameters.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  param_1->ActiveIndex = (param_1->Nodes).ArrayNum + -1;
  (**(code **)(pFVar1->_padding_ + 400))(pFVar1,param_1);
  (**(code **)(pFVar2->_padding_ + 400))(pFVar2,param_1);
  UE::FPropertyTypeNameBuilder::EndParameters(param_1);
  return;
}

// Serialize @ 14218a4f0

void __thiscall FMapProperty::Serialize(FMapProperty *this,FArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  FMapProperty *local_res8;
  FMapProperty *local_res18;
  
  FProperty::Serialize((FProperty *)this,param_1);
  local_res8 = this;
  if (((ulonglong)this & 1) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsUObject()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x180,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SerializeSingleField<FProperty>(param_1,&this->KeyProp,(FFieldVariant)&local_res8);
  local_res18 = this;
  if (((ulonglong)this & 1) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsUObject()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x180,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SerializeSingleField<FProperty>(param_1,&this->ValueProp,(FFieldVariant)&local_res18);
  return;
}

// SerializeItem @ 14218b900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
FMapProperty::SerializeItem
          (FMapProperty *this,FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
  FScriptSparseArrayLayout *pFVar1;
  FScriptSparseSetLayout *pFVar2;
  byte bVar3;
  int iVar4;
  FTlsAutoCleanup FVar5;
  FProperty *pFVar6;
  code *pcVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  FStructuredArchiveSlot FVar9;
  longlong *plVar10;
  FScriptMapHelper_u_16 FVar11;
  bool bVar12;
  EOverriddenPropertyOperation EVar13;
  int iVar14;
  uint uVar15;
  FArchive *pFVar16;
  uint *puVar17;
  FTlsAutoCleanup *pFVar18;
  uchar *puVar19;
  FOverriddenPropertySet *pFVar20;
  FOverriddenPropertyNode *pFVar21;
  void *pvVar22;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar23;
  void *pvVar24;
  FArchive *pFVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  FSlotBase FVar28;
  undefined8 uVar29;
  int iVar30;
  longlong lVar31;
  FOverriddenPropertyNodeID *this_00;
  undefined1 *puVar32;
  FOverriddenPropertyNodeID *pFVar33;
  ForAnyElementType FVar34;
  char cVar35;
  FSlotBase local_res10 [3];
  undefined1 auStack_a28 [32];
  uint *local_a08;
  FStructuredArchiveSlot local_a00;
  longlong local_9f8;
  longlong local_9f0;
  undefined8 local_9e8;
  char local_9d8;
  void *local_9d0;
  int local_9c8;
  undefined1 local_9c4;
  undefined1 local_9c3;
  undefined1 local_9c2;
  undefined1 local_9c1;
  byte local_9c0;
  uint local_9bc;
  int local_9b8;
  int local_9b4;
  int local_9b0;
  int local_9ac;
  int local_9a8;
  int local_9a4;
  int local_9a0;
  uint local_99c;
  void *local_998;
  ForAnyElementType local_990;
  undefined8 local_988;
  ForAnyElementType local_980;
  undefined8 local_978;
  FMapProperty *local_970;
  FTlsAutoCleanup local_968;
  FArchive *local_960;
  undefined1 local_957;
  undefined1 local_956 [2];
  int local_954;
  uint local_950;
  int local_94c;
  int local_948;
  int local_944;
  int local_940;
  uint local_93c;
  int local_938;
  int local_934;
  uint local_930 [2];
  longlong *local_928;
  longlong lStack_920;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_918;
  undefined8 uStack_910;
  longlong lStack_908;
  int local_900;
  undefined4 uStack_8fc;
  FStructuredArchiveSlot local_8f8;
  int local_8f0;
  int local_8ec;
  int local_8e8;
  int local_8e4;
  int local_8e0;
  int local_8dc;
  int local_8d8;
  int local_8d4;
  int local_8d0;
  int local_8cc;
  int local_8c8;
  int local_8c4;
  int local_8c0;
  int local_8bc;
  int local_8b8 [2];
  undefined4 local_8b0 [2];
  int local_8a8;
  int local_8a4;
  int local_8a0;
  int local_89c;
  int local_898;
  int local_894;
  int local_890;
  int local_88c;
  int local_888;
  int local_884;
  uint local_880 [2];
  uint local_878 [2];
  uint local_870 [2];
  FArchive *local_868;
  TScriptContainerIterator<FScriptMapHelper> local_858;
  FTlsAutoCleanup local_848;
  FStructuredArchiveSlot local_840;
  TScriptContainerIterator<FScriptMapHelper> local_838;
  TScriptContainerIterator<FScriptMapHelper> local_828;
  FSerializedPropertyScope local_818;
  FSerializedPropertyScope local_808;
  FSerializedPropertyScope local_7f8;
  FSerializedPropertyScope local_7e8;
  FSerializedPropertyScope local_7d8;
  FSerializedPropertyScope local_7c8;
  FSerializedPropertyScope local_7b8;
  FSerializedPropertyScope local_7a8;
  FSerializedPropertyScope local_798;
  FSerializedPropertyScope local_788;
  FSerializedPropertyScope local_778;
  FSerializedPropertyScope local_768;
  FSerializedPropertyScope local_758;
  FSerializedPropertyScope local_748;
  FSerializedPropertyScope local_738;
  FSerializedPropertyScope local_728;
  FSerializedPropertyScope local_718;
  FSerializedPropertyScope local_708;
  FSerializedPropertyScope local_6f8;
  FSerializedPropertyScope local_6e8;
  FSerializedPropertyScope local_6d8;
  FSerializedPropertyScope local_6c8;
  FSerializedPropertyScope local_6b8;
  FSerializedPropertyScope local_6a8;
  FSerializedPropertyScope local_698;
  FSerializedPropertyScope local_688;
  FSerializedPropertyScope local_678;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_668;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_648;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_628;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_608;
  int local_5e8;
  FName local_5e4;
  undefined4 local_5dc;
  undefined4 local_5d8;
  FName local_5d4;
  undefined4 local_5cc;
  undefined4 local_5c8;
  FName local_5c4;
  undefined4 local_5bc;
  undefined4 local_5b8;
  FName local_5b4;
  undefined4 local_5ac;
  undefined4 local_5a8;
  FName local_5a4;
  undefined4 local_59c;
  undefined4 local_598;
  FName local_594;
  undefined4 local_58c;
  undefined4 local_588;
  FName local_584;
  undefined4 local_57c;
  undefined4 local_578;
  FName local_574;
  undefined4 local_56c;
  undefined4 local_568;
  FName local_564;
  undefined4 local_55c;
  undefined4 local_558;
  FName local_554;
  undefined4 local_54c;
  undefined4 local_548;
  FName local_544;
  undefined4 local_53c;
  undefined4 local_538;
  FScriptMapHelper *local_530;
  int local_528;
  undefined4 local_524;
  int local_520 [4];
  FScriptMapHelper *local_510;
  longlong *local_508;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_500;
  undefined8 uStack_4e0;
  undefined1 local_4d8 [12];
  uint uStack_4cc;
  TBitArray<FDefaultBitArrayAllocator> *local_4c8;
  undefined8 uStack_4c0;
  longlong local_4b8;
  undefined8 uStack_4b0;
  longlong *local_4a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4a0;
  undefined8 uStack_480;
  undefined1 local_478 [12];
  uint uStack_46c;
  TBitArray<FDefaultBitArrayAllocator> *local_468;
  undefined8 uStack_460;
  longlong local_458;
  undefined8 uStack_450;
  code *local_448;
  undefined1 *local_440;
  undefined1 local_438 [16];
  void **local_428;
  FMapProperty *local_420;
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  code *local_3f8;
  FScriptMapHelper **local_3f0;
  TRangedForIterator local_3e8;
  FScriptMapHelper *local_3b8;
  void *local_3b0;
  FProperty *local_3a8;
  FScriptMapHelper *local_3a0;
  uchar *local_398;
  FProperty *local_390;
  FScriptMapHelper *local_388;
  uchar *local_380;
  undefined4 *local_378;
  undefined1 local_370 [24];
  longlong lStack_358;
  longlong lStack_350;
  int local_348;
  undefined4 uStack_344;
  TScriptContainerIterator<FScriptMapHelper> local_338 [2];
  TRangedForIterator local_318;
  FOverriddenPropertyNodeID local_2e8;
  FOverriddenPropertyNodeID local_2c8;
  FOverriddenPropertyNodeID local_2a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_288;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_268;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_248;
  FScriptMapHelper local_228;
  undefined1 local_1e8 [32];
  undefined8 local_1c8;
  int local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  int local_1b4;
  ForElementType<FSetElementId> local_1a8;
  int local_1a0;
  undefined1 local_198 [32];
  undefined8 local_178;
  int local_170;
  undefined4 local_16c;
  undefined4 local_168;
  int local_164;
  ForElementType<FSetElementId> local_158;
  int local_150;
  undefined1 local_148 [32];
  undefined8 local_128;
  int local_120;
  undefined4 local_11c;
  undefined4 local_118;
  int local_114;
  ForElementType<FSetElementId> local_108;
  int local_100;
  FScriptMapHelper local_f8;
  FScriptMapHelper local_c0;
  FScriptMapHelper local_88;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_a28;
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  local_998 = param_3;
  pFVar16 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  FVar28.StructuredArchive = local_res10[0].StructuredArchive;
  bVar3 = pFVar16->field_0x28;
  uVar26 = this->_padding_ & 0x200000000000000;
  cVar35 = uVar26 != 0;
  local_8f8 = (FStructuredArchiveSlot)local_res10[0].StructuredArchive;
  local_9c0 = pFVar16->field_0x2c;
  pFVar16->field_0x2c = local_9c0 & 0xfe;
  if (((pFVar16->field_0x2a & 8) != 0) && (local_998 = param_3, uVar26 == 0)) {
    local_998 = (void *)0x0;
  }
  local_868 = pFVar16;
  puVar17 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_440 = &local_957;
  local_448 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar18 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_448,puVar17);
  FVar5 = pFVar18[0x2f];
  local_848 = FVar5;
  FScriptMapHelper::FScriptMapHelper(&local_228,this,param_2);
  if ((bVar3 & 0x40) == 0) {
    if ((pFVar16->field_0x28 & 1) != 0) {
      lVar31 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar31 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (*(longlong *)(lVar31 + 0xce0) != 0) {
        if (*(char *)(lVar31 + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        cVar35 = *(char *)(*(longlong *)(lVar31 + 0xce0) + 0x74);
      }
    }
    if (cVar35 != '\0') {
      if (((pFVar16->field_0x2c & 1) != 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("!UnderlyingArchive.ArUseCustomPropertyList",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyMap.cpp"
                              ,0x134,
                              L"Using custom property list is not supported by overridable serialization"
                             ), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pvVar22 = local_998;
      if ((pFVar16->field_0x28 & 1) != 0) {
        iVar30 = 0;
        local_9ac = 0;
        ::operator<<((FVar28.StructuredArchive)->Formatter->Inner,&local_9ac);
        if (local_9ac == -1) {
          pFVar20 = FOverridableSerializationLogic::GetOverriddenProperties();
          pFVar6 = this->KeyProp;
          if (((((pFVar6->PropertyFlags & CPF_PersistentInstance) != CPF_None) &&
               (pFVar6 != (FProperty *)0x0)) &&
              ((*(uint *)(pFVar6->_padding_ + 0x18) >> 10 & 1) == 0)) &&
             (((pFVar6 != (FProperty *)0x0 &&
               ((*(uint *)(pFVar6->_padding_ + 0x18) >> 0x10 & 1) != 0)) &&
              (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!KeyProp->HasAnyPropertyFlags(CPF_PersistentInstance) || CastField<FClassProperty>(KeyProp) || !CastField<FObjectProperty>(KeyProp)"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyMap.cpp"
                                   ,0x154,L"The key as an instanced sub object is NYI"), bVar12))))
          {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_9d0 = (void *)0x0;
          local_428 = &local_9d0;
          local_9a8 = 0;
          local_420 = this;
          ::operator<<((FVar28.StructuredArchive)->Formatter->Inner,&local_9a8);
          if (local_9a8 != 0) {
            local_9d0 = FMemory::Malloc((longlong)(this->MapLayout).SetLayout.Size,0);
            FProperty::InitializeValue(this->KeyProp,local_9d0);
            FProperty::InitializeValue
                      (this->ValueProp,
                       (void *)((longlong)(this->MapLayout).ValueOffset + (longlong)local_9d0));
            iVar14 = iVar30;
            if (0 < local_9a8) {
              do {
                local_7a8.Property = this->KeyProp;
                local_7a8.Ar = pFVar16;
                if (*(FMapProperty **)&pFVar16->field_0x70 == this) {
                  FSerializedPropertyScope::PushProperty(&local_7a8);
                }
                else {
                  local_7a8.Property = (FProperty *)0x0;
                }
                (**(code **)(this->KeyProp->_padding_ + 0xc0))
                          (this->KeyProp,FVar28.StructuredArchive,local_9d0);
                FSerializedPropertyScope::PopProperty(&local_7a8);
                local_3b8 = &local_228;
                local_3b0 = local_9d0;
                local_3a8 = local_228.KeyProp;
                bVar12 = FScriptMapHelper::
                         WithScriptMap<_FScriptMapHelper::RemovePair_::__l2::<lambda_1>_>
                                   (&local_228,(<lambda_1> *)&local_3b8);
                if (((bVar12) && (pFVar20 != (FOverriddenPropertySet *)0x0)) &&
                   (pFVar21 = FOverriddenPropertySet::RestoreOverriddenPropertyOperation
                                        (pFVar20,Modified,
                                         *(FArchiveSerializedPropertyChain **)&pFVar16->field_0x78,
                                         (FProperty *)0x0),
                   pFVar21 != (FOverriddenPropertyNode *)0x0)) {
                  FOverriddenPropertyNodeID::FromMapKey(&local_2a8,this->KeyProp,local_9d0);
                  FOverriddenPropertySet::RestoreSubPropertyOperation
                            (pFVar20,Remove,pFVar21,&local_2a8);
                  if (local_2a8.Path.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                  {
                    FMemory::Free(local_2a8.Path.Path.AllocatorInstance.Data);
                  }
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < local_9a8);
            }
          }
          local_9a4 = 0;
          ::operator<<((FVar28.StructuredArchive)->Formatter->Inner,&local_9a4);
          if (local_9a4 != 0) {
            if (local_9d0 == (void *)0x0) {
              local_9d0 = FMemory::Malloc((longlong)(this->MapLayout).SetLayout.Size,0);
              FProperty::InitializeValue(this->KeyProp,local_9d0);
              FProperty::InitializeValue
                        (this->ValueProp,
                         (void *)((longlong)(this->MapLayout).ValueOffset + (longlong)local_9d0));
            }
            if (0 < local_9a4) {
              do {
                local_798.Property = this->KeyProp;
                local_798.Ar = pFVar16;
                if (*(FMapProperty **)&pFVar16->field_0x70 == this) {
                  FSerializedPropertyScope::PushProperty(&local_798);
                }
                else {
                  local_798.Property = (FProperty *)0x0;
                }
                (**(code **)(this->KeyProp->_padding_ + 0xc0))
                          (this->KeyProp,FVar28.StructuredArchive,local_9d0);
                FSerializedPropertyScope::PopProperty(&local_798);
                iVar14 = FScriptMapHelper::FindMapPairIndexFromHash(&local_228,local_9d0);
                if (iVar14 == -1) {
                  puVar19 = (uchar *)((longlong)(this->MapLayout).ValueOffset + (longlong)local_9d0)
                  ;
                }
                else {
                  local_438._0_8_ = &local_228;
                  local_438._8_4_ = iVar14;
                  puVar19 = FScriptMapHelper::
                            WithScriptMap<_FScriptMapHelper::GetValuePtr_::__l2::<lambda_1>_>
                                      (&local_228,(<lambda_1> *)local_438);
                }
                local_788.Property = this->ValueProp;
                local_788.Ar = pFVar16;
                if (*(FMapProperty **)&pFVar16->field_0x70 == this) {
                  FSerializedPropertyScope::PushProperty(&local_788);
                }
                else {
                  local_788.Property = (FProperty *)0x0;
                }
                (**(code **)(this->ValueProp->_padding_ + 0xc0))
                          (this->ValueProp,FVar28.StructuredArchive,puVar19);
                FSerializedPropertyScope::PopProperty(&local_788);
                if (((iVar14 != -1) && (pFVar20 != (FOverriddenPropertySet *)0x0)) &&
                   (pFVar21 = FOverriddenPropertySet::RestoreOverriddenPropertyOperation
                                        (pFVar20,Modified,
                                         *(FArchiveSerializedPropertyChain **)&pFVar16->field_0x78,
                                         (FProperty *)0x0),
                   pFVar21 != (FOverriddenPropertyNode *)0x0)) {
                  FOverriddenPropertyNodeID::FromMapKey(&local_2e8,this->KeyProp,local_9d0);
                  FOverriddenPropertySet::RestoreSubPropertyOperation
                            (pFVar20,Modified,pFVar21,&local_2e8);
                  if (local_2e8.Path.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                  {
                    FMemory::Free(local_2e8.Path.Path.AllocatorInstance.Data);
                  }
                }
                iVar30 = iVar30 + 1;
              } while (iVar30 < local_9a4);
            }
          }
          iVar30 = 0;
          if (0x3f8 < (int)((ulonglong)*(undefined8 *)&pFVar16->field_0x40 >> 0x20)) {
            local_9b0 = 0;
            ::operator<<((FVar28.StructuredArchive)->Formatter->Inner,&local_9b0);
            if (local_9b0 != 0) {
              if (local_9d0 == (void *)0x0) {
                local_9d0 = FMemory::Malloc((longlong)(this->MapLayout).SetLayout.Size,0);
                FProperty::InitializeValue(this->KeyProp,local_9d0);
                FProperty::InitializeValue
                          (this->ValueProp,
                           (void *)((longlong)(this->MapLayout).ValueOffset + (longlong)local_9d0));
              }
              iVar14 = iVar30;
              if (0 < local_9b0) {
                do {
                  local_818.Property = this->KeyProp;
                  local_818.Ar = pFVar16;
                  if (*(FMapProperty **)&pFVar16->field_0x70 == this) {
                    FSerializedPropertyScope::PushProperty(&local_818);
                  }
                  else {
                    local_818.Property = (FProperty *)0x0;
                  }
                  (**(code **)(this->KeyProp->_padding_ + 0xc0))
                            (this->KeyProp,FVar28.StructuredArchive,local_9d0);
                  FSerializedPropertyScope::PopProperty(&local_818);
                  local_768.Property = this->ValueProp;
                  lVar31 = (longlong)(this->MapLayout).ValueOffset + (longlong)local_9d0;
                  local_768.Ar = pFVar16;
                  if (*(FMapProperty **)&pFVar16->field_0x70 == this) {
                    FSerializedPropertyScope::PushProperty(&local_768);
                  }
                  else {
                    local_768.Property = (FProperty *)0x0;
                  }
                  (**(code **)(this->ValueProp->_padding_ + 0xc0))
                            (this->ValueProp,FVar28.StructuredArchive,lVar31);
                  FSerializedPropertyScope::PopProperty(&local_768);
                  iVar14 = iVar14 + 1;
                } while (iVar14 < local_9b0);
              }
            }
          }
          local_9a0 = 0;
          ::operator<<((FVar28.StructuredArchive)->Formatter->Inner,&local_9a0);
          if (local_9a0 != 0) {
            if (local_9d0 == (void *)0x0) {
              local_9d0 = FMemory::Malloc((longlong)(this->MapLayout).SetLayout.Size,0);
              FProperty::InitializeValue(this->KeyProp,local_9d0);
              FProperty::InitializeValue
                        (this->ValueProp,
                         (void *)((longlong)(this->MapLayout).ValueOffset + (longlong)local_9d0));
            }
            if (0 < local_9a0) {
              do {
                local_758.Property = this->KeyProp;
                local_758.Ar = pFVar16;
                if (*(FMapProperty **)&pFVar16->field_0x70 == this) {
                  FSerializedPropertyScope::PushProperty(&local_758);
                }
                else {
                  local_758.Property = (FProperty *)0x0;
                }
                (**(code **)(this->KeyProp->_padding_ + 0xc0))
                          (this->KeyProp,FVar28.StructuredArchive,local_9d0);
                FSerializedPropertyScope::PopProperty(&local_758);
                pvVar22 = FScriptMapHelper::FindOrAdd(&local_228,local_9d0);
                local_748.Property = this->ValueProp;
                local_748.Ar = pFVar16;
                if (*(FMapProperty **)&pFVar16->field_0x70 == this) {
                  FSerializedPropertyScope::PushProperty(&local_748);
                }
                else {
                  local_748.Property = (FProperty *)0x0;
                }
                (**(code **)(this->ValueProp->_padding_ + 0xc0))
                          (this->ValueProp,FVar28.StructuredArchive,pvVar22);
                FSerializedPropertyScope::PopProperty(&local_748);
                if ((pFVar20 != (FOverriddenPropertySet *)0x0) &&
                   (pFVar21 = FOverriddenPropertySet::RestoreOverriddenPropertyOperation
                                        (pFVar20,Modified,
                                         *(FArchiveSerializedPropertyChain **)&pFVar16->field_0x78,
                                         (FProperty *)0x0),
                   pFVar21 != (FOverriddenPropertyNode *)0x0)) {
                  FOverriddenPropertyNodeID::FromMapKey(&local_2c8,this->KeyProp,local_9d0);
                  FOverriddenPropertySet::RestoreSubPropertyOperation
                            (pFVar20,Add,pFVar21,&local_2c8);
                  if (local_2c8.Path.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                  {
                    FMemory::Free(local_2c8.Path.Path.AllocatorInstance.Data);
                  }
                }
                iVar30 = iVar30 + 1;
              } while (iVar30 < local_9a0);
            }
          }
          ScopeExitSupport::TScopeGuard<`FMapProperty::SerializeItem'::__l37::<lambda_2>_>::
          ~TScopeGuard<_FMapProperty::SerializeItem_::__l37::<lambda_2>_>(&local_428);
        }
        else {
          FScriptMapHelper::EmptyValues(&local_228,local_9ac);
          if (0 < local_9ac) {
            do {
              pFVar1 = &local_228.MapLayout.SetLayout.SparseArrayLayout;
              if ((local_228.MapFlags & UsesMemoryImageAllocator) == None) {
                iVar14 = TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                         ::AddUninitialized((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                             *)local_228.field2_0x10.HeapMap,pFVar1);
              }
              else {
                iVar14 = TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
                         ::AddUninitialized((TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
                                             *)local_228.field2_0x10.HeapMap,pFVar1);
              }
              FScriptMapHelper::ConstructItem(&local_228,iVar14);
              puVar19 = FScriptMapHelper::GetPairPtr(&local_228,iVar14);
              local_7c8.Property = this->KeyProp;
              local_7c8.Ar = pFVar16;
              if (*(FMapProperty **)&pFVar16->field_0x70 == this) {
                FSerializedPropertyScope::PushProperty(&local_7c8);
              }
              else {
                local_7c8.Property = (FProperty *)0x0;
              }
              (**(code **)(this->KeyProp->_padding_ + 0xc0))
                        (this->KeyProp,FVar28.StructuredArchive,puVar19,0);
              FSerializedPropertyScope::PopProperty(&local_7c8);
              local_7b8.Property = this->ValueProp;
              local_7b8.Ar = pFVar16;
              if (*(FMapProperty **)&pFVar16->field_0x70 == this) {
                FSerializedPropertyScope::PushProperty(&local_7b8);
              }
              else {
                local_7b8.Property = (FProperty *)0x0;
              }
              (**(code **)(this->ValueProp->_padding_ + 0xc0))
                        (this->ValueProp,FVar28.StructuredArchive,
                         puVar19 + (this->MapLayout).ValueOffset);
              FSerializedPropertyScope::PopProperty(&local_7b8);
              iVar30 = iVar30 + 1;
            } while (iVar30 < local_9ac);
          }
          FScriptMapHelper::Rehash(&local_228);
        }
        goto LAB_14218e5e2;
      }
      local_980.Data = (FScriptContainerElement *)0x0;
      local_978 = 0;
      local_990.Data = (FScriptContainerElement *)0x0;
      local_988 = 0;
      local_148._0_8_ = 0;
      local_148._8_8_ = 0;
      local_128 = 0;
      local_120 = 0;
      local_11c = 0x80;
      local_118 = 0xffffffff;
      local_114 = 0;
      local_108 = (ForElementType<FSetElementId>)0x0;
      local_100 = 0;
      local_198._0_8_ = 0;
      local_198._8_8_ = 0;
      local_178 = 0;
      local_170 = 0;
      local_16c = 0x80;
      local_168 = 0xffffffff;
      local_164 = 0;
      local_158 = (ForElementType<FSetElementId>)0x0;
      local_150 = 0;
      local_968 = FVar5;
      local_970 = this;
      local_960 = pFVar16;
      if (((local_998 == (void *)0x0) || ((pFVar16->field_0x2a & 4) != 0)) ||
         (pFVar20 = FOverridableSerializationLogic::GetOverriddenProperties(),
         pFVar20 == (FOverriddenPropertySet *)0x0)) {
LAB_14218d18d:
        if ((local_228.MapFlags & UsesMemoryImageAllocator) == None) {
          local_94c = ((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                        *)&(local_228.field2_0x10.FreezableMap)->Pairs)->NumFreeIndices;
        }
        else {
          local_94c = *(int *)&(((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                  *)&(local_228.field2_0x10.FreezableMap)->Pairs)->AllocationFlags).
                               AllocatorInstance.SecondaryData.field_0x4;
        }
        local_94c = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                       *)&(local_228.field2_0x10.FreezableMap)->Pairs)->Data).ArrayNum - local_94c;
        ::operator<<(*(FArchive **)(*(longlong *)FVar28.StructuredArchive + 8),&local_94c);
        local_840 = (FStructuredArchiveSlot)FVar28.StructuredArchive;
        TScriptContainerIterator<FScriptMapHelper>::TScriptContainerIterator<FScriptMapHelper>
                  (&local_838,&local_228);
        uVar29 = local_838._8_8_;
        local_948 = local_838.InternalIndex;
        bVar12 = FScriptMapHelper::
                 WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                           (local_838.Container,(<lambda_1> *)&local_948);
        if (bVar12) {
          do {
            puVar19 = FScriptMapHelper::GetPairPtr(&local_228,(int)uVar29);
            `FMapProperty::SerializeItem'::__l102::<lambda_3>::operator()
                      (&local_970,(FStructuredArchiveArray *)&local_840,puVar19);
            TScriptContainerIterator<FScriptMapHelper>::operator++(&local_838);
            uVar29 = local_838._8_8_;
            local_948 = local_838.InternalIndex;
            bVar12 = FScriptMapHelper::
                     WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                               (local_838.Container,(<lambda_1> *)&local_948);
          } while (bVar12);
        }
      }
      else {
        EVar13 = FOverriddenPropertySet::GetOverriddenPropertyOperation
                           (pFVar20,*(FArchiveSerializedPropertyChain **)&pFVar16->field_0x78,
                            (FProperty *)0x0);
        cVar35 = EVar13 == Replace;
        local_9d8 = cVar35;
        if (!(bool)cVar35) {
          pFVar6 = this->KeyProp;
          if ((((((pFVar6->PropertyFlags & CPF_PersistentInstance) != CPF_None) &&
                (pFVar6 != (FProperty *)0x0)) &&
               ((*(uint *)(pFVar6->_padding_ + 0x18) >> 10 & 1) == 0)) &&
              ((pFVar6 != (FProperty *)0x0 &&
               ((*(uint *)(pFVar6->_padding_ + 0x18) >> 0x10 & 1) != 0)))) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!KeyProp->HasAnyPropertyFlags(CPF_PersistentInstance) || CastField<FClassProperty>(KeyProp) || !CastField<FObjectProperty>(KeyProp)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyMap.cpp"
                                  ,0x21c,L"The key as an instanced sub object is NYI"), bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          bVar12 = FOverridableSerializationLogic::ShouldPropertyShadowSerializeSubObject
                             ((TNotNull<FProperty_const_*>)this);
          if (bVar12) {
            TScriptContainerIterator<FScriptMapHelper>::TScriptContainerIterator<FScriptMapHelper>
                      (&local_828,&local_228);
            uVar29 = local_828._8_8_;
            local_954 = local_828.InternalIndex;
            bVar12 = FScriptMapHelper::
                     WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                               (local_828.Container,(<lambda_1> *)&local_954);
            cVar35 = local_9d8;
            if (bVar12) {
              do {
                local_8b8[0] = (int)uVar29;
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                          ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_198,
                           &local_5e8,(bool *)local_8b8);
                TScriptContainerIterator<FScriptMapHelper>::operator++(&local_828);
                uVar29 = local_828._8_8_;
                local_954 = local_828.InternalIndex;
                bVar12 = FScriptMapHelper::
                         WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                   (local_828.Container,(<lambda_1> *)&local_954);
                cVar35 = local_9d8;
              } while (bVar12);
            }
          }
          FScriptMapHelper::FScriptMapHelper(&local_c0,this,pvVar22);
          pFVar21 = FOverriddenPropertySet::GetOverriddenPropertyNode
                              (pFVar20,*(FArchiveSerializedPropertyChain **)&pFVar16->field_0x78);
          local_968 = local_848;
          if (pFVar21 != (FOverriddenPropertyNode *)0x0) {
            iVar30 = (pFVar21->SubPropertyNodes).ArrayNum;
            this_00 = (FOverriddenPropertyNodeID *)
                      (pFVar21->SubPropertyNodes).AllocatorInstance.Data;
            pFVar33 = (FOverriddenPropertyNodeID *)((longlong)this_00 + (longlong)iVar30 * 0x38);
LAB_14218c448:
            if ((pFVar21->SubPropertyNodes).ArrayNum != iVar30) {
              local_9c4 = 0;
              `TCheckedPointerIterator<FOverriddenPropertyNode_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_9c4);
            }
            FVar28.StructuredArchive = (FStructuredArchive *)local_8f8;
            pvVar22 = local_998;
            local_968 = local_848;
            cVar35 = local_9d8;
            if (this_00 == pFVar33) goto LAB_14218c6dc;
            cVar35 = *(char *)&this_00[1].Path.Path.AllocatorInstance.Data;
            if (cVar35 == '\x01') {
              uVar15 = FOverriddenPropertyNodeID::ToMapInternalIndex(this_00,&local_228);
              local_878[0] = uVar15;
              if (uVar15 != 0xffffffff) {
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                          ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_148,
                           &local_88c,(bool *)local_878);
                local_880[0] = uVar15;
                if (local_198._8_4_ != local_164) {
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_198,
                             uVar15,(int *)local_880);
                }
              }
            }
            else {
              if (cVar35 == '\x03') {
                local_9bc = FOverriddenPropertyNodeID::ToMapInternalIndex(this_00,&local_228);
                if (local_9bc == 0xffffffff) goto LAB_14218c6bf;
                if (local_990.Data <= &local_9bc) {
                  if ((FScriptContainerElement *)&local_9bc <
                      local_990.Data + (longlong)local_988._4_4_ * 4) {
                    local_9f0 = (longlong)(int)(uint)local_988;
                    local_9e8 = 4;
                    local_a08 = &local_9bc;
                    local_a00 = (FStructuredArchiveSlot)local_990.Data;
                    local_9f8 = (longlong)local_988._4_4_;
                    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       );
                    if (bVar12) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                  }
                }
                iVar14 = (uint)local_988;
                if ((uint)local_988 == local_988._4_4_) {
                  iVar14 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_990,(int *)((longlong)&local_988 + 4));
                }
                local_988 = CONCAT44(local_988._4_4_,iVar14 + 1);
                *(uint *)(local_990.Data + (longlong)iVar14 * 4) = local_9bc;
                local_870[0] = local_9bc;
                if (local_198._8_4_ == local_164) goto LAB_14218c6bf;
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                          ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_198,
                           local_9bc,(int *)local_870);
                this_00 = (FOverriddenPropertyNodeID *)&this_00[1].Object;
                goto LAB_14218c448;
              }
              if (cVar35 != '\x04') {
                bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("false",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyMap.cpp"
                                    ,0x250,L"Unsupported map operation");
                if (bVar12) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                goto LAB_14218c6bf;
              }
              local_99c = FOverriddenPropertyNodeID::ToMapInternalIndex(this_00,&local_c0);
              if (local_99c != 0xffffffff) {
                if (local_980.Data <= &local_99c) {
                  if ((FScriptContainerElement *)&local_99c <
                      local_980.Data + (longlong)local_978._4_4_ * 4) {
                    local_9f0 = (longlong)(int)local_978;
                    local_9e8 = 4;
                    local_a08 = &local_99c;
                    local_a00 = (FStructuredArchiveSlot)local_980.Data;
                    local_9f8 = (longlong)local_978._4_4_;
                    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       );
                    if (bVar12) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                  }
                }
                iVar14 = (int)local_978;
                if ((int)local_978 == local_978._4_4_) {
                  iVar14 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_980,(int *)((longlong)&local_978 + 4));
                }
                this_00 = (FOverriddenPropertyNodeID *)&this_00[1].Object;
                local_978 = CONCAT44(local_978._4_4_,iVar14 + 1);
                *(uint *)(local_980.Data + (longlong)iVar14 * 4) = local_99c;
                goto LAB_14218c448;
              }
            }
LAB_14218c6bf:
            this_00 = (FOverriddenPropertyNodeID *)&this_00[1].Object;
            goto LAB_14218c448;
          }
        }
LAB_14218c6dc:
        if (cVar35 != '\0') goto LAB_14218d18d;
        local_94c = -1;
        ::operator<<(*(FArchive **)(*(longlong *)FVar28.StructuredArchive + 8),&local_94c);
        local_840 = (FStructuredArchiveSlot)FVar28.StructuredArchive;
        FScriptMapHelper::FScriptMapHelper(&local_88,this,pvVar22);
        local_884 = (int)local_978;
        ::operator<<(*(FArchive **)(*(longlong *)FVar28.StructuredArchive + 8),&local_884);
        uVar27 = (ulonglong)(int)local_978;
        local_998 = (void *)CONCAT44(local_998._4_4_,(int)local_978);
        local_8f8 = (FStructuredArchiveSlot)((longlong)local_980.Data + uVar27 * 4);
        uVar26 = uVar27;
        FVar34.Data = local_980.Data;
        while( true ) {
          FVar9 = local_8f8;
          if ((int)uVar27 != (int)uVar26) {
            local_9c3 = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_9c3);
          }
          if ((FStructuredArchiveSlot)FVar34.Data == FVar9) break;
          iVar30 = *(int *)FVar34.Data;
          local_5e4 = UE::NAME_Key;
          local_738.Property = this->KeyProp;
          local_5dc = 0;
          local_5d8 = 0xffffffff;
          local_738.Ar = pFVar16;
          if (*(FMapProperty **)&pFVar16->field_0x70 == this) {
            FSerializedPropertyScope::PushProperty(&local_738);
          }
          else {
            local_738.Property = (FProperty *)0x0;
          }
          pFVar6 = this->KeyProp;
          pcVar7 = *(code **)(pFVar6->_padding_ + 0xc0);
          puVar19 = FScriptMapHelper::GetKeyPtr(&local_88,iVar30);
          (*pcVar7)(pFVar6,FVar28.StructuredArchive,puVar19);
          FSerializedPropertyScope::PopProperty(&local_738);
          uVar27 = local_978 & 0xffffffff;
          FVar34.Data = FVar34.Data + 4;
          uVar26 = (ulonglong)local_998 & 0xffffffff;
        }
        local_8dc = local_148._8_4_ - local_114;
        ::operator<<(*(FArchive **)(*(longlong *)FVar28.StructuredArchive + 8),&local_8dc);
        local_668.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10);
        local_668._padding_._0_4_ = 0;
        local_668._padding_._4_4_ = 1;
        local_668.UnvisitedBitMask = 0xffffffff;
        local_668.CurrentBitIndex = 0;
        local_668.BaseBitIndex = 0;
        if (local_120 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_668);
        }
        unique0x1000230b =
             (TBitArray<FDefaultBitArrayAllocator> *)
             CONCAT44(local_668._padding_._4_4_,(undefined4)local_668._padding_);
        local_4d8._0_8_ = local_148;
        uStack_4c0 = CONCAT44(local_668.CurrentBitIndex,local_668.UnvisitedBitMask);
        local_4b8 = CONCAT44(local_668._28_4_,local_668.BaseBitIndex);
        local_348 = local_148._8_4_ - local_114;
        local_370._16_8_ = local_668.Array;
        uStack_4b0._4_4_ = uStack_344;
        uStack_4b0._0_4_ = local_348;
        local_4c8 = local_668.Array;
        local_370._0_8_ = local_4d8._0_8_;
        local_370._8_8_ = unique0x1000230b;
        lStack_358 = uStack_4c0;
        lStack_350 = local_4b8;
        pTVar23 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_370,
                             (TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10),local_120);
        local_928 = (longlong *)local_148;
        lStack_920 = pTVar23->_padding_;
        pTStack_918 = pTVar23->Array;
        uStack_910._0_4_ = pTVar23->UnvisitedBitMask;
        uStack_910._4_4_ = pTVar23->CurrentBitIndex;
        lStack_908 = *(longlong *)&pTVar23->BaseBitIndex;
        local_900 = local_148._8_4_ - local_114;
        local_318._44_4_ = uStack_8fc;
        local_318.InitialNum = local_900;
        local_318._padding_ = (longlong)local_928;
        local_318._padding_ = lStack_920;
        local_318._padding_ = (longlong)pTStack_918;
        local_318._padding_ = uStack_910;
        local_318._padding_ = lStack_908;
        bVar12 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 ::TRangedForIterator::operator!=((TRangedForIterator *)local_4d8,&local_318);
        if (bVar12) {
          do {
            FVar11 = local_228.field2_0x10;
            iVar30 = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                        *)&(local_228.field2_0x10.FreezableMap)->Pairs)->Data).ArrayNum;
            iVar14 = *(int *)(*(longlong *)local_4d8._0_8_ + (longlong)uStack_4c0._4_4_ * 0xc);
            if ((local_228.MapFlags & UsesMemoryImageAllocator) == None) {
              if (iVar30 == ((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                              *)&(local_228.field2_0x10.FreezableMap)->Pairs)->NumFreeIndices)
              goto LAB_14218c9ff;
              local_8f0 = iVar14;
              bVar12 = FScriptMapHelper::
                       WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                 (&local_228,(<lambda_1> *)&local_8f0);
              if ((!bVar12) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValidIndex(InternalIndex)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                      ,0x12b9,
                                      L"Invalid internal index. Use IsValidIndex before calling this method."
                                     ), bVar12)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              puVar19 = (uchar *)((longlong)
                                  (local_228.MapLayout.SetLayout.SparseArrayLayout.Size * iVar14) +
                                 (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                    *)&(FVar11.FreezableMap)->Pairs)->Data)._padding_);
            }
            else if (iVar30 == *(int *)&(((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                           *)&(local_228.field2_0x10.FreezableMap)->Pairs)->
                                        AllocationFlags).AllocatorInstance.SecondaryData.field_0x4)
            {
LAB_14218c9ff:
              puVar19 = (uchar *)0x0;
              if ((iVar14 != 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InternalIndex == 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                      ,0x12b5,
                                      L"Legacy implementation was only allowing requesting InternalIndex 0 on an empty container."
                                     ), bVar12)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            else {
              local_888 = iVar14;
              bVar12 = FScriptMapHelper::
                       WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                                 (&local_228,(<lambda_1> *)&local_888);
              if ((!bVar12) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValidIndex(InternalIndex)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                      ,0x12b9,
                                      L"Invalid internal index. Use IsValidIndex before calling this method."
                                     ), bVar12)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              puVar19 = (uchar *)(((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                    *)&(FVar11.FreezableMap)->Pairs)->Data)._padding_;
              if (((ulonglong)puVar19 & 1) != 0) {
                puVar19 = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                             *)&(FVar11.HeapMap)->field_0x0)->AllocationFlags).AllocatorInstance.
                          InlineData + ((longlong)puVar19 >> 0x18) + -0x10;
              }
              puVar19 = puVar19 + local_228.MapLayout.SetLayout.SparseArrayLayout.Size * iVar14;
            }
            pFVar16 = local_960;
            local_5d4 = UE::NAME_Key;
            local_728.Property = this->KeyProp;
            local_728.Ar = local_960;
            local_5cc = 0;
            local_5c8 = 0xffffffff;
            if (*(FMapProperty **)&local_960->field_0x70 == this) {
              FSerializedPropertyScope::PushProperty(&local_728);
            }
            else {
              local_728.Property = (FProperty *)0x0;
            }
            (**(code **)(this->KeyProp->_padding_ + 0xc0))
                      (this->KeyProp,FVar28.StructuredArchive,puVar19,0);
            FSerializedPropertyScope::PopProperty(&local_728);
            local_718.Property = this->ValueProp;
            local_5c4 = UE::NAME_Value;
            local_718.Ar = local_960;
            local_5bc = 0;
            local_5b8 = 0xffffffff;
            if (*(FMapProperty **)&pFVar16->field_0x70 == this) {
              FSerializedPropertyScope::PushProperty(&local_718);
            }
            else {
              local_718.Property = (FProperty *)0x0;
            }
            (**(code **)(this->ValueProp->_padding_ + 0xc0))
                      (this->ValueProp,FVar28.StructuredArchive,
                       puVar19 + (this->MapLayout).ValueOffset);
            FSerializedPropertyScope::PopProperty(&local_718);
            uStack_4c0 = CONCAT44(uStack_4c0._4_4_,(uint)uStack_4c0 & ~uStack_4cc);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_4d8 + 8));
            bVar12 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     ::TRangedForIterator::operator!=((TRangedForIterator *)local_4d8,&local_318);
          } while (bVar12);
        }
        local_8ec = local_198._8_4_ - local_164;
        ::operator<<(*(FArchive **)(*(longlong *)FVar28.StructuredArchive + 8),&local_8ec);
        local_648.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10);
        local_648._padding_._0_4_ = 0;
        local_648._padding_._4_4_ = 1;
        local_648.UnvisitedBitMask = 0xffffffff;
        local_648.CurrentBitIndex = 0;
        local_648.BaseBitIndex = 0;
        if (local_170 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_648);
        }
        lStack_920 = CONCAT44(local_648._padding_._4_4_,(undefined4)local_648._padding_);
        local_928 = (longlong *)local_198;
        uStack_910._4_4_ = local_648.CurrentBitIndex;
        uStack_910._0_4_ = local_648.UnvisitedBitMask;
        lStack_908._4_4_ = local_648._28_4_;
        lStack_908._0_4_ = local_648.BaseBitIndex;
        local_900 = local_198._8_4_ - local_164;
        pTStack_918 = local_648.Array;
        uStack_480 = CONCAT44(uStack_8fc,local_900);
        TStack_4a0.Array = local_648.Array;
        local_4a8 = local_928;
        TStack_4a0._padding_ = lStack_920;
        TStack_4a0._16_8_ = uStack_910;
        TStack_4a0._24_8_ = lStack_908;
        pTVar23 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                  TConstSetBitIterator<FDefaultBitArrayAllocator>
                            (&local_288,(TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10),
                             local_170);
        lStack_920 = pTVar23->_padding_;
        pTVar8 = pTVar23->Array;
        uVar29._0_4_ = pTVar23->UnvisitedBitMask;
        uVar29._4_4_ = pTVar23->CurrentBitIndex;
        lStack_908 = *(longlong *)&pTVar23->BaseBitIndex;
        pTStack_918 = pTVar8;
        uStack_910 = uVar29;
        while( true ) {
          plVar10 = local_4a8;
          if ((int)local_4a8[1] - *(int *)((longlong)local_4a8 + 0x34) != (int)uStack_480) {
            local_9c2 = 0;
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_9c2);
          }
          FVar11 = local_228.field2_0x10;
          if (((TStack_4a0.CurrentBitIndex == uVar29._4_4_) && (TStack_4a0.Array == pTVar8)) &&
             (plVar10 == (longlong *)local_198)) break;
          iVar30 = *(int *)(*plVar10 + (longlong)TStack_4a0.CurrentBitIndex * 0xc);
          iVar14 = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                      *)&(local_228.field2_0x10.FreezableMap)->Pairs)->Data).ArrayNum;
          if ((local_228.MapFlags & UsesMemoryImageAllocator) == None) {
            if (iVar14 == ((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                            *)&(local_228.field2_0x10.FreezableMap)->Pairs)->NumFreeIndices)
            goto LAB_14218cd64;
            local_8e4 = iVar30;
            bVar12 = FScriptMapHelper::
                     WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                               (&local_228,(<lambda_1> *)&local_8e4);
            if ((!bVar12) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValidIndex(InternalIndex)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x12b9,
                                    L"Invalid internal index. Use IsValidIndex before calling this method."
                                   ), bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            puVar19 = (uchar *)((longlong)
                                (local_228.MapLayout.SetLayout.SparseArrayLayout.Size * iVar30) +
                               (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                  *)&(FVar11.FreezableMap)->Pairs)->Data)._padding_);
          }
          else if (iVar14 == *(int *)&(((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                         *)&(local_228.field2_0x10.FreezableMap)->Pairs)->
                                      AllocationFlags).AllocatorInstance.SecondaryData.field_0x4) {
LAB_14218cd64:
            puVar19 = (uchar *)0x0;
            if ((iVar30 != 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InternalIndex == 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x12b5,
                                    L"Legacy implementation was only allowing requesting InternalIndex 0 on an empty container."
                                   ), bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          else {
            local_8e8 = iVar30;
            bVar12 = FScriptMapHelper::
                     WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                               (&local_228,(<lambda_1> *)&local_8e8);
            if ((!bVar12) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValidIndex(InternalIndex)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x12b9,
                                    L"Invalid internal index. Use IsValidIndex before calling this method."
                                   ), bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            puVar19 = (uchar *)(((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                  *)&(FVar11.FreezableMap)->Pairs)->Data)._padding_;
            if (((ulonglong)puVar19 & 1) != 0) {
              puVar19 = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                           *)&(FVar11.HeapMap)->field_0x0)->AllocationFlags).AllocatorInstance.
                        InlineData + ((longlong)puVar19 >> 0x18) + -0x10;
            }
            puVar19 = puVar19 + local_228.MapLayout.SetLayout.SparseArrayLayout.Size * iVar30;
          }
          pFVar16 = local_960;
          local_5b4 = UE::NAME_Key;
          local_708.Property = this->KeyProp;
          local_708.Ar = local_960;
          local_5ac = 0;
          local_5a8 = 0xffffffff;
          if (*(FMapProperty **)&local_960->field_0x70 == this) {
            FSerializedPropertyScope::PushProperty(&local_708);
          }
          else {
            local_708.Property = (FProperty *)0x0;
          }
          (**(code **)(this->KeyProp->_padding_ + 0xc0))
                    (this->KeyProp,FVar28.StructuredArchive,puVar19,0);
          FSerializedPropertyScope::PopProperty(&local_708);
          local_6f8.Property = this->ValueProp;
          local_5a4 = UE::NAME_Value;
          local_6f8.Ar = local_960;
          local_59c = 0;
          local_598 = 0xffffffff;
          if (*(FMapProperty **)&pFVar16->field_0x70 == this) {
            FSerializedPropertyScope::PushProperty(&local_6f8);
          }
          else {
            local_6f8.Property = (FProperty *)0x0;
          }
          (**(code **)(this->ValueProp->_padding_ + 0xc0))
                    (this->ValueProp,FVar28.StructuredArchive,
                     puVar19 + (this->MapLayout).ValueOffset);
          FSerializedPropertyScope::PopProperty(&local_6f8);
          TStack_4a0.UnvisitedBitMask = TStack_4a0.UnvisitedBitMask & ~TStack_4a0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4a0);
        }
        local_950 = (uint)local_988;
        pFVar16 = *(FArchive **)(*(longlong *)FVar28.StructuredArchive + 8);
        puVar17 = (uint *)**(undefined8 **)&pFVar16->field_0x8;
        if ((uint *)(*(undefined8 **)&pFVar16->field_0x8)[1] < puVar17 + 1) {
          if ((pFVar16->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)pFVar16 + 0x188))(pFVar16,&local_950,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(pFVar16,&local_950);
          }
        }
        else {
          local_950 = *puVar17;
          **(longlong **)&pFVar16->field_0x8 = **(longlong **)&pFVar16->field_0x8 + 4;
        }
        pFVar16 = local_868;
        iVar30 = (uint)local_988;
        uVar26 = (ulonglong)(int)(uint)local_988;
        local_8f8 = (FStructuredArchiveSlot)((longlong)local_990.Data + uVar26 * 4);
        FVar34.Data = local_990.Data;
        while( true ) {
          FVar9 = local_8f8;
          if ((int)uVar26 != iVar30) {
            local_9c1 = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_9c1);
          }
          FVar11 = local_228.field2_0x10;
          if ((FStructuredArchiveSlot)FVar34.Data == FVar9) break;
          iVar14 = *(int *)FVar34.Data;
          iVar4 = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                     *)&(local_228.field2_0x10.FreezableMap)->Pairs)->Data).ArrayNum;
          if ((local_228.MapFlags & UsesMemoryImageAllocator) == None) {
            if (iVar4 == ((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                           *)&(local_228.field2_0x10.FreezableMap)->Pairs)->NumFreeIndices)
            goto LAB_14218d002;
            local_934 = iVar14;
            bVar12 = FScriptMapHelper::
                     WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                               (&local_228,(<lambda_1> *)&local_934);
            if ((!bVar12) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValidIndex(InternalIndex)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x12b9,
                                    L"Invalid internal index. Use IsValidIndex before calling this method."
                                   ), bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            puVar19 = (uchar *)((longlong)
                                (local_228.MapLayout.SetLayout.SparseArrayLayout.Size * iVar14) +
                               (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                  *)&(FVar11.FreezableMap)->Pairs)->Data)._padding_);
          }
          else if (iVar4 == *(int *)&(((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                        *)&(local_228.field2_0x10.FreezableMap)->Pairs)->
                                     AllocationFlags).AllocatorInstance.SecondaryData.field_0x4) {
LAB_14218d002:
            if ((iVar14 != 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InternalIndex == 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x12b5,
                                    L"Legacy implementation was only allowing requesting InternalIndex 0 on an empty container."
                                   ), bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            puVar19 = (uchar *)0x0;
          }
          else {
            local_8e0 = iVar14;
            bVar12 = FScriptMapHelper::
                     WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                               (&local_228,(<lambda_1> *)&local_8e0);
            if ((!bVar12) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValidIndex(InternalIndex)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                    ,0x12b9,
                                    L"Invalid internal index. Use IsValidIndex before calling this method."
                                   ), bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            puVar19 = (uchar *)(((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                  *)&(FVar11.FreezableMap)->Pairs)->Data)._padding_;
            if (((ulonglong)puVar19 & 1) != 0) {
              puVar19 = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                           *)&(FVar11.HeapMap)->field_0x0)->AllocationFlags).AllocatorInstance.
                        InlineData + ((longlong)puVar19 >> 0x18) + -0x10;
            }
            puVar19 = puVar19 + local_228.MapLayout.SetLayout.SparseArrayLayout.Size * iVar14;
          }
          pFVar25 = local_960;
          local_594 = UE::NAME_Key;
          local_6e8.Property = this->KeyProp;
          local_6e8.Ar = local_960;
          local_58c = 0;
          local_588 = 0xffffffff;
          if (*(FMapProperty **)&local_960->field_0x70 == this) {
            FSerializedPropertyScope::PushProperty(&local_6e8);
          }
          else {
            local_6e8.Property = (FProperty *)0x0;
          }
          (**(code **)(this->KeyProp->_padding_ + 0xc0))
                    (this->KeyProp,FVar28.StructuredArchive,puVar19,0);
          FSerializedPropertyScope::PopProperty(&local_6e8);
          local_778.Property = this->ValueProp;
          local_584 = UE::NAME_Value;
          local_778.Ar = local_960;
          local_57c = 0;
          local_578 = 0xffffffff;
          if (*(FMapProperty **)&pFVar25->field_0x70 == this) {
            FSerializedPropertyScope::PushProperty(&local_778);
          }
          else {
            local_778.Property = (FProperty *)0x0;
          }
          (**(code **)(this->ValueProp->_padding_ + 0xc0))
                    (this->ValueProp,FVar28.StructuredArchive,
                     puVar19 + (this->MapLayout).ValueOffset);
          FSerializedPropertyScope::PopProperty(&local_778);
          uVar26 = local_988 & 0xffffffff;
          FVar34.Data = FVar34.Data + 4;
        }
      }
      local_150 = 0;
      if (local_158 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_158);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_198);
      local_100 = 0;
      if (local_108 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_108);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_148);
      if ((FStructuredArchiveSlot)local_990.Data != (FStructuredArchiveSlot)0x0) {
        FMemory::Free(local_990.Data);
      }
      if ((FStructuredArchiveSlot)local_980.Data != (FStructuredArchiveSlot)0x0) {
        FMemory::Free(local_980.Data);
      }
      goto LAB_14218e5e2;
    }
  }
  pvVar22 = local_998;
  if ((pFVar16->field_0x28 & 1) != 0) {
    pvVar22 = (void *)0x0;
    local_9c8 = 0;
    ::operator<<((FVar28.StructuredArchive)->Formatter->Inner,&local_9c8);
    bVar12 = local_9c8 != -1;
    if (local_998 != (void *)0x0) {
      if (bVar12) {
        (**(code **)(this->_padding_ + 0xf0))(this,param_2,local_998,1);
      }
      if ((local_228.MapFlags & UsesMemoryImageAllocator) == None) {
        iVar30 = ((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                   *)&(local_228.field2_0x10.FreezableMap)->Pairs)->NumFreeIndices;
      }
      else {
        iVar30 = *(int *)&(((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                             *)&(local_228.field2_0x10.FreezableMap)->Pairs)->AllocationFlags).
                          AllocatorInstance.SecondaryData.field_0x4;
      }
      if (((((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
              *)&(local_228.field2_0x10.FreezableMap)->Pairs)->Data).ArrayNum != iVar30) && (bVar12)
         ) {
        if (local_9c8 != 0) {
          pvVar22 = FMemory::Malloc((longlong)(this->MapLayout).SetLayout.Size,0);
          FProperty::InitializeValue(this->KeyProp,pvVar22);
          local_6c8.Property = this->KeyProp;
          local_6c8.Ar = pFVar16;
          if (*(FMapProperty **)&pFVar16->field_0x70 == this) {
            FSerializedPropertyScope::PushProperty(&local_6c8);
          }
          else {
            local_6c8.Property = (FProperty *)0x0;
          }
          for (; local_9c8 != 0; local_9c8 = local_9c8 + -1) {
            (**(code **)(this->KeyProp->_padding_ + 0xc0))
                      (this->KeyProp,FVar28.StructuredArchive,pvVar22,0);
            iVar30 = FScriptMapHelper::FindMapPairIndexFromHash(&local_228,pvVar22);
            if (-1 < iVar30) {
              if ((local_228.MapFlags & UsesMemoryImageAllocator) == None) {
                puVar19 = (uchar *)((longlong)
                                    (local_228.MapLayout.SetLayout.SparseArrayLayout.Size * iVar30)
                                   + (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                        *)&(local_228.field2_0x10.FreezableMap)->Pairs)->Data).
                                     _padding_);
              }
              else {
                puVar19 = (uchar *)(((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                      *)&(local_228.field2_0x10.FreezableMap)->Pairs)->Data).
                                   _padding_;
                if (((ulonglong)puVar19 & 1) != 0) {
                  puVar19 = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                               *)&(local_228.field2_0x10.HeapMap)->field_0x0)->AllocationFlags).
                            AllocatorInstance.InlineData + ((longlong)puVar19 >> 0x18) + -0x10;
                }
                puVar19 = puVar19 + local_228.MapLayout.SetLayout.SparseArrayLayout.Size * iVar30;
              }
              if (puVar19 != (uchar *)0x0) {
                local_3a0 = &local_228;
                local_390 = local_228.KeyProp;
                local_398 = puVar19;
                FScriptMapHelper::WithScriptMap<_FScriptMapHelper::RemovePair_::__l2::<lambda_1>_>
                          (&local_228,(<lambda_1> *)&local_3a0);
              }
            }
          }
          FSerializedPropertyScope::PopProperty(&local_6c8);
        }
        local_9b8 = 0;
        ::operator<<((FVar28.StructuredArchive)->Formatter->Inner,&local_9b8);
        if (local_9b8 != 0) {
          if (pvVar22 == (void *)0x0) {
            pvVar22 = FMemory::Malloc((longlong)(this->MapLayout).SetLayout.Size,0);
            FProperty::InitializeValue(this->KeyProp,pvVar22);
          }
          for (; local_9b8 != 0; local_9b8 = local_9b8 + -1) {
            local_6b8.Property = this->KeyProp;
            local_6b8.Ar = pFVar16;
            if (*(FMapProperty **)&pFVar16->field_0x70 == this) {
              FSerializedPropertyScope::PushProperty(&local_6b8);
            }
            else {
              local_6b8.Property = (FProperty *)0x0;
            }
            (**(code **)(this->KeyProp->_padding_ + 0xc0))
                      (this->KeyProp,FVar28.StructuredArchive,pvVar22,0);
            FSerializedPropertyScope::PopProperty(&local_6b8);
            pvVar24 = FScriptMapHelper::FindOrAdd(&local_228,pvVar22);
            local_6a8.Property = this->ValueProp;
            local_6a8.Ar = pFVar16;
            if (*(FMapProperty **)&pFVar16->field_0x70 == this) {
              FSerializedPropertyScope::PushProperty(&local_6a8);
            }
            else {
              local_6a8.Property = (FProperty *)0x0;
            }
            (**(code **)(this->ValueProp->_padding_ + 0xc0))
                      (this->ValueProp,FVar28.StructuredArchive,pvVar24);
            FSerializedPropertyScope::PopProperty(&local_6a8);
          }
        }
        if (pvVar22 != (void *)0x0) {
          pFVar6 = this->KeyProp;
          if ((pFVar6->PropertyFlags & CPF_NoDestructor) == CPF_None) {
            (**(code **)(pFVar6->_padding_ + 0x138))(pFVar6,pvVar22);
          }
          FMemory::Free(pvVar22);
        }
        goto LAB_14218e5e2;
      }
    }
    if ((local_9c8 != 0) && (bVar12)) {
      pvVar22 = FMemory::Malloc((longlong)(this->MapLayout).SetLayout.Size,0);
      FProperty::InitializeValue(this->KeyProp,pvVar22);
      local_698.Property = this->KeyProp;
      local_698.Ar = pFVar16;
      if (*(FMapProperty **)&pFVar16->field_0x70 == this) {
        FSerializedPropertyScope::PushProperty(&local_698);
      }
      else {
        local_698.Property = (FProperty *)0x0;
      }
      for (; local_9c8 != 0; local_9c8 = local_9c8 + -1) {
        (**(code **)(this->KeyProp->_padding_ + 0xc0))
                  (this->KeyProp,FVar28.StructuredArchive,pvVar22,0);
      }
      pFVar6 = this->KeyProp;
      if ((pFVar6->PropertyFlags & CPF_NoDestructor) == CPF_None) {
        (**(code **)(pFVar6->_padding_ + 0x138))(pFVar6,pvVar22);
      }
      FMemory::Free(pvVar22);
      FSerializedPropertyScope::PopProperty(&local_698);
    }
    local_9b4 = 0;
    ::operator<<((FVar28.StructuredArchive)->Formatter->Inner,&local_9b4);
    FScriptMapHelper::EmptyValues(&local_228,local_9b4);
    for (; local_9b4 != 0; local_9b4 = local_9b4 + -1) {
      pFVar1 = &local_228.MapLayout.SetLayout.SparseArrayLayout;
      if ((local_228.MapFlags & UsesMemoryImageAllocator) == None) {
        iVar30 = TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                 ::AddUninitialized((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                     *)local_228.field2_0x10.HeapMap,pFVar1);
      }
      else {
        iVar30 = TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
                 ::AddUninitialized((TScriptSparseArray<TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>::TrackedSparseArrayAllocator,void>
                                     *)local_228.field2_0x10.HeapMap,pFVar1);
      }
      FScriptMapHelper::ConstructItem(&local_228,iVar30);
      local_574 = UE::NAME_Key;
      local_688.Property = this->KeyProp;
      local_56c = 0;
      local_568 = 0xffffffff;
      local_688.Ar = pFVar16;
      if (*(FMapProperty **)&pFVar16->field_0x70 == this) {
        FSerializedPropertyScope::PushProperty(&local_688);
      }
      else {
        local_688.Property = (FProperty *)0x0;
      }
      FVar11 = local_228.field2_0x10;
      pFVar6 = this->KeyProp;
      pcVar7 = *(code **)(pFVar6->_padding_ + 0xc0);
      iVar14 = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                  *)&(local_228.field2_0x10.FreezableMap)->Pairs)->Data).ArrayNum;
      if ((local_228.MapFlags & UsesMemoryImageAllocator) == None) {
        if (iVar14 == ((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                        *)&(local_228.field2_0x10.FreezableMap)->Pairs)->NumFreeIndices)
        goto LAB_14218d7cd;
        local_8d4 = iVar30;
        bVar12 = FScriptMapHelper::
                 WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                           (&local_228,(<lambda_1> *)&local_8d4);
        if ((!bVar12) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(InternalIndex)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x12dd,
                                L"Invalid internal index. Use IsValidIndex before calling this method."
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        puVar19 = (uchar *)((longlong)
                            (local_228.MapLayout.SetLayout.SparseArrayLayout.Size * iVar30) +
                           (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                              *)&(FVar11.FreezableMap)->Pairs)->Data)._padding_);
      }
      else if (iVar14 == *(int *)&(((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                     *)&(local_228.field2_0x10.FreezableMap)->Pairs)->
                                  AllocationFlags).AllocatorInstance.SecondaryData.field_0x4) {
LAB_14218d7cd:
        if ((iVar30 != 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InternalIndex == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x12d9,
                                L"Legacy implementation was only allowing requesting InternalIndex 0 on an empty container."
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        puVar19 = (uchar *)0x0;
      }
      else {
        local_8d8 = iVar30;
        bVar12 = FScriptMapHelper::
                 WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                           (&local_228,(<lambda_1> *)&local_8d8);
        if ((!bVar12) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(InternalIndex)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x12dd,
                                L"Invalid internal index. Use IsValidIndex before calling this method."
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        puVar19 = (uchar *)(((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                              *)&(FVar11.FreezableMap)->Pairs)->Data)._padding_;
        if (((ulonglong)puVar19 & 1) != 0) {
          puVar19 = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                       *)&(FVar11.HeapMap)->field_0x0)->AllocationFlags).AllocatorInstance.
                    InlineData + ((longlong)puVar19 >> 0x18) + -0x10;
        }
        puVar19 = puVar19 + local_228.MapLayout.SetLayout.SparseArrayLayout.Size * iVar30;
      }
      (*pcVar7)(pFVar6,FVar28.StructuredArchive,puVar19,0);
      FSerializedPropertyScope::PopProperty(&local_688);
      local_564 = UE::NAME_Value;
      local_678.Property = this->ValueProp;
      local_55c = 0;
      local_558 = 0xffffffff;
      local_678.Ar = pFVar16;
      if (*(FMapProperty **)&pFVar16->field_0x70 == this) {
        FSerializedPropertyScope::PushProperty(&local_678);
      }
      else {
        local_678.Property = (FProperty *)0x0;
      }
      pFVar6 = this->ValueProp;
      pcVar7 = *(code **)(pFVar6->_padding_ + 0xc0);
      local_418._0_8_ = &local_228;
      local_418._8_4_ = iVar30;
      FScriptMapHelper::WithScriptMap<_FScriptMapHelper::GetValuePtr_::__l2::<lambda_1>_>
                (&local_228,(<lambda_1> *)local_418);
      (*pcVar7)(pFVar6,FVar28.StructuredArchive);
      FSerializedPropertyScope::PopProperty(&local_678);
    }
    local_530 = &local_228;
    pFVar2 = &local_228.MapLayout.SetLayout;
    if ((local_228.MapFlags & UsesMemoryImageAllocator) == None) {
      local_3f8 = UE::Core::Private::Function::
                  TFunctionRefCaller<``FScriptMapHelper::Rehash'::__l2::<lambda_1>::operator()<FScriptMap>'::__l2::<lambda_1>,unsigned_int,void_const_*>
                  ::Call;
      local_3f0 = &local_530;
      TScriptSparseSet<FDefaultSetAllocator>::Rehash
                ((TScriptSparseSet<FDefaultSetAllocator> *)local_228.field2_0x10.HeapMap,pFVar2,
                 (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_3f8);
    }
    else {
      local_408._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<``FScriptMapHelper::Rehash'::__l2::<lambda_1>::operator()<TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>_>'::__l2::<lambda_1>,unsigned_int,void_const_*>
           ::Call;
      local_408._8_8_ = &local_510;
      local_510 = local_530;
      TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
      ::Rehash((TScriptSparseSet<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>_>
                *)local_228.field2_0x10.HeapMap,pFVar2,
               (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)local_408);
    }
    goto LAB_14218e5e2;
  }
  FScriptMapHelper::FScriptMapHelper(&local_f8,this,local_998);
  pFVar25 = (FArchive *)FOverridableSerializationLogic::GetOverriddenProperties();
  local_1e8._0_8_ = 0;
  local_1e8._8_8_ = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 0x80;
  local_1b8 = 0xffffffff;
  local_1b4 = 0;
  local_1a8 = (ForElementType<FSetElementId>)0x0;
  local_1a0 = 0;
  local_868 = pFVar25;
  if (pvVar22 == (void *)0x0) {
    if (pFVar25 != (FArchive *)0x0) goto LAB_14218db15;
LAB_14218dad0:
    local_8cc = local_1e8._8_4_ - local_1b4;
  }
  else {
    if (pFVar25 == (FArchive *)0x0) {
      TScriptContainerIterator<FScriptMapHelper>::TScriptContainerIterator<FScriptMapHelper>
                (&local_858,&local_f8);
      uVar29 = local_858._8_8_;
      local_944 = local_858.InternalIndex;
      bVar12 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                         (local_858.Container,(<lambda_1> *)&local_944);
      if (bVar12) {
        do {
          local_338[0].Container = local_858.Container;
          local_338[0].InternalIndex = local_858.InternalIndex;
          local_338[0].LogicalIndex = local_858.LogicalIndex;
          puVar19 = FScriptMapHelper::GetPairPtr(&local_f8,local_338);
          puVar19 = FScriptMapHelper::FindMapPairPtrWithKey(&local_228,puVar19,0);
          if (puVar19 == (uchar *)0x0) {
            local_8d0 = (int)uVar29;
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_1e8,&local_528
                       ,(bool *)&local_8d0);
          }
          TScriptContainerIterator<FScriptMapHelper>::operator++(&local_858);
          uVar29 = local_858._8_8_;
          local_944 = local_858.InternalIndex;
          bVar12 = FScriptMapHelper::
                   WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                             (local_858.Container,(<lambda_1> *)&local_944);
        } while (bVar12);
      }
      goto LAB_14218dad0;
    }
LAB_14218db15:
    local_8cc = -1;
  }
  ::operator<<((FVar28.StructuredArchive)->Formatter->Inner,&local_8cc);
  local_808.Property = this->KeyProp;
  local_808.Ar = pFVar16;
  if (*(FMapProperty **)&pFVar16->field_0x70 == this) {
    FSerializedPropertyScope::PushProperty(&local_808);
  }
  else {
    local_808.Property = (FProperty *)0x0;
  }
  local_628.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_1e8 + 0x10);
  local_628._padding_._0_4_ = 0;
  local_628._padding_._4_4_ = 1;
  local_628.UnvisitedBitMask = 0xffffffff;
  local_628.CurrentBitIndex = 0;
  local_628.BaseBitIndex = 0;
  if (local_1c0 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_628);
  }
  lStack_920 = CONCAT44(local_628._padding_._4_4_,(undefined4)local_628._padding_);
  local_928 = (longlong *)local_1e8;
  uStack_910 = CONCAT44(local_628.CurrentBitIndex,local_628.UnvisitedBitMask);
  lStack_908 = CONCAT44(local_628._28_4_,local_628.BaseBitIndex);
  local_900 = local_1e8._8_4_ - local_1b4;
  pTStack_918 = local_628.Array;
  uStack_450._4_4_ = uStack_8fc;
  uStack_450._0_4_ = local_900;
  local_468 = local_628.Array;
  local_478._0_8_ = local_928;
  unique0x10004f5a = lStack_920;
  uStack_460 = uStack_910;
  local_458 = lStack_908;
  pTVar23 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_268,(TBitArray<FDefaultBitArrayAllocator> *)(local_1e8 + 0x10),
                       local_1c0);
  local_928 = (longlong *)local_1e8;
  lStack_920 = pTVar23->_padding_;
  pTStack_918 = pTVar23->Array;
  uStack_910._0_4_ = pTVar23->UnvisitedBitMask;
  uStack_910._4_4_ = pTVar23->CurrentBitIndex;
  lStack_908 = *(longlong *)&pTVar23->BaseBitIndex;
  local_900 = local_1e8._8_4_ - local_1b4;
  local_3e8._44_4_ = uStack_8fc;
  local_3e8.InitialNum = local_900;
  local_3e8._padding_ = (longlong)local_928;
  local_3e8._padding_ = lStack_920;
  local_3e8._padding_ = (longlong)pTStack_918;
  local_3e8._padding_ = uStack_910;
  local_3e8._padding_ = lStack_908;
  bVar12 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForIterator::operator!=((TRangedForIterator *)local_478,&local_3e8);
  if (bVar12) {
    do {
      FVar11 = local_f8.field2_0x10;
      pFVar6 = this->KeyProp;
      pcVar7 = *(code **)(pFVar6->_padding_ + 0xc0);
      iVar30 = ((local_f8.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
      iVar14 = *(int *)(*(longlong *)local_478._0_8_ + (longlong)uStack_460._4_4_ * 0xc);
      if ((local_f8.MapFlags & UsesMemoryImageAllocator) == None) {
        if (iVar30 == *(int *)&((local_f8.field2_0x10.FreezableMap)->Pairs).field_0x34)
        goto LAB_14218dce4;
        local_8c4 = iVar14;
        bVar12 = FScriptMapHelper::
                 WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                           (&local_f8,(<lambda_1> *)&local_8c4);
        if ((!bVar12) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(InternalIndex)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x12b9,
                                L"Invalid internal index. Use IsValidIndex before calling this method."
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        puVar32 = (undefined1 *)
                  ((longlong)(local_f8.MapLayout.SetLayout.SparseArrayLayout.Size * iVar14) +
                  ((FVar11.FreezableMap)->Pairs).Elements.Data._padding_);
      }
      else if (iVar30 == ((local_f8.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices) {
LAB_14218dce4:
        if ((iVar14 != 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InternalIndex == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x12b5,
                                L"Legacy implementation was only allowing requesting InternalIndex 0 on an empty container."
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        puVar32 = (undefined1 *)0x0;
      }
      else {
        local_8c8 = iVar14;
        bVar12 = FScriptMapHelper::
                 WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                           (&local_f8,(<lambda_1> *)&local_8c8);
        if ((!bVar12) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(InternalIndex)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x12b9,
                                L"Invalid internal index. Use IsValidIndex before calling this method."
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        puVar32 = (undefined1 *)((FVar11.FreezableMap)->Pairs).Elements.Data._padding_;
        if (((ulonglong)puVar32 & 1) != 0) {
          puVar32 = &(FVar11.HeapMap)->field_0x0 + ((longlong)puVar32 >> 0x18);
        }
        puVar32 = puVar32 + local_f8.MapLayout.SetLayout.SparseArrayLayout.Size * iVar14;
      }
      (*pcVar7)(pFVar6,FVar28.StructuredArchive,puVar32,0);
      uStack_460 = CONCAT44(uStack_460._4_4_,(uint)uStack_460 & ~uStack_46c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_478 + 8));
      bVar12 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_478,&local_3e8);
      pFVar25 = local_868;
    } while (bVar12);
  }
  iVar30 = 0;
  FSerializedPropertyScope::PopProperty(&local_808);
  if ((local_998 == (void *)0x0) || (pFVar25 != (FArchive *)0x0)) {
    if ((local_228.MapFlags & UsesMemoryImageAllocator) == None) {
      iVar14 = ((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                 *)&(local_228.field2_0x10.FreezableMap)->Pairs)->NumFreeIndices;
    }
    else {
      iVar14 = *(int *)&(((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                           *)&(local_228.field2_0x10.FreezableMap)->Pairs)->AllocationFlags).
                        AllocatorInstance.SecondaryData.field_0x4;
    }
    local_93c = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                   *)&(local_228.field2_0x10.FreezableMap)->Pairs)->Data).ArrayNum - iVar14;
    pFVar25 = (FVar28.StructuredArchive)->Formatter->Inner;
    puVar17 = (uint *)**(undefined8 **)&pFVar25->field_0x8;
    if ((uint *)(*(undefined8 **)&pFVar25->field_0x8)[1] < puVar17 + 1) {
      if ((pFVar25->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar25 + 0x188))(pFVar25,&local_93c,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar25,&local_93c);
      }
    }
    else {
      local_93c = *puVar17;
      **(longlong **)&pFVar25->field_0x8 = **(longlong **)&pFVar25->field_0x8 + 4;
    }
    iVar14 = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                *)&(local_228.field2_0x10.FreezableMap)->Pairs)->Data).ArrayNum;
    if (0 < iVar14) {
      do {
        local_8a0 = iVar30;
        bVar12 = FScriptMapHelper::
                 WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                           (&local_228,(<lambda_1> *)&local_8a0);
        if (bVar12) break;
        iVar30 = iVar30 + 1;
      } while (iVar30 < iVar14);
    }
    local_938 = iVar30;
    bVar12 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                       (&local_228,(<lambda_1> *)&local_938);
    if (bVar12) {
      do {
        FVar11 = local_228.field2_0x10;
        if ((local_228.MapFlags & UsesMemoryImageAllocator) == None) {
          local_898 = iVar30;
          bVar12 = FScriptMapHelper::
                   WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                             (&local_228,(<lambda_1> *)&local_898);
          if ((!bVar12) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Iterator",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x1303,
                                  L"Invalid Iterator. Test Iterator before calling this method."),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          puVar19 = (uchar *)((longlong)
                              (local_228.MapLayout.SetLayout.SparseArrayLayout.Size * iVar30) +
                             (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                *)&(FVar11.FreezableMap)->Pairs)->Data)._padding_);
        }
        else {
          local_89c = iVar30;
          bVar12 = FScriptMapHelper::
                   WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                             (&local_228,(<lambda_1> *)&local_89c);
          if ((!bVar12) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Iterator",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x1303,
                                  L"Invalid Iterator. Test Iterator before calling this method."),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          puVar19 = (uchar *)(((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                *)&(FVar11.FreezableMap)->Pairs)->Data)._padding_;
          if (((ulonglong)puVar19 & 1) != 0) {
            puVar19 = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                         *)&(FVar11.HeapMap)->field_0x0)->AllocationFlags).AllocatorInstance.
                      InlineData + ((longlong)puVar19 >> 0x18) + -0x10;
          }
          puVar19 = puVar19 + local_228.MapLayout.SetLayout.SparseArrayLayout.Size * iVar30;
        }
        local_554 = UE::NAME_Key;
        local_7d8.Property = this->KeyProp;
        local_54c = 0;
        local_548 = 0xffffffff;
        local_7d8.Ar = pFVar16;
        if (*(FMapProperty **)&pFVar16->field_0x70 == this) {
          FSerializedPropertyScope::PushProperty(&local_7d8);
        }
        else {
          local_7d8.Property = (FProperty *)0x0;
        }
        (**(code **)(this->KeyProp->_padding_ + 0xc0))
                  (this->KeyProp,FVar28.StructuredArchive,puVar19,0);
        FSerializedPropertyScope::PopProperty(&local_7d8);
        local_544 = UE::NAME_Value;
        local_6d8.Property = this->ValueProp;
        local_53c = 0;
        local_538 = 0xffffffff;
        local_6d8.Ar = pFVar16;
        if (*(FMapProperty **)&pFVar16->field_0x70 == this) {
          FSerializedPropertyScope::PushProperty(&local_6d8);
        }
        else {
          local_6d8.Property = (FProperty *)0x0;
        }
        (**(code **)(this->ValueProp->_padding_ + 0xc0))
                  (this->ValueProp,FVar28.StructuredArchive,puVar19 + (this->MapLayout).ValueOffset)
        ;
        FSerializedPropertyScope::PopProperty(&local_6d8);
        iVar14 = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                    *)&(local_228.field2_0x10.FreezableMap)->Pairs)->Data).ArrayNum;
        do {
          iVar30 = iVar30 + 1;
          if (iVar14 <= iVar30) break;
          local_894 = iVar30;
          bVar12 = FScriptMapHelper::
                   WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                             (&local_228,(<lambda_1> *)&local_894);
        } while (!bVar12);
        local_938 = iVar30;
        bVar12 = FScriptMapHelper::
                 WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                           (&local_228,(<lambda_1> *)&local_938);
      } while (bVar12);
    }
  }
  else {
    iVar14 = 1;
    uVar15 = local_1e8._8_4_ - local_1b4;
    if (3 < uVar15) {
      uVar26 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
      lVar31 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar31 == 0; lVar31 = lVar31 + -1) {
        }
      }
      local_524 = (undefined4)lVar31;
      iVar14 = 1 << ((byte)lVar31 & 0x1f);
    }
    if ((((int)uVar15 < 1) || (iVar14 <= local_1a0)) && (local_1a0 <= iVar14)) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_1e8);
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_1e8,uVar15);
    }
    else {
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_1e8,uVar15);
      local_1a0 = iVar14;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_1e8);
    }
    iVar14 = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                *)&(local_228.field2_0x10.FreezableMap)->Pairs)->Data).ArrayNum;
    if (0 < iVar14) {
      do {
        local_8c0 = iVar30;
        bVar12 = FScriptMapHelper::
                 WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                           (&local_228,(<lambda_1> *)&local_8c0);
        if (bVar12) break;
        iVar30 = iVar30 + 1;
      } while (iVar30 < iVar14);
    }
    local_940 = iVar30;
    bVar12 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                       (&local_228,(<lambda_1> *)&local_940);
    if (bVar12) {
      do {
        FVar11 = local_228.field2_0x10;
        if ((local_228.MapFlags & UsesMemoryImageAllocator) == None) {
          local_890 = iVar30;
          bVar12 = FScriptMapHelper::
                   WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                             (&local_228,(<lambda_1> *)&local_890);
          if ((!bVar12) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Iterator",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x1303,
                                  L"Invalid Iterator. Test Iterator before calling this method."),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          puVar19 = (uchar *)((longlong)
                              (local_228.MapLayout.SetLayout.SparseArrayLayout.Size * iVar30) +
                             (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                *)&(FVar11.FreezableMap)->Pairs)->Data)._padding_);
        }
        else {
          local_8bc = iVar30;
          bVar12 = FScriptMapHelper::
                   WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                             (&local_228,(<lambda_1> *)&local_8bc);
          if ((!bVar12) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Iterator",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                  ,0x1303,
                                  L"Invalid Iterator. Test Iterator before calling this method."),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          puVar19 = (uchar *)(((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                                *)&(FVar11.FreezableMap)->Pairs)->Data)._padding_;
          if (((ulonglong)puVar19 & 1) != 0) {
            puVar19 = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                         *)&(FVar11.HeapMap)->field_0x0)->AllocationFlags).AllocatorInstance.
                      InlineData + ((longlong)puVar19 >> 0x18) + -0x10;
          }
          puVar19 = puVar19 + local_228.MapLayout.SetLayout.SparseArrayLayout.Size * iVar30;
        }
        local_388 = &local_f8;
        local_8b0[0] = 0;
        local_378 = local_8b0;
        local_380 = puVar19;
        iVar14 = FScriptMapHelper::
                 WithScriptMap<_FScriptMapHelper::FindMapIndexWithKey_::__l2::<lambda_1>_>
                           (&local_f8,(<lambda_1> *)&local_388);
        if (iVar14 < 0) {
LAB_14218e00b:
          local_8a8 = iVar30;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_1e8,local_520,
                     (bool *)&local_8a8);
        }
        else {
          if ((local_f8.MapFlags & UsesMemoryImageAllocator) == None) {
            puVar32 = (undefined1 *)
                      ((longlong)(local_f8.MapLayout.SetLayout.SparseArrayLayout.Size * iVar14) +
                      ((local_f8.field2_0x10.FreezableMap)->Pairs).Elements.Data._padding_);
          }
          else {
            puVar32 = (undefined1 *)
                      ((local_f8.field2_0x10.FreezableMap)->Pairs).Elements.Data._padding_;
            if (((ulonglong)puVar32 & 1) != 0) {
              puVar32 = &(local_f8.field2_0x10.HeapMap)->field_0x0 + ((longlong)puVar32 >> 0x18);
            }
            puVar32 = puVar32 + local_f8.MapLayout.SetLayout.SparseArrayLayout.Size * iVar14;
          }
          if ((puVar32 == (undefined1 *)0x0) ||
             (iVar14 = (this->MapLayout).ValueOffset,
             cVar35 = (**(code **)(this->ValueProp->_padding_ + 0xb8))
                                (this->ValueProp,puVar19 + iVar14,puVar32 + iVar14,0),
             cVar35 == '\0')) goto LAB_14218e00b;
        }
        iVar14 = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                    *)&(local_228.field2_0x10.FreezableMap)->Pairs)->Data).ArrayNum;
        do {
          iVar30 = iVar30 + 1;
          if (iVar14 <= iVar30) break;
          local_8a4 = iVar30;
          bVar12 = FScriptMapHelper::
                   WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                             (&local_228,(<lambda_1> *)&local_8a4);
        } while (!bVar12);
        local_940 = iVar30;
        bVar12 = FScriptMapHelper::
                 WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                           (&local_228,(<lambda_1> *)&local_940);
      } while (bVar12);
    }
    local_930[0] = local_1e8._8_4_ - local_1b4;
    pFVar25 = (FVar28.StructuredArchive)->Formatter->Inner;
    puVar17 = (uint *)**(undefined8 **)&pFVar25->field_0x8;
    if ((uint *)(*(undefined8 **)&pFVar25->field_0x8)[1] < puVar17 + 1) {
      if ((pFVar25->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar25 + 0x188))(pFVar25,local_930,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar25,local_930);
      }
    }
    else {
      local_930[0] = *puVar17;
      **(longlong **)&pFVar25->field_0x8 = **(longlong **)&pFVar25->field_0x8 + 4;
    }
    local_608.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_1e8 + 0x10);
    local_608._padding_._0_4_ = 0;
    local_608._padding_._4_4_ = 1;
    local_608.UnvisitedBitMask = 0xffffffff;
    local_608.CurrentBitIndex = 0;
    local_608.BaseBitIndex = 0;
    if (local_1c0 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_608);
    }
    lStack_920 = CONCAT44(local_608._padding_._4_4_,(undefined4)local_608._padding_);
    local_928 = (longlong *)local_1e8;
    uStack_910 = CONCAT44(local_608.CurrentBitIndex,local_608.UnvisitedBitMask);
    lStack_908 = CONCAT44(local_608._28_4_,local_608.BaseBitIndex);
    local_900 = local_1e8._8_4_ - local_1b4;
    pTStack_918 = local_608.Array;
    uStack_4e0 = CONCAT44(uStack_8fc,local_900);
    TStack_500.Array = local_608.Array;
    local_508 = local_928;
    TStack_500._padding_ = lStack_920;
    TStack_500._16_8_ = uStack_910;
    TStack_500._24_8_ = lStack_908;
    pTVar23 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_248,(TBitArray<FDefaultBitArrayAllocator> *)(local_1e8 + 0x10),
                         local_1c0);
    local_3e8._padding_ = pTVar23->_padding_;
    pTVar8 = pTVar23->Array;
    lVar31._0_4_ = pTVar23->UnvisitedBitMask;
    lVar31._4_4_ = pTVar23->CurrentBitIndex;
    local_3e8._padding_ = *(longlong *)&pTVar23->BaseBitIndex;
    local_3e8._padding_ = (longlong)pTVar8;
    local_3e8._padding_ = lVar31;
    while( true ) {
      plVar10 = local_508;
      if ((int)local_508[1] - *(int *)((longlong)local_508 + 0x34) != (int)uStack_4e0) {
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_956);
      }
      if (((TStack_500.CurrentBitIndex == lVar31._4_4_) && (TStack_500.Array == pTVar8)) &&
         (plVar10 == (longlong *)local_1e8)) break;
      iVar30 = *(int *)(*plVar10 + (longlong)TStack_500.CurrentBitIndex * 0xc);
      if ((local_228.MapFlags & UsesMemoryImageAllocator) == None) {
        puVar19 = (uchar *)((longlong)
                            (local_228.MapLayout.SetLayout.SparseArrayLayout.Size * iVar30) +
                           (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                              *)&(local_228.field2_0x10.FreezableMap)->Pairs)->Data)._padding_);
      }
      else {
        puVar19 = (uchar *)(((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                              *)&(local_228.field2_0x10.FreezableMap)->Pairs)->Data)._padding_;
        if (((ulonglong)puVar19 & 1) != 0) {
          puVar19 = (((TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                       *)&(local_228.field2_0x10.HeapMap)->field_0x0)->AllocationFlags).
                    AllocatorInstance.InlineData + ((longlong)puVar19 >> 0x18) + -0x10;
        }
        puVar19 = puVar19 + local_228.MapLayout.SetLayout.SparseArrayLayout.Size * iVar30;
      }
      local_7f8.Property = this->KeyProp;
      local_7f8.Ar = pFVar16;
      if (*(FMapProperty **)&pFVar16->field_0x70 == this) {
        FSerializedPropertyScope::PushProperty(&local_7f8);
      }
      else {
        local_7f8.Property = (FProperty *)0x0;
      }
      (**(code **)(this->KeyProp->_padding_ + 0xc0))
                (this->KeyProp,FVar28.StructuredArchive,puVar19,0);
      FSerializedPropertyScope::PopProperty(&local_7f8);
      local_7e8.Property = this->ValueProp;
      local_7e8.Ar = pFVar16;
      if (*(FMapProperty **)&pFVar16->field_0x70 == this) {
        FSerializedPropertyScope::PushProperty(&local_7e8);
      }
      else {
        local_7e8.Property = (FProperty *)0x0;
      }
      (**(code **)(this->ValueProp->_padding_ + 0xc0))
                (this->ValueProp,FVar28.StructuredArchive,puVar19 + (this->MapLayout).ValueOffset);
      FSerializedPropertyScope::PopProperty(&local_7e8);
      TStack_500.UnvisitedBitMask = TStack_500.UnvisitedBitMask & ~TStack_500._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_500);
    }
  }
  local_1a0 = 0;
  if (local_1a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1a8);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_1e8);
LAB_14218e5e2:
  pFVar16->field_0x2c = pFVar16->field_0x2c ^ (pFVar16->field_0x2c ^ local_9c0) & 1;
  return;
}

// StaticClass @ 1421937d0

FFieldClass * __cdecl FMapProperty::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FMapProperty",0x400000000000,
                 CASTCLASS_FMapProperty|CASTCLASS_FProperty|CASTCLASS_UField,pFVar1,Construct);
      atexit(`FMapProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

// UseBinaryOrNativeSerialization @ 1421963d0

bool __thiscall FMapProperty::UseBinaryOrNativeSerialization(FMapProperty *this,FArchive *param_1)

{
  FProperty *pFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  
  bVar4 = FProperty::UseBinaryOrNativeSerialization((FProperty *)this,param_1);
  if (!bVar4) {
    pFVar1 = this->KeyProp;
    pFVar2 = this->ValueProp;
    if (pFVar1 == (FProperty *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("LocalKeyProp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyMap.cpp"
                         ,0x6c9,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    if (pFVar2 == (FProperty *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("LocalValueProp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyMap.cpp"
                         ,0x6ca,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    cVar6 = (**(code **)(pFVar1->_padding_ + 0x180))(pFVar1,param_1);
    if (cVar6 == '\0') {
      cVar6 = (**(code **)(pFVar2->_padding_ + 0x180))(pFVar2,param_1);
      if (cVar6 == '\0') {
        return false;
      }
    }
  }
  return true;
}

// Visit @ 142196630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EPropertyVisitorControlFlow __thiscall
FMapProperty::Visit(FMapProperty *this,FPropertyVisitorContext *param_1,
                   TFunctionRef<EPropertyVisitorControlFlow___cdecl(FPropertyVisitorContext_const_&)>
                   *param_2)

{
  int *piVar1;
  FPropertyVisitorPath *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  FScriptMapHelper_u_16 FVar7;
  EPropertyVisitorControlFlow EVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  FPropertyVisitorInfo *pFVar12;
  undefined8 uVar13;
  longlong *plVar14;
  FPropertyVisitorScope *this_00;
  int iVar15;
  longlong lVar16;
  int iVar17;
  undefined1 auStack_1a8 [32];
  FProperty **local_188;
  FScriptContainerElement *local_180;
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140 [2];
  FPropertyVisitorScope local_138;
  FPropertyVisitorScope local_130;
  FProperty *local_128;
  undefined8 uStack_120;
  int local_118;
  undefined2 uStack_114;
  undefined2 uStack_112;
  FPropertyVisitorInfo local_110;
  TFunctionRef<EPropertyVisitorControlFlow___cdecl(FPropertyVisitorContext_const_&)> local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  FPropertyVisitorPath *local_c8;
  undefined1 *local_c0;
  void *local_b8;
  EScope local_b0;
  FPropertyVisitorPath *local_a8;
  undefined1 *local_a0;
  void *local_98;
  EScope local_90;
  FScriptMapHelper local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  FScriptMapHelper::FScriptMapHelper(&local_78,this,(param_1->Data).PropertyData);
  iVar17 = ((local_78.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
  if ((local_78.MapFlags & UsesMemoryImageAllocator) == None) {
    iVar15 = *(int *)&((local_78.field2_0x10.FreezableMap)->Pairs).field_0x34;
  }
  else {
    iVar15 = ((local_78.field2_0x10.FreezableMap)->Pairs).Elements.NumFreeIndices;
  }
  pFVar12 = FPropertyVisitorPath::Top(param_1->Path);
  pFVar12->bContainsInnerProperties = 0 < iVar17 - iVar15;
  local_f8._0_8_ = *(undefined8 *)param_2;
  local_f8._8_8_ = *(undefined8 *)&param_2->field_0x8;
  EVar8 = FProperty::Visit((FProperty *)this,param_1,&local_f8);
  if (EVar8 == StepInto) {
    if (((this->KeyProp == (FProperty *)0x0) || (this->ValueProp == (FProperty *)0x0)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("KeyProp && ValueProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyMap.cpp"
                           ,0x70d,L"Expecting a valid inner property type"), bVar9)) {
      pcVar6 = (code *)swi(3);
      EVar8 = (*pcVar6)();
      return EVar8;
    }
    iVar15 = 0;
    iVar17 = ((local_78.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
    if (0 < iVar17) {
      do {
        local_154 = iVar15;
        bVar9 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          (&local_78,(<lambda_1> *)&local_154);
        if (bVar9) break;
        iVar15 = iVar15 + 1;
      } while (iVar15 < iVar17);
    }
    iVar17 = 0;
    local_158 = iVar15;
    bVar9 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                      (&local_78,(<lambda_1> *)&local_158);
    if (bVar9) {
      do {
        pFVar2 = param_1->Path;
        local_128 = this->KeyProp;
        uStack_120 = 0;
        uStack_114 = 3;
        pFVar3 = (pFVar2->Path).AllocatorInstance.Data;
        local_130.Path = pFVar2;
        local_118 = iVar17;
        if ((pFVar3 <= (FScriptContainerElement *)&local_128) &&
           (lVar16 = (longlong)(pFVar2->Path).ArrayMax,
           (FScriptContainerElement *)&local_128 < pFVar3 + lVar16 * 0x18)) {
          local_170 = (longlong)(pFVar2->Path).ArrayNum;
          local_168 = 0x18;
          local_188 = &local_128;
          local_180 = pFVar3;
          local_178 = lVar16;
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            EVar8 = (*pcVar6)();
            return EVar8;
          }
        }
        iVar11 = (pFVar2->Path).ArrayNum;
        piVar1 = &(pFVar2->Path).ArrayMax;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,(ForAnyElementType *)pFVar2,piVar1);
        }
        (pFVar2->Path).ArrayNum = iVar11 + 1;
        pFVar4 = (pFVar2->Path).AllocatorInstance.Data;
        pFVar3 = pFVar4 + (longlong)iVar11 * 0x18;
        *(FProperty **)pFVar3 = local_128;
        *(undefined8 *)(pFVar3 + 8) = uStack_120;
        *(ulonglong *)(pFVar4 + (longlong)iVar11 * 0x18 + 0x10) =
             CONCAT26(uStack_112,CONCAT24(uStack_114,local_118));
        if (*(void **)&pFVar2->OnPushFunc != (void *)0x0) {
          UE::Core::Private::Function::CheckCallable(*(void **)&pFVar2->OnPushFunc);
          plVar5 = *(longlong **)&(pFVar2->OnPushFunc).field_0x28;
          pcVar6 = *(code **)&pFVar2->OnPushFunc;
          plVar14 = (longlong *)&(pFVar2->OnPushFunc).field_0x10;
          if (plVar5 != (longlong *)0x0) {
            plVar14 = plVar5;
          }
          uVar13 = (**(code **)(*plVar14 + 8))();
          (*pcVar6)(uVar13,&local_128);
        }
        FVar7 = local_78.field2_0x10;
        if ((local_78.MapFlags & UsesMemoryImageAllocator) == None) {
          local_14c = iVar15;
          bVar9 = FScriptMapHelper::
                  WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                            (&local_78,(<lambda_1> *)&local_14c);
          if ((!bVar9) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Iterator",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1321,
                                 L"Invalid Iterator. Test Iterator before calling this method."),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            EVar8 = (*pcVar6)();
            return EVar8;
          }
          local_c0 = (undefined1 *)
                     ((longlong)(local_78.MapLayout.SetLayout.SparseArrayLayout.Size * iVar15) +
                     ((FVar7.FreezableMap)->Pairs).Elements.Data._padding_);
        }
        else {
          local_150 = iVar15;
          bVar9 = FScriptMapHelper::
                  WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                            (&local_78,(<lambda_1> *)&local_150);
          if ((!bVar9) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Iterator",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1321,
                                 L"Invalid Iterator. Test Iterator before calling this method."),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            EVar8 = (*pcVar6)();
            return EVar8;
          }
          local_c0 = (undefined1 *)((FVar7.FreezableMap)->Pairs).Elements.Data._padding_;
          if (((ulonglong)local_c0 & 1) != 0) {
            local_c0 = &(FVar7.HeapMap)->field_0x0 + ((longlong)local_c0 >> 0x18);
          }
          local_c0 = local_c0 + local_78.MapLayout.SetLayout.SparseArrayLayout.Size * iVar15;
        }
        local_c8 = param_1->Path;
        local_b8 = (param_1->Data).ParentStructData;
        local_b0 = param_1->Scope;
        local_e8 = *(undefined8 *)param_2;
        local_e0 = *(undefined8 *)&param_2->field_0x8;
        cVar10 = (**(code **)(this->KeyProp->_padding_ + 0x98))(this->KeyProp,&local_c8,&local_e8);
        this_00 = &local_130;
        if (cVar10 == '\0') {
LAB_142196b13:
          FPropertyVisitorScope::~FPropertyVisitorScope(this_00);
          return Stop;
        }
        if (cVar10 == '\x02') {
LAB_142196b0a:
          FPropertyVisitorScope::~FPropertyVisitorScope(this_00);
          return StepOver;
        }
        FPropertyVisitorScope::~FPropertyVisitorScope(this_00);
        local_110.Property = this->ValueProp;
        local_110.ParentStructType = (UStruct *)0x0;
        local_110.PropertyInfo = MapValue;
        local_110.bContainsInnerProperties = false;
        local_110.Index = iVar17;
        FPropertyVisitorScope::FPropertyVisitorScope(&local_138,param_1->Path,&local_110);
        FVar7 = local_78.field2_0x10;
        if ((local_78.MapFlags & UsesMemoryImageAllocator) == None) {
          local_144 = iVar15;
          bVar9 = FScriptMapHelper::
                  WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                            (&local_78,(<lambda_1> *)&local_144);
          if ((!bVar9) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Iterator",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x133f,
                                 L"Invalid Iterator. Test Iterator before calling this method."),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            EVar8 = (*pcVar6)();
            return EVar8;
          }
          local_a0 = (undefined1 *)
                     ((longlong)(local_78.MapLayout.SetLayout.SparseArrayLayout.Size * iVar15) +
                      (longlong)local_78.MapLayout.ValueOffset +
                     ((FVar7.FreezableMap)->Pairs).Elements.Data._padding_);
        }
        else {
          local_148 = iVar15;
          bVar9 = FScriptMapHelper::
                  WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                            (&local_78,(<lambda_1> *)&local_148);
          if ((!bVar9) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Iterator",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x133f,
                                 L"Invalid Iterator. Test Iterator before calling this method."),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            EVar8 = (*pcVar6)();
            return EVar8;
          }
          local_a0 = (undefined1 *)((FVar7.FreezableMap)->Pairs).Elements.Data._padding_;
          if (((ulonglong)local_a0 & 1) != 0) {
            local_a0 = &(FVar7.HeapMap)->field_0x0 + ((longlong)local_a0 >> 0x18);
          }
          local_a0 = local_a0 +
                     (longlong)local_78.MapLayout.ValueOffset +
                     (longlong)(local_78.MapLayout.SetLayout.SparseArrayLayout.Size * iVar15);
        }
        local_a8 = param_1->Path;
        local_98 = (param_1->Data).ParentStructData;
        local_90 = param_1->Scope;
        local_d8 = *(undefined8 *)param_2;
        local_d0 = *(undefined8 *)&param_2->field_0x8;
        EVar8 = (**(code **)(this->ValueProp->_padding_ + 0x98))
                          (this->ValueProp,&local_a8,&local_d8);
        this_00 = &local_138;
        if (EVar8 == Stop) goto LAB_142196b13;
        if (EVar8 == StepOut) goto LAB_142196b0a;
        FPropertyVisitorScope::~FPropertyVisitorScope(this_00);
        iVar11 = ((local_78.field2_0x10.FreezableMap)->Pairs).Elements.Data.ArrayNum;
        do {
          iVar15 = iVar15 + 1;
          if (iVar11 <= iVar15) break;
          local_140[0] = iVar15;
          bVar9 = FScriptMapHelper::
                  WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                            (&local_78,(<lambda_1> *)local_140);
        } while (!bVar9);
        iVar17 = iVar17 + 1;
        local_158 = iVar15;
        bVar9 = FScriptMapHelper::WithScriptMap<_FScriptMapHelper::IsValidIndex_::__l2::<lambda_1>_>
                          (&local_78,(<lambda_1> *)&local_158);
      } while (bVar9);
    }
  }
  return EVar8;
}

// operator() @ 150486820

bool __thiscall `FMapProperty::ConvertFromType'::__l10::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FName local_res10;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1336201825145059947>);
  if (bVar5) {
    (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x18))
              (*(longlong **)((longlong)this + 0x10),local_28);
    local_res10 = *(FName *)(*(longlong *)(**(longlong **)((longlong)this + 8) + 0x70) + 0x18);
    ::FName::ToString(&local_res10,&local_38);
    ::FName::ToString((FName *)(*(longlong *)this + 0x14),&local_48);
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1336201825145059947>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_150486913;
    }
  }
  bVar5 = false;
LAB_150486913:
  if ((bVar2) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_28[0] != (void *)0x0)) {
    FMemory::Free(local_28[0]);
  }
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  return false;
}

// operator() @ 150486b30

bool __thiscall `FMapProperty::AddCppProperty'::__l12::<lambda_1>::operator()(void *this)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FString local_18;
  
  bVar5 = false;
  bVar3 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_1336201825145060137>);
  if (bVar3) {
    pvVar1 = (void *)**(undefined8 **)this;
    bVar3 = IsThisNotNull(pvVar1,"FField::GetName");
    if (bVar3) {
      ::FName::ToString((FName *)((longlong)pvVar1 + 0x20),&local_18);
    }
    else {
      ::FString::FString(&local_18,L"None");
    }
    bVar5 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1336201825145060137>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_150486bc5;
    }
  }
  bVar3 = false;
LAB_150486bc5:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

