// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 46

// GetFieldSize @ 141f81cc0

ulong64 __thiscall FSetProperty::GetFieldSize(FSetProperty *this)

{
  return 0x90;
}

// ContainsObjectReference @ 1420248a0

bool __thiscall
FSetProperty::ContainsObjectReference
          (FSetProperty *this,TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_1,
          EPropertyObjectReferenceType param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (this->ElementProp == (FProperty *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementProp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x199f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142024901. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(this->ElementProp->_padding_ + 0x170))(this->ElementProp,param_1,param_2);
  return (bool)uVar3;
}

// EmitIntrusiveOptionalReferenceInfo @ 14203d830

void __thiscall
FSetProperty::EmitIntrusiveOptionalReferenceInfo
          (FSetProperty *this,FSchemaBuilder *param_1,int param_2,
          TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_3,
          FPropertyStack *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00014203d83a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x178))();
  return;
}

// EmitReferenceInfo @ 14203e440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSetProperty::EmitReferenceInfo
          (FSetProperty *this,FSchemaBuilder *param_1,int param_2,
          TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_3,
          FPropertyStack *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FMemberWord FVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  FSchemaView FVar10;
  FString *pFVar11;
  FName *pFVar12;
  uint uVar13;
  undefined1 auStackY_2a8 [32];
  FProperty *local_258;
  FName local_250;
  uint uStack_248;
  undefined4 uStack_244;
  FMemberWord local_240;
  undefined1 local_238 [8];
  FName local_230;
  initializer_list<UE::GC::FMemberDeclaration> local_228;
  FString local_218;
  FMemberDeclaration local_208;
  FSchemaBuilder local_1e8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  cVar7 = (**(code **)(this->_padding_ + 0x170))(this,param_3,1);
  if (cVar7 != '\0') {
    local_228._First = (FMemberDeclaration *)0x0;
    local_228._Last = (FMemberDeclaration *)0x0;
    UE::GC::FSchemaBuilder::FSchemaBuilder(&local_1e8,(this->SetLayout).Size,&local_228);
    local_258 = this->ElementProp;
    if (local_258 == (FProperty *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Property",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\GarbageCollectionSchema.h"
                         ,0x5d,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pFVar4 = (param_4->Props).AllocatorInstance.Data;
    if ((pFVar4 <= (FScriptContainerElement *)&local_258) &&
       ((FScriptContainerElement *)&local_258 < pFVar4 + (longlong)(param_4->Props).ArrayMax * 8)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = (param_4->Props).ArrayNum;
    piVar1 = &(param_4->Props).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)param_4,piVar1);
    }
    (param_4->Props).ArrayNum = iVar9 + 1;
    *(FProperty **)((param_4->Props).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_258;
    (**(code **)(this->ElementProp->_padding_ + 0x178))(this->ElementProp,&local_1e8,0,param_3);
    FVar10 = UE::GC::FSchemaBuilder::Build
                       (&local_1e8,
                        (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)local_238);
    uVar13 = param_2 + *(int *)((longlong)&this->_padding_ + 4);
    FVar5 = *(FMemberWord *)FVar10.Handle;
    pFVar11 = UE::GC::FPropertyStack::GetPropertyPath(param_4,&local_218);
    iVar3 = (pFVar11->Data).ArrayNum;
    iVar9 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar9 = 0;
    }
    pFVar12 = ::FName::FName(&local_230,iVar9,(wchar_t *)(pFVar11->Data).AllocatorInstance.Data,
                             FNAME_Add);
    local_250 = *pFVar12;
    if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data.AllocatorInstance.Data);
    }
    uStack_244 = CONCAT31(uStack_244._1_3_,6);
    local_208._12_4_ = uStack_244;
    local_208.Offset = uVar13;
    uStack_248 = uVar13;
    local_240 = FVar5;
    local_208.DebugName = local_250;
    local_208.ExtraWord = FVar5;
    UE::GC::FSchemaBuilder::Add(param_1,&local_208);
    if ((param_4->Props).ArrayNum < 1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = (param_4->Props).ArrayNum;
    uVar13 = iVar9 - 1;
    pFVar4 = (param_4->Props).AllocatorInstance.Data + (longlong)(int)uVar13 * 8;
    iVar9 = ~uVar13 + iVar9;
    if (iVar9 != 0) {
      memmove(pFVar4,pFVar4 + 8,(longlong)iVar9 << 3);
    }
    piVar2 = &(param_4->Props).ArrayNum;
    *piVar2 = *piVar2 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(ForAnyElementType *)param_4,(param_4->Props).ArrayNum,piVar1);
    UE::GC::FSchemaBuilder::~FSchemaBuilder(&local_1e8);
  }
  return;
}

// FSetProperty @ 142162370

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FSetProperty * __thiscall
FSetProperty::FSetProperty(FSetProperty *this,FFieldVariant param_1,FGenericPropertyParams *param_2)

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
             CPF_ZeroConstructor);
  this->_padding_ =
       (longlong)&___7__TProperty_V__TScriptSparseSet_VFDefaultSetAllocator____VFProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,0x50);
  this->_padding_ = (longlong)&___7FSetProperty__6B_;
  this->ElementProp = (FProperty *)0x0;
  return this;
}

// FSetProperty @ 142162420

FSetProperty * __thiscall
FSetProperty::FSetProperty
          (FSetProperty *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3)

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
  this->_padding_ =
       (longlong)&___7__TProperty_V__TScriptSparseSet_VFDefaultSetAllocator____VFProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,0x50);
  this->_padding_ = (longlong)&___7FSetProperty__6B_;
  this->ElementProp = (FProperty *)0x0;
  return this;
}

// ~FSetProperty @ 142163760

void __thiscall FSetProperty::~FSetProperty(FSetProperty *this)

{
  FProperty *pFVar1;
  
  this->_padding_ = (longlong)&___7FSetProperty__6B_;
  pFVar1 = this->ElementProp;
  if (pFVar1 != (FProperty *)0x0) {
    (**(code **)(pFVar1->_padding_ + 8))(pFVar1,1);
  }
  this->ElementProp = (FProperty *)0x0;
  FField::~FField((FField *)this);
  return;
}

// AddCppProperty @ 142166210

void __thiscall FSetProperty::AddCppProperty(FSetProperty *this,FProperty *param_1)

{
  code *pcVar1;
  bool bVar2;
  FProperty **local_res8;
  FProperty *local_res10 [3];
  
  local_res10[0] = param_1;
  if (this->ElementProp != (FProperty *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ElementProp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertySet.cpp"
                       ,0x2d3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_res10[0] == (FProperty *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Property",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertySet.cpp"
                       ,0x2d4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((local_res10[0]->PropertyFlags & CPF_HasGetValueTypeHash) == CPF_None) {
    local_res8 = local_res10;
    `FSetProperty::AddCppProperty'::__l2::<lambda_1>::operator()(&local_res8);
  }
  this->ElementProp = local_res10[0];
  return;
}

// AddReferencedObjects @ 142166ca0

void __thiscall FSetProperty::AddReferencedObjects(FSetProperty *this,FReferenceCollector *param_1)

{
  FProperty *pFVar1;
  
  FField::AddReferencedObjects((FField *)this,param_1);
  pFVar1 = this->ElementProp;
  if (pFVar1 != (FProperty *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,param_1);
  }
  return;
}

// CanSerializeFromTypeName @ 142169470

bool __thiscall FSetProperty::CanSerializeFromTypeName(FSetProperty *this,FPropertyTypeName param_1)

{
  FProperty *pFVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  
  bVar3 = FProperty::CanSerializeFromTypeName((FProperty *)this,param_1);
  if (!bVar3) {
    return false;
  }
  pFVar1 = this->ElementProp;
  if (pFVar1 == (FProperty *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LocalElementProp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertySet.cpp"
                       ,0x461,L"");
    if (bVar3) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      uVar4 = (*UNRECOVERED_JUMPTABLE)();
      return (bool)uVar4;
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(pFVar1->_padding_ + 0x198);
  iVar2 = 0;
  if (0 < *(int *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)param_1.Index >> 0xd] + 8 +
                  (ulonglong)(param_1.Index & 0x1fff) * 0xc)) {
    iVar2 = param_1.Index + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000142169507. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*UNRECOVERED_JUMPTABLE)
                    (pFVar1,iVar2,UE::GPropertyTypeNameTable.Blocks[(longlong)param_1.Index >> 0xd],
                     UNRECOVERED_JUMPTABLE);
  return (bool)uVar4;
}

// ClearIntrusiveOptionalValue @ 142169aa0

void __thiscall FSetProperty::ClearIntrusiveOptionalValue(FSetProperty *this,void *param_1)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined4 *puVar5;
  int iVar6;
  FScriptSetHelper local_38;
  
  cVar3 = (**(code **)(this->_padding_ + 0x1b8))();
  if (cVar3 != '\0') {
    local_38.ElementProp = this->ElementProp;
    iVar1 = (this->SetLayout).SparseArrayLayout.Size;
    local_38.SetLayout.HashNextIdOffset = (this->SetLayout).HashNextIdOffset;
    local_38.SetLayout.HashIndexOffset = (this->SetLayout).HashIndexOffset;
    local_38.SetLayout.Size = (this->SetLayout).Size;
    local_38.SetLayout.SparseArrayLayout.Alignment = (this->SetLayout).SparseArrayLayout.Alignment;
    local_38.Set = param_1;
    local_38.SetLayout.SparseArrayLayout.Size = iVar1;
    if (local_38.ElementProp == (FProperty *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementProp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1653,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar6 = *(int *)((longlong)param_1 + 8) - *(int *)((longlong)param_1 + 0x34);
    if (iVar6 != 0) {
      FScriptSetHelper::DestructItems(&local_38,0,iVar6);
      iVar6 = 0;
      *(undefined4 *)((longlong)param_1 + 8) = 0;
      if (*(int *)((longlong)param_1 + 0xc) != 0) {
        TScriptArray<TSizedDefaultAllocator<32>_>::ResizeTo
                  (param_1,0,iVar1,local_38.SetLayout.SparseArrayLayout.Alignment);
      }
      *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
      *(undefined4 *)((longlong)param_1 + 0x34) = 0;
      *(undefined4 *)((longlong)param_1 + 0x28) = 0;
      if (*(int *)((longlong)param_1 + 0x2c) != 0) {
        *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
        TScriptBitArray<FDefaultBitArrayAllocator,void>::Realloc
                  ((TScriptBitArray<FDefaultBitArrayAllocator,void> *)((longlong)param_1 + 0x10),0);
      }
      puVar5 = *(undefined4 **)((longlong)param_1 + 0x40);
      if (*(undefined4 **)((longlong)param_1 + 0x40) == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)((longlong)param_1 + 0x38);
      }
      if (0 < *(int *)((longlong)param_1 + 0x48)) {
        do {
          *puVar5 = 0xffffffff;
          puVar5 = puVar5 + 1;
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)((longlong)param_1 + 0x48));
      }
    }
    TOptional<TScriptSparseSet<FDefaultSetAllocator>_>::Reset(param_1);
  }
  return;
}

// ClearValueInternal @ 142169fc0

void __thiscall FSetProperty::ClearValueInternal(FSetProperty *this,void *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  FScriptSetHelper local_38;
  
  local_38.ElementProp = this->ElementProp;
  iVar1 = (this->SetLayout).SparseArrayLayout.Size;
  local_38.SetLayout.HashNextIdOffset = (this->SetLayout).HashNextIdOffset;
  local_38.SetLayout.HashIndexOffset = (this->SetLayout).HashIndexOffset;
  local_38.SetLayout.Size = (this->SetLayout).Size;
  local_38.SetLayout.SparseArrayLayout.Alignment = (this->SetLayout).SparseArrayLayout.Alignment;
  local_38.Set = param_1;
  local_38.SetLayout.SparseArrayLayout.Size = iVar1;
  if ((local_38.ElementProp == (FProperty *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementProp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1653,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = *(int *)((longlong)param_1 + 8) - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 != 0) {
    FScriptSetHelper::DestructItems(&local_38,0,iVar5);
    iVar5 = 0;
    *(undefined4 *)((longlong)param_1 + 8) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      TScriptArray<TSizedDefaultAllocator<32>_>::ResizeTo
                (param_1,0,iVar1,local_38.SetLayout.SparseArrayLayout.Alignment);
    }
    *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)((longlong)param_1 + 0x28) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) != 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
      TScriptBitArray<FDefaultBitArrayAllocator,void>::Realloc
                ((TScriptBitArray<FDefaultBitArrayAllocator,void> *)((longlong)param_1 + 0x10),0);
    }
    puVar4 = *(undefined4 **)((longlong)param_1 + 0x40);
    if (*(undefined4 **)((longlong)param_1 + 0x40) == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)((longlong)param_1 + 0x38);
    }
    if (0 < *(int *)((longlong)param_1 + 0x48)) {
      do {
        *puVar4 = 0xffffffff;
        puVar4 = puVar4 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)((longlong)param_1 + 0x48));
    }
  }
  return;
}

// Construct @ 14216c320

FField * __cdecl FSetProperty::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong uVar1;
  FProperty *this;
  FFieldClass *pFVar2;
  ulonglong local_res20;
  
  this = FMemory::Malloc(0x90,0);
  if (this != (FProperty *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pFVar2 = FProperty::StaticClass();
        FFieldClass::FFieldClass
                  (&::StaticFieldClass,L"FSetProperty",0x800000000000,
                   CASTCLASS_FSetProperty|CASTCLASS_FProperty|CASTCLASS_UField,pFVar2,Construct);
        atexit(`FSetProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__
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
    this->_padding_ = (longlong)&___7FSetProperty__6B_;
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
    this->_padding_ =
         (longlong)&___7__TProperty_V__TScriptSparseSet_VFDefaultSetAllocator____VFProperty____6B_;
    FProperty::SetElementSize(this,0x50);
    this->_padding_ = (longlong)&___7FSetProperty__6B_;
    this[1]._padding_ = 0;
    return (FField *)this;
  }
  return (FField *)0x0;
}

// ContainsClearOnFinishDestroyInternal @ 14216cf20

bool __thiscall
FSetProperty::ContainsClearOnFinishDestroyInternal
          (FSetProperty *this,TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if (this->ElementProp == (FProperty *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementProp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertySet.cpp"
                       ,0x30c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = this->ElementProp;
  if ((pFVar1->PropertyFlags & (CPF_NoDestructor|CPF_IsPlainOldData)) != CPF_None) {
    return false;
  }
                    /* WARNING: Could not recover jumptable at 0x00014216cf8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(pFVar1->_padding_ + 0x140))(pFVar1,param_1);
  return (bool)uVar4;
}

// ConvertFromType @ 142171410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EConvertFromTypeResult __thiscall
FSetProperty::ConvertFromType
          (FSetProperty *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2,uchar *param_3,
          UStruct *param_4,uchar *param_5)

{
  FName FVar1;
  uint *puVar2;
  FProperty *pFVar3;
  code *pcVar4;
  FSlotBase FVar5;
  UStruct *pUVar6;
  wchar_t *pwVar7;
  bool bVar8;
  char cVar9;
  EConvertFromTypeResult EVar10;
  FNameEntryId FVar11;
  uint uVar12;
  int iVar13;
  FArchive *pFVar14;
  ICppStructOps *pIVar15;
  undefined4 extraout_var;
  longlong *plVar16;
  void *pvVar17;
  undefined8 *puVar18;
  FPropertyTypeName *pFVar19;
  ForElementType<FSetElementId> *pFVar20;
  FName FVar21;
  void *pvVar22;
  FPropertyTypeName FVar23;
  TScriptSparseSet<FDefaultSetAllocator> *this_00;
  UStruct *pUVar24;
  uint uVar25;
  int iVar26;
  longlong lVar27;
  void *pvVar28;
  wchar_t *pwVar29;
  FSlotBase local_res18;
  undefined1 auStack_2f8 [32];
  UStruct *local_2d8;
  wchar_t *local_2d0;
  char local_2c8;
  uint local_2c4;
  uint local_2c0 [2];
  UStruct *local_2b8;
  int local_2b0;
  FProperty *local_2a8 [2];
  FPropertyTag local_298;
  undefined1 local_218 [4];
  FPropertyTypeName local_214;
  FScriptSetHelper *local_210;
  FArchive *local_208;
  FPropertyTag *local_200;
  FScriptSetHelper local_1f8;
  code *local_1d0;
  FScriptSetHelper **local_1c8;
  FPropertyTag *local_1c0;
  FProperty **local_1b8;
  FArchive *local_1b0;
  undefined1 local_1a8 [8];
  void *local_1a0 [2];
  FScriptSetHelper local_190;
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [32];
  TStringBuilderBase<wchar_t> local_108;
  wchar_t local_e8 [32];
  TStringBuilderBase<wchar_t> local_a8;
  TObjectPtr<UStruct>_u_0 local_48;
  
  local_48.DebugPtr = (UStruct *)(__security_cookie.value ^ (ulonglong)auStack_2f8);
  local_2b8 = param_4;
  local_res18.StructuredArchive = (FStructuredArchive *)param_2;
  local_200 = param_1;
  pFVar14 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&stack0x00000018);
  local_2a8[0] = this->ElementProp;
  pvVar17 = (void *)0x0;
  local_208 = pFVar14;
  if ((local_2a8[0] == (FProperty *)0x0) ||
     ((*(uint *)(local_2a8[0]->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
    local_2a8[0] = (FProperty *)0x0;
  }
  else if (((UScriptStruct *)local_2a8[0][1]._padding_ == (UScriptStruct *)0x0) ||
          ((pIVar15 = UScriptStruct::GetCppStructOps((UScriptStruct *)local_2a8[0][1]._padding_),
           pIVar15 != (ICppStructOps *)0x0 &&
           (pIVar15 = UScriptStruct::GetCppStructOps((UScriptStruct *)local_2a8[0][1]._padding_),
           !(pIVar15->FakeVPtr->Capabilities).HasGetTypeHash)))) {
    local_1b8 = local_2a8;
    local_1c0 = param_1;
    local_1b0 = pFVar14;
    `FSetProperty::ConvertFromType'::__l9::<lambda_1>::operator()(&local_1c0);
    iVar13 = (int)this->_padding_;
    if (iVar13 < 1) {
      local_2d0 = (wchar_t *)CONCAT44(local_2d0._4_4_,iVar13);
      local_2d8 = (UStruct *)((ulonglong)local_2d8 & 0xffffffff00000000);
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        EVar10 = (*pcVar4)();
        return EVar10;
      }
    }
    if ((param_3 == (uchar *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      EVar10 = (*pcVar4)();
      return EVar10;
    }
    local_1f8.ElementProp = this->ElementProp;
    local_1f8.SetLayout.HashNextIdOffset = (this->SetLayout).HashNextIdOffset;
    local_1f8.SetLayout.HashIndexOffset = (this->SetLayout).HashIndexOffset;
    local_1f8.SetLayout.Size = (this->SetLayout).Size;
    local_1f8.SetLayout.SparseArrayLayout.Alignment = (this->SetLayout).SparseArrayLayout.Alignment;
    this_00 = (TScriptSparseSet<FDefaultSetAllocator> *)
              (param_3 + *(int *)((longlong)&this->_padding_ + 4));
    iVar13 = (this->SetLayout).SparseArrayLayout.Size;
    local_1f8.Set = this_00;
    local_1f8.SetLayout.SparseArrayLayout.Size = iVar13;
    if ((local_1f8.ElementProp == (FProperty *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1653,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      EVar10 = (*pcVar4)();
      return EVar10;
    }
    iVar26 = (this_00->Elements).Data.ArrayNum - (this_00->Elements).NumFreeIndices;
    if (iVar26 != 0) {
      FScriptSetHelper::DestructItems(&local_1f8,0,iVar26);
      (this_00->Elements).Data.ArrayNum = 0;
      if ((this_00->Elements).Data.ArrayMax != 0) {
        TScriptArray<TSizedDefaultAllocator<32>_>::ResizeTo
                  ((TScriptArray<TSizedDefaultAllocator<32>_> *)this_00,0,iVar13,
                   local_1f8.SetLayout.SparseArrayLayout.Alignment);
      }
      (this_00->Elements).FirstFreeIndex = -1;
      (this_00->Elements).NumFreeIndices = 0;
      (this_00->Elements).AllocationFlags.NumBits = 0;
      if ((this_00->Elements).AllocationFlags.MaxBits != 0) {
        (this_00->Elements).AllocationFlags.MaxBits = 0;
        TScriptBitArray<FDefaultBitArrayAllocator,void>::Realloc
                  (&(this_00->Elements).AllocationFlags,0);
      }
      pFVar20 = *(ForElementType<FSetElementId> **)&(this_00->Hash).SecondaryData.field_0x0;
      if (pFVar20 == (ForElementType<FSetElementId> *)0x0) {
        pFVar20 = &this_00->Hash;
      }
      if (0 < this_00->HashSize) {
        do {
          pFVar20->InlineData[0] = 0xff;
          pFVar20->InlineData[1] = 0xff;
          pFVar20->InlineData[2] = 0xff;
          pFVar20->InlineData[3] = 0xff;
          pFVar20 = (ForElementType<FSetElementId> *)&pFVar20->_padding_;
          uVar25 = (int)pvVar17 + 1;
          pvVar17 = (void *)(ulonglong)uVar25;
        } while ((int)uVar25 < this_00->HashSize);
      }
    }
    return CannotConvert;
  }
  FVar1 = param_1->Type;
  FVar11 = FNameEntryId::FromValidEName((EName)local_218);
  FVar21.Number = 0;
  FVar21.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar11.Value);
  if (FVar1 != FVar21) {
    return UseSerializeItem;
  }
  if ((int)((ulonglong)*(undefined8 *)&pFVar14->field_0x40 >> 0x20) < 0x3f4) {
    uVar25 = (param_1->TypeName).Index;
    uVar12 = 0;
    if (0 < *(int *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar25 >> 0xd] + 8 +
                    (ulonglong)(uVar25 & 0x1fff) * 0xc)) {
      uVar12 = uVar25 + 1;
    }
    lVar27 = *(longlong *)
              ((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar12 >> 0xd] +
              (ulonglong)(uVar12 & 0x1fff) * 0xc);
    if (lVar27 == 0) {
      return UseSerializeItem;
    }
    plVar16 = (longlong *)
              (**(code **)(this->ElementProp->_padding_ + 0x158))(this->ElementProp,local_1a8);
    if (lVar27 == *plVar16) {
      return UseSerializeItem;
    }
  }
  else {
    cVar9 = (**(code **)(this->_padding_ + 0x198))(this,(param_1->TypeName).Index);
    if (cVar9 != '\0') {
      return UseSerializeItem;
    }
  }
  iVar13 = (int)this->_padding_;
  if (iVar13 < 1) {
    local_2d0 = (wchar_t *)CONCAT44(local_2d0._4_4_,iVar13);
    local_2d8 = (UStruct *)((ulonglong)local_2d8 & 0xffffffff00000000);
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      EVar10 = (*pcVar4)();
      return EVar10;
    }
  }
  if ((param_3 == (uchar *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    EVar10 = (*pcVar4)();
    return EVar10;
  }
  local_190.ElementProp = this->ElementProp;
  local_190.SetLayout.HashNextIdOffset = (this->SetLayout).HashNextIdOffset;
  local_190.SetLayout.HashIndexOffset = (this->SetLayout).HashIndexOffset;
  local_190.SetLayout.Size = (this->SetLayout).Size;
  local_190.SetLayout.SparseArrayLayout.Alignment = (this->SetLayout).SparseArrayLayout.Alignment;
  local_190.Set =
       (TScriptSparseSet<FDefaultSetAllocator> *)
       (param_3 + *(int *)((longlong)&this->_padding_ + 4));
  local_190.SetLayout.SparseArrayLayout.Size = (this->SetLayout).SparseArrayLayout.Size;
  if ((local_190.ElementProp == (FProperty *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementProp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1653,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    EVar10 = (*pcVar4)();
    return EVar10;
  }
  uVar25 = (param_1->TypeName).Index;
  local_298.Prop = this->ElementProp;
  local_298.TypeName.Index = 0;
  local_298.Type.ComparisonIndex.Value = 0;
  local_298.Type.Number = 0;
  local_298.Name.ComparisonIndex.Value = 0;
  local_298.Name.Number = 0;
  local_298.StructName.ComparisonIndex.Value = 0;
  local_298.StructName.Number = 0;
  local_298.EnumName.ComparisonIndex.Value = 0;
  local_298.EnumName.Number = 0;
  local_298.InnerType.ComparisonIndex.Value = 0;
  local_298.InnerType.Number = 0;
  local_298.ValueType.ComparisonIndex.Value = 0;
  local_298.ValueType.Number = 0;
  local_298.Size = 0;
  local_298.ArrayIndex = -1;
  local_298.SizeOffset = -1;
  local_298.StructGuid.A = 0;
  local_298.StructGuid.B = 0;
  local_298.StructGuid.C = 0;
  local_298.StructGuid.D = 0;
  local_298.PropertyGuid.A = 0;
  local_298.PropertyGuid.B = 0;
  local_298.PropertyGuid.C = 0;
  local_298.PropertyGuid.D = 0;
  local_298.HasPropertyGuid = '\0';
  local_298.BoolVal = '\0';
  local_298.SerializeType = Unknown;
  local_298.OverrideOperation = None;
  local_298.bExperimentalOverridableLogic = false;
  FVar23.Index = 0;
  if (0 < *(int *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar25 >> 0xd] + 8 +
                  (ulonglong)(uVar25 & 0x1fff) * 0xc)) {
    FVar23.Index = uVar25 + 1;
  }
  FPropertyTag::SetType(&local_298,FVar23);
  FVar5.StructuredArchive = local_res18.StructuredArchive;
  local_298.Name.ComparisonIndex = (param_1->Name).ComparisonIndex;
  local_298.Name.Number = (param_1->Name).Number;
  local_298.ArrayIndex = 0;
  local_2c4 = 0;
  local_2c8 = '\x01';
  pFVar14 = (local_res18.StructuredArchive)->Formatter->Inner;
  puVar2 = (uint *)**(undefined8 **)&pFVar14->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar14->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar14->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar14 + 0x188))(pFVar14,&local_2c4,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar14,&local_2c4);
    }
  }
  else {
    local_2c4 = *puVar2;
    **(longlong **)&pFVar14->field_0x8 = **(longlong **)&pFVar14->field_0x8 + 4;
  }
  pUVar24 = local_2b8;
  cVar9 = '\x01';
  if (local_2c4 != 0) {
    pvVar17 = FProperty::AllocateAndInitializeValue(this->ElementProp);
    pUVar24 = local_2b8;
    local_2d0 = (wchar_t *)0x0;
    local_2d8 = local_2b8;
    iVar13 = (**(code **)(this->ElementProp->_padding_ + 0xb0))
                       (this->ElementProp,&local_298,FVar5.StructuredArchive,pvVar17);
    if ((iVar13 - 1U & 0xfffffffd) == 0) {
      iVar13 = FScriptSetHelper::FindElementIndex(&local_190,pvVar17,0);
      if (iVar13 != -1) {
        FScriptSetHelper::RemoveAt(&local_190,iVar13,1);
      }
      pUVar6 = local_2b8;
      iVar13 = 1;
      pUVar24 = local_2b8;
      if (1 < (int)local_2c4) {
        do {
          local_2d0 = (wchar_t *)0x0;
          local_2d8 = pUVar6;
          iVar26 = (**(code **)(this->ElementProp->_padding_ + 0xb0))
                             (this->ElementProp,&local_298,FVar5.StructuredArchive,pvVar17);
          if (((iVar26 - 1U & 0xfffffffd) != 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ConvertResult == EConvertFromTypeResult::Converted || ConvertResult == EConvertFromTypeResult::Serialized"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertySet.cpp"
                                 ,0x3ae,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            EVar10 = (*pcVar4)();
            return EVar10;
          }
          iVar26 = FScriptSetHelper::FindElementIndex(&local_190,pvVar17,0);
          if (iVar26 != -1) {
            FScriptSetHelper::RemoveAt(&local_190,iVar26,1);
          }
          iVar13 = iVar13 + 1;
          pUVar24 = local_2b8;
          cVar9 = local_2c8;
        } while (iVar13 < (int)local_2c4);
      }
    }
    else {
      local_2c8 = '\0';
      cVar9 = '\0';
    }
  }
  local_2c0[0] = 0;
  pFVar14 = (FVar5.StructuredArchive)->Formatter->Inner;
  puVar2 = (uint *)**(undefined8 **)&pFVar14->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar14->field_0x8)[1] < puVar2 + 1) {
    if ((pFVar14->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar14 + 0x188))(pFVar14,local_2c0,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar14,local_2c0);
    }
  }
  else {
    local_2c0[0] = *puVar2;
    **(longlong **)&pFVar14->field_0x8 = **(longlong **)&pFVar14->field_0x8 + 4;
  }
  if (cVar9 == '\0') {
LAB_142171ddc:
    pwVar29 = L"";
    if (2 < (byte)LogClass._0_1_) {
      puVar18 = (undefined8 *)(**(code **)(*(longlong *)local_208 + 0x18))(local_208,local_1a0);
      if (*(int *)(puVar18 + 1) != 0) {
        pwVar29 = (wchar_t *)*puVar18;
      }
      pFVar19 = UE::FPropertyTypeName::FPropertyTypeName(&local_214,this->ElementProp);
      local_a8.Base = (wchar_t *)&stack0xffffffffffffff78;
      local_a8.bIsDynamic = false;
      local_a8.bIsExternal = false;
      local_a8.CurPos = (wchar_t *)&stack0xffffffffffffff78;
      local_a8.End = (wchar_t *)&stack0xffffffffffffffb8;
      UE::AppendNode(&local_a8,
                     (FPropertyTypeNameNode *)
                     ((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)pFVar19->Index >> 0xd] +
                     (ulonglong)(pFVar19->Index & 0x1fff) * 0xc));
      if (local_a8.End < local_a8.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_a8,1);
      }
      pwVar7 = local_a8.Base;
      *local_a8.CurPos = L'\0';
      local_108.Base = local_e8;
      local_108.CurPos = local_e8;
      local_108.End = (wchar_t *)&local_a8;
      local_108.bIsDynamic = false;
      local_108.bIsExternal = false;
      UE::AppendNode(&local_108,
                     (FPropertyTypeNameNode *)
                     ((longlong)
                      UE::GPropertyTypeNameTable.Blocks[(longlong)local_298.TypeName.Index >> 0xd] +
                     (ulonglong)(local_298.TypeName.Index & 0x1fff) * 0xc));
      if (local_108.End < (TStringBuilderBase<wchar_t> *)(local_108.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_108,1);
      }
      *local_108.CurPos = L'\0';
      local_168.Base = local_148;
      local_168.CurPos = local_148;
      local_168.End = (wchar_t *)&local_108;
      local_168.bIsDynamic = false;
      local_168.bIsExternal = false;
      ::FName::AppendString(&local_200->Name,&local_168);
      if (local_168.End < (TStringBuilderBase<wchar_t> *)(local_168.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_168,1);
      }
      *local_168.CurPos = L'\0';
      local_2d8 = (UStruct *)pwVar7;
      local_2d0 = pwVar29;
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_108);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_a8);
      if (local_1a0[0] != (void *)0x0) {
        FMemory::Free(local_1a0[0]);
      }
    }
  }
  else if (local_2c0[0] != 0) {
    if (pvVar17 == (void *)0x0) {
      pvVar17 = FProperty::AllocateAndInitializeValue(this->ElementProp);
    }
    local_2d0 = (wchar_t *)0x0;
    local_2d8 = pUVar24;
    iVar13 = (**(code **)(this->ElementProp->_padding_ + 0xb0))
                       (this->ElementProp,&local_298,FVar5.StructuredArchive,pvVar17);
    if ((iVar13 - 1U & 0xfffffffd) == 0) {
      iVar13 = FScriptSetHelper::FindElementIndex(&local_190,pvVar17,0);
      if (iVar13 == -1) {
        iVar13 = FScriptSetHelper::AddDefaultValue_Invalid_NeedsRehash(&local_190);
        pFVar3 = this->ElementProp;
        lVar27 = (longlong)(iVar13 * local_190.SetLayout.SparseArrayLayout.Size) +
                 ((local_190.Set)->Elements).Data._padding_;
        if (pFVar3->ArrayDim < 1) {
          local_2d0 = (wchar_t *)CONCAT44(local_2d0._4_4_,pFVar3->ArrayDim);
          local_2d8 = (UStruct *)((ulonglong)local_2d8 & 0xffffffff00000000);
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            EVar10 = (*pcVar4)();
            return EVar10;
          }
        }
        if ((pvVar17 == (void *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          EVar10 = (*pcVar4)();
          return EVar10;
        }
        pvVar28 = (void *)((longlong)pFVar3->Offset_Internal + (longlong)pvVar17);
        if (pFVar3->ArrayDim < 1) {
          local_2d0 = (wchar_t *)CONCAT44(local_2d0._4_4_,pFVar3->ArrayDim);
          local_2d8 = (UStruct *)((ulonglong)local_2d8 & 0xffffffff00000000);
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            EVar10 = (*pcVar4)();
            return EVar10;
          }
        }
        if ((lVar27 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          EVar10 = (*pcVar4)();
          return EVar10;
        }
        pvVar22 = (void *)(pFVar3->Offset_Internal + lVar27);
        pUVar24 = local_2b8;
        cVar9 = local_2c8;
        if (pvVar22 != pvVar28) {
          if (((uint)(int)pFVar3->PropertyFlags >> 0x1e & 1) == 0) {
            (**(code **)(pFVar3->_padding_ + 0xf0))(pFVar3,pvVar22,pvVar28,pFVar3->ArrayDim);
            pUVar24 = local_2b8;
            cVar9 = local_2c8;
          }
          else {
            memcpy(pvVar22,pvVar28,(longlong)pFVar3->ElementSize * (longlong)pFVar3->ArrayDim);
            pUVar24 = local_2b8;
            cVar9 = local_2c8;
          }
        }
      }
      local_2b0 = 1;
      if (1 < (int)local_2c0[0]) {
        do {
          local_2d0 = (wchar_t *)0x0;
          local_2d8 = pUVar24;
          iVar13 = (**(code **)(this->ElementProp->_padding_ + 0xb0))
                             (this->ElementProp,&local_298,FVar5.StructuredArchive,pvVar17);
          if (((iVar13 - 1U & 0xfffffffd) != 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ConvertResult == EConvertFromTypeResult::Converted || ConvertResult == EConvertFromTypeResult::Serialized"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertySet.cpp"
                                 ,0x3dd,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            EVar10 = (*pcVar4)();
            return EVar10;
          }
          iVar13 = FScriptSetHelper::FindElementIndex(&local_190,pvVar17,0);
          if (iVar13 == -1) {
            iVar13 = FScriptSetHelper::AddDefaultValue_Invalid_NeedsRehash(&local_190);
            pFVar3 = this->ElementProp;
            lVar27 = (longlong)(iVar13 * local_190.SetLayout.SparseArrayLayout.Size) +
                     ((local_190.Set)->Elements).Data._padding_;
            if (pFVar3->ArrayDim < 1) {
              local_2d0 = (wchar_t *)CONCAT44(local_2d0._4_4_,pFVar3->ArrayDim);
              local_2d8 = (UStruct *)((ulonglong)local_2d8 & 0xffffffff00000000);
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar8) {
                pcVar4 = (code *)swi(3);
                EVar10 = (*pcVar4)();
                return EVar10;
              }
            }
            if ((pvVar17 == (void *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar8)) {
              pcVar4 = (code *)swi(3);
              EVar10 = (*pcVar4)();
              return EVar10;
            }
            pvVar28 = (void *)((longlong)pFVar3->Offset_Internal + (longlong)pvVar17);
            if (pFVar3->ArrayDim < 1) {
              local_2d0 = (wchar_t *)CONCAT44(local_2d0._4_4_,pFVar3->ArrayDim);
              local_2d8 = (UStruct *)((ulonglong)local_2d8 & 0xffffffff00000000);
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
              if (bVar8) {
                pcVar4 = (code *)swi(3);
                EVar10 = (*pcVar4)();
                return EVar10;
              }
            }
            if ((lVar27 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar8)) {
              pcVar4 = (code *)swi(3);
              EVar10 = (*pcVar4)();
              return EVar10;
            }
            pvVar22 = (void *)(pFVar3->Offset_Internal + lVar27);
            pUVar24 = local_2b8;
            if (pvVar22 != pvVar28) {
              if (((uint)(int)pFVar3->PropertyFlags >> 0x1e & 1) == 0) {
                (**(code **)(pFVar3->_padding_ + 0xf0))(pFVar3,pvVar22,pvVar28,pFVar3->ArrayDim);
                pUVar24 = local_2b8;
              }
              else {
                memcpy(pvVar22,pvVar28,(longlong)pFVar3->ElementSize * (longlong)pFVar3->ArrayDim);
                pUVar24 = local_2b8;
              }
            }
          }
          local_2b0 = local_2b0 + 1;
          cVar9 = local_2c8;
        } while (local_2b0 < (int)local_2c0[0]);
      }
    }
    else {
      cVar9 = '\0';
    }
    local_210 = &local_190;
    local_1c8 = &local_210;
    local_1d0 = UE::Core::Private::Function::
                TFunctionRefCaller<`FScriptSetHelper::Rehash'::__l2::<lambda_1>,unsigned_int,void_const_*>
                ::Call;
    TScriptSparseSet<FDefaultSetAllocator>::Rehash
              (local_190.Set,&local_190.SetLayout,
               (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_1d0);
    bVar8 = false;
    if (cVar9 != '\0') goto LAB_142172006;
    cVar9 = '\0';
    goto LAB_142171ddc;
  }
  bVar8 = cVar9 == '\0';
LAB_142172006:
  if (pvVar17 != (void *)0x0) {
    FProperty::DestroyAndFreeValue(this->ElementProp,pvVar17);
  }
  return !bVar8 + CannotConvert;
}

// CopyValuesInternal @ 142174e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSetProperty::CopyValuesInternal(FSetProperty *this,void *param_1,void *param_2,int param_3)

{
  ForElementType<unsigned_int> FVar1;
  longlong lVar2;
  FProperty *pFVar3;
  code *pcVar4;
  TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
  *pTVar5;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  void *pvVar11;
  void *_Dst;
  longlong *plVar12;
  int iVar13;
  ForElementType<unsigned_int> FVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  int local_c0;
  int local_b8;
  int local_b4;
  FSetProperty *local_b0;
  longlong *local_a8;
  FScriptSetHelper *local_a0;
  code *local_98;
  FScriptSetHelper **local_90;
  undefined8 local_78;
  undefined8 uStack_70;
  int local_68;
  FScriptSetHelper local_60;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_b0 = this;
  local_a8 = param_2;
  if ((param_3 != 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertySet.cpp"
                         ,0x2dc,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_78._0_4_ = (this->SetLayout).HashNextIdOffset;
  local_78._4_4_ = (this->SetLayout).HashIndexOffset;
  uStack_70._0_4_ = (this->SetLayout).Size;
  uStack_70._4_4_ = (this->SetLayout).SparseArrayLayout.Alignment;
  local_68 = (this->SetLayout).SparseArrayLayout.Size;
  if ((this->ElementProp == (FProperty *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementProp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1653,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_60.ElementProp = this->ElementProp;
  local_60.SetLayout.SparseArrayLayout.Size = (this->SetLayout).SparseArrayLayout.Size;
  local_60.SetLayout.HashNextIdOffset = (this->SetLayout).HashNextIdOffset;
  local_60.SetLayout.HashIndexOffset = (this->SetLayout).HashIndexOffset;
  local_60.SetLayout.Size = (this->SetLayout).Size;
  local_60.SetLayout.SparseArrayLayout.Alignment = (this->SetLayout).SparseArrayLayout.Alignment;
  local_60.Set = param_1;
  if ((local_60.ElementProp == (FProperty *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementProp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1653,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar16 = *(int *)((longlong)param_2 + 8) - *(int *)((longlong)param_2 + 0x34);
  iVar15 = ((local_60.Set)->Elements).Data.ArrayNum - ((local_60.Set)->Elements).NumFreeIndices;
  if (iVar15 == 0) {
    if (iVar16 == 0) {
      return;
    }
  }
  else {
    FScriptSetHelper::DestructItems(&local_60,0,iVar15);
  }
  TScriptSparseSet<FDefaultSetAllocator>::Empty(local_60.Set,iVar16,&local_60.SetLayout);
  if (iVar16 != 0) {
    uVar17 = 1;
    iVar18 = 0;
    local_b8 = local_68;
    local_b4 = 0;
    iVar15 = local_68;
    do {
      iVar13 = local_b4;
      if ((-1 < iVar18) && (iVar18 < (int)*(longlong *)((longlong)param_2 + 0x28))) {
        if (((int)*(longlong *)((longlong)param_2 + 0x28) <= iVar18) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x8c4,L""), iVar15 = local_b8, bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar12 = (longlong *)((longlong)param_2 + 0x10);
        if (*(longlong **)((longlong)param_2 + 0x20) != (longlong *)0x0) {
          plVar12 = *(longlong **)((longlong)param_2 + 0x20);
        }
        iVar8 = iVar18;
        if (iVar18 < 0) {
          iVar8 = iVar18 + 0x1f;
        }
        if ((*(uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4) & uVar17) != 0) {
          uVar9 = TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
                  ::AddUninitialized(&(local_60.Set)->Elements,&local_60.SetLayout.SparseArrayLayout
                                    );
          pTVar6 = local_60.Set;
          if (((int)uVar9 < 0) || (((local_60.Set)->Elements).AllocationFlags.NumBits <= (int)uVar9)
             ) {
LAB_14217508d:
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(InternalIndex)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1841,L"");
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          else {
            pTVar5 = &(local_60.Set)->Elements;
            if ((((local_60.Set)->Elements).AllocationFlags.NumBits <= (int)uVar9) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValidIndex(Index)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x8c4,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FVar1 = (pTVar6->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
            FVar14 = (ForElementType<unsigned_int>)&pTVar5->AllocationFlags;
            if (FVar1 != (ForElementType<unsigned_int>)0x0) {
              FVar14 = FVar1;
            }
            uVar10 = uVar9;
            if ((int)uVar9 < 0) {
              uVar10 = uVar9 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar14 + (longlong)((int)uVar10 >> 5) * 4) >> (uVar9 & 0x1f) &
                1) == 0) goto LAB_14217508d;
          }
          pvVar11 = (void *)((longlong)(int)(local_60.SetLayout.SparseArrayLayout.Size * uVar9) +
                            ((local_60.Set)->Elements).Data._padding_);
          if (((uint)(int)(local_60.ElementProp)->PropertyFlags >> 9 & 1) == 0) {
            FProperty::InitializeValue_InContainer(local_60.ElementProp,pvVar11);
          }
          else {
            memset(pvVar11,0,(longlong)local_60.SetLayout.Size);
          }
          lVar2 = *(longlong *)param_2;
          lVar19 = (longlong)(int)(local_60.SetLayout.SparseArrayLayout.Size * uVar9) +
                   ((local_60.Set)->Elements).Data._padding_;
          pFVar3 = local_b0->ElementProp;
          if (pFVar3->ArrayDim < 1) {
            local_c8 = 0;
            local_c0 = pFVar3->ArrayDim;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          if ((iVar13 + lVar2 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pvVar11 = (void *)((longlong)pFVar3->Offset_Internal + iVar13 + lVar2);
          if (pFVar3->ArrayDim < 1) {
            local_c8 = 0;
            local_c0 = pFVar3->ArrayDim;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          if ((lVar19 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("ContainerPtr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2de,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          _Dst = (void *)(pFVar3->Offset_Internal + lVar19);
          if (_Dst != pvVar11) {
            if (((uint)(int)pFVar3->PropertyFlags >> 0x1e & 1) == 0) {
              (**(code **)(pFVar3->_padding_ + 0xf0))(pFVar3,_Dst,pvVar11,pFVar3->ArrayDim);
            }
            else {
              memcpy(_Dst,pvVar11,(longlong)pFVar3->ElementSize * (longlong)pFVar3->ArrayDim);
            }
          }
          iVar16 = iVar16 + -1;
          param_2 = local_a8;
          iVar15 = local_b8;
          iVar13 = local_b4;
        }
      }
      local_b4 = iVar13 + iVar15;
      uVar17 = uVar17 << 1 | (uint)((int)uVar17 < 0);
      iVar18 = iVar18 + 1;
    } while (iVar16 != 0);
    local_a0 = &local_60;
    local_90 = &local_a0;
    local_98 = UE::Core::Private::Function::
               TFunctionRefCaller<`FScriptSetHelper::Rehash'::__l2::<lambda_1>,unsigned_int,void_const_*>
               ::Call;
    TScriptSparseSet<FDefaultSetAllocator>::Rehash
              (local_60.Set,&local_60.SetLayout,
               (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_98);
  }
  return;
}

// DestroyValueInternal @ 1421756c0

void __thiscall FSetProperty::DestroyValueInternal(FSetProperty *this,void *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  FScriptSetHelper local_38;
  
  local_38.ElementProp = this->ElementProp;
  iVar1 = (this->SetLayout).SparseArrayLayout.Size;
  local_38.SetLayout.HashNextIdOffset = (this->SetLayout).HashNextIdOffset;
  local_38.SetLayout.HashIndexOffset = (this->SetLayout).HashIndexOffset;
  local_38.SetLayout.Size = (this->SetLayout).Size;
  local_38.SetLayout.SparseArrayLayout.Alignment = (this->SetLayout).SparseArrayLayout.Alignment;
  local_38.Set = param_1;
  local_38.SetLayout.SparseArrayLayout.Size = iVar1;
  if ((local_38.ElementProp == (FProperty *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementProp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1653,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = *(int *)((longlong)param_1 + 8) - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 != 0) {
    FScriptSetHelper::DestructItems(&local_38,0,iVar5);
    iVar5 = 0;
    *(undefined4 *)((longlong)param_1 + 8) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      TScriptArray<TSizedDefaultAllocator<32>_>::ResizeTo
                (param_1,0,iVar1,local_38.SetLayout.SparseArrayLayout.Alignment);
    }
    *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)((longlong)param_1 + 0x28) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) != 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
      TScriptBitArray<FDefaultBitArrayAllocator,void>::Realloc
                ((TScriptBitArray<FDefaultBitArrayAllocator,void> *)((longlong)param_1 + 0x10),0);
    }
    puVar4 = *(undefined4 **)((longlong)param_1 + 0x40);
    if (*(undefined4 **)((longlong)param_1 + 0x40) == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)((longlong)param_1 + 0x38);
    }
    if (0 < *(int *)((longlong)param_1 + 0x48)) {
      do {
        *puVar4 = 0xffffffff;
        puVar4 = puVar4 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)((longlong)param_1 + 0x48));
    }
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)param_1 == (void *)0x0) {
    return;
  }
  FMemory::Free(*(void **)param_1);
  return;
}

// ExportText_Internal @ 142176f10

void __thiscall
FSetProperty::ExportText_Internal
          (FSetProperty *this,FString *param_1,void *param_2,EPropertyPointerType param_3,
          void *param_4,UObject *param_5,int param_6,UObject *param_7)

{
  FProperty *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  wchar_t wVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  void *pvVar12;
  void *pvVar13;
  uint uVar14;
  int iVar15;
  void *pvVar16;
  void *local_88;
  undefined8 *local_80;
  FScriptSetHelper local_68;
  
  local_80 = (undefined8 *)0x0;
  if (param_3 == Container) {
    cVar3 = (**(code **)(this->_padding_ + 0x78))();
    if (cVar3 == '\0') {
      param_2 = (void *)((longlong)*(int *)((longlong)&this->_padding_ + 4) + (longlong)param_2);
    }
    else {
      local_80 = FProperty::AllocateAndInitializeValue((FProperty *)this);
      FProperty::GetValue_InContainer((FProperty *)this,param_2,local_80);
      param_2 = local_80;
    }
  }
  if ((this->ElementProp == (FProperty *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementProp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1653,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(int *)((longlong)param_2 + 8) == *(int *)((longlong)param_2 + 0x34)) {
    ::FString::AppendChars(param_1,L"()",2);
  }
  else {
    uVar9 = param_6 & 0x40;
    local_88 = (void *)0x0;
    if (((this->ElementProp != (FProperty *)0x0) &&
        ((*(uint *)(this->ElementProp->_padding_ + 0x18) >> 0x14 & 1) != 0)) && (uVar9 == 0)) {
      local_88 = FMemory::Malloc((longlong)(this->SetLayout).Size,0);
      pFVar1 = this->ElementProp;
      if (((uint)(int)pFVar1->PropertyFlags >> 9 & 1) == 0) {
        (**(code **)(pFVar1->_padding_ + 0x150))(pFVar1,local_88);
      }
      else {
        memset(local_88,0,(longlong)pFVar1->ElementSize * (longlong)pFVar1->ArrayDim);
      }
    }
    local_68.ElementProp = this->ElementProp;
    local_68.Set = param_4;
    local_68.SetLayout.SparseArrayLayout.Size = (this->SetLayout).SparseArrayLayout.Size;
    local_68.SetLayout.HashNextIdOffset = (this->SetLayout).HashNextIdOffset;
    local_68.SetLayout.HashIndexOffset = (this->SetLayout).HashIndexOffset;
    local_68.SetLayout.Size = (this->SetLayout).Size;
    local_68.SetLayout.SparseArrayLayout.Alignment = (this->SetLayout).SparseArrayLayout.Alignment;
    if ((local_68.ElementProp == (FProperty *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1653,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar5 = true;
    iVar15 = *(int *)((longlong)param_2 + 8) - *(int *)((longlong)param_2 + 0x34);
    pvVar16 = *(void **)param_2;
    bVar4 = true;
    if (((uint)param_6 >> 0x19 & 1) == 0) {
      iVar10 = 0;
      if (iVar15 != 0) {
        uVar14 = 1;
        do {
          if ((-1 < iVar10) && (iVar10 < *(int *)((longlong)param_2 + 0x28))) {
            if ((*(int *)((longlong)param_2 + 0x28) <= iVar10) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValidIndex(Index)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x8c4,L""), bVar5 = bVar4, bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            puVar11 = (undefined8 *)((longlong)param_2 + 0x10);
            if (*(undefined8 **)((longlong)param_2 + 0x20) != (undefined8 *)0x0) {
              puVar11 = *(undefined8 **)((longlong)param_2 + 0x20);
            }
            iVar7 = iVar10;
            if (iVar10 < 0) {
              iVar7 = iVar10 + 0x1f;
            }
            if ((*(uint *)((longlong)puVar11 + (longlong)(iVar7 >> 5) * 4) & uVar14) != 0) {
              wVar8 = L'(';
              if (!bVar5) {
                wVar8 = L',';
              }
              ::FString::AppendChar(param_1,wVar8);
              pvVar13 = (void *)0x0;
              if (uVar9 != 0) {
                pvVar13 = pvVar16;
              }
              (**(code **)(this->ElementProp->_padding_ + 0xe0))
                        (this->ElementProp,param_1,pvVar16,0,pvVar13,param_5,param_6 | 1,param_7);
              iVar15 = iVar15 + -1;
              bVar5 = false;
              bVar4 = false;
            }
          }
          iVar10 = iVar10 + 1;
          pvVar16 = (void *)((longlong)pvVar16 + (longlong)(this->SetLayout).Size);
          uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
        } while (iVar15 != 0);
      }
      ::FString::AppendChars(param_1,L")",1);
    }
    else {
      iVar10 = 0;
      if (iVar15 != 0) {
        uVar14 = 1;
        do {
          if ((-1 < iVar10) && (iVar10 < *(int *)((longlong)param_2 + 0x28))) {
            if ((*(int *)((longlong)param_2 + 0x28) <= iVar10) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValidIndex(Index)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x8c4,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            puVar11 = (undefined8 *)((longlong)param_2 + 0x10);
            if (*(undefined8 **)((longlong)param_2 + 0x20) != (undefined8 *)0x0) {
              puVar11 = *(undefined8 **)((longlong)param_2 + 0x20);
            }
            iVar7 = iVar10;
            if (iVar10 < 0) {
              iVar7 = iVar10 + 0x1f;
            }
            if ((*(uint *)((longlong)puVar11 + (longlong)(iVar7 >> 5) * 4) & uVar14) != 0) {
              if (bVar4) {
                bVar4 = false;
              }
              else {
                ::FString::AppendChar(param_1,L'\n');
              }
              pvVar13 = local_88;
              if (local_88 == (void *)0x0) {
                if ((param_4 == (void *)0x0) ||
                   (iVar7 = FScriptSetHelper::FindElementIndex(&local_68,pvVar16,0), iVar7 < 0)) {
                  pvVar13 = (void *)0x0;
                }
                else {
                  pvVar13 = (void *)((longlong)(local_68.SetLayout.SparseArrayLayout.Size * iVar7) +
                                    ((local_68.Set)->Elements).Data._padding_);
                }
              }
              pvVar12 = pvVar16;
              if (uVar9 == 0) {
                pvVar12 = pvVar13;
              }
              (**(code **)(this->ElementProp->_padding_ + 0xe0))
                        (this->ElementProp,param_1,pvVar16,0,pvVar12,param_5,param_6 | 1,param_7);
              iVar15 = iVar15 + -1;
            }
          }
          iVar10 = iVar10 + 1;
          pvVar16 = (void *)((longlong)pvVar16 + (longlong)(this->SetLayout).Size);
          uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
        } while (iVar15 != 0);
      }
    }
    if (local_88 != (void *)0x0) {
      pFVar1 = this->ElementProp;
      if ((pFVar1->PropertyFlags & CPF_NoDestructor) == CPF_None) {
        (**(code **)(pFVar1->_padding_ + 0x138))(pFVar1,local_88);
      }
      FMemory::Free(local_88);
    }
  }
  FProperty::DestroyAndFreeValue((FProperty *)this,local_80);
  return;
}

// FinishDestroyInternal @ 142178810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FSetProperty::FinishDestroyInternal(FSetProperty *this,void *param_1)

{
  TScriptSparseSet<FDefaultSetAllocator> *pTVar1;
  ForElementType<unsigned_int> FVar2;
  FProperty *pFVar3;
  code *pcVar4;
  FScriptSetHelper *pFVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  ForElementType<unsigned_int> FVar9;
  uint uVar10;
  undefined1 auStack_88 [32];
  TScriptContainerIterator<FScriptSetHelper> local_68;
  FScriptSetHelper local_58;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_58.ElementProp = this->ElementProp;
  if (((local_58.ElementProp)->PropertyFlags & (CPF_NoDestructor|CPF_IsPlainOldData)) == CPF_None) {
    local_58.SetLayout.SparseArrayLayout.Size = (this->SetLayout).SparseArrayLayout.Size;
    local_58.SetLayout.HashNextIdOffset = (this->SetLayout).HashNextIdOffset;
    local_58.SetLayout.HashIndexOffset = (this->SetLayout).HashIndexOffset;
    local_58.SetLayout.Size = (this->SetLayout).Size;
    local_58.SetLayout.SparseArrayLayout.Alignment = (this->SetLayout).SparseArrayLayout.Alignment;
    local_58.Set = param_1;
    if ((local_58.ElementProp == (FProperty *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1653,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_68.Container = &local_58;
    local_68.InternalIndex = -1;
    local_68.LogicalIndex = -1;
    TScriptContainerIterator<FScriptSetHelper>::Advance(&local_68);
    while( true ) {
      pFVar5 = local_68.Container;
      uVar8 = local_68.InternalIndex;
      pTVar1 = (local_68.Container)->Set;
      if ((local_68.InternalIndex < 0) ||
         ((pTVar1->Elements).AllocationFlags.NumBits <= local_68.InternalIndex)) break;
      if (((pTVar1->Elements).AllocationFlags.NumBits <= local_68.InternalIndex) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x8c4,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar2 = (pTVar1->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<unsigned_int>)&(pTVar1->Elements).AllocationFlags;
      if (FVar2 != (ForElementType<unsigned_int>)0x0) {
        FVar9 = FVar2;
      }
      uVar10 = uVar8;
      if ((int)uVar8 < 0) {
        uVar10 = uVar8 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar9 + (longlong)((int)uVar10 >> 5) * 4) >> (uVar8 & 0x1f) & 1) == 0
         ) {
        return;
      }
      iVar6 = local_68.InternalIndex;
      pTVar1 = pFVar5->Set;
      if (((int)uVar8 < 0) || ((pTVar1->Elements).AllocationFlags.NumBits <= (int)uVar8)) {
LAB_1421789a7:
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Iterator",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x16bb,L"Invalid Iterator. Test Iterator before calling this method.");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        if (((pTVar1->Elements).AllocationFlags.NumBits <= (int)uVar8) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x8c4,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar2 = (pTVar1->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
        FVar9 = (ForElementType<unsigned_int>)&(pTVar1->Elements).AllocationFlags;
        if (FVar2 != (ForElementType<unsigned_int>)0x0) {
          FVar9 = FVar2;
        }
        uVar10 = uVar8 & 0x1f;
        if ((int)uVar8 < 0) {
          uVar8 = uVar8 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar9 + (longlong)((int)uVar8 >> 5) * 4) >> uVar10 & 1) == 0)
        goto LAB_1421789a7;
      }
      pFVar3 = this->ElementProp;
      if ((pFVar3->PropertyFlags & (CPF_NoDestructor|CPF_IsPlainOldData)) == CPF_None) {
        (**(code **)(pFVar3->_padding_ + 0x148))
                  (pFVar3,(longlong)(local_58.SetLayout.SparseArrayLayout.Size * iVar6) +
                          ((local_58.Set)->Elements).Data._padding_);
      }
      TScriptContainerIterator<FScriptSetHelper>::Advance(&local_68);
    }
  }
  return;
}

// GetCPPMacroType @ 1421799f0

FString * __thiscall
FSetProperty::GetCPPMacroType(FSetProperty *this,FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FString local_28;
  void *local_18 [2];
  
  (**(code **)(this->ElementProp->_padding_ + 0x68))(this->ElementProp,local_18,0,0);
  ::FString::PrintfImpl(&local_28,L"%s");
  if (param_1 != &local_28) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    (param_1->Data).ArrayNum = local_28.Data.ArrayNum;
    (param_1->Data).ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  ::FString::FString(__return_storage_ptr__,L"TSET");
  return __return_storage_ptr__;
}

// GetCPPType @ 14217b290

FString * __thiscall
FSetProperty::GetCPPType
          (FSetProperty *this,FString *__return_storage_ptr__,FString *param_1,uint param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  
  pFVar2 = (FScriptContainerElement *)0x0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  if (param_1 != (FString *)0x0) {
    pFVar1 = (FString *)
             (**(code **)(this->ElementProp->_padding_ + 0x68))
                       (this->ElementProp,local_28,&local_38,param_2 & 0xfffffffd);
    if (&local_48 != pFVar1) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = (pFVar1->Data).ArrayNum;
      local_48.Data.ArrayMax = (pFVar1->Data).ArrayMax;
      (pFVar1->Data).ArrayNum = 0;
      (pFVar1->Data).ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = pFVar2;
    }
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
  }
  GetCPPTypeCustom(this,__return_storage_ptr__,param_1,param_2,&local_48,&local_38);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return __return_storage_ptr__;
}

// GetCPPTypeCustom @ 14217b9a0

FString * __thiscall
FSetProperty::GetCPPTypeCustom
          (FSetProperty *this,FString *__return_storage_ptr__,FString *param_1,uint param_2,
          FString *param_3,FString *param_4)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ForAnyElementType FVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (param_1 == (FString *)0x0) goto LAB_14217bbf0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = (param_4->Data).ArrayNum;
  lVar12 = (longlong)local_68.Data.ArrayNum;
  pFVar1 = (param_4->Data).AllocatorInstance.Data;
  if (local_68.Data.ArrayNum == 0) {
    local_68.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_68.Data.ArrayNum,
               &local_68.Data.ArrayMax);
    memcpy(local_68.Data.AllocatorInstance.Data,pFVar1,lVar12 * 2);
  }
  bVar2 = true;
  iVar7 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  iVar8 = 0;
  bVar5 = false;
  if (iVar7 == 0) {
LAB_14217baa0:
    bVar4 = bVar5;
    iVar7 = local_68.Data.ArrayNum + -1;
    if (local_68.Data.ArrayNum == 0) {
      iVar7 = iVar8;
    }
    bVar5 = false;
    if (iVar7 == 0) {
      iVar7 = (param_3->Data).ArrayNum;
      iVar9 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar9 = iVar8;
      }
      if (iVar9 != 0) {
        bVar3 = true;
        if (iVar7 == 0) {
          pwVar11 = L"";
          iVar7 = iVar8;
        }
        else {
          pwVar11 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
          iVar7 = iVar7 + -1;
        }
        iVar9 = iVar7;
        if (1 < iVar7) {
          iVar9 = 1;
        }
        if (0 < iVar9) {
          iVar8 = iVar9;
        }
        ::FString::FString(&local_48,
                           (wchar_t *)((longlong)pwVar11 + ((longlong)iVar7 - (longlong)iVar8) * 2))
        ;
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_48.Data.ArrayNum != 0) {
          FVar10.Data = local_48.Data.AllocatorInstance.Data;
        }
        iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar10.Data,L">");
        bVar5 = true;
        if (iVar7 == 0) goto LAB_14217bb19;
      }
    }
    bVar3 = bVar5;
    bVar2 = false;
  }
  else {
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar10.Data = local_68.Data.AllocatorInstance.Data;
    }
    iVar9 = iVar7;
    if (1 < iVar7) {
      iVar9 = 1;
    }
    iVar6 = iVar8;
    if (0 < iVar9) {
      iVar6 = iVar9;
    }
    ::FString::FString(&local_38,(wchar_t *)(FVar10.Data + ((longlong)iVar7 - (longlong)iVar6) * 2))
    ;
    bVar4 = true;
    bVar3 = false;
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar10.Data = local_38.Data.AllocatorInstance.Data;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar10.Data,L">");
    bVar5 = true;
    if (iVar7 != 0) goto LAB_14217baa0;
  }
LAB_14217bb19:
  if ((bVar3) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    ::FString::AppendChars(&local_68,L" ",1);
  }
  ::FString::PrintfImpl(&local_58,L"<%s%s>");
  if (param_1 != &local_58) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    (param_1->Data).ArrayNum = local_58.Data.ArrayNum;
    (param_1->Data).ArrayMax = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
LAB_14217bbf0:
  ::FString::FString(__return_storage_ptr__,L"TSet");
  return __return_storage_ptr__;
}

// GetInnerFieldByName @ 14217bf90

FField * __thiscall FSetProperty::GetInnerFieldByName(FSetProperty *this,FName *param_1)

{
  FProperty *pFVar1;
  bool bVar2;
  FName FVar3;
  
  pFVar1 = this->ElementProp;
  if (pFVar1 != (FProperty *)0x0) {
    bVar2 = IsThisNotNull(pFVar1,"FField::GetFName");
    if (bVar2) {
      FVar3 = (FName)pFVar1->_padding_;
    }
    else {
      FVar3.ComparisonIndex.Value = 0;
      FVar3.Number = 0;
    }
    if (FVar3 == *param_1) {
      return (FField *)this->ElementProp;
    }
  }
  return (FField *)0x0;
}

// GetInnerFields @ 14217c2a0

void __thiscall
FSetProperty::GetInnerFields
          (FSetProperty *this,TArray<FField_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FProperty *local_18 [2];
  
  local_18[0] = this->ElementProp;
  if (local_18[0] != (FProperty *)0x0) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = param_1->ArrayNum;
    if (iVar4 == param_1->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar4 + 1;
    *(FProperty **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
    (**(code **)(this->ElementProp->_padding_ + 0x58))(this->ElementProp,param_1);
  }
  return;
}

// GetPreloadDependencies @ 14217d520

void __thiscall
FSetProperty::GetPreloadDependencies
          (FSetProperty *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FProperty *pFVar1;
  
  FField::GetPreloadDependencies((FField *)this,param_1);
  pFVar1 = this->ElementProp;
  if (pFVar1 != (FProperty *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,param_1);
  }
  return;
}

// GetValueAddressAtIndex_Direct @ 14217dce0

void * __thiscall
FSetProperty::GetValueAddressAtIndex_Direct
          (FSetProperty *this,FProperty *param_1,void *param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  FScriptSetHelper local_38;
  
  if (param_1 != this->ElementProp) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Inner == ElementProp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertySet.cpp"
                       ,0x424,L"Inner property must be identical to ElementProp");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  local_38.ElementProp = this->ElementProp;
  local_38.SetLayout.HashNextIdOffset = (this->SetLayout).HashNextIdOffset;
  local_38.SetLayout.HashIndexOffset = (this->SetLayout).HashIndexOffset;
  local_38.SetLayout.Size = (this->SetLayout).Size;
  local_38.SetLayout.SparseArrayLayout.Alignment = (this->SetLayout).SparseArrayLayout.Alignment;
  iVar1 = (this->SetLayout).SparseArrayLayout.Size;
  local_38.Set = param_2;
  local_38.SetLayout.SparseArrayLayout.Size = iVar1;
  if (local_38.ElementProp == (FProperty *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementProp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1653,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  iVar4 = FScriptSetHelper::FindInternalIndex(&local_38,param_3);
  if (iVar4 != -1) {
    return (void *)((longlong)(iVar4 * iVar1) + *(longlong *)param_2);
  }
  return (void *)0x0;
}

// HasIntrusiveUnsetOptionalState @ 14217e020

bool __thiscall FSetProperty::HasIntrusiveUnsetOptionalState(FSetProperty *this)

{
  return true;
}

// Identical @ 14217eb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FSetProperty::Identical(FSetProperty *this,void *param_1,void *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 auStack_88 [32];
  FScriptSetHelper local_68;
  FScriptSetHelper local_40;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_40.SetLayout.HashNextIdOffset = (this->SetLayout).HashNextIdOffset;
  local_40.SetLayout.HashIndexOffset = (this->SetLayout).HashIndexOffset;
  local_40.SetLayout.Size = (this->SetLayout).Size;
  local_40.SetLayout.SparseArrayLayout.Alignment = (this->SetLayout).SparseArrayLayout.Alignment;
  local_40.SetLayout.SparseArrayLayout.Size = (this->SetLayout).SparseArrayLayout.Size;
  local_40.ElementProp = this->ElementProp;
  local_40.Set = param_1;
  if ((local_40.ElementProp == (FProperty *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementProp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1653,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar1 = ((local_40.Set)->Elements).Data.ArrayNum;
  iVar2 = ((local_40.Set)->Elements).NumFreeIndices;
  if (param_2 == (void *)0x0) {
    bVar4 = iVar1 == iVar2;
  }
  else {
    local_68.ElementProp = this->ElementProp;
    local_68.SetLayout.SparseArrayLayout.Size = (this->SetLayout).SparseArrayLayout.Size;
    local_68.SetLayout.HashNextIdOffset = (this->SetLayout).HashNextIdOffset;
    local_68.SetLayout.HashIndexOffset = (this->SetLayout).HashIndexOffset;
    local_68.SetLayout.Size = (this->SetLayout).Size;
    local_68.SetLayout.SparseArrayLayout.Alignment = (this->SetLayout).SparseArrayLayout.Alignment;
    local_68.Set = param_2;
    if ((local_68.ElementProp == (FProperty *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1653,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (iVar1 - iVar2 ==
        ((local_68.Set)->Elements).Data.ArrayNum - ((local_68.Set)->Elements).NumFreeIndices) {
      bVar4 = UESetProperty_Private::IsPermutation(&local_40,&local_68,param_3);
    }
    else {
      bVar4 = false;
    }
  }
  return bVar4;
}

// ImportText_Internal @ 1421819f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wchar_t * __thiscall
FSetProperty::ImportText_Internal
          (FSetProperty *this,wchar_t *param_1,void *param_2,EPropertyPointerType param_3,
          UObject *param_4,int param_5,FOutputDevice *param_6)

{
  wchar_t *pwVar1;
  wint_t *pwVar2;
  FProperty *pFVar3;
  ForElementType<unsigned_int> FVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  wchar_t *pwVar11;
  wint_t *pwVar13;
  ForElementType<FSetElementId> FVar14;
  void *_Dst;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar15;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar16;
  ForElementType<unsigned_int> FVar17;
  void *pvVar18;
  int iVar19;
  longlong lVar20;
  void *local_res18;
  undefined1 auStack_168 [32];
  UObject *local_148;
  uint local_140;
  FOutputDevice *local_138;
  undefined1 local_128 [8];
  void *local_120;
  uint local_118;
  TScriptSparseSet<FDefaultSetAllocator> *local_110;
  FSetProperty *local_108;
  FOutputDevice *local_100;
  UObject *local_f8;
  FScriptSetHelper *local_f0;
  code *local_e8;
  FScriptSetHelper **local_e0;
  FProperty *local_d8;
  TScriptSparseSet<FDefaultSetAllocator> *pTStack_d0;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  uint uStack_bc;
  int local_b8;
  undefined4 uStack_b4;
  void **local_b0;
  undefined1 *local_a8;
  FScriptSetHelper *local_a0;
  TScriptSparseSet<FDefaultSetAllocator> **local_98;
  FSetProperty *local_90;
  void **local_88;
  int local_80;
  int iStack_7c;
  int iStack_78;
  uint uStack_74;
  FScriptSetHelper local_70;
  ulonglong local_48;
  wchar_t *pwVar12;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_f8 = param_4;
  local_100 = param_6;
  local_70.Set = param_2;
  if (param_3 == Container) {
    local_70.Set = (TScriptSparseSet<FDefaultSetAllocator> *)
                   ((longlong)*(int *)((longlong)&this->_padding_ + 4) + (longlong)param_2);
  }
  local_70.ElementProp = this->ElementProp;
  local_70.SetLayout.SparseArrayLayout.Size = (this->SetLayout).SparseArrayLayout.Size;
  local_70.SetLayout.HashNextIdOffset = (this->SetLayout).HashNextIdOffset;
  local_70.SetLayout.HashIndexOffset = (this->SetLayout).HashIndexOffset;
  local_70.SetLayout.Size = (this->SetLayout).Size;
  local_70.SetLayout.SparseArrayLayout.Alignment = (this->SetLayout).SparseArrayLayout.Alignment;
  local_res18 = param_2;
  local_108 = this;
  if ((local_70.ElementProp == (FProperty *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementProp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1653,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pwVar11 = (wchar_t *)(*pcVar5)();
    return pwVar11;
  }
  pwVar11 = (wchar_t *)0x0;
  local_128[0] = 1;
  local_110 = (TScriptSparseSet<FDefaultSetAllocator> *)0x0;
  local_b0 = &local_120;
  local_a8 = local_128;
  local_a0 = &local_70;
  local_98 = &local_110;
  local_88 = &local_res18;
  local_120 = (void *)0x0;
  local_90 = this;
  if ((param_3 == Container) && (cVar8 = (**(code **)(this->_padding_ + 0x70))(this), cVar8 != '\0')
     ) {
    local_110 = FProperty::AllocateAndInitializeValue((FProperty *)this);
    local_c8 = (this->SetLayout).HashNextIdOffset;
    iStack_c4 = (this->SetLayout).HashIndexOffset;
    iStack_c0 = (this->SetLayout).Size;
    uStack_bc = (this->SetLayout).SparseArrayLayout.Alignment;
    local_d8 = this->ElementProp;
    local_b8 = (this->SetLayout).SparseArrayLayout.Size;
    pTStack_d0 = local_110;
    local_80 = local_c8;
    iStack_7c = iStack_c4;
    iStack_78 = iStack_c0;
    uStack_74 = uStack_bc;
    if ((local_d8 == (FProperty *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1653,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pwVar11 = (wchar_t *)(*pcVar5)();
      return pwVar11;
    }
    local_70._36_4_ = uStack_b4;
    local_70.SetLayout.SparseArrayLayout.Size = local_b8;
    local_70.ElementProp = local_d8;
    local_70.Set = pTStack_d0;
    local_70.SetLayout.HashNextIdOffset = local_80;
    local_70.SetLayout.HashIndexOffset = iStack_7c;
    local_70.SetLayout.Size = iStack_78;
    local_70.SetLayout.SparseArrayLayout.Alignment = uStack_74;
  }
  iVar19 = ((local_70.Set)->Elements).Data.ArrayNum - ((local_70.Set)->Elements).NumFreeIndices;
  if (iVar19 != 0) {
    FScriptSetHelper::DestructItems(&local_70,0,iVar19);
    pTVar16 = local_70.Set;
    ((local_70.Set)->Elements).Data.ArrayNum = 0;
    if (((local_70.Set)->Elements).Data.ArrayMax != 0) {
      TScriptArray<TSizedDefaultAllocator<32>_>::ResizeTo
                ((TScriptArray<TSizedDefaultAllocator<32>_> *)local_70.Set,0,
                 local_70.SetLayout.SparseArrayLayout.Size,
                 local_70.SetLayout.SparseArrayLayout.Alignment);
    }
    (pTVar16->Elements).FirstFreeIndex = -1;
    (pTVar16->Elements).NumFreeIndices = 0;
    (pTVar16->Elements).AllocationFlags.NumBits = 0;
    if ((pTVar16->Elements).AllocationFlags.MaxBits != 0) {
      (pTVar16->Elements).AllocationFlags.MaxBits = 0;
      TScriptBitArray<FDefaultBitArrayAllocator,void>::Realloc
                (&(pTVar16->Elements).AllocationFlags,0);
    }
    FVar14 = (pTVar16->Hash).SecondaryData;
    if (FVar14 == (ForElementType<FSetElementId>)0x0) {
      FVar14 = (ForElementType<FSetElementId>)&pTVar16->Hash;
    }
    pwVar12 = pwVar11;
    if (0 < pTVar16->HashSize) {
      do {
        *(undefined4 *)FVar14 = 0xffffffff;
        FVar14 = (ForElementType<FSetElementId>)((longlong)FVar14 + 4);
        uVar9 = (int)pwVar12 + 1;
        pwVar12 = (wchar_t *)(ulonglong)uVar9;
      } while ((int)uVar9 < pTVar16->HashSize);
    }
  }
  pwVar12 = param_1 + 1;
  if (*param_1 == L'(') {
    iVar19 = iswspace(*pwVar12);
    while (iVar19 != 0) {
      pwVar1 = pwVar12 + 1;
      pwVar12 = pwVar12 + 1;
      iVar19 = iswspace(*pwVar1);
    }
    if (*pwVar12 == L')') {
      pwVar11 = pwVar12 + 1;
    }
    else {
      local_120 = FMemory::Malloc((longlong)this->ElementProp->ElementSize,0);
      local_128[0] = 0;
      if ((this->ElementProp->Offset_Internal != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementProp->GetOffset_ForInternal() == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertySet.cpp"
                             ,0x2a2,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pwVar11 = (wchar_t *)(*pcVar5)();
        return pwVar11;
      }
      uVar9 = param_5 | 1;
      local_118 = uVar9;
LAB_142181cb0:
      pFVar3 = this->ElementProp;
      if (((uint)(int)pFVar3->PropertyFlags >> 9 & 1) == 0) {
        (**(code **)(pFVar3->_padding_ + 0x150))(pFVar3,local_120);
      }
      else {
        memset(local_120,0,(longlong)pFVar3->ElementSize * (longlong)pFVar3->ArrayDim);
      }
      pvVar18 = local_120;
      pFVar3 = this->ElementProp;
      bVar7 = FProperty::ValidateImportFlags(pFVar3,uVar9,param_6);
      if (!bVar7) goto LAB_14218200d;
      local_140 = uVar9 | 0x8000000;
      local_148 = local_f8;
      local_138 = param_6;
      pwVar13 = (wint_t *)(**(code **)(pFVar3->_padding_ + 0xe8))(pFVar3,pwVar12,pvVar18,0);
      pFVar3 = local_70.ElementProp;
      pvVar18 = local_120;
      if (pwVar13 == (wint_t *)0x0) goto LAB_14218200d;
      uVar9 = ((local_70.Set)->Elements).Data.ArrayNum;
      pwVar12 = pwVar11;
      uVar10 = 0;
      pTVar16 = local_70.Set;
      uVar6 = uVar9;
      while (uVar6 != 0) {
        uVar6 = (uint)pwVar12;
        if ((-1 < (int)uVar10) && ((int)uVar6 < (pTVar16->Elements).AllocationFlags.NumBits)) {
          pTVar15 = pTVar16;
          if (((pTVar16->Elements).AllocationFlags.NumBits <= (int)uVar6) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x8c4,L""), pTVar15 = local_70.Set, bVar7)) {
            pcVar5 = (code *)swi(3);
            pwVar11 = (wchar_t *)(*pcVar5)();
            return pwVar11;
          }
          FVar4 = (pTVar16->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
          FVar17 = (ForElementType<unsigned_int>)&(pTVar16->Elements).AllocationFlags;
          if (FVar4 != (ForElementType<unsigned_int>)0x0) {
            FVar17 = FVar4;
          }
          uVar10 = uVar6;
          if ((int)uVar6 < 0) {
            uVar10 = uVar6 + 0x1f;
          }
          pTVar16 = pTVar15;
          if ((*(uint *)((longlong)FVar17 + (longlong)((int)uVar10 >> 5) * 4) >> (uVar6 & 0x1f) & 1)
              != 0) {
            cVar8 = (**(code **)(pFVar3->_padding_ + 0xb8))
                              (pFVar3,pvVar18,
                               (longlong)(int)(local_70.SetLayout.SparseArrayLayout.Size * uVar6) +
                               (pTVar15->Elements).Data._padding_,0);
            pTVar16 = local_70.Set;
            this = local_108;
            if (cVar8 != '\0') goto LAB_142181f43;
          }
        }
        pwVar12 = pwVar11;
        if (uVar6 + 1 != uVar9) {
          pwVar12 = (wchar_t *)(ulonglong)(uVar6 + 1);
        }
        uVar10 = (uint)pwVar12;
        uVar6 = uVar10;
      }
      iVar19 = FScriptSetHelper::AddDefaultValue_Invalid_NeedsRehash(&local_70);
      this = local_108;
      pvVar18 = local_120;
      pFVar3 = local_108->ElementProp;
      lVar20 = (longlong)(local_70.SetLayout.SparseArrayLayout.Size * iVar19) +
               ((local_70.Set)->Elements).Data._padding_;
      if (pFVar3->ArrayDim < 1) {
        local_148 = (UObject *)((ulonglong)local_148 & 0xffffffff00000000);
        local_140 = pFVar3->ArrayDim;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pwVar11 = (wchar_t *)(*pcVar5)();
          return pwVar11;
        }
      }
      if ((pvVar18 == (void *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pwVar11 = (wchar_t *)(*pcVar5)();
        return pwVar11;
      }
      pvVar18 = (void *)((longlong)pFVar3->Offset_Internal + (longlong)pvVar18);
      if (pFVar3->ArrayDim < 1) {
        local_148 = (UObject *)((ulonglong)local_148 & 0xffffffff00000000);
        local_140 = pFVar3->ArrayDim;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pwVar11 = (wchar_t *)(*pcVar5)();
          return pwVar11;
        }
      }
      if ((lVar20 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pwVar11 = (wchar_t *)(*pcVar5)();
        return pwVar11;
      }
      _Dst = (void *)(pFVar3->Offset_Internal + lVar20);
      if (_Dst != pvVar18) {
        if (((uint)(int)pFVar3->PropertyFlags >> 0x1e & 1) == 0) {
          (**(code **)(pFVar3->_padding_ + 0xf0))(pFVar3,_Dst,pvVar18,pFVar3->ArrayDim);
        }
        else {
          memcpy(_Dst,pvVar18,(longlong)pFVar3->ElementSize * (longlong)pFVar3->ArrayDim);
        }
      }
LAB_142181f43:
      iVar19 = iswspace(*pwVar13);
      while (iVar19 != 0) {
        pwVar2 = pwVar13 + 1;
        pwVar13 = pwVar13 + 1;
        iVar19 = iswspace(*pwVar2);
      }
      pwVar12 = (wchar_t *)(pwVar13 + 1);
      if (*pwVar13 != 0x29) {
        if (*pwVar13 != 0x2c) goto LAB_14218200d;
        iVar19 = iswspace(*pwVar12);
        uVar9 = local_118;
        param_6 = local_100;
        while (local_118 = uVar9, local_100 = param_6, iVar19 != 0) {
          pwVar1 = pwVar12 + 1;
          pwVar12 = pwVar12 + 1;
          iVar19 = iswspace(*pwVar1);
          uVar9 = local_118;
          param_6 = local_100;
        }
        if ((this->ElementProp->PropertyFlags & CPF_NoDestructor) == CPF_None) {
          (**(code **)(this->ElementProp->_padding_ + 0x138))();
        }
        goto LAB_142181cb0;
      }
      local_f0 = &local_70;
      local_e0 = &local_f0;
      local_e8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FScriptSetHelper::Rehash'::__l2::<lambda_1>,unsigned_int,void_const_*>
                 ::Call;
      TScriptSparseSet<FDefaultSetAllocator>::Rehash
                (local_70.Set,&local_70.SetLayout,
                 (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_e8);
      local_128[0] = 1;
      pwVar11 = pwVar12;
LAB_14218200d:
      pFVar3 = this->ElementProp;
      if ((pFVar3->PropertyFlags & CPF_NoDestructor) == CPF_None) {
        (**(code **)(pFVar3->_padding_ + 0x138))(pFVar3,local_120);
      }
    }
  }
  ScopeExitSupport::TScopeGuard<`FSetProperty::ImportText_Internal'::__l2::<lambda_1>_>::
  ~TScopeGuard<_FSetProperty::ImportText_Internal_::__l2::<lambda_1>_>(&local_b0);
  return pwVar11;
}

// InitializeIntrusiveUnsetOptionalValue @ 142182730

void __thiscall
FSetProperty::InitializeIntrusiveUnsetOptionalValue(FSetProperty *this,void *param_1)

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

// InstanceSubobjects @ 1421839a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSetProperty::InstanceSubobjects
          (FSetProperty *this,void *param_1,void *param_2,TNotNull<UObject_*> param_3,
          FObjectInstancingGraph *param_4)

{
  TScriptSparseSet<FDefaultSetAllocator> *pTVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  FScriptSetHelper *pFVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ForElementType<unsigned_int> FVar8;
  uint uVar9;
  void *pvVar10;
  longlong lVar11;
  undefined1 auStack_f8 [32];
  FObjectInstancingGraph *local_d8;
  TScriptContainerIterator<FScriptSetHelper> local_c8;
  TScriptContainerIterator<FScriptSetHelper> local_b8;
  FScriptSetHelper *local_a8;
  code *local_a0;
  FScriptSetHelper **local_98;
  FScriptSetHelper local_90;
  FScriptSetHelper local_68;
  ulonglong local_40;
  
  if (param_1 != (void *)0x0) {
    local_40 = __security_cookie.value ^ (ulonglong)auStack_f8;
    local_68.ElementProp = this->ElementProp;
    if ((((local_68.ElementProp)->PropertyFlags &
         (CPF_ContainsInstancedReference|CPF_InstancedReference)) != CPF_None) ||
       (*(char *)(*(longlong *)&(param_3.Val)->field_0x10 + 0x128) != '\0')) {
      local_68.SetLayout.SparseArrayLayout.Size = (this->SetLayout).SparseArrayLayout.Size;
      local_68.SetLayout.HashNextIdOffset = (this->SetLayout).HashNextIdOffset;
      local_68.SetLayout.HashIndexOffset = (this->SetLayout).HashIndexOffset;
      local_68.SetLayout.Size = (this->SetLayout).Size;
      local_68.SetLayout.SparseArrayLayout.Alignment = (this->SetLayout).SparseArrayLayout.Alignment
      ;
      local_68.Set = param_1;
      if ((local_68.ElementProp == (FProperty *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementProp",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1653,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (param_2 == (void *)0x0) {
        local_b8.Container = &local_68;
        local_b8.InternalIndex = -1;
        local_b8.LogicalIndex = -1;
        while( true ) {
          TScriptContainerIterator<FScriptSetHelper>::Advance(&local_b8);
          pFVar4 = local_b8.Container;
          uVar9 = local_b8.InternalIndex;
          pTVar1 = (local_b8.Container)->Set;
          if ((local_b8.InternalIndex < 0) ||
             ((pTVar1->Elements).AllocationFlags.NumBits <= local_b8.InternalIndex)) break;
          if (((pTVar1->Elements).AllocationFlags.NumBits <= local_b8.InternalIndex) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x8c4,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar2 = (pTVar1->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
          FVar8 = (ForElementType<unsigned_int>)&(pTVar1->Elements).AllocationFlags;
          if (FVar2 != (ForElementType<unsigned_int>)0x0) {
            FVar8 = FVar2;
          }
          uVar7 = uVar9;
          if ((int)uVar9 < 0) {
            uVar7 = uVar9 + 0x1f;
          }
          if ((*(uint *)((longlong)FVar8 + (longlong)((int)uVar7 >> 5) * 4) >> (uVar9 & 0x1f) & 1)
              == 0) break;
          iVar6 = local_b8.InternalIndex;
          pTVar1 = pFVar4->Set;
          if (((int)uVar9 < 0) || ((pTVar1->Elements).AllocationFlags.NumBits <= (int)uVar9)) {
LAB_142183d35:
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Iterator",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x16bb,
                               L"Invalid Iterator. Test Iterator before calling this method.");
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          else {
            if (((pTVar1->Elements).AllocationFlags.NumBits <= (int)uVar9) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValidIndex(Index)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x8c4,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FVar2 = (pTVar1->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
            FVar8 = (ForElementType<unsigned_int>)&(pTVar1->Elements).AllocationFlags;
            if (FVar2 != (ForElementType<unsigned_int>)0x0) {
              FVar8 = FVar2;
            }
            uVar7 = uVar9 & 0x1f;
            if ((int)uVar9 < 0) {
              uVar9 = uVar9 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar8 + (longlong)((int)uVar9 >> 5) * 4) >> uVar7 & 1) == 0)
            goto LAB_142183d35;
          }
          local_d8 = param_4;
          (**(code **)(this->ElementProp->_padding_ + 0x160))
                    (this->ElementProp,
                     (longlong)(local_68.SetLayout.SparseArrayLayout.Size * iVar6) +
                     ((local_68.Set)->Elements).Data._padding_,0,param_3.Val);
        }
      }
      else {
        local_90.ElementProp = this->ElementProp;
        local_90.SetLayout.SparseArrayLayout.Size = (this->SetLayout).SparseArrayLayout.Size;
        local_90.SetLayout.HashNextIdOffset = (this->SetLayout).HashNextIdOffset;
        local_90.SetLayout.HashIndexOffset = (this->SetLayout).HashIndexOffset;
        local_90.SetLayout.Size = (this->SetLayout).Size;
        local_90.SetLayout.SparseArrayLayout.Alignment =
             (this->SetLayout).SparseArrayLayout.Alignment;
        local_90.Set = param_2;
        if ((local_90.ElementProp == (FProperty *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ElementProp",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x1653,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_c8.Container = &local_68;
        local_c8.InternalIndex = -1;
        local_c8.LogicalIndex = -1;
        while( true ) {
          TScriptContainerIterator<FScriptSetHelper>::Advance(&local_c8);
          pFVar4 = local_c8.Container;
          uVar9 = local_c8.InternalIndex;
          pTVar1 = (local_c8.Container)->Set;
          if ((local_c8.InternalIndex < 0) ||
             ((pTVar1->Elements).AllocationFlags.NumBits <= local_c8.InternalIndex)) break;
          if (((pTVar1->Elements).AllocationFlags.NumBits <= local_c8.InternalIndex) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x8c4,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar2 = (pTVar1->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
          FVar8 = (ForElementType<unsigned_int>)&(pTVar1->Elements).AllocationFlags;
          if (FVar2 != (ForElementType<unsigned_int>)0x0) {
            FVar8 = FVar2;
          }
          uVar7 = uVar9;
          if ((int)uVar9 < 0) {
            uVar7 = uVar9 + 0x1f;
          }
          if ((*(uint *)((longlong)FVar8 + (longlong)((int)uVar7 >> 5) * 4) >> (uVar9 & 0x1f) & 1)
              == 0) break;
          iVar6 = local_c8.InternalIndex;
          pTVar1 = pFVar4->Set;
          if (((int)uVar9 < 0) || ((pTVar1->Elements).AllocationFlags.NumBits <= (int)uVar9)) {
LAB_142183bb1:
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Iterator",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x16bb,
                               L"Invalid Iterator. Test Iterator before calling this method.");
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          else {
            if (((pTVar1->Elements).AllocationFlags.NumBits <= (int)uVar9) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValidIndex(Index)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x8c4,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FVar2 = (pTVar1->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
            FVar8 = (ForElementType<unsigned_int>)&(pTVar1->Elements).AllocationFlags;
            if (FVar2 != (ForElementType<unsigned_int>)0x0) {
              FVar8 = FVar2;
            }
            uVar7 = uVar9 & 0x1f;
            if ((int)uVar9 < 0) {
              uVar9 = uVar9 + 0x1f;
            }
            if ((*(uint *)((longlong)FVar8 + (longlong)((int)uVar9 >> 5) * 4) >> uVar7 & 1) == 0)
            goto LAB_142183bb1;
          }
          pvVar10 = (void *)((longlong)(local_68.SetLayout.SparseArrayLayout.Size * iVar6) +
                            ((local_68.Set)->Elements).Data._padding_);
          iVar6 = FScriptSetHelper::FindElementIndex(&local_90,pvVar10,local_c8.LogicalIndex);
          if (iVar6 < 0) {
            lVar11 = 0;
          }
          else {
            lVar11 = (longlong)(local_90.SetLayout.SparseArrayLayout.Size * iVar6) +
                     ((local_90.Set)->Elements).Data._padding_;
          }
          local_d8 = param_4;
          (**(code **)(this->ElementProp->_padding_ + 0x160))
                    (this->ElementProp,pvVar10,lVar11,param_3.Val);
        }
      }
      local_a8 = &local_68;
      local_98 = &local_a8;
      local_a0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FScriptSetHelper::Rehash'::__l2::<lambda_1>,unsigned_int,void_const_*>
                 ::Call;
      TScriptSparseSet<FDefaultSetAllocator>::Rehash
                (local_68.Set,&local_68.SetLayout,
                 (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_a0);
    }
  }
  return;
}

// IsIntrusiveOptionalValueSet @ 142184060

bool __thiscall FSetProperty::IsIntrusiveOptionalValueSet(FSetProperty *this,void *param_1)

{
  return *(int *)((longlong)param_1 + 0xc) != -1;
}

// LinkInternal @ 142185270

void __thiscall FSetProperty::LinkInternal(FSetProperty *this,FArchive *param_1)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  FScriptSparseArrayLayout FVar7;
  uint uVar8;
  int iVar9;
  
  if (this->ElementProp == (FProperty *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementProp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertySet.cpp"
                       ,0xb2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = this->ElementProp;
  (**(code **)(pFVar1->_padding_ + 0xa8))(pFVar1,param_1);
  FProperty::SetupOffset(pFVar1);
  pFVar1 = this->ElementProp;
  iVar5 = pFVar1->ElementSize;
  iVar9 = pFVar1->ArrayDim;
  iVar4 = (**(code **)(pFVar1->_padding_ + 0x168))();
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  uVar8 = iVar5 * iVar9 + 3U & 0xfffffffc;
  (this->SetLayout).HashNextIdOffset = uVar8;
  iVar5 = 4;
  if (4 < iVar4) {
    iVar5 = iVar4;
  }
  (this->SetLayout).HashIndexOffset = uVar8 + 4;
  iVar9 = 4;
  if (4 < iVar5) {
    iVar9 = iVar5;
  }
  uVar6 = ~(iVar9 - 1U) & uVar8 + 7 + iVar9;
  (this->SetLayout).Size = uVar6;
  uVar8 = 8;
  if (8 < (int)uVar6) {
    uVar8 = uVar6;
  }
  iVar5 = 4;
  if (4 < iVar9) {
    iVar5 = iVar9;
  }
  FVar7.Size = uVar8;
  FVar7.Alignment = iVar5;
  (this->SetLayout).SparseArrayLayout = FVar7;
  FProperty::SetElementSize((FProperty *)this,0x50);
  this->_padding_ = this->_padding_ | 0x200;
  return;
}

// LoadTypeName @ 142186630

bool __thiscall
FSetProperty::LoadTypeName(FSetProperty *this,FPropertyTypeName param_1,FPropertyTag *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  FProperty *pFVar6;
  FName local_res20;
  FFieldObjectUnion local_28;
  FName local_20;
  
  bVar2 = FProperty::LoadTypeName((FProperty *)this,param_1,param_2);
  if (bVar2) {
    uVar5 = 0;
    if (0 < *(int *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)param_1.Index >> 0xd] + 8
                    + (ulonglong)(param_1.Index & 0x1fff) * 0xc)) {
      uVar5 = param_1.Index + 1;
    }
    bVar2 = IsThisNotNull(this,"FField::GetFName");
    if (bVar2) {
      local_res20 = (FName)this->_padding_;
    }
    else {
      local_res20.ComparisonIndex.Value = 0;
      local_res20.Number = 0;
    }
    local_28 = (FFieldObjectUnion)this;
    if (((ulonglong)this & 1) != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsUObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x180,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    local_20 = *(FName *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar5 >> 0xd] +
                         (ulonglong)(uVar5 & 0x1fff) * 0xc);
    pFVar6 = (FProperty *)
             FField::TryConstruct(&local_20,(FFieldVariant *)&local_28,&local_res20,RF_NoFlags);
    if (pFVar6 != (FProperty *)0x0) {
      if (((uint)(int)((FFieldClass *)pFVar6->_padding_)->CastFlags >> 0xf & 1) != 0) {
        cVar4 = (**(code **)(pFVar6->_padding_ + 0x188))(pFVar6,uVar5,param_2);
        if (cVar4 != '\0') {
          this->ElementProp = pFVar6;
          return true;
        }
      }
      (**(code **)(pFVar6->_padding_ + 8))(pFVar6,1);
    }
  }
  return false;
}

// NetSerializeItem @ 142186df0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSetProperty::NetSerializeItem
          (FSetProperty *this,FArchive *param_1,UPackageMap *param_2,void *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  if (1 < (byte)LogProperty._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogProperty);
  }
  return true;
}

// PostDuplicate @ 142187420

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FSetProperty::PostDuplicate(FSetProperty *this,FField *param_1)

{
  code *pcVar1;
  FNameEntryId FVar2;
  uint uVar3;
  bool bVar4;
  FProperty *pFVar5;
  FSetProperty *local_res10;
  
  local_res10 = this;
  if ((((ulonglong)this & 1) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsUObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x180,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar5 = (FProperty *)
           FField::Duplicate(param_1[2].Owner.Container.Field,(FFieldVariant)&local_res10,(FName)0x0
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
  if (((pFVar5 == (FProperty *)0x0) ||
      (((uint)(int)((FFieldClass *)pFVar5->_padding_)->CastFlags >> 0xf & 1) == 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x472,L"CastFieldChecked failed with 0x%016llx"),
     pFVar5 = (FProperty *)0x0, bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->ElementProp = pFVar5;
  FVar2.Value = param_1[2].NamePrivate.ComparisonIndex.Value;
  uVar3 = param_1[2].NamePrivate.Number;
  *(FField **)&this->SetLayout = param_1[2].Next;
  (this->SetLayout).Size = FVar2.Value;
  (this->SetLayout).SparseArrayLayout.Alignment = uVar3;
  (this->SetLayout).SparseArrayLayout.Size = param_1[2].FlagsPrivate;
  FProperty::PostDuplicate((FProperty *)this,param_1);
  return;
}

// ResolveVisitedPathInfo @ 1421897c0

void * __thiscall
FSetProperty::ResolveVisitedPathInfo(FSetProperty *this,void *param_1,FPropertyVisitorInfo *param_2)

{
  void *pvVar1;
  
  if ((param_2->PropertyInfo == ContainerIndex) && (param_2->Property == this->ElementProp)) {
                    /* WARNING: Could not recover jumptable at 0x0001421897dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)(**(code **)(this->_padding_ + 0xd8))
                               (this,param_2->Property,param_1,param_2->Index);
    return pvVar1;
  }
  return (void *)0x0;
}

// SameType @ 142189a80

bool __thiscall FSetProperty::SameType(FSetProperty *this,FProperty *param_1)

{
  FProperty *pFVar1;
  bool bVar2;
  char cVar3;
  
  bVar2 = FProperty::SameType((FProperty *)this,param_1);
  if ((bVar2) && (pFVar1 = this->ElementProp, pFVar1 != (FProperty *)0x0)) {
    cVar3 = (**(code **)(pFVar1->_padding_ + 0x1a0))(pFVar1,param_1[1]._padding_);
    if (cVar3 != '\0') {
      return true;
    }
  }
  return false;
}

// SaveTypeName @ 142189da0

void __thiscall FSetProperty::SaveTypeName(FSetProperty *this,FPropertyTypeNameBuilder *param_1)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  FProperty::SaveTypeName((FProperty *)this,param_1);
  pFVar1 = this->ElementProp;
  if (pFVar1 == (FProperty *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LocalElementProp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertySet.cpp"
                       ,0x453,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((param_1->Nodes).ArrayNum == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Nodes.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyTypeName.cpp"
                       ,0x1ca,L"A type name must be added prior to setting type parameters.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  param_1->ActiveIndex = (param_1->Nodes).ArrayNum + -1;
  (**(code **)(pFVar1->_padding_ + 400))(pFVar1,param_1);
  UE::FPropertyTypeNameBuilder::EndParameters(param_1);
  return;
}

// Serialize @ 14218a780

void __thiscall FSetProperty::Serialize(FSetProperty *this,FArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSetProperty *local_res8;
  
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
  SerializeSingleField<FProperty>(param_1,&this->ElementProp,(FFieldVariant)&local_res8);
  return;
}

// SerializeItem @ 14218f520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSetProperty::SerializeItem
          (FSetProperty *this,FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
  ulonglong uVar1;
  FArchive *pFVar2;
  ForElementType<unsigned_int> FVar3;
  FProperty *pFVar4;
  code *pcVar5;
  TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
  *pTVar6;
  FSlotBase FVar7;
  FSetProperty *pFVar8;
  FScriptSetHelper *pFVar9;
  TBitArray<FDefaultBitArrayAllocator> *pTVar10;
  longlong *plVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  FArchive *pFVar17;
  uint *puVar18;
  void *_Src;
  void *_Dst;
  byte bVar19;
  FSerializedPropertyScope *this_00;
  uint uVar20;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar21;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar22;
  ForElementType<unsigned_int> FVar23;
  longlong lVar24;
  void *pvVar25;
  FSlotBase local_res10 [3];
  undefined1 auStackY_348 [32];
  uint local_318;
  byte local_314;
  undefined1 local_313 [3];
  uint local_310;
  uint local_30c;
  undefined1 local_307;
  undefined1 local_306 [2];
  uint local_304;
  uint local_300;
  uint local_2fc;
  FSetProperty *local_2f8;
  undefined8 local_2f0;
  TScriptContainerIterator<FScriptSetHelper> local_2e8;
  TScriptContainerIterator<FScriptSetHelper> local_2d8;
  TScriptContainerIterator<FScriptSetHelper> local_2c8;
  int local_2b8;
  int local_2b4;
  longlong *local_2b0;
  undefined8 uStack_2a8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2a0;
  uint uStack_298;
  uint uStack_294;
  int iStack_290;
  undefined4 uStack_28c;
  int local_288;
  undefined4 uStack_284;
  TScriptSparseSet<FDefaultSetAllocator> *local_280;
  FArchive *local_278;
  FSerializedPropertyScope local_270;
  FSerializedPropertyScope local_260;
  FSerializedPropertyScope local_250;
  FSerializedPropertyScope local_240;
  FSerializedPropertyScope local_230;
  FSerializedPropertyScope local_220;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_210;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1f0;
  int local_1d0 [2];
  FScriptSetHelper *local_1c8;
  int local_1c0;
  int local_1b0 [2];
  longlong *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a0;
  undefined8 uStack_180;
  longlong *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  code *local_148;
  undefined1 *local_140;
  code *local_138;
  FScriptSetHelper **local_130;
  undefined4 local_10c;
  FScriptSetHelper local_108;
  undefined1 local_d8 [32];
  uint *local_b8;
  uint local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  FScriptSetHelper local_88;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_348;
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  local_2f8 = this;
  pFVar17 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  FVar7.StructuredArchive = local_res10[0].StructuredArchive;
  local_314 = pFVar17->field_0x2c;
  pFVar17->field_0x2c = local_314 & 0xfe;
  local_108.ElementProp = this->ElementProp;
  pTVar22 = (TScriptSparseSet<FDefaultSetAllocator> *)0x0;
  if ((pFVar17->field_0x2a & 8) == 0) {
    pTVar22 = param_3;
  }
  local_108.SetLayout.SparseArrayLayout.Size = (this->SetLayout).SparseArrayLayout.Size;
  local_108.SetLayout.HashNextIdOffset = (this->SetLayout).HashNextIdOffset;
  local_108.SetLayout.HashIndexOffset = (this->SetLayout).HashIndexOffset;
  local_108.SetLayout.Size = (this->SetLayout).Size;
  local_108.SetLayout.SparseArrayLayout.Alignment = (this->SetLayout).SparseArrayLayout.Alignment;
  local_280 = pTVar22;
  local_278 = pFVar17;
  local_108.Set = param_2;
  if ((local_108.ElementProp == (FProperty *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ElementProp",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x1653,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((pFVar17->field_0x28 & 1) == 0) {
    local_88.ElementProp = this->ElementProp;
    local_88.SetLayout.SparseArrayLayout.Size = (this->SetLayout).SparseArrayLayout.Size;
    local_88.SetLayout.HashNextIdOffset = (this->SetLayout).HashNextIdOffset;
    local_88.SetLayout.HashIndexOffset = (this->SetLayout).HashIndexOffset;
    local_88.SetLayout.Size = (this->SetLayout).Size;
    local_88.SetLayout.SparseArrayLayout.Alignment = (this->SetLayout).SparseArrayLayout.Alignment;
    local_88.Set = pTVar22;
    if ((local_88.ElementProp == (FProperty *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ElementProp",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x1653,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_d8._8_4_ = 0;
    local_a4 = 0;
    local_d8._0_8_ = (FScriptContainerElement *)0x0;
    local_d8._12_4_ = 0;
    local_b8 = (uint *)0x0;
    local_b0 = 0;
    local_ac = 0x80;
    local_a8 = 0xffffffff;
    local_98 = (ForElementType<FSetElementId>)0x0;
    local_90 = 0;
    if (pTVar22 != (TScriptSparseSet<FDefaultSetAllocator> *)0x0) {
      local_2d8.Container = &local_88;
      local_2d8.InternalIndex = -1;
      local_2d8.LogicalIndex = -1;
LAB_14218fd6a:
      do {
        TScriptContainerIterator<FScriptSetHelper>::Advance(&local_2d8);
        pFVar9 = local_2d8.Container;
        uVar16 = local_2d8.InternalIndex;
        pTVar22 = (local_2d8.Container)->Set;
        this = local_2f8;
        if ((local_2d8.InternalIndex < 0) ||
           ((pTVar22->Elements).AllocationFlags.NumBits <= local_2d8.InternalIndex)) break;
        if (((pTVar22->Elements).AllocationFlags.NumBits <= local_2d8.InternalIndex) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x8c4,L""), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar3 = (pTVar22->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
        FVar23 = (ForElementType<unsigned_int>)&(pTVar22->Elements).AllocationFlags;
        if (FVar3 != (ForElementType<unsigned_int>)0x0) {
          FVar23 = FVar3;
        }
        uVar20 = uVar16 & 0x1f;
        if ((int)uVar16 < 0) {
          uVar16 = uVar16 + 0x1f;
        }
        this = local_2f8;
        if ((*(uint *)((longlong)FVar23 + (longlong)((int)uVar16 >> 5) * 4) >> uVar20 & 1) == 0)
        break;
        iVar14 = local_2d8.InternalIndex;
        pTVar22 = pFVar9->Set;
        if ((local_2d8.InternalIndex < 0) ||
           ((pTVar22->Elements).AllocationFlags.NumBits <= local_2d8.InternalIndex)) {
LAB_14218fe59:
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Iterator",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x16bb,L"Invalid Iterator. Test Iterator before calling this method."
                             );
          if (bVar12) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          if (((pTVar22->Elements).AllocationFlags.NumBits <= local_2d8.InternalIndex) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x8c4,L""), bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar3 = (pTVar22->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
          FVar23 = (ForElementType<unsigned_int>)&(pTVar22->Elements).AllocationFlags;
          if (FVar3 != (ForElementType<unsigned_int>)0x0) {
            FVar23 = FVar3;
          }
          uVar16 = iVar14;
          if (iVar14 < 0) {
            uVar16 = iVar14 + 0x1f;
          }
          if ((*(uint *)((longlong)FVar23 + (longlong)((int)uVar16 >> 5) * 4) >> (iVar14 & 0x1fU) &
              1) == 0) goto LAB_14218fe59;
        }
        pFVar4 = local_108.ElementProp;
        iVar14 = local_88.SetLayout.SparseArrayLayout.Size * iVar14;
        uVar16 = ((local_108.Set)->Elements).Data.ArrayNum;
        lVar24 = ((local_88.Set)->Elements).Data._padding_;
        if (uVar16 != 0) {
          uVar20 = 0;
          pTVar22 = local_108.Set;
          do {
            if ((-1 < (int)uVar20) && ((int)uVar20 < (pTVar22->Elements).AllocationFlags.NumBits)) {
              pTVar21 = pTVar22;
              if (((pTVar22->Elements).AllocationFlags.NumBits <= (int)uVar20) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValidIndex(Index)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x8c4,L""), pTVar21 = local_108.Set, bVar12)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              FVar3 = (pTVar22->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
              FVar23 = (ForElementType<unsigned_int>)&(pTVar22->Elements).AllocationFlags;
              if (FVar3 != (ForElementType<unsigned_int>)0x0) {
                FVar23 = FVar3;
              }
              uVar15 = uVar20;
              if ((int)uVar20 < 0) {
                uVar15 = uVar20 + 0x1f;
              }
              pTVar22 = pTVar21;
              if (((*(uint *)((longlong)FVar23 + (longlong)((int)uVar15 >> 5) * 4) >>
                    (uVar20 & 0x1f) & 1) != 0) &&
                 (cVar13 = (**(code **)(pFVar4->_padding_ + 0xb8))
                                     (pFVar4,iVar14 + lVar24,
                                      (longlong)
                                      (int)(local_108.SetLayout.SparseArrayLayout.Size * uVar20) +
                                      (pTVar21->Elements).Data._padding_,0), pTVar22 = local_108.Set
                 , cVar13 != '\0')) goto LAB_14218fd6a;
            }
            uVar15 = uVar20 + 1;
            uVar20 = 0;
            if (uVar15 != uVar16) {
              uVar20 = uVar15;
            }
          } while (uVar20 != 0);
        }
        local_2b8 = local_2d8.InternalIndex;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_d8,local_1b0,
                   (bool *)&local_2b8);
      } while( true );
    }
    local_304 = local_d8._8_4_ - local_a4;
    pFVar2 = (FVar7.StructuredArchive)->Formatter->Inner;
    puVar18 = (uint *)**(undefined8 **)&pFVar2->field_0x8;
    if ((uint *)(*(undefined8 **)&pFVar2->field_0x8)[1] < puVar18 + 1) {
      if ((pFVar2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar2 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar2,&local_304);
      }
    }
    else {
      local_304 = *puVar18;
      **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
    }
    local_240.Property = this->ElementProp;
    local_240.Ar = pFVar17;
    if (*(FSetProperty **)&pFVar17->field_0x70 == this) {
      FSerializedPropertyScope::PushProperty(&local_240);
    }
    else {
      local_240.Property = (FProperty *)0x0;
    }
    local_1f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
    local_1f0._padding_._0_4_ = 0;
    local_2f0 = 1;
    local_1f0.UnvisitedBitMask = 0xffffffff;
    local_1f0._padding_._4_4_ = 1;
    local_1f0.CurrentBitIndex = 0;
    local_1f0.BaseBitIndex = 0;
    if (local_b0 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1f0);
    }
    uVar16 = local_b0;
    uStack_2a8 = CONCAT44(local_1f0._padding_._4_4_,(undefined4)local_1f0._padding_);
    local_2b0 = (longlong *)local_d8;
    uStack_294 = local_1f0.CurrentBitIndex;
    uStack_298 = local_1f0.UnvisitedBitMask;
    uStack_28c = local_1f0._28_4_;
    iStack_290 = local_1f0.BaseBitIndex;
    bVar19 = (byte)local_b0 & 0x1f;
    local_288 = local_d8._8_4_ - local_a4;
    local_210._padding_._0_4_ = (int)local_b0 >> 5;
    local_210._padding_._4_4_ = 1 << bVar19;
    local_210.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
    local_210.UnvisitedBitMask = -1 << bVar19;
    pTStack_2a0 = local_1f0.Array;
    local_210.BaseBitIndex = local_b0 & 0xffffffe0;
    local_210.CurrentBitIndex = local_b0;
    uStack_180 = CONCAT44(uStack_284,local_288);
    TStack_1a0.Array = local_1f0.Array;
    local_1a8 = local_2b0;
    TStack_1a0._padding_ = uStack_2a8;
    TStack_1a0._16_8_ = _uStack_298;
    TStack_1a0._24_8_ = _iStack_290;
    if (((int)local_b0 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (uVar16 != local_b0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_210);
    }
    iVar14 = local_210.CurrentBitIndex;
    pTVar10 = local_210.Array;
    uStack_2a8 = CONCAT44(local_210._padding_._4_4_,(int)local_210._padding_);
    uStack_294 = local_210.CurrentBitIndex;
    uStack_298 = local_210.UnvisitedBitMask;
    uStack_28c = local_210._28_4_;
    iStack_290 = local_210.BaseBitIndex;
    pTStack_2a0 = local_210.Array;
    while( true ) {
      plVar11 = local_1a8;
      if ((int)local_1a8[1] - *(int *)((longlong)local_1a8 + 0x34) != (int)uStack_180) {
        local_313[0] = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_313);
      }
      pTVar22 = local_88.Set;
      if (((TStack_1a0.CurrentBitIndex == iVar14) && (TStack_1a0.Array == pTVar10)) &&
         (plVar11 == (longlong *)local_d8)) break;
      pFVar4 = this->ElementProp;
      uVar16 = *(uint *)(*plVar11 + (longlong)TStack_1a0.CurrentBitIndex * 0xc);
      pcVar5 = *(code **)(pFVar4->_padding_ + 0xc0);
      if (((local_88.Set)->Elements).Data.ArrayNum == ((local_88.Set)->Elements).NumFreeIndices) {
        if ((uVar16 != 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InternalIndex == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x169e,
                                L"Legacy implementation was only allowing requesting InternalIndex 0 on an empty container."
                               ), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar24 = 0;
      }
      else {
        if (((int)uVar16 < 0) || (((local_88.Set)->Elements).AllocationFlags.NumBits <= (int)uVar16)
           ) {
LAB_14219024a:
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(InternalIndex)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x16a2,
                              L"Invalid internal index. Use IsValidIndex before calling this method."
                             );
          if (bVar12) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          pTVar6 = &(local_88.Set)->Elements;
          if ((((local_88.Set)->Elements).AllocationFlags.NumBits <= (int)uVar16) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x8c4,L""), bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar3 = (pTVar22->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
          FVar23 = (ForElementType<unsigned_int>)&pTVar6->AllocationFlags;
          if (FVar3 != (ForElementType<unsigned_int>)0x0) {
            FVar23 = FVar3;
          }
          uVar20 = uVar16;
          if ((int)uVar16 < 0) {
            uVar20 = uVar16 + 0x1f;
          }
          if ((*(uint *)((longlong)FVar23 + (longlong)((int)uVar20 >> 5) * 4) >> (uVar16 & 0x1f) & 1
              ) == 0) goto LAB_14219024a;
        }
        lVar24 = (longlong)(int)(local_88.SetLayout.SparseArrayLayout.Size * uVar16) +
                 ((local_88.Set)->Elements).Data._padding_;
      }
      (*pcVar5)(pFVar4,FVar7.StructuredArchive,lVar24,0);
      TStack_1a0.UnvisitedBitMask = TStack_1a0.UnvisitedBitMask & ~TStack_1a0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a0);
      this = local_2f8;
    }
    FSerializedPropertyScope::PopProperty(&local_240);
    if (local_280 == (TScriptSparseSet<FDefaultSetAllocator> *)0x0) {
      local_2fc = ((local_108.Set)->Elements).Data.ArrayNum -
                  ((local_108.Set)->Elements).NumFreeIndices;
      pFVar17 = (FVar7.StructuredArchive)->Formatter->Inner;
      puVar18 = (uint *)**(undefined8 **)&pFVar17->field_0x8;
      if ((uint *)(*(undefined8 **)&pFVar17->field_0x8)[1] < puVar18 + 1) {
        if ((pFVar17->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar17 + 0x188))(pFVar17,&local_2fc,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar17,&local_2fc);
        }
      }
      else {
        local_2fc = *puVar18;
        **(longlong **)&pFVar17->field_0x8 = **(longlong **)&pFVar17->field_0x8 + 4;
      }
      pFVar17 = local_278;
      local_220.Property = this->ElementProp;
      local_220.Ar = local_278;
      if (*(FSetProperty **)&local_278->field_0x70 == this) {
        FSerializedPropertyScope::PushProperty(&local_220);
      }
      else {
        local_220.Property = (FProperty *)0x0;
      }
      local_2c8.Container = &local_108;
      local_2c8.InternalIndex = -1;
      local_2c8.LogicalIndex = -1;
      TScriptContainerIterator<FScriptSetHelper>::Advance(&local_2c8);
      pFVar8 = local_2f8;
      while( true ) {
        pFVar9 = local_2c8.Container;
        uVar16 = local_2c8.InternalIndex;
        pTVar22 = (local_2c8.Container)->Set;
        if ((local_2c8.InternalIndex < 0) ||
           ((pTVar22->Elements).AllocationFlags.NumBits <= local_2c8.InternalIndex)) break;
        if (((pTVar22->Elements).AllocationFlags.NumBits <= local_2c8.InternalIndex) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x8c4,L""), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar3 = (pTVar22->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
        FVar23 = (ForElementType<unsigned_int>)&(pTVar22->Elements).AllocationFlags;
        if (FVar3 != (ForElementType<unsigned_int>)0x0) {
          FVar23 = FVar3;
        }
        uVar20 = uVar16;
        if ((int)uVar16 < 0) {
          uVar20 = uVar16 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar23 + (longlong)((int)uVar20 >> 5) * 4) >> (uVar16 & 0x1f) & 1)
            == 0) break;
        iVar14 = local_2c8.InternalIndex;
        pTVar22 = pFVar9->Set;
        if (((int)uVar16 < 0) || ((pTVar22->Elements).AllocationFlags.NumBits <= (int)uVar16)) {
LAB_142190945:
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Iterator",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x16bb,L"Invalid Iterator. Test Iterator before calling this method."
                             );
          if (bVar12) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          if (((pTVar22->Elements).AllocationFlags.NumBits <= (int)uVar16) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x8c4,L""), bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar3 = (pTVar22->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
          FVar23 = (ForElementType<unsigned_int>)&(pTVar22->Elements).AllocationFlags;
          if (FVar3 != (ForElementType<unsigned_int>)0x0) {
            FVar23 = FVar3;
          }
          uVar20 = uVar16 & 0x1f;
          if ((int)uVar16 < 0) {
            uVar16 = uVar16 + 0x1f;
          }
          if ((*(uint *)((longlong)FVar23 + (longlong)((int)uVar16 >> 5) * 4) >> uVar20 & 1) == 0)
          goto LAB_142190945;
        }
        (**(code **)(pFVar8->ElementProp->_padding_ + 0xc0))
                  (pFVar8->ElementProp,FVar7.StructuredArchive,
                   (longlong)(local_108.SetLayout.SparseArrayLayout.Size * iVar14) +
                   ((local_108.Set)->Elements).Data._padding_,0);
        TScriptContainerIterator<FScriptSetHelper>::Advance(&local_2c8);
      }
      this_00 = &local_220;
    }
    else {
      if (local_d8._8_4_ != local_a4) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_d8);
        local_d8._8_4_ = 0;
        if ((int)local_d8._12_4_ < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
        }
        local_a8 = 0xffffffff;
        local_a4 = 0;
        local_b0 = 0;
      }
      local_2e8.Container = &local_108;
      local_2e8.InternalIndex = -1;
      local_2e8.LogicalIndex = -1;
      while( true ) {
        TScriptContainerIterator<FScriptSetHelper>::Advance(&local_2e8);
        pFVar9 = local_2e8.Container;
        uVar16 = local_2e8.InternalIndex;
        pTVar22 = (local_2e8.Container)->Set;
        if ((local_2e8.InternalIndex < 0) ||
           ((pTVar22->Elements).AllocationFlags.NumBits <= local_2e8.InternalIndex)) break;
        if (((pTVar22->Elements).AllocationFlags.NumBits <= local_2e8.InternalIndex) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x8c4,L""), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar3 = (pTVar22->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
        FVar23 = (ForElementType<unsigned_int>)&(pTVar22->Elements).AllocationFlags;
        if (FVar3 != (ForElementType<unsigned_int>)0x0) {
          FVar23 = FVar3;
        }
        uVar20 = uVar16 & 0x1f;
        if ((int)uVar16 < 0) {
          uVar16 = uVar16 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar23 + (longlong)((int)uVar16 >> 5) * 4) >> uVar20 & 1) == 0)
        break;
        iVar14 = local_2e8.InternalIndex;
        pTVar22 = pFVar9->Set;
        if ((local_2e8.InternalIndex < 0) ||
           ((pTVar22->Elements).AllocationFlags.NumBits <= local_2e8.InternalIndex)) {
LAB_142190443:
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Iterator",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x16bb,L"Invalid Iterator. Test Iterator before calling this method."
                             );
          if (bVar12) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          if (((pTVar22->Elements).AllocationFlags.NumBits <= local_2e8.InternalIndex) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x8c4,L""), bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar3 = (pTVar22->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
          FVar23 = (ForElementType<unsigned_int>)&(pTVar22->Elements).AllocationFlags;
          if (FVar3 != (ForElementType<unsigned_int>)0x0) {
            FVar23 = FVar3;
          }
          uVar16 = iVar14;
          if (iVar14 < 0) {
            uVar16 = iVar14 + 0x1f;
          }
          if ((*(uint *)((longlong)FVar23 + (longlong)((int)uVar16 >> 5) * 4) >> (iVar14 & 0x1fU) &
              1) == 0) goto LAB_142190443;
        }
        iVar14 = FScriptSetHelper::FindElementIndex
                           (&local_88,
                            (void *)((longlong)(local_108.SetLayout.SparseArrayLayout.Size * iVar14)
                                    + ((local_108.Set)->Elements).Data._padding_),0);
        if ((iVar14 < 0) ||
           ((longlong)(local_88.SetLayout.SparseArrayLayout.Size * iVar14) +
            ((local_88.Set)->Elements).Data._padding_ == 0)) {
          local_2b4 = local_2e8.InternalIndex;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_d8,local_1d0,
                     (bool *)&local_2b4);
        }
      }
      local_300 = local_d8._8_4_ - local_a4;
      pFVar17 = (FVar7.StructuredArchive)->Formatter->Inner;
      puVar18 = (uint *)**(undefined8 **)&pFVar17->field_0x8;
      if ((uint *)(*(undefined8 **)&pFVar17->field_0x8)[1] < puVar18 + 1) {
        if ((pFVar17->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar17 + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar17,&local_300);
        }
      }
      else {
        local_300 = *puVar18;
        **(longlong **)&pFVar17->field_0x8 = **(longlong **)&pFVar17->field_0x8 + 4;
      }
      pFVar17 = local_278;
      local_230.Property = this->ElementProp;
      local_230.Ar = local_278;
      if (*(FSetProperty **)&local_278->field_0x70 == this) {
        FSerializedPropertyScope::PushProperty(&local_230);
      }
      else {
        local_230.Property = (FProperty *)0x0;
      }
      uVar16 = local_b0;
      iVar14 = 0;
      iStack_290 = 0;
      uStack_294 = 0;
      if (local_b0 == 0) {
LAB_1421905e4:
        uVar20 = (uint)local_2f0;
      }
      else {
        puVar18 = (uint *)(local_d8 + 0x10);
        if (local_b8 != (uint *)0x0) {
          puVar18 = local_b8;
        }
        uVar20 = *puVar18;
        while (uVar20 == 0) {
          lVar24 = (longlong)iVar14;
          iStack_290 = iStack_290 + 0x20;
          iVar14 = iVar14 + 1;
          uStack_294 = local_b0;
          if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_1421905e4;
          uVar20 = (puVar18 + 1)[lVar24];
        }
        uVar20 = -uVar20 & uVar20;
        uVar1 = (ulonglong)uVar20 * 2 + 1;
        lVar24 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        local_1c0 = (int)lVar24;
        uStack_294 = local_1c0 + -1 + iStack_290;
        if ((int)local_b0 < (int)uStack_294) {
          uStack_294 = local_b0;
        }
      }
      local_2b0 = (longlong *)local_d8;
      pTStack_2a0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
      uVar15 = local_b0 & 0xffffffe0;
      local_288 = local_d8._8_4_ - local_a4;
      uStack_298 = 0xffffffff;
      uStack_2a8 = CONCAT44(uVar20,iVar14);
      uStack_28c = local_10c;
      TStack_170._padding_ = uStack_2a8;
      iVar14 = (int)local_b0 >> 5;
      uStack_150 = CONCAT44(uStack_284,local_288);
      bVar19 = (byte)local_b0;
      TStack_170.UnvisitedBitMask = 0xffffffff;
      TStack_170.CurrentBitIndex = uStack_294;
      TStack_170.BaseBitIndex = iStack_290;
      TStack_170._28_4_ = local_10c;
      local_178 = local_2b0;
      TStack_170.Array = pTStack_2a0;
      if (((int)local_b0 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar8 = local_2f8;
      if (uVar16 != local_b0) {
        puVar18 = (uint *)(local_d8 + 0x10);
        if (local_b8 != (uint *)0x0) {
          puVar18 = local_b8;
        }
        uVar16 = -1 << (bVar19 & 0x1f) & puVar18[iVar14];
        while (uVar16 == 0) {
          lVar24 = (longlong)iVar14;
          uVar15 = uVar15 + 0x20;
          iVar14 = iVar14 + 1;
          uVar16 = local_b0;
          if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_142190701;
          uVar16 = (puVar18 + 1)[lVar24];
        }
        uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
        lVar24 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        uVar16 = (int)lVar24 + -1 + uVar15;
        if ((int)local_b0 < (int)uVar16) {
          uVar16 = local_b0;
        }
      }
LAB_142190701:
      while( true ) {
        plVar11 = local_178;
        if ((int)local_178[1] - *(int *)((longlong)local_178 + 0x34) != (int)uStack_150) {
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_306);
        }
        if (((TStack_170.CurrentBitIndex == uVar16) &&
            (TStack_170.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10))) &&
           (plVar11 == (longlong *)local_d8)) break;
        (**(code **)(pFVar8->ElementProp->_padding_ + 0xc0))
                  (pFVar8->ElementProp,FVar7.StructuredArchive,
                   (longlong)
                   (local_108.SetLayout.SparseArrayLayout.Size *
                   *(int *)(*plVar11 + (longlong)TStack_170.CurrentBitIndex * 0xc)) +
                   ((local_108.Set)->Elements).Data._padding_,0);
        TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
      }
      this_00 = &local_230;
    }
    FSerializedPropertyScope::PopProperty(this_00);
    local_90 = 0;
    if (local_98 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_d8);
    goto LAB_1421909e5;
  }
  puVar18 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_140 = &local_307;
  local_148 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  FThreadSingletonInitializer::Get
            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_148,puVar18);
  if (pTVar22 != (TScriptSparseSet<FDefaultSetAllocator> *)0x0) {
    (**(code **)(this->_padding_ + 0xf0))(this,param_2,pTVar22,1);
  }
  local_318 = 0;
  pFVar2 = (FVar7.StructuredArchive)->Formatter->Inner;
  puVar18 = (uint *)**(undefined8 **)&pFVar2->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar2->field_0x8)[1] < puVar18 + 1) {
    if ((pFVar2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,&local_318,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar2,&local_318);
    }
  }
  else {
    local_318 = *puVar18;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
  }
  if ((pTVar22 == (TScriptSparseSet<FDefaultSetAllocator> *)0x0) ||
     (((local_108.Set)->Elements).Data.ArrayNum == ((local_108.Set)->Elements).NumFreeIndices)) {
    if (local_318 != 0) {
      pvVar25 = FMemory::Malloc((longlong)(this->SetLayout).Size,0);
      pFVar4 = this->ElementProp;
      if (((uint)(int)pFVar4->PropertyFlags >> 9 & 1) == 0) {
        (**(code **)(pFVar4->_padding_ + 0x150))(pFVar4,pvVar25);
      }
      else {
        memset(pvVar25,0,(longlong)pFVar4->ElementSize * (longlong)pFVar4->ArrayDim);
      }
      local_250.Property = this->ElementProp;
      local_250.Ar = pFVar17;
      if (*(FSetProperty **)&pFVar17->field_0x70 == this) {
        FSerializedPropertyScope::PushProperty(&local_250);
      }
      else {
        local_250.Property = (FProperty *)0x0;
      }
      for (; local_318 != 0; local_318 = local_318 - 1) {
        (**(code **)(this->ElementProp->_padding_ + 0xc0))
                  (this->ElementProp,FVar7.StructuredArchive,pvVar25,0);
      }
      pFVar4 = this->ElementProp;
      if ((pFVar4->PropertyFlags & CPF_NoDestructor) == CPF_None) {
        (**(code **)(pFVar4->_padding_ + 0x138))(pFVar4,pvVar25);
      }
      FMemory::Free(pvVar25);
      FSerializedPropertyScope::PopProperty(&local_250);
    }
    local_30c = 0;
    pFVar2 = (FVar7.StructuredArchive)->Formatter->Inner;
    puVar18 = (uint *)**(undefined8 **)&pFVar2->field_0x8;
    if ((uint *)(*(undefined8 **)&pFVar2->field_0x8)[1] < puVar18 + 1) {
      if ((pFVar2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,&local_30c,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar2,&local_30c);
      }
    }
    else {
      local_30c = *puVar18;
      **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
    }
    uVar16 = local_30c;
    iVar14 = ((local_108.Set)->Elements).Data.ArrayNum - ((local_108.Set)->Elements).NumFreeIndices;
    if (iVar14 == 0) {
      if (local_30c == 0) goto LAB_14218fc55;
    }
    else {
      FScriptSetHelper::DestructItems(&local_108,0,iVar14);
    }
    TScriptSparseSet<FDefaultSetAllocator>::Empty(local_108.Set,uVar16,&local_108.SetLayout);
    for (; local_30c != 0; local_30c = local_30c - 1) {
      uVar16 = TScriptSparseArray<TScriptSparseSet<FDefaultSetAllocator>::TrackedSparseArrayAllocator,void>
               ::AddUninitialized(&(local_108.Set)->Elements,&local_108.SetLayout.SparseArrayLayout)
      ;
      pTVar22 = local_108.Set;
      if (((int)uVar16 < 0) || (((local_108.Set)->Elements).AllocationFlags.NumBits <= (int)uVar16))
      {
LAB_14218fbba:
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(InternalIndex)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x1841,L"");
        if (bVar12) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        pTVar6 = &(local_108.Set)->Elements;
        if ((((local_108.Set)->Elements).AllocationFlags.NumBits <= (int)uVar16) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x8c4,L""), bVar12)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar3 = (pTVar22->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
        FVar23 = (ForElementType<unsigned_int>)&pTVar6->AllocationFlags;
        if (FVar3 != (ForElementType<unsigned_int>)0x0) {
          FVar23 = FVar3;
        }
        uVar20 = uVar16;
        if ((int)uVar16 < 0) {
          uVar20 = uVar16 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar23 + (longlong)((int)uVar20 >> 5) * 4) >> (uVar16 & 0x1f) & 1)
            == 0) goto LAB_14218fbba;
      }
      pvVar25 = (void *)((longlong)(int)(uVar16 * local_108.SetLayout.SparseArrayLayout.Size) +
                        ((local_108.Set)->Elements).Data._padding_);
      if (((uint)(int)(local_108.ElementProp)->PropertyFlags >> 9 & 1) == 0) {
        FProperty::InitializeValue_InContainer(local_108.ElementProp,pvVar25);
      }
      else {
        memset(pvVar25,0,(longlong)local_108.SetLayout.Size);
      }
      (**(code **)(this->ElementProp->_padding_ + 0xc0))
                (this->ElementProp,FVar7.StructuredArchive,
                 (longlong)(int)(uVar16 * local_108.SetLayout.SparseArrayLayout.Size) +
                 ((local_108.Set)->Elements).Data._padding_,0);
    }
  }
  else {
    pvVar25 = (void *)0x0;
    if (local_318 != 0) {
      pvVar25 = FMemory::Malloc((longlong)(this->SetLayout).Size,0);
      FProperty::InitializeValue(this->ElementProp,pvVar25);
      local_260.Property = this->ElementProp;
      local_260.Ar = pFVar17;
      if (*(FSetProperty **)&pFVar17->field_0x70 == this) {
        FSerializedPropertyScope::PushProperty(&local_260);
      }
      else {
        local_260.Property = (FProperty *)0x0;
      }
      for (; local_318 != 0; local_318 = local_318 - 1) {
        (**(code **)(this->ElementProp->_padding_ + 0xc0))
                  (this->ElementProp,FVar7.StructuredArchive,pvVar25,0);
        iVar14 = FScriptSetHelper::FindElementIndex(&local_108,pvVar25,0);
        if (iVar14 != -1) {
          FScriptSetHelper::RemoveAt(&local_108,iVar14,1);
        }
      }
      FSerializedPropertyScope::PopProperty(&local_260);
    }
    local_310 = 0;
    pFVar2 = (FVar7.StructuredArchive)->Formatter->Inner;
    puVar18 = (uint *)**(undefined8 **)&pFVar2->field_0x8;
    if ((uint *)(*(undefined8 **)&pFVar2->field_0x8)[1] < puVar18 + 1) {
      if ((pFVar2->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,&local_310,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar2,&local_310);
      }
    }
    else {
      local_310 = *puVar18;
      **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
    }
    if ((local_310 != 0) && (pvVar25 == (void *)0x0)) {
      pvVar25 = FMemory::Malloc((longlong)(this->SetLayout).Size,0);
      FProperty::InitializeValue(this->ElementProp,pvVar25);
    }
    local_270.Property = this->ElementProp;
    local_270.Ar = pFVar17;
    if (*(FSetProperty **)&pFVar17->field_0x70 == this) {
      FSerializedPropertyScope::PushProperty(&local_270);
    }
    else {
      local_270.Property = (FProperty *)0x0;
    }
    for (; local_310 != 0; local_310 = local_310 - 1) {
      (**(code **)(this->ElementProp->_padding_ + 0xc0))
                (this->ElementProp,FVar7.StructuredArchive,pvVar25,0);
      pFVar4 = local_108.ElementProp;
      uVar16 = ((local_108.Set)->Elements).Data.ArrayNum;
      if (uVar16 != 0) {
        uVar20 = 0;
        pTVar22 = local_108.Set;
        do {
          if ((-1 < (int)uVar20) && ((int)uVar20 < (pTVar22->Elements).AllocationFlags.NumBits)) {
            pTVar21 = pTVar22;
            if (((pTVar22->Elements).AllocationFlags.NumBits <= (int)uVar20) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValidIndex(Index)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x8c4,L""), pTVar21 = local_108.Set, bVar12)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            FVar3 = (pTVar22->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
            FVar23 = (ForElementType<unsigned_int>)&(pTVar22->Elements).AllocationFlags;
            if (FVar3 != (ForElementType<unsigned_int>)0x0) {
              FVar23 = FVar3;
            }
            uVar15 = uVar20;
            if ((int)uVar20 < 0) {
              uVar15 = uVar20 + 0x1f;
            }
            pTVar22 = pTVar21;
            if (((*(uint *)((longlong)FVar23 + (longlong)((int)uVar15 >> 5) * 4) >> (uVar20 & 0x1f)
                 & 1) != 0) &&
               (cVar13 = (**(code **)(pFVar4->_padding_ + 0xb8))(pFVar4,pvVar25),
               pTVar22 = local_108.Set, cVar13 != '\0')) goto LAB_14218f981;
          }
          uVar15 = uVar20 + 1;
          uVar20 = 0;
          if (uVar15 != uVar16) {
            uVar20 = uVar15;
          }
          this = local_2f8;
        } while (uVar20 != 0);
      }
      iVar14 = FScriptSetHelper::AddDefaultValue_Invalid_NeedsRehash(&local_108);
      pFVar4 = this->ElementProp;
      iVar14 = local_108.SetLayout.SparseArrayLayout.Size * iVar14;
      lVar24 = ((local_108.Set)->Elements).Data._padding_;
      _Src = FProperty::ContainerVoidPtrToValuePtrInternal(pFVar4,pvVar25,0);
      _Dst = FProperty::ContainerVoidPtrToValuePtrInternal(pFVar4,(void *)(iVar14 + lVar24),0);
      if (_Dst != _Src) {
        if (((uint)(int)pFVar4->PropertyFlags >> 0x1e & 1) == 0) {
          (**(code **)(pFVar4->_padding_ + 0xf0))(pFVar4,_Dst,_Src);
        }
        else {
          memcpy(_Dst,_Src,(longlong)pFVar4->ElementSize * (longlong)pFVar4->ArrayDim);
        }
      }
LAB_14218f981:
      this = local_2f8;
    }
    FSerializedPropertyScope::PopProperty(&local_270);
    if (pvVar25 != (void *)0x0) {
      pFVar4 = this->ElementProp;
      if ((pFVar4->PropertyFlags & CPF_NoDestructor) == CPF_None) {
        (**(code **)(pFVar4->_padding_ + 0x138))(pFVar4,pvVar25);
      }
      FMemory::Free(pvVar25);
    }
  }
LAB_14218fc55:
  local_1c8 = &local_108;
  local_130 = &local_1c8;
  local_138 = UE::Core::Private::Function::
              TFunctionRefCaller<`FScriptSetHelper::Rehash'::__l2::<lambda_1>,unsigned_int,void_const_*>
              ::Call;
  TScriptSparseSet<FDefaultSetAllocator>::Rehash
            (local_108.Set,&local_108.SetLayout,
             (TFunctionRef<unsigned_int___cdecl(void_const_*)> *)&local_138);
LAB_1421909e5:
  pFVar17->field_0x2c = pFVar17->field_0x2c ^ (pFVar17->field_0x2c ^ local_314) & 1;
  return;
}

// StaticClass @ 142193d90

FFieldClass * __cdecl FSetProperty::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FSetProperty",0x800000000000,
                 CASTCLASS_FSetProperty|CASTCLASS_FProperty|CASTCLASS_UField,pFVar1,Construct);
      atexit(`FSetProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

// UseBinaryOrNativeSerialization @ 142196520

bool __thiscall FSetProperty::UseBinaryOrNativeSerialization(FSetProperty *this,FArchive *param_1)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  bVar3 = FProperty::UseBinaryOrNativeSerialization((FProperty *)this,param_1);
  if (bVar3) {
    return true;
  }
  pFVar1 = this->ElementProp;
  if (pFVar1 == (FProperty *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LocalElementProp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertySet.cpp"
                       ,0x438,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142196588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(pFVar1->_padding_ + 0x180))(pFVar1,param_1);
  return (bool)uVar4;
}

// Visit @ 142196c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

EPropertyVisitorControlFlow __thiscall
FSetProperty::Visit(FSetProperty *this,FPropertyVisitorContext *param_1,
                   TFunctionRef<EPropertyVisitorControlFlow___cdecl(FPropertyVisitorContext_const_&)>
                   *param_2)

{
  int *piVar1;
  int iVar2;
  TScriptSparseSet<FDefaultSetAllocator> *pTVar3;
  ForElementType<unsigned_int> FVar4;
  FPropertyVisitorPath *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong *plVar8;
  code *pcVar9;
  bool bVar10;
  EPropertyVisitorControlFlow EVar11;
  int iVar12;
  FPropertyVisitorInfo *pFVar13;
  undefined8 uVar14;
  longlong *plVar15;
  uint uVar16;
  uint uVar17;
  ForElementType<unsigned_int> FVar18;
  longlong lVar19;
  undefined1 auStack_138 [32];
  FProperty **local_118;
  FScriptContainerElement *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  TScriptContainerIterator<FScriptSetHelper> local_e8;
  FPropertyVisitorScope local_d8;
  FProperty *local_d0;
  undefined8 uStack_c8;
  int local_c0;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  TFunctionRef<EPropertyVisitorControlFlow___cdecl(FPropertyVisitorContext_const_&)> local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  FPropertyVisitorPath *local_98;
  longlong local_90;
  void *local_88;
  EScope local_80;
  FScriptSetHelper local_78;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_78.ElementProp = this->ElementProp;
  local_78.Set = (param_1->Data).PropertyData;
  local_78.SetLayout.SparseArrayLayout.Size = (this->SetLayout).SparseArrayLayout.Size;
  local_78.SetLayout.HashNextIdOffset = (this->SetLayout).HashNextIdOffset;
  local_78.SetLayout.HashIndexOffset = (this->SetLayout).HashIndexOffset;
  local_78.SetLayout.Size = (this->SetLayout).Size;
  local_78.SetLayout.SparseArrayLayout.Alignment = (this->SetLayout).SparseArrayLayout.Alignment;
  if ((local_78.ElementProp == (FProperty *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ElementProp",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x1653,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    EVar11 = (*pcVar9)();
    return EVar11;
  }
  iVar12 = ((local_78.Set)->Elements).Data.ArrayNum;
  iVar2 = ((local_78.Set)->Elements).NumFreeIndices;
  pFVar13 = FPropertyVisitorPath::Top(param_1->Path);
  pFVar13->bContainsInnerProperties = 0 < iVar12 - iVar2;
  local_b8._0_8_ = *(undefined8 *)param_2;
  local_b8._8_8_ = *(undefined8 *)&param_2->field_0x8;
  EVar11 = FProperty::Visit((FProperty *)this,param_1,&local_b8);
  if (EVar11 != StepInto) {
    return EVar11;
  }
  if ((this->ElementProp == (FProperty *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ElementProp",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertySet.cpp"
                          ,0x470,L"Expecting a valid inner property type"), bVar10)) {
    pcVar9 = (code *)swi(3);
    EVar11 = (*pcVar9)();
    return EVar11;
  }
  local_e8.Container = &local_78;
  local_e8.InternalIndex = -1;
  local_e8.LogicalIndex = -1;
  TScriptContainerIterator<FScriptSetHelper>::Advance(&local_e8);
  EVar11 = StepInto;
  do {
    uVar17 = local_e8.InternalIndex;
    pTVar3 = (local_e8.Container)->Set;
    if (local_e8.InternalIndex < 0) {
      return EVar11;
    }
    if ((pTVar3->Elements).AllocationFlags.NumBits <= local_e8.InternalIndex) {
      return EVar11;
    }
    if (((pTVar3->Elements).AllocationFlags.NumBits <= local_e8.InternalIndex) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x8c4,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      EVar11 = (*pcVar9)();
      return EVar11;
    }
    FVar4 = (pTVar3->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
    FVar18 = (ForElementType<unsigned_int>)&(pTVar3->Elements).AllocationFlags;
    if (FVar4 != (ForElementType<unsigned_int>)0x0) {
      FVar18 = FVar4;
    }
    uVar16 = uVar17 & 0x1f;
    if ((int)uVar17 < 0) {
      uVar17 = uVar17 + 0x1f;
    }
    if ((*(uint *)((longlong)FVar18 + (longlong)((int)uVar17 >> 5) * 4) >> uVar16 & 1) == 0) {
      return EVar11;
    }
    local_d0 = this->ElementProp;
    pFVar5 = param_1->Path;
    local_c0 = local_e8.LogicalIndex;
    uStack_c8 = 0;
    uStack_bc = 2;
    pFVar6 = (pFVar5->Path).AllocatorInstance.Data;
    local_d8.Path = pFVar5;
    if ((pFVar6 <= (FScriptContainerElement *)&local_d0) &&
       (lVar19 = (longlong)(pFVar5->Path).ArrayMax,
       (FScriptContainerElement *)&local_d0 < pFVar6 + lVar19 * 0x18)) {
      local_100 = (longlong)(pFVar5->Path).ArrayNum;
      local_f8 = 0x18;
      local_118 = &local_d0;
      local_110 = pFVar6;
      local_108 = lVar19;
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        EVar11 = (*pcVar9)();
        return EVar11;
      }
    }
    iVar12 = (pFVar5->Path).ArrayNum;
    piVar1 = &(pFVar5->Path).ArrayMax;
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,(ForAnyElementType *)pFVar5,piVar1);
    }
    (pFVar5->Path).ArrayNum = iVar12 + 1;
    pFVar7 = (pFVar5->Path).AllocatorInstance.Data;
    pFVar6 = pFVar7 + (longlong)iVar12 * 0x18;
    *(FProperty **)pFVar6 = local_d0;
    *(undefined8 *)(pFVar6 + 8) = uStack_c8;
    *(ulonglong *)(pFVar7 + (longlong)iVar12 * 0x18 + 0x10) =
         CONCAT26(uStack_ba,CONCAT24(uStack_bc,local_c0));
    if (*(void **)&pFVar5->OnPushFunc != (void *)0x0) {
      UE::Core::Private::Function::CheckCallable(*(void **)&pFVar5->OnPushFunc);
      plVar8 = *(longlong **)&(pFVar5->OnPushFunc).field_0x28;
      pcVar9 = *(code **)&pFVar5->OnPushFunc;
      plVar15 = (longlong *)&(pFVar5->OnPushFunc).field_0x10;
      if (plVar8 != (longlong *)0x0) {
        plVar15 = plVar8;
      }
      uVar14 = (**(code **)(*plVar15 + 8))();
      (*pcVar9)(uVar14,&local_d0);
    }
    iVar12 = local_e8.InternalIndex;
    pTVar3 = (local_e8.Container)->Set;
    if ((local_e8.InternalIndex < 0) ||
       ((pTVar3->Elements).AllocationFlags.NumBits <= local_e8.InternalIndex)) {
LAB_142196f97:
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Iterator",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x16bb,L"Invalid Iterator. Test Iterator before calling this method.");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        EVar11 = (*pcVar9)();
        return EVar11;
      }
    }
    else {
      if (((pTVar3->Elements).AllocationFlags.NumBits <= local_e8.InternalIndex) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x8c4,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        EVar11 = (*pcVar9)();
        return EVar11;
      }
      FVar4 = (pTVar3->Elements).AllocationFlags.AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<unsigned_int>)&(pTVar3->Elements).AllocationFlags;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar18 = FVar4;
      }
      uVar17 = iVar12;
      if (iVar12 < 0) {
        uVar17 = iVar12 + 0x1f;
      }
      if ((*(uint *)((longlong)FVar18 + (longlong)((int)uVar17 >> 5) * 4) >> (iVar12 & 0x1fU) & 1)
          == 0) goto LAB_142196f97;
    }
    local_90 = (longlong)(local_78.SetLayout.SparseArrayLayout.Size * iVar12) +
               ((local_78.Set)->Elements).Data._padding_;
    local_98 = param_1->Path;
    local_88 = (param_1->Data).ParentStructData;
    local_80 = param_1->Scope;
    local_a8 = *(undefined8 *)param_2;
    local_a0 = *(undefined8 *)&param_2->field_0x8;
    EVar11 = (**(code **)(this->ElementProp->_padding_ + 0x98))
                       (this->ElementProp,&local_98,&local_a8);
    if (EVar11 == Stop) {
      FPropertyVisitorScope::~FPropertyVisitorScope(&local_d8);
      return Stop;
    }
    if (EVar11 == StepOut) {
      FPropertyVisitorScope::~FPropertyVisitorScope(&local_d8);
      return StepOver;
    }
    FPropertyVisitorScope::~FPropertyVisitorScope(&local_d8);
    TScriptContainerIterator<FScriptSetHelper>::Advance(&local_e8);
  } while( true );
}

// operator() @ 150486550

bool __thiscall `FSetProperty::AddCppProperty'::__l2::<lambda_1>::operator()(void *this)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FString local_18;
  
  bVar5 = false;
  bVar3 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_4256098928597925163>);
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
                      (&bGEnsureHasExecuted<_4256098928597925163>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_1504865e5;
    }
  }
  bVar3 = false;
LAB_1504865e5:
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

// operator() @ 1504866c0

bool __thiscall `FSetProperty::ConvertFromType'::__l9::<lambda_1>::operator()(void *this)

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
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4256098928597925020>);
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
                      (&bGEnsureHasExecuted<_4256098928597925020>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_1504867b3;
    }
  }
  bVar5 = false;
LAB_1504867b3:
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

