// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 50

// GetFieldSize @ 141f81be0

ulong64 __thiscall FArrayProperty::GetFieldSize(FArrayProperty *this)

{
  return 0x80;
}

// GetMinAlignment @ 141f82100

int __thiscall FArrayProperty::GetMinAlignment(FArrayProperty *this)

{
  return 8;
}

// InitializeValueInternal @ 141f8ecb0

void __thiscall FArrayProperty::InitializeValueInternal(FArrayProperty *this,void *param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  iVar1 = (int)this->_padding_;
  uVar3 = 0;
  if ((this->ArrayFlags & UsesMemoryImageAllocator) == None) {
    uVar5 = uVar3;
    if (0 < iVar1) {
      do {
        uVar4 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar4;
        lVar2 = (longlong)*(int *)((longlong)&this->_padding_ + 4) * uVar5;
        *(undefined8 *)(lVar2 + (longlong)param_1) = 0;
        *(undefined8 *)(lVar2 + 8 + (longlong)param_1) = 0;
        uVar5 = uVar5 + 1;
      } while ((int)uVar4 < (int)this->_padding_);
    }
  }
  else {
    uVar5 = uVar3;
    if (0 < iVar1) {
      do {
        uVar4 = (int)uVar5 + 1;
        lVar2 = (longlong)*(int *)((longlong)&this->_padding_ + 4) * uVar3;
        uVar3 = uVar3 + 1;
        *(undefined8 *)(lVar2 + (longlong)param_1) = 0;
        *(undefined8 *)(lVar2 + 8 + (longlong)param_1) = 0;
        uVar5 = (ulonglong)uVar4;
      } while ((int)uVar4 < (int)this->_padding_);
      return;
    }
  }
  return;
}

// ContainsObjectReference @ 1420246e0

bool __thiscall
FArrayProperty::ContainsObjectReference
          (FArrayProperty *this,TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_1
          ,EPropertyObjectReferenceType param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (this->Inner == (FProperty *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Inner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x1986,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142024741. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(this->Inner->_padding_ + 0x170))(this->Inner,param_1,param_2);
  return (bool)uVar3;
}

// EmitIntrusiveOptionalReferenceInfo @ 14203d7d0

void __thiscall
FArrayProperty::EmitIntrusiveOptionalReferenceInfo
          (FArrayProperty *this,FSchemaBuilder *param_1,int param_2,
          TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_3,
          FPropertyStack *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00014203d7da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x178))();
  return;
}

// EmitReferenceInfo @ 14203d940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FArrayProperty::EmitReferenceInfo
          (FArrayProperty *this,FSchemaBuilder *param_1,int param_2,
          TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_3,
          FPropertyStack *param_4)

{
  int iVar1;
  FProperty *pFVar2;
  FFieldClass *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  FFieldClass *pFVar7;
  FString *pFVar8;
  FName *pFVar9;
  FSchemaView FVar10;
  FMemberDeclaration *pFVar11;
  FPropertyStackScope *this_00;
  int iVar12;
  EArrayPropertyFlags EVar13;
  EMemberType EVar14;
  undefined1 auStackY_2f8 [32];
  FPropertyStackScope local_2c0;
  TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *local_2b8;
  FPropertyStackScope local_2b0;
  FSchemaBuilder *local_2a8;
  FName local_2a0;
  undefined4 uStack_298;
  uint uStack_294;
  undefined8 local_290;
  FName local_288;
  undefined1 local_280 [8];
  initializer_list<UE::GC::FMemberDeclaration> local_278;
  FString local_268;
  FMemberDeclaration local_258;
  FMemberDeclaration local_238;
  FMemberDeclaration local_218;
  FSchemaBuilder local_200;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_2b8 = param_3;
  local_2a8 = param_1;
  cVar5 = (**(code **)(this->Inner->_padding_ + 0x170))(this->Inner,param_3,1);
  if (cVar5 == '\0') {
    return;
  }
  EVar13 = this->ArrayFlags & UsesMemoryImageAllocator;
  EVar14 = StructArray;
  if (EVar13 != None) {
    EVar14 = FreezableStructArray;
  }
  local_278._First = (FMemberDeclaration *)0x0;
  local_278._Last = (FMemberDeclaration *)0x0;
  UE::GC::FSchemaBuilder::FSchemaBuilder(&local_200,this->Inner->ElementSize,&local_278);
  pFVar2 = this->Inner;
  pFVar7 = FObjectProperty::StaticClass();
  if ((pFVar7 == (FFieldClass *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("FieldType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x2dd,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (FFieldClass *)pFVar2->_padding_;
  if (pFVar7->Id == CASTCLASS_None) {
    for (; pFVar3 != (FFieldClass *)0x0; pFVar3 = pFVar3->SuperClass) {
      if (pFVar3 == pFVar7) {
        bVar6 = true;
        goto LAB_14203da60;
      }
    }
    bVar6 = false;
  }
  else {
    bVar6 = (pFVar3->CastFlags & pFVar7->Id) != CASTCLASS_None;
  }
LAB_14203da60:
  if (bVar6) {
    EVar14 = ReferenceArray;
    if (EVar13 != None) {
      EVar14 = FreezableReferenceArray;
    }
  }
  else {
    pFVar2 = this->Inner;
    pFVar7 = FInterfaceProperty::StaticClass();
    if ((pFVar7 == (FFieldClass *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("FieldType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x2dd,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (FFieldClass *)pFVar2->_padding_;
    if (pFVar7->Id == CASTCLASS_None) {
      for (; pFVar3 != (FFieldClass *)0x0; pFVar3 = pFVar3->SuperClass) {
        if (pFVar3 == pFVar7) {
          bVar6 = true;
          goto LAB_14203dae6;
        }
      }
      bVar6 = false;
    }
    else {
      bVar6 = (pFVar3->CastFlags & pFVar7->Id) != CASTCLASS_None;
    }
LAB_14203dae6:
    pFVar2 = this->Inner;
    if (bVar6) {
      UE::GC::FPropertyStackScope::FPropertyStackScope(&local_2c0,param_4,pFVar2);
      pFVar8 = UE::GC::FPropertyStack::GetPropertyPath(param_4,&local_268);
      iVar1 = (pFVar8->Data).ArrayNum;
      iVar12 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar12 = 0;
      }
      pFVar9 = ::FName::FName(&local_288,iVar12,(wchar_t *)(pFVar8->Data).AllocatorInstance.Data,
                              FNAME_Add);
      local_2a0 = *pFVar9;
      if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.Data.AllocatorInstance.Data);
      }
      uStack_298 = 0;
      uStack_294 = CONCAT31(uStack_294._1_3_,2);
      local_258._8_8_ = (ulonglong)uStack_294 << 0x20;
      local_290 = 0;
      local_258.ExtraWord.ObjectARO = (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)0x0;
      local_258.DebugName = local_2a0;
      UE::GC::FSchemaBuilder::Add(&local_200,&local_258);
      this_00 = &local_2c0;
    }
    else {
      pFVar7 = FFieldPathProperty::StaticClass();
      if ((pFVar7 == (FFieldClass *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("FieldType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                             ,0x2dd,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (FFieldClass *)pFVar2->_padding_;
      if (pFVar7->Id == CASTCLASS_None) {
        for (; (bVar6 = false, pFVar3 != (FFieldClass *)0x0 && (bVar6 = true, pFVar3 != pFVar7));
            pFVar3 = pFVar3->SuperClass) {
        }
      }
      else {
        bVar6 = (pFVar3->CastFlags & pFVar7->Id) != CASTCLASS_None;
      }
      if (bVar6) {
        EVar14 = FieldPathArray;
        goto LAB_14203dc27;
      }
      UE::GC::FPropertyStackScope::FPropertyStackScope(&local_2b0,param_4,this->Inner);
      (**(code **)(this->Inner->_padding_ + 0x178))(this->Inner,&local_200,0,local_2b8);
      this_00 = &local_2b0;
    }
    UE::GC::FPropertyStackScope::~FPropertyStackScope(this_00);
  }
LAB_14203dc27:
  FVar10 = UE::GC::FSchemaBuilder::Build
                     (&local_200,(_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)local_280
                     );
                    /* WARNING: Load size is inaccurate */
  pFVar11 = UE::GC::DeclareMember<UE::GC::FPropertyStack_&,UE::GC::FSchemaView>
                      (&local_218,param_4,*(int *)((longlong)&this->_padding_ + 4) + param_2,EVar14,
                       (FSchemaView)*FVar10.Handle);
  local_238.DebugName = pFVar11->DebugName;
  local_238.Offset = pFVar11->Offset;
  local_238.Type = pFVar11->Type;
  local_238._13_3_ = *(undefined3 *)&pFVar11->field_0xd;
  local_238.ExtraWord = pFVar11->ExtraWord;
  UE::GC::FSchemaBuilder::Add(local_2a8,&local_238);
  UE::GC::FSchemaBuilder::~FSchemaBuilder(&local_200);
  return;
}

// FArrayProperty @ 14212aea0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FArrayProperty * __thiscall
FArrayProperty::FArrayProperty
          (FArrayProperty *this,FFieldVariant param_1,FArrayPropertyParams *param_2)

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
  this->_padding_ = (longlong)&___7FArrayProperty__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10;
  this->Inner = (FProperty *)0x0;
  this->ArrayFlags = param_2->ArrayFlags;
  return this;
}

// FArrayProperty @ 14212af50

FArrayProperty * __thiscall
FArrayProperty::FArrayProperty
          (FArrayProperty *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3,
          EArrayPropertyFlags param_4)

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
  this->_padding_ = (longlong)&___7FArrayProperty__6B_;
  this->ArrayFlags = param_4;
  this->Inner = (FProperty *)0x0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10;
  return this;
}

// ~FArrayProperty @ 14212c8d0

void __thiscall FArrayProperty::~FArrayProperty(FArrayProperty *this)

{
  FProperty *pFVar1;
  
  this->_padding_ = (longlong)&___7FArrayProperty__6B_;
  pFVar1 = this->Inner;
  if (pFVar1 != (FProperty *)0x0) {
    (**(code **)(pFVar1->_padding_ + 8))(pFVar1,1);
  }
  this->Inner = (FProperty *)0x0;
  FField::~FField((FField *)this);
  return;
}

// operator() @ 14212f730

void __thiscall
`FArrayProperty::SerializeItem'::__l2::<lambda_1>::operator()
          (void *this,FStructuredArchiveSlot param_1,uchar *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FArchive *pFVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  FSlotBase local_res10;
  
  plVar6 = *(longlong **)((longlong)this + 8);
  if ((char)(*(longlong **)((longlong)this + 8))[0xf] == '\0') {
    plVar6 = (longlong *)0x0;
  }
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  if (plVar6 != (longlong *)0x0) {
    pFVar4 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
    lVar5 = (**(code **)(*(longlong *)pFVar4 + 0x28))(pFVar4);
    plVar7 = *(longlong **)(*(longlong *)this + 0x78);
    if (((plVar7 == (longlong *)0x0) || ((*(uint *)(plVar7[1] + 0x18) >> 0x14 & 1) == 0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("CastResult",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x472,L"CastFieldChecked failed with 0x%016llx"),
       plVar7 = (longlong *)0x0, bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = (**(code **)(*plVar7 + 0xb0))(plVar7,plVar6,local_res10.StructuredArchive,param_2,0,0);
    if (iVar3 == 1) {
      return;
    }
    if (iVar3 == 2) {
      (**(code **)(*(longlong *)plVar7[0xe] + 0x390))((longlong *)plVar7[0xe],param_2);
      pFVar4 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
      (**(code **)(*(longlong *)pFVar4 + 0x1b8))(pFVar4,*(int *)((longlong)plVar6 + 0x3c) + lVar5);
      return;
    }
    if (iVar3 == 3) {
      return;
    }
  }
  (**(code **)(**(longlong **)(*(longlong *)this + 0x78) + 0xc0))
            (*(longlong **)(*(longlong *)this + 0x78),local_res10.StructuredArchive,param_2,0);
  return;
}

// operator() @ 142130400

int __thiscall
`FArrayProperty::SerializeItem'::__l215::<lambda_4>::operator()
          (void *this,FOverriddenPropertyNodeID *param_1,FScriptArrayHelper *param_2)

{
  int iVar1;
  TScriptArray<TMemoryImageAllocator<0>_> *pTVar2;
  bool bVar3;
  ulonglong uVar4;
  TNotNull<UObject_const_*> TVar5;
  FOverriddenPropertyNodeID *pFVar6;
  longlong lVar7;
  int iVar8;
  FOverriddenPropertyNodeID local_38;
  
  iVar8 = 0;
  iVar1 = ((param_2->field1_0x8).FreezableArray)->ArrayNum;
  if (0 < iVar1) {
    do {
      pTVar2 = (param_2->field1_0x8).FreezableArray;
      if (pTVar2->ArrayNum == 0) {
        lVar7 = 0;
      }
      else {
        uVar4 = pTVar2->_padding_;
        if (((param_2->ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar4 & 1) != 0)) {
          uVar4 = (longlong)&pTVar2->_padding_ + ((longlong)uVar4 >> 0x18);
        }
        lVar7 = (longlong)param_2->ElementSize * (longlong)iVar8 + uVar4;
      }
      TVar5.Val = (UObject *)(**(code **)(**(longlong **)this + 0x1f8))(*(longlong **)this,lVar7);
      if (TVar5.Val != (UObject *)0x0) {
        pFVar6 = FOverriddenPropertyNodeID::FOverriddenPropertyNodeID(&local_38,TVar5);
        bVar3 = FOverriddenPropertyNodeID::operator==(param_1,pFVar6);
        if (local_38.Path.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Path.Path.AllocatorInstance.Data);
        }
        if (bVar3) {
          return iVar8;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar1);
  }
  return -1;
}

// AddCppProperty @ 142130b20

void __thiscall FArrayProperty::AddCppProperty(FArrayProperty *this,FProperty *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Inner != (FProperty *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Inner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyArray.cpp"
                       ,0x46e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 == (FProperty *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Property",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyArray.cpp"
                       ,0x46f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Inner = param_1;
  return;
}

// AddReferencedObjects @ 142130e10

void __thiscall
FArrayProperty::AddReferencedObjects(FArrayProperty *this,FReferenceCollector *param_1)

{
  FProperty *pFVar1;
  
  FField::AddReferencedObjects((FField *)this,param_1);
  pFVar1 = this->Inner;
  if (pFVar1 != (FProperty *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,param_1);
  }
  return;
}

// CanSerializeFromTypeName @ 142133a90

bool __thiscall
FArrayProperty::CanSerializeFromTypeName(FArrayProperty *this,FPropertyTypeName param_1)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FPropertyTypeName FVar5;
  longlong *plVar6;
  FName FVar7;
  undefined4 extraout_var;
  FPropertyTypeName local_res8 [2];
  FPropertyTypeName local_res10 [2];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  local_res8[0].Index = param_1.Index;
  local_res10[0].Index = param_1.Index;
  plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x158))(this,local_res20);
  FVar7 = UE::FPropertyTypeName::GetName(local_res8);
  if (*(longlong *)FVar7 != *plVar6) {
    return false;
  }
  pFVar1 = this->Inner;
  if (pFVar1 == (FProperty *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LocalInner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyArray.cpp"
                       ,0x5a2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x198);
  FVar5 = UE::FPropertyTypeName::GetParameter(local_res10,(int)local_res18);
  uVar4 = (*pcVar2)(pFVar1,*(undefined4 *)CONCAT44(extraout_var,FVar5.Index));
  return (bool)uVar4;
}

// ClearIntrusiveOptionalValue @ 142134620

void __thiscall FArrayProperty::ClearIntrusiveOptionalValue(FArrayProperty *this,void *param_1)

{
  EArrayPropertyFlags EVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FScriptArrayHelper local_28;
  
  cVar3 = (**(code **)(this->_padding_ + 0x1b8))();
  if (cVar3 != '\0') {
    EVar1 = this->ArrayFlags;
    local_28.ElementAlignment = (**(code **)(this->Inner->_padding_ + 0x168))();
    local_28.InnerProperty = this->Inner;
    local_28.ElementSize = (local_28.InnerProperty)->ElementSize;
    local_28.field1_0x8 = (FScriptArrayHelper_u_8)param_1;
    local_28.ArrayFlags = EVar1;
    if ((local_28.ElementSize < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((local_28.InnerProperty == (FProperty *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((local_28.field1_0x8.FreezableArray)->ArrayNum != 0) {
      FScriptArrayHelper::DestructItems(&local_28,0,(local_28.field1_0x8.FreezableArray)->ArrayNum);
      (local_28.field1_0x8.FreezableArray)->ArrayNum = 0;
      if ((local_28.ArrayFlags & UsesMemoryImageAllocator) == None) {
        if ((local_28.field1_0x8.FreezableArray)->ArrayMax != 0) {
          TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeTo
                    ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)local_28.field1_0x8.HeapArray
                     ,0,local_28.ElementSize,local_28.ElementAlignment);
        }
      }
      else if ((local_28.field1_0x8.FreezableArray)->ArrayMax != 0) {
        TScriptArray<TMemoryImageAllocator<0>_>::ResizeTo
                  (local_28.field1_0x8.FreezableArray,0,local_28.ElementSize,
                   local_28.ElementAlignment);
      }
    }
    if (*(int *)((longlong)param_1 + 0xc) != -1) {
      if (*(void **)param_1 != (void *)0x0) {
        FMemory::Free(*(void **)param_1);
      }
      *(undefined8 *)param_1 = 0;
      *(undefined4 *)((longlong)param_1 + 8) = 0;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
    }
  }
  return;
}

// ClearValueInternal @ 1421347f0

void __thiscall FArrayProperty::ClearValueInternal(FArrayProperty *this,void *param_1)

{
  EArrayPropertyFlags EVar1;
  code *pcVar2;
  bool bVar3;
  FScriptArrayHelper local_28;
  
  EVar1 = this->ArrayFlags;
  local_28.ElementAlignment = (**(code **)(this->Inner->_padding_ + 0x168))();
  local_28.InnerProperty = this->Inner;
  local_28.ElementSize = (local_28.InnerProperty)->ElementSize;
  local_28.field1_0x8 = (FScriptArrayHelper_u_8)param_1;
  local_28.ArrayFlags = EVar1;
  if (local_28.ElementSize < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1177,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_28.InnerProperty == (FProperty *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InnerProperty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1178,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((local_28.field1_0x8.FreezableArray)->ArrayNum != 0) {
    FScriptArrayHelper::DestructItems(&local_28,0,(local_28.field1_0x8.FreezableArray)->ArrayNum);
    (local_28.field1_0x8.FreezableArray)->ArrayNum = 0;
    if ((local_28.ArrayFlags & UsesMemoryImageAllocator) == None) {
      if ((local_28.field1_0x8.FreezableArray)->ArrayMax != 0) {
        TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeTo
                  ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)local_28.field1_0x8.HeapArray,0
                   ,local_28.ElementSize,local_28.ElementAlignment);
      }
    }
    else if ((local_28.field1_0x8.FreezableArray)->ArrayMax != 0) {
      TScriptArray<TMemoryImageAllocator<0>_>::ResizeTo
                (local_28.field1_0x8.FreezableArray,0,local_28.ElementSize,local_28.ElementAlignment
                );
      return;
    }
  }
  return;
}

// Construct @ 1421349c0

FField * __cdecl
FArrayProperty::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong uVar1;
  FProperty *this;
  FFieldClass *pFVar2;
  ulonglong local_res20;
  
  this = FMemory::Malloc(0x80,0);
  if (this != (FProperty *)0x0) {
    pFVar2 = StaticClass();
    FField::FField((FField *)this,EC_InternalUseOnlyConstructor,pFVar2);
    this->PropertyLinkNext = (FProperty *)0x0;
    this->NextRef = (FProperty *)0x0;
    this->DestructorLinkNext = (FProperty *)0x0;
    this->PostConstructLinkNext = (FProperty *)0x0;
    (this->RepNotifyFunc).ComparisonIndex = 0;
    (this->RepNotifyFunc).Number = 0;
    this->_padding_ = (longlong)&___7FArrayProperty__6B_;
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
    this->_padding_ = (longlong)&___7FArrayProperty__6B_;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this->ElementSize = 0x10;
    return (FField *)this;
  }
  return (FField *)0x0;
}

// ContainsClearOnFinishDestroyInternal @ 142135060

bool __thiscall
FArrayProperty::ContainsClearOnFinishDestroyInternal
          (FArrayProperty *this,TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_1
          )

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if (this->Inner == (FProperty *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Inner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyArray.cpp"
                       ,0x4c2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = this->Inner;
  if ((pFVar1->PropertyFlags & (CPF_NoDestructor|CPF_IsPlainOldData)) != CPF_None) {
    return false;
  }
                    /* WARNING: Could not recover jumptable at 0x0001421350ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(pFVar1->_padding_ + 0x140))(pFVar1,param_1);
  return (bool)uVar4;
}

// ConvertFromType @ 1421350f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EConvertFromTypeResult __thiscall
FArrayProperty::ConvertFromType
          (FArrayProperty *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2,uchar *param_3,
          UStruct *param_4,uchar *param_5)

{
  EArrayPropertyFlags EVar1;
  undefined8 uVar2;
  code *pcVar3;
  FSlotBase FVar4;
  uint uVar5;
  FScriptArrayHelper_u_8 this_00;
  uint uVar6;
  FArrayProperty *pFVar7;
  FPropertyTag *pFVar8;
  wchar_t *pwVar9;
  char cVar10;
  bool bVar11;
  FNameEntryId FVar12;
  EConvertFromTypeResult EVar13;
  FPropertyTypeName FVar14;
  undefined4 extraout_var;
  FArchive *this_01;
  undefined4 extraout_var_00;
  longlong *plVar15;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  uint *puVar16;
  undefined8 *puVar17;
  FPropertyTypeName *pFVar18;
  FName FVar19;
  ulonglong uVar20;
  FName FVar21;
  ulonglong uVar22;
  int iVar23;
  void *_Dst;
  longlong lVar24;
  int iVar25;
  wchar_t *pwVar26;
  FSlotBase local_res18;
  undefined1 auStack_2b8 [32];
  UStruct *local_298;
  wchar_t *local_290;
  uint local_288 [2];
  FScriptArrayHelper local_280;
  undefined1 local_260 [4];
  FPropertyTypeName local_25c;
  FPropertyTypeName local_258;
  FPropertyTypeName local_254;
  longlong local_250;
  UStruct *local_248;
  undefined1 local_240 [4];
  undefined1 local_23c [4];
  undefined1 local_238 [4];
  undefined1 local_234 [4];
  FPropertyTypeName local_230 [2];
  FArrayProperty *local_228;
  FPropertyTag *local_220;
  undefined8 local_218;
  code *local_210;
  undefined1 *local_208;
  undefined1 local_200 [8];
  void *local_1f8 [2];
  FPropertyTag local_1e8;
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [32];
  TStringBuilderBase<wchar_t> local_108;
  wchar_t local_e8 [32];
  TStringBuilderBase<wchar_t> local_a8;
  wchar_t local_88 [32];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_2b8;
  FVar21 = param_1->Type;
  local_248 = param_4;
  local_res18.StructuredArchive = (FStructuredArchive *)param_2;
  local_228 = this;
  local_220 = param_1;
  FVar12 = FNameEntryId::FromValidEName((EName)local_240);
  FVar19.Number = 0;
  FVar19.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar12.Value);
  if (FVar21 != FVar19) {
    return UseSerializeItem;
  }
  this_01 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res18);
  uVar2 = *(undefined8 *)&this_01->field_0x40;
  local_218 = uVar2;
  if ((int)((ulonglong)uVar2 >> 0x20) < 0x3f4) {
    local_25c.Index = (param_1->TypeName).Index;
    FVar14 = UE::FPropertyTypeName::GetParameter(&local_25c,(int)local_23c);
    UE::FPropertyTypeName::GetName((FPropertyTypeName *)CONCAT44(extraout_var_00,FVar14.Index));
    if (local_250 == 0) {
      return UseSerializeItem;
    }
    plVar15 = (longlong *)(**(code **)(this->Inner->_padding_ + 0x158))(this->Inner,local_200);
    if (local_250 == *plVar15) {
      return UseSerializeItem;
    }
  }
  else {
    cVar10 = (**(code **)(this->_padding_ + 0x198))(this,(param_1->TypeName).Index);
    if (cVar10 != '\0') {
      return UseSerializeItem;
    }
  }
  if (param_1->bExperimentalOverridableLogic != false) {
    return CannotConvert;
  }
  local_288[0] = 0;
  puVar16 = (uint *)**(undefined8 **)&this_01->field_0x8;
  if ((uint *)(*(undefined8 **)&this_01->field_0x8)[1] < puVar16 + 1) {
    if ((this_01->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_01 + 0x188))(this_01,local_288,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_01,local_288);
    }
  }
  else {
    local_288[0] = *puVar16;
    **(longlong **)&this_01->field_0x8 = **(longlong **)&this_01->field_0x8 + 4;
  }
  iVar23 = (int)this->_padding_;
  if (iVar23 < 1) {
    local_290 = (wchar_t *)CONCAT44(local_290._4_4_,iVar23);
    local_298 = (UStruct *)((ulonglong)local_298 & 0xffffffff00000000);
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                        ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      EVar13 = (*pcVar3)();
      return EVar13;
    }
  }
  if ((param_3 == (uchar *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ContainerPtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x2de,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    EVar13 = (*pcVar3)();
    return EVar13;
  }
  iVar23 = *(int *)((longlong)&this->_padding_ + 4);
  EVar1 = this->ArrayFlags;
  local_280.ElementAlignment = (**(code **)(this->Inner->_padding_ + 0x168))();
  local_280.InnerProperty = this->Inner;
  local_280.ElementSize = (local_280.InnerProperty)->ElementSize;
  local_280.field1_0x8.HeapArray = (FScriptArray *)(param_3 + iVar23);
  local_280.ArrayFlags = EVar1;
  if ((local_280.ElementSize < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ElementSize > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x1177,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    EVar13 = (*pcVar3)();
    return EVar13;
  }
  if ((local_280.InnerProperty == (FProperty *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InnerProperty",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x1178,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    EVar13 = (*pcVar3)();
    return EVar13;
  }
  uVar5 = local_288[0];
  uVar22 = (ulonglong)local_288[0];
  if (((int)local_288[0] < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Count>=0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x10a6,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    EVar13 = (*pcVar3)();
    return EVar13;
  }
  if ((local_280.field1_0x8.FreezableArray)->ArrayNum == 0) {
    if (uVar5 == 0) goto LAB_1421353db;
  }
  else {
    FScriptArrayHelper::DestructItems(&local_280,0,(local_280.field1_0x8.FreezableArray)->ArrayNum);
  }
  (local_280.field1_0x8.FreezableArray)->ArrayNum = 0;
  if ((local_280.ArrayFlags & UsesMemoryImageAllocator) == None) {
    if (uVar5 != (local_280.field1_0x8.FreezableArray)->ArrayMax) {
      TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeTo
                ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)local_280.field1_0x8.HeapArray,
                 uVar5,local_280.ElementSize,local_280.ElementAlignment);
    }
  }
  else if (uVar5 != (local_280.field1_0x8.FreezableArray)->ArrayMax) {
    TScriptArray<TMemoryImageAllocator<0>_>::ResizeTo
              (local_280.field1_0x8.FreezableArray,uVar5,local_280.ElementSize,
               local_280.ElementAlignment);
  }
  if (((int)uVar5 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Count>=0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x10f6,L""), bVar11)) {
    pcVar3 = (code *)swi(3);
    EVar13 = (*pcVar3)();
    return EVar13;
  }
LAB_1421353db:
  uVar6 = local_280.ElementAlignment;
  iVar23 = local_280.ElementSize;
  this_00 = local_280.field1_0x8;
  if ((local_280.ArrayFlags & UsesMemoryImageAllocator) == None) {
    if (((int)uVar5 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Count>=0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ScriptArray.h"
                            ,0x54,L""), bVar11)) {
      pcVar3 = (code *)swi(3);
      EVar13 = (*pcVar3)();
      return EVar13;
    }
    iVar25 = (this_00.FreezableArray)->ArrayNum;
    (this_00.FreezableArray)->ArrayNum = iVar25 + uVar5;
    if ((this_00.FreezableArray)->ArrayMax < (int)(iVar25 + uVar5)) {
      TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeGrow
                ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)this_00.HeapArray,iVar25,iVar23,
                 uVar6);
    }
  }
  else {
    if (((int)uVar5 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Count>=0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ScriptArray.h"
                            ,0x54,L""), bVar11)) {
      pcVar3 = (code *)swi(3);
      EVar13 = (*pcVar3)();
      return EVar13;
    }
    iVar25 = (this_00.FreezableArray)->ArrayNum;
    (this_00.FreezableArray)->ArrayNum = iVar25 + uVar5;
    if ((this_00.FreezableArray)->ArrayMax < (int)(iVar25 + uVar5)) {
      TScriptArray<TMemoryImageAllocator<0>_>::ResizeGrow
                (this_00.FreezableArray,iVar25,iVar23,uVar6);
    }
  }
  if (0 < (int)uVar5) {
    if ((local_280.field1_0x8.FreezableArray)->ArrayNum == 0) {
      _Dst = (void *)0x0;
    }
    else {
      uVar20 = (local_280.field1_0x8.FreezableArray)->_padding_;
      if (((local_280.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar20 & 1) != 0)) {
        uVar20 = (longlong)&(local_280.field1_0x8.HeapArray)->field_0x0 + ((longlong)uVar20 >> 0x18)
        ;
      }
      _Dst = (void *)((longlong)local_280.ElementSize * (longlong)iVar25 + uVar20);
    }
    if (((uint)(int)(local_280.InnerProperty)->PropertyFlags >> 9 & 1) == 0) {
      do {
        if (((uint)(int)(local_280.InnerProperty)->PropertyFlags >> 9 & 1) == 0) {
          (**(code **)((local_280.InnerProperty)->_padding_ + 0x150))();
        }
        else {
          memset(_Dst,0,(longlong)(local_280.InnerProperty)->ElementSize *
                        (longlong)(local_280.InnerProperty)->ArrayDim);
        }
        _Dst = (void *)((longlong)_Dst + (longlong)local_280.ElementSize);
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
    else {
      memset(_Dst,0,(longlong)local_280.ElementSize * (longlong)(int)uVar5);
    }
  }
  FPropertyTag::FPropertyTag(&local_1e8);
  pFVar7 = local_228;
  FPropertyTag::SetProperty(&local_1e8,local_228->Inner);
  pFVar8 = local_220;
  local_258.Index = (local_220->TypeName).Index;
  FVar14 = UE::FPropertyTypeName::GetParameter(&local_258,(int)local_238);
  FPropertyTag::SetType
            (&local_1e8,(FPropertyTypeName)*(int *)CONCAT44(extraout_var_01,FVar14.Index));
  local_1e8.Name = pFVar8->Name;
  uVar22 = 0;
  local_1e8.ArrayIndex = 0;
  if (((local_218._4_4_ < 0x3f4) && (499 < (int)uVar2)) &&
     (FVar12 = FNameEntryId::FromValidEName((EName)local_234), FVar21.Number = 0,
     FVar21.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_02,FVar12.Value),
     local_1e8.Type == FVar21)) {
    ::operator<<(this_01,&local_1e8);
  }
  if (local_288[0] != 0) {
    puVar16 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_208 = local_260;
    local_210 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    FThreadSingletonInitializer::Get
              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_210,puVar16);
    FVar4.StructuredArchive = local_res18.StructuredArchive;
    if ((((local_280.field1_0x8.FreezableArray)->ArrayNum != 0) &&
        (uVar22 = (local_280.field1_0x8.FreezableArray)->_padding_,
        (local_280.ArrayFlags & UsesMemoryImageAllocator) != None)) && ((uVar22 & 1) != 0)) {
      uVar22 = (longlong)&(local_280.field1_0x8.HeapArray)->field_0x0 + ((longlong)uVar22 >> 0x18);
    }
    local_290 = (wchar_t *)0x0;
    local_298 = local_248;
    EVar13 = (**(code **)(pFVar7->Inner->_padding_ + 0xb0))
                       (pFVar7->Inner,&local_1e8,local_res18.StructuredArchive,uVar22);
    if ((EVar13 - Serialized & 0xfffffffd) != 0) {
      if (2 < (byte)LogClass._0_1_) {
        puVar17 = (undefined8 *)(**(code **)(*(longlong *)this_01 + 0x18))(this_01,local_1f8);
        if (*(int *)(puVar17 + 1) == 0) {
          pwVar26 = L"";
        }
        else {
          pwVar26 = (wchar_t *)*puVar17;
        }
        pFVar18 = UE::FPropertyTypeName::FPropertyTypeName(local_230,pFVar7->Inner);
        local_a8.Base = local_88;
        local_a8.bIsDynamic = false;
        local_a8.bIsExternal = false;
        local_a8.CurPos = local_88;
        local_a8.End = (wchar_t *)local_48;
        UE::operator<<(&local_a8,pFVar18);
        if (local_a8.End < local_a8.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_a8,1);
        }
        pwVar9 = local_a8.Base;
        *local_a8.CurPos = L'\0';
        local_254.Index = local_1e8.TypeName.Index;
        local_108.Base = local_e8;
        local_108.CurPos = local_e8;
        local_108.End = (wchar_t *)&local_a8;
        local_108.bIsDynamic = false;
        local_108.bIsExternal = false;
        UE::operator<<(&local_108,&local_254);
        if (local_108.End < (TStringBuilderBase<wchar_t> *)(local_108.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&local_108,1);
        }
        *local_108.CurPos = L'\0';
        local_168.Base = local_148;
        local_168.CurPos = local_148;
        local_168.bIsDynamic = false;
        local_168.bIsExternal = false;
        local_168.End = (wchar_t *)&local_108;
        ::FName::AppendString(&pFVar8->Name,&local_168);
        if (local_168.End < (TStringBuilderBase<wchar_t> *)(local_168.CurPos + 1)) {
          TStringBuilderBase<wchar_t>::Extend(&local_168,1);
        }
        *local_168.CurPos = L'\0';
        local_298 = (UStruct *)pwVar9;
        local_290 = pwVar26;
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_108);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_a8);
        if (local_1f8[0] != (void *)0x0) {
          FMemory::Free(local_1f8[0]);
        }
      }
      return CannotConvert;
    }
    iVar23 = 1;
    if ((int)local_288[0] < 2) {
      return EVar13;
    }
    while( true ) {
      lVar24 = 0;
      if ((local_280.field1_0x8.FreezableArray)->ArrayNum != 0) {
        uVar22 = (local_280.field1_0x8.FreezableArray)->_padding_;
        if (((local_280.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar22 & 1) != 0)) {
          uVar22 = (longlong)&(local_280.field1_0x8.HeapArray)->field_0x0 +
                   ((longlong)uVar22 >> 0x18);
        }
        lVar24 = (longlong)local_280.ElementSize * (longlong)iVar23 + uVar22;
      }
      local_290 = (wchar_t *)0x0;
      local_298 = local_248;
      EVar13 = (**(code **)(pFVar7->Inner->_padding_ + 0xb0))
                         (pFVar7->Inner,&local_1e8,FVar4.StructuredArchive,lVar24);
      if (((EVar13 - Serialized & 0xfffffffd) != 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("ConvertResult == EConvertFromTypeResult::Converted || ConvertResult == EConvertFromTypeResult::Serialized"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyArray.cpp"
                              ,0x545,L""), bVar11)) break;
      iVar23 = iVar23 + 1;
      if ((int)local_288[0] <= iVar23) {
        return EVar13;
      }
    }
    pcVar3 = (code *)swi(3);
    EVar13 = (*pcVar3)();
    return EVar13;
  }
  return Converted;
}

// CopyValuesInternal @ 1421371a0

void __thiscall
FArrayProperty::CopyValuesInternal(FArrayProperty *this,void *param_1,void *param_2,int param_3)

{
  EArrayPropertyFlags EVar1;
  EArrayPropertyFlags EVar2;
  uint uVar3;
  FProperty *pFVar4;
  code *pcVar5;
  bool bVar6;
  void *_Dst;
  void *pvVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  FScriptArrayHelper local_38;
  
  if ((param_3 != 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyArray.cpp"
                         ,0x476,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EVar1 = this->ArrayFlags;
  (**(code **)(this->Inner->_padding_ + 0x168))();
  pFVar4 = this->Inner;
  if ((pFVar4->ElementSize < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((pFVar4 == (FProperty *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EVar2 = this->ArrayFlags;
  local_38.ElementAlignment = (**(code **)(this->Inner->_padding_ + 0x168))();
  local_38.InnerProperty = this->Inner;
  local_38.ElementSize = (local_38.InnerProperty)->ElementSize;
  local_38.field1_0x8 = (FScriptArrayHelper_u_8)param_1;
  local_38.ArrayFlags = EVar2;
  if ((local_38.ElementSize < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_38.InnerProperty == (FProperty *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)((longlong)param_2 + 8);
  if (((uint)(int)this->Inner->PropertyFlags >> 0x1e & 1) != 0) {
    if (((int)uVar3 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Count>=0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x10b1,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((local_38.field1_0x8.FreezableArray)->ArrayNum == 0) {
      if (uVar3 != 0) goto LAB_1421373e3;
    }
    else {
      FScriptArrayHelper::DestructItems(&local_38,0,(local_38.field1_0x8.FreezableArray)->ArrayNum);
LAB_1421373e3:
      (local_38.field1_0x8.FreezableArray)->ArrayNum = 0;
      if ((local_38.ArrayFlags & UsesMemoryImageAllocator) == None) {
        if (uVar3 != (local_38.field1_0x8.FreezableArray)->ArrayMax) {
          TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeTo
                    ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)local_38.field1_0x8.HeapArray
                     ,uVar3,local_38.ElementSize,local_38.ElementAlignment);
        }
      }
      else if (uVar3 != (local_38.field1_0x8.FreezableArray)->ArrayMax) {
        TScriptArray<TMemoryImageAllocator<0>_>::ResizeTo
                  (local_38.field1_0x8.FreezableArray,uVar3,local_38.ElementSize,
                   local_38.ElementAlignment);
      }
    }
    FScriptArrayHelper::AddUninitializedValues(&local_38,uVar3);
    goto LAB_14213741d;
  }
  if (((int)uVar3 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count>=0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x10a6,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((local_38.field1_0x8.FreezableArray)->ArrayNum == 0) {
    if (uVar3 != 0) goto LAB_142137349;
  }
  else {
    FScriptArrayHelper::DestructItems(&local_38,0,(local_38.field1_0x8.FreezableArray)->ArrayNum);
LAB_142137349:
    (local_38.field1_0x8.FreezableArray)->ArrayNum = 0;
    if ((local_38.ArrayFlags & UsesMemoryImageAllocator) == None) {
      if (uVar3 != (local_38.field1_0x8.FreezableArray)->ArrayMax) {
        TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeTo
                  ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)local_38.field1_0x8.HeapArray,
                   uVar3,local_38.ElementSize,local_38.ElementAlignment);
      }
    }
    else if (uVar3 != (local_38.field1_0x8.FreezableArray)->ArrayMax) {
      TScriptArray<TMemoryImageAllocator<0>_>::ResizeTo
                (local_38.field1_0x8.FreezableArray,uVar3,local_38.ElementSize,
                 local_38.ElementAlignment);
      FScriptArrayHelper::AddValues(&local_38,uVar3);
      goto LAB_14213741d;
    }
  }
  FScriptArrayHelper::AddValues(&local_38,uVar3);
LAB_14213741d:
  _Dst = (void *)0x0;
  if (uVar3 != 0) {
    lVar10 = (longlong)this->Inner->ElementSize;
    pvVar7 = _Dst;
    if (((*(int *)((longlong)param_2 + 8) != 0) &&
        (pvVar7 = *(void **)param_2, (EVar1 & UsesMemoryImageAllocator) != None)) &&
       (((ulonglong)pvVar7 & 1) != 0)) {
      pvVar7 = (void *)(((longlong)pvVar7 >> 0x18) + (longlong)param_2);
    }
    if ((((local_38.field1_0x8.FreezableArray)->ArrayNum != 0) &&
        (_Dst = (void *)(local_38.field1_0x8.FreezableArray)->_padding_,
        (local_38.ArrayFlags & UsesMemoryImageAllocator) != None)) && (((ulonglong)_Dst & 1) != 0))
    {
      _Dst = (void *)((longlong)&(local_38.field1_0x8.HeapArray)->field_0x0 +
                     ((longlong)_Dst >> 0x18));
    }
    if (((uint)(int)this->Inner->PropertyFlags >> 0x1e & 1) == 0) {
      if (0 < (int)uVar3) {
        lVar8 = (longlong)pvVar7 - (longlong)_Dst;
        uVar9 = (ulonglong)uVar3;
        do {
          pFVar4 = this->Inner;
          pvVar7 = (void *)(lVar8 + (longlong)_Dst);
          if (_Dst != pvVar7) {
            if (((uint)(int)pFVar4->PropertyFlags >> 0x1e & 1) == 0) {
              (**(code **)(pFVar4->_padding_ + 0xf0))(pFVar4,_Dst,pvVar7,pFVar4->ArrayDim);
            }
            else {
              memcpy(_Dst,pvVar7,(longlong)pFVar4->ElementSize * (longlong)pFVar4->ArrayDim);
            }
          }
          _Dst = (void *)((longlong)_Dst + lVar10);
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    else {
      memcpy(_Dst,pvVar7,(int)uVar3 * lVar10);
    }
  }
  return;
}

// DestroyValueInternal @ 142137f00

void __thiscall FArrayProperty::DestroyValueInternal(FArrayProperty *this,void *param_1)

{
  EArrayPropertyFlags EVar1;
  code *pcVar2;
  bool bVar3;
  FScriptArrayHelper local_28;
  
  EVar1 = this->ArrayFlags;
  local_28.ElementAlignment = (**(code **)(this->Inner->_padding_ + 0x168))();
  local_28.InnerProperty = this->Inner;
  local_28.ElementSize = (local_28.InnerProperty)->ElementSize;
  local_28.field1_0x8 = (FScriptArrayHelper_u_8)param_1;
  local_28.ArrayFlags = EVar1;
  if (local_28.ElementSize < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1177,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_28.InnerProperty == (FProperty *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InnerProperty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1178,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((local_28.field1_0x8.FreezableArray)->ArrayNum != 0) {
    FScriptArrayHelper::DestructItems(&local_28,0,(local_28.field1_0x8.FreezableArray)->ArrayNum);
    (local_28.field1_0x8.FreezableArray)->ArrayNum = 0;
    if ((local_28.ArrayFlags & UsesMemoryImageAllocator) == None) {
      if ((local_28.field1_0x8.FreezableArray)->ArrayMax != 0) {
        TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeTo
                  ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)local_28.field1_0x8.HeapArray,0
                   ,local_28.ElementSize,local_28.ElementAlignment);
      }
    }
    else if ((local_28.field1_0x8.FreezableArray)->ArrayMax != 0) {
      TScriptArray<TMemoryImageAllocator<0>_>::ResizeTo
                (local_28.field1_0x8.FreezableArray,0,local_28.ElementSize,local_28.ElementAlignment
                );
    }
  }
  if ((local_28.ArrayFlags & UsesMemoryImageAllocator) != None) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)local_28.field1_0x8.HeapArray);
    return;
  }
  if ((void *)(local_28.field1_0x8.FreezableArray)->_padding_ != (void *)0x0) {
    FMemory::Free((void *)(local_28.field1_0x8.FreezableArray)->_padding_);
  }
  return;
}

// ExportTextInnerItem @ 1421389b0

void __cdecl
FArrayProperty::ExportTextInnerItem
          (FString *param_1,FProperty *param_2,void *param_3,int param_4,void *param_5,int param_6,
          UObject *param_7,int param_8,UObject *param_9)

{
  void *_Dst;
  void *pvVar1;
  wchar_t wVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  FProperty *pFVar8;
  FString local_48;
  
  if ((param_2 == (FProperty *)0x0) || ((*(uint *)(param_2->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
    pFVar8 = (FProperty *)0x0;
    _Dst = (void *)0x0;
  }
  else {
    _Dst = (void *)0x0;
    pFVar8 = param_2;
    if ((param_2->ArrayDim == 1) && (_Dst = (void *)0x0, (param_8 & 0x40U) == 0)) {
      iVar3 = (int)*(short *)(param_2[1]._padding_ + 0x5c);
      _Dst = FMemory::Malloc((longlong)(*(int *)(param_2[1]._padding_ + 0x58) + -1 + iVar3 & -iVar3)
                             ,0);
      if (((uint)(int)param_2->PropertyFlags >> 9 & 1) == 0) {
        (**(code **)(param_2->_padding_ + 0x150))(param_2,_Dst);
      }
      else {
        memset(_Dst,0,(longlong)param_2->ElementSize * (longlong)param_2->ArrayDim);
      }
    }
  }
  iVar3 = 0;
  if (0 < param_4) {
    iVar5 = iVar3;
    do {
      iVar3 = iVar3 + 1;
      if ((param_8 & 0x2000000U) == 0) {
        wVar2 = L'(';
        if (iVar3 != 1) {
          wVar2 = L',';
        }
        ::FString::AppendChar(param_1,wVar2);
      }
      else {
        if (1 < iVar3) {
          ::FString::AppendChar(param_1,L'\n');
        }
        ::FString::PrintfImpl(&local_48,L"[%i] ");
        iVar6 = local_48.Data.ArrayNum + -1;
        if (local_48.Data.ArrayNum == 0) {
          iVar6 = 0;
        }
        ::FString::AppendChars(param_1,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar6);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      lVar4 = (longlong)(iVar5 * param_2->ElementSize);
      pvVar7 = (void *)((longlong)param_3 + lVar4);
      pvVar1 = pvVar7;
      if (((((param_8 & 0x40U) == 0) && (pvVar1 = _Dst, pFVar8 == (FProperty *)0x0)) &&
          (pvVar1 = (void *)0x0, param_5 != (void *)0x0)) && (iVar5 < param_6)) {
        pvVar1 = (void *)(lVar4 + (longlong)param_5);
      }
      (**(code **)(param_2->_padding_ + 0xe0))
                (param_2,param_1,pvVar7,0,pvVar1,param_7,param_8 | 1,param_9);
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_4);
    if ((0 < iVar3) && ((param_8 & 0x2000000U) == 0)) {
      ::FString::AppendChars(param_1,L")",1);
    }
  }
  if (_Dst != (void *)0x0) {
    if ((pFVar8->PropertyFlags & CPF_NoDestructor) == CPF_None) {
      (**(code **)(pFVar8->_padding_ + 0x138))(pFVar8,_Dst);
    }
    FMemory::Free(_Dst);
  }
  return;
}

// ExportText_Internal @ 142138f60

void __thiscall
FArrayProperty::ExportText_Internal
          (FArrayProperty *this,FString *param_1,void *param_2,EPropertyPointerType param_3,
          void *param_4,UObject *param_5,int param_6,UObject *param_7)

{
  EArrayPropertyFlags EVar1;
  EArrayPropertyFlags EVar2;
  FProperty *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  int iVar9;
  ulonglong *puVar10;
  
  puVar10 = (ulonglong *)0x0;
  iVar9 = 0;
  puVar7 = (ulonglong *)0x0;
  if (param_3 == Container) {
    cVar5 = (**(code **)(this->_padding_ + 0x78))();
    if (cVar5 == '\0') {
      param_2 = (void *)((longlong)*(int *)((longlong)&this->_padding_ + 4) + (longlong)param_2);
      puVar7 = puVar10;
    }
    else {
      puVar7 = FProperty::AllocateAndInitializeValue((FProperty *)this);
      FProperty::GetValue_InContainer((FProperty *)this,param_2,puVar7);
      param_2 = puVar7;
    }
  }
  EVar1 = this->ArrayFlags;
  (**(code **)(this->Inner->_padding_ + 0x168))();
  pFVar3 = this->Inner;
  if ((pFVar3->ElementSize < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((pFVar3 == (FProperty *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  puVar8 = param_4;
  if (param_4 != (void *)0x0) {
    EVar2 = this->ArrayFlags;
    (**(code **)(this->Inner->_padding_ + 0x168))();
    pFVar3 = this->Inner;
    if ((pFVar3->ElementSize < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((pFVar3 == (FProperty *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar9 = *(int *)((longlong)param_4 + 8);
    puVar8 = puVar10;
    if (iVar9 != 0) {
      if ((EVar2 & UsesMemoryImageAllocator) == None) {
        puVar8 = *(ulonglong **)param_4;
      }
      else {
        puVar8 = *(ulonglong **)param_4;
        if (((ulonglong)puVar8 & 1) != 0) {
          puVar8 = (ulonglong *)((longlong)param_4 + ((longlong)puVar8 >> 0x18));
        }
      }
    }
  }
  if ((((int)*(ulonglong *)((longlong)param_2 + 8) != 0) &&
      (puVar10 = *(ulonglong **)param_2, (EVar1 & UsesMemoryImageAllocator) != None)) &&
     (((ulonglong)puVar10 & 1) != 0)) {
    puVar10 = (ulonglong *)(((longlong)puVar10 >> 0x18) + (longlong)param_2);
  }
  ExportTextInnerItem(param_1,this->Inner,puVar10,(int)*(ulonglong *)((longlong)param_2 + 8),puVar8,
                      iVar9,param_5,param_6,param_7);
  if (puVar7 != (ulonglong *)0x0) {
    if ((this->_padding_ & 0x1000000000U) == 0) {
      (**(code **)(this->_padding_ + 0x138))(this,puVar7);
    }
    FMemory::Free(puVar7);
  }
  return;
}

// FinishDestroyInternal @ 14213bb80

void __thiscall FArrayProperty::FinishDestroyInternal(FArrayProperty *this,void *param_1)

{
  EArrayPropertyFlags EVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  
  if (param_1 != (void *)0x0) {
    if ((this->Inner == (FProperty *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Inner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyArray.cpp"
                           ,0x4cc,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((this->Inner->PropertyFlags & (CPF_NoDestructor|CPF_IsPlainOldData)) == CPF_None) {
      EVar1 = this->ArrayFlags;
      (**(code **)(this->Inner->_padding_ + 0x168))();
      pFVar3 = this->Inner;
      iVar2 = pFVar3->ElementSize;
      if ((iVar2 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementSize > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1177,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((pFVar3 == (FProperty *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InnerProperty",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1178,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      for (iVar8 = 0; iVar8 < *(int *)((longlong)param_1 + 8); iVar8 = iVar8 + 1) {
        pFVar3 = this->Inner;
        if (*(int *)((longlong)param_1 + 8) == 0) {
          lVar7 = 0;
        }
        else {
          uVar6 = *(ulonglong *)param_1;
          if (((EVar1 & UsesMemoryImageAllocator) != None) && ((uVar6 & 1) != 0)) {
            uVar6 = ((longlong)uVar6 >> 0x18) + (longlong)param_1;
          }
          lVar7 = (longlong)iVar2 * (longlong)iVar8 + uVar6;
        }
        if ((pFVar3->PropertyFlags & (CPF_NoDestructor|CPF_IsPlainOldData)) == CPF_None) {
          (**(code **)(pFVar3->_padding_ + 0x148))(pFVar3,lVar7);
        }
      }
    }
  }
  return;
}

// GetCPPMacroType @ 14213cca0

FString * __thiscall
FArrayProperty::GetCPPMacroType
          (FArrayProperty *this,FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  void *local_18 [2];
  
  pFVar2 = (FString *)(**(code **)(this->Inner->_padding_ + 0x68))(this->Inner,local_18,0,0);
  if (param_1 != pFVar2) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_1->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (param_1->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  ::FString::FString(__return_storage_ptr__,L"TARRAY");
  return __return_storage_ptr__;
}

// GetCPPType @ 14213cdd0

FString * __thiscall
FArrayProperty::GetCPPType
          (FArrayProperty *this,FString *__return_storage_ptr__,FString *param_1,uint param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  
  pFVar2 = (FScriptContainerElement *)0x0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  if (param_1 != (FString *)0x0) {
    pFVar1 = (FString *)
             (**(code **)(this->Inner->_padding_ + 0x68))
                       (this->Inner,local_28,&local_38,param_2 & 0xfffffffd);
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
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetCPPTypeCustom @ 14213cee0

FString * __thiscall
FArrayProperty::GetCPPTypeCustom
          (FArrayProperty *this,FString *__return_storage_ptr__,FString *param_1,uint param_2,
          FString *param_3,FString *param_4)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ForAnyElementType FVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (param_1 == (FString *)0x0) goto LAB_14213d141;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = (param_4->Data).ArrayNum;
  lVar10 = (longlong)local_58.Data.ArrayNum;
  pFVar1 = (param_4->Data).AllocatorInstance.Data;
  if (local_58.Data.ArrayNum == 0) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_58.Data.ArrayNum,
               &local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,pFVar1,lVar10 * 2);
  }
  iVar5 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  iVar6 = 0;
  bVar2 = false;
  if (iVar5 == 0) {
LAB_14213cfdd:
    bVar3 = bVar2;
    bVar2 = false;
  }
  else {
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar8.Data = local_58.Data.AllocatorInstance.Data;
    }
    iVar7 = iVar5;
    if (1 < iVar5) {
      iVar7 = 1;
    }
    iVar4 = iVar6;
    if (0 < iVar7) {
      iVar4 = iVar7;
    }
    ::FString::FString(&local_38,(wchar_t *)(FVar8.Data + ((longlong)iVar5 - (longlong)iVar4) * 2));
    bVar3 = true;
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar8.Data = local_38.Data.AllocatorInstance.Data;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,L">");
    bVar2 = true;
    if (iVar5 != 0) goto LAB_14213cfdd;
    bVar2 = true;
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  bVar3 = false;
  if (bVar2) {
LAB_14213d09a:
    ::FString::AppendChars(&local_58,L" ",1);
  }
  else {
    iVar5 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar5 = iVar6;
    }
    if (iVar5 == 0) {
      iVar5 = (param_3->Data).ArrayNum;
      iVar7 = iVar5 + -1;
      if (iVar5 == 0) {
        iVar7 = iVar6;
      }
      if (iVar7 == 0) goto LAB_14213d07e;
      bVar3 = true;
      if (iVar5 == 0) {
        pwVar9 = L"";
        iVar5 = iVar6;
      }
      else {
        pwVar9 = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
        iVar5 = iVar5 + -1;
      }
      iVar7 = iVar5;
      if (1 < iVar5) {
        iVar7 = 1;
      }
      if (0 < iVar7) {
        iVar6 = iVar7;
      }
      ::FString::FString(&local_38,
                         (wchar_t *)((longlong)pwVar9 + ((longlong)iVar5 - (longlong)iVar6) * 2));
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar8.Data = local_38.Data.AllocatorInstance.Data;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,L">");
      if (iVar5 != 0) goto LAB_14213d07e;
      bVar2 = true;
    }
    else {
LAB_14213d07e:
      bVar2 = false;
    }
    if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar2) goto LAB_14213d09a;
  }
  ::FString::PrintfImpl(&local_48,L"<%s%s>");
  if (param_1 != &local_48) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    (param_1->Data).ArrayNum = local_48.Data.ArrayNum;
    (param_1->Data).ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
LAB_14213d141:
  ::FString::FString(__return_storage_ptr__,L"TArray");
  return __return_storage_ptr__;
}

// GetInnerFieldByName @ 14213d870

FField * __thiscall FArrayProperty::GetInnerFieldByName(FArrayProperty *this,FName *param_1)

{
  FProperty *pFVar1;
  bool bVar2;
  FName FVar3;
  
  pFVar1 = this->Inner;
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
      return (FField *)this->Inner;
    }
  }
  return (FField *)0x0;
}

// GetInnerFields @ 14213d8e0

void __thiscall
FArrayProperty::GetInnerFields
          (FArrayProperty *this,TArray<FField_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FProperty *local_18 [2];
  
  local_18[0] = this->Inner;
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
    (**(code **)(this->Inner->_padding_ + 0x58))(this->Inner,param_1);
  }
  return;
}

// GetPreloadDependencies @ 14213e450

void __thiscall
FArrayProperty::GetPreloadDependencies
          (FArrayProperty *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FProperty *pFVar1;
  
  FField::GetPreloadDependencies((FField *)this,param_1);
  pFVar1 = this->Inner;
  if (pFVar1 != (FProperty *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,param_1);
  }
  return;
}

// GetValueAddressAtIndex_Direct @ 14213ee10

void * __thiscall
FArrayProperty::GetValueAddressAtIndex_Direct
          (FArrayProperty *this,FProperty *param_1,void *param_2,int param_3)

{
  EArrayPropertyFlags EVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  bool bVar5;
  void *pvVar6;
  ulonglong uVar7;
  
  EVar1 = this->ArrayFlags;
  (**(code **)(this->Inner->_padding_ + 0x168))();
  pFVar3 = this->Inner;
  iVar2 = pFVar3->ElementSize;
  if (iVar2 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementSize > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1177,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar4)();
      return pvVar6;
    }
  }
  if (pFVar3 == (FProperty *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InnerProperty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0x1178,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar4)();
      return pvVar6;
    }
  }
  if (this->Inner != param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Inner == InInner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyArray.cpp"
                       ,0x566,
                       L"Passed in inner must be identical to the array property inner property");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar4)();
      return pvVar6;
    }
  }
  if ((param_3 < *(int *)((longlong)param_2 + 8)) && (-1 < param_3)) {
    if (*(int *)((longlong)param_2 + 8) == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      uVar7 = *(ulonglong *)param_2;
      if (((EVar1 & UsesMemoryImageAllocator) != None) && ((uVar7 & 1) != 0)) {
        uVar7 = ((longlong)uVar7 >> 0x18) + (longlong)param_2;
      }
      pvVar6 = (void *)((longlong)iVar2 * (longlong)param_3 + uVar7);
    }
  }
  else {
    pvVar6 = (void *)0x0;
  }
  return pvVar6;
}

// HasIntrusiveUnsetOptionalState @ 14213f220

bool __thiscall FArrayProperty::HasIntrusiveUnsetOptionalState(FArrayProperty *this)

{
  return true;
}

// Identical @ 14213f230

bool __thiscall
FArrayProperty::Identical(FArrayProperty *this,void *param_1,void *param_2,uint param_3)

{
  EArrayPropertyFlags EVar1;
  EArrayPropertyFlags EVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FProperty *pFVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  
  EVar1 = this->ArrayFlags;
  (**(code **)(this->Inner->_padding_ + 0x168))();
  pFVar6 = this->Inner;
  iVar3 = pFVar6->ElementSize;
  if ((iVar3 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  if ((pFVar6 == (FProperty *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  iVar4 = *(int *)((longlong)param_1 + 8);
  if (param_2 == (void *)0x0) {
    return iVar4 == 0;
  }
  EVar2 = this->ArrayFlags;
  (**(code **)(this->Inner->_padding_ + 0x168))();
  pFVar6 = this->Inner;
  iVar5 = pFVar6->ElementSize;
  if ((iVar5 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  if ((pFVar6 == (FProperty *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  if (iVar4 == *(int *)((longlong)param_2 + 8)) {
    uVar14 = 0;
    if (0 < iVar4) {
      do {
        if (*(int *)((longlong)param_2 + 8) == 0) {
          lVar15 = 0;
        }
        else {
          uVar11 = *(ulonglong *)param_2;
          if (((EVar2 & UsesMemoryImageAllocator) != None) && ((uVar11 & 1) != 0)) {
            uVar11 = ((longlong)uVar11 >> 0x18) + (longlong)param_2;
          }
          lVar15 = (longlong)iVar5 * uVar14 + uVar11;
        }
        if (*(int *)((longlong)param_1 + 8) == 0) {
          lVar12 = 0;
        }
        else {
          uVar11 = *(ulonglong *)param_1;
          if (((EVar1 & UsesMemoryImageAllocator) != None) && ((uVar11 & 1) != 0)) {
            uVar11 = ((longlong)uVar11 >> 0x18) + (longlong)param_1;
          }
          lVar12 = (longlong)iVar3 * uVar14 + uVar11;
        }
        cVar10 = (**(code **)(this->Inner->_padding_ + 0xb8))(this->Inner,lVar12,lVar15,param_3);
        if (cVar10 == '\0') goto LAB_14213f3ee;
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
      } while ((int)uVar13 < iVar4);
    }
    bVar8 = true;
  }
  else {
LAB_14213f3ee:
    bVar8 = false;
  }
  return bVar8;
}

// ImportTextInnerItem @ 142141eb0

/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __cdecl
FArrayProperty::ImportTextInnerItem
          (wchar_t *param_1,FProperty *param_2,void *param_3,int param_4,UObject *param_5,
          FScriptArrayHelper *param_6,FOutputDevice *param_7)

{
  EArrayPropertyFlags EVar1;
  wchar_t wVar2;
  TScriptArray<TMemoryImageAllocator<0>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  wchar_t *pwVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  wchar_t *pwVar10;
  wchar_t *local_res8;
  FString local_50;
  
  wVar2 = *param_1;
  if (((wVar2 == L'\0') || (wVar2 == L')')) || (wVar2 == L',')) {
    if ((param_6 != (FScriptArrayHelper *)0x0) &&
       (iVar8 = ((param_6->field1_0x8).FreezableArray)->ArrayNum, iVar8 != 0)) {
      local_res8 = param_1;
      FScriptArrayHelper::DestructItems(param_6,0,iVar8);
      pTVar3 = (param_6->field1_0x8).FreezableArray;
      EVar1 = param_6->ArrayFlags;
      uVar9 = param_6->ElementAlignment;
      iVar8 = param_6->ElementSize;
      pTVar3->ArrayNum = 0;
      param_1 = local_res8;
      if ((EVar1 & UsesMemoryImageAllocator) == None) {
        if (pTVar3->ArrayMax != 0) {
          TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeTo
                    ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)pTVar3,0,iVar8,uVar9);
          param_1 = local_res8;
        }
      }
      else if (pTVar3->ArrayMax != 0) {
        TScriptArray<TMemoryImageAllocator<0>_>::ResizeTo(pTVar3,0,iVar8,uVar9);
        return local_res8;
      }
    }
    return param_1;
  }
  local_res8 = param_1 + 1;
  if (wVar2 == L'(') {
    if (param_6 != (FScriptArrayHelper *)0x0) {
      FScriptArrayHelper::EmptyValues(param_6,0);
      iVar8 = ((param_6->field1_0x8).FreezableArray)->ArrayNum;
      if (iVar8 < 1) {
        FScriptArrayHelper::AddValues(param_6,1 - iVar8);
      }
    }
    SkipWhitespace(&local_res8);
    if (*local_res8 == L')') {
      if (param_6 != (FScriptArrayHelper *)0x0) {
        FScriptArrayHelper::EmptyValues(param_6,0);
      }
      pwVar6 = local_res8 + 1;
    }
    else {
      pwVar10 = (wchar_t *)0x0;
      pwVar6 = pwVar10;
      do {
        SkipWhitespace(&local_res8);
        iVar8 = (int)pwVar6;
        if (*local_res8 != L',') {
          if (param_6 == (FScriptArrayHelper *)0x0) {
            pwVar6 = (wchar_t *)((longlong)(iVar8 * param_2->ElementSize) + (longlong)param_3);
          }
          else {
            pTVar3 = (param_6->field1_0x8).FreezableArray;
            pwVar6 = pwVar10;
            if (pTVar3->ArrayNum != 0) {
              uVar7 = pTVar3->_padding_;
              if (((param_6->ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar7 & 1) != 0))
              {
                uVar7 = (longlong)&pTVar3->_padding_ + ((longlong)uVar7 >> 0x18);
              }
              pwVar6 = (wchar_t *)((longlong)param_6->ElementSize * (longlong)iVar8 + uVar7);
            }
            if ((param_2->Offset_Internal != 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ArrayHelper == nullptr || Inner->GetOffset_ForInternal() == 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyArray.cpp"
                                   ,0x438,L"Expected the Inner property of the FArrayProperty."),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              pwVar6 = (wchar_t *)(*pcVar4)();
              return pwVar6;
            }
          }
          local_res8 = FProperty::ImportText_Direct
                                 (param_2,local_res8,pwVar6,param_5,param_4 | 1,param_7);
          if (local_res8 == (wchar_t *)0x0) goto LAB_142142125;
          SkipWhitespace(&local_res8);
          if (*local_res8 != L',') goto LAB_142142114;
        }
        local_res8 = local_res8 + 1;
        uVar9 = iVar8 + 1;
        pwVar6 = (wchar_t *)(ulonglong)uVar9;
        if (param_6 == (FScriptArrayHelper *)0x0) {
          if (param_2->ArrayDim <= (int)uVar9) {
            bVar5 = IsThisNotNull(param_2,"FField::GetName");
            if (bVar5) {
              ::FName::ToString((FName *)&param_2->_padding_,&local_50);
            }
            else {
              ::FString::FString(&local_50,L"None");
            }
            FOutputDevice::LogfImpl
                      (param_7,Warning,
                       L"%s is a fixed-sized array of %i values. Additional data after %i has been ignored during import."
                      );
            if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_50.Data.AllocatorInstance.Data);
            }
LAB_142142114:
            if (*local_res8 == L')') {
              return local_res8 + 1;
            }
            return (wchar_t *)0x0;
          }
        }
        else {
          FScriptArrayHelper::ExpandForIndex(param_6,uVar9);
        }
      } while (*local_res8 != L')');
      pwVar6 = local_res8 + 1;
      if (*local_res8 != L')') {
        pwVar6 = pwVar10;
      }
    }
  }
  else {
LAB_142142125:
    pwVar6 = (wchar_t *)0x0;
  }
  return pwVar6;
}

// ImportText_Internal @ 142142380

wchar_t * __thiscall
FArrayProperty::ImportText_Internal
          (FArrayProperty *this,wchar_t *param_1,void *param_2,EPropertyPointerType param_3,
          UObject *param_4,int param_5,FOutputDevice *param_6)

{
  EArrayPropertyFlags EVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  FScriptArrayHelper_u_8 FVar5;
  wchar_t *pwVar6;
  FScriptArrayHelper_u_8 FVar7;
  FScriptArrayHelper local_38;
  
  FVar5.HeapArray = (FScriptArray *)0x0;
  FVar7 = (FScriptArrayHelper_u_8)param_2;
  if (param_3 == Container) {
    cVar3 = (**(code **)(this->_padding_ + 0x70))();
    if (cVar3 == '\0') {
      FVar7.HeapArray =
           (FScriptArray *)((longlong)*(int *)((longlong)&this->_padding_ + 4) + (longlong)param_2);
    }
    else {
      FVar5.HeapArray = FProperty::AllocateAndInitializeValue((FProperty *)this);
      FVar7.HeapArray = FVar5.HeapArray;
    }
  }
  EVar1 = this->ArrayFlags;
  local_38.ElementAlignment = (**(code **)(this->Inner->_padding_ + 0x168))();
  local_38.InnerProperty = this->Inner;
  local_38.ElementSize = (local_38.InnerProperty)->ElementSize;
  local_38.field1_0x8 = FVar7;
  local_38.ArrayFlags = EVar1;
  if ((local_38.ElementSize < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1177,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pwVar6 = (wchar_t *)(*pcVar2)();
    return pwVar6;
  }
  if ((local_38.InnerProperty == (FProperty *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InnerProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x1178,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pwVar6 = (wchar_t *)(*pcVar2)();
    return pwVar6;
  }
  pwVar6 = ImportTextInnerItem(param_1,this->Inner,FVar7.HeapArray,param_5,param_4,&local_38,param_6
                              );
  if (FVar5.HeapArray != (FScriptArray *)0x0) {
    FProperty::SetValue_InContainer((FProperty *)this,param_2,FVar5.HeapArray);
    if ((this->_padding_ & 0x1000000000U) == 0) {
      (**(code **)(this->_padding_ + 0x138))(this,FVar5.HeapArray);
    }
    FMemory::Free(FVar5.HeapArray);
  }
  return pwVar6;
}

// InitializeIntrusiveUnsetOptionalValue @ 142142c00

void __thiscall
FArrayProperty::InitializeIntrusiveUnsetOptionalValue(FArrayProperty *this,void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// InstanceSubobjects @ 142142d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall
FArrayProperty::InstanceSubobjects
          (FArrayProperty *this,void *param_1,void *param_2,TNotNull<UObject_*> param_3,
          FObjectInstancingGraph *param_4)

{
  FProperty *pFVar1;
  code *pcVar2;
  FArrayProperty *pFVar3;
  bool bVar4;
  ulonglong uVar5;
  void *_Src;
  undefined1 *puVar6;
  longlong lVar7;
  size_t sVar8;
  void *_Dst;
  int iVar9;
  int iVar10;
  undefined1 auStack_88 [48];
  EArrayPropertyFlags local_58;
  EArrayPropertyFlags local_57;
  int local_54;
  int local_50 [2];
  void *local_48;
  int local_40;
  FArrayProperty *local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)&local_58;
  puVar6 = auStack_88;
  if ((param_1 != (void *)0x0) &&
     (((this->Inner->PropertyFlags & (CPF_ContainsInstancedReference|CPF_InstancedReference)) !=
       CPF_None ||
      (puVar6 = auStack_88, *(char *)(*(longlong *)&(param_3.Val)->field_0x10 + 0x128) != '\0')))) {
    local_58 = this->ArrayFlags;
    local_38 = this;
    (**(code **)(this->Inner->_padding_ + 0x168))();
    pFVar1 = this->Inner;
    iVar9 = pFVar1->ElementSize;
    local_54 = iVar9;
    if ((iVar9 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pFVar1 == (FProperty *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_57 = this->ArrayFlags;
    (**(code **)(this->Inner->_padding_ + 0x168))();
    pFVar1 = this->Inner;
    local_40 = pFVar1->ElementSize;
    if ((local_40 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1177,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pFVar1 == (FProperty *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InnerProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1178,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_50[0] = this->Inner->ElementSize;
    if (local_50[0] == 0) {
      local_48 = (void *)0x0;
      puVar6 = auStack_88;
    }
    else {
      uVar5 = (longlong)(local_50[0] + 0xf) + 0xf;
      if (uVar5 <= (ulonglong)(longlong)(local_50[0] + 0xf)) {
        uVar5 = 0xffffffffffffff0;
      }
      puVar6 = auStack_88 + -(uVar5 & 0xfffffffffffffff0);
      local_48 = (void *)((longlong)local_50 + -(uVar5 & 0xfffffffffffffff0));
    }
    local_58 = local_58 & UsesMemoryImageAllocator;
    _Dst = local_48;
    for (iVar10 = 0; iVar10 < *(int *)((longlong)param_1 + 8); iVar10 = iVar10 + 1) {
      if (((param_2 == (void *)0x0) || (*(int *)((longlong)param_2 + 8) <= iVar10)) ||
         (*(int *)((longlong)param_2 + 8) == 0)) {
        lVar7 = 0;
      }
      else {
        uVar5 = *(ulonglong *)param_2;
        if (((local_57 & UsesMemoryImageAllocator) != None) && ((uVar5 & 1) != 0)) {
          uVar5 = ((longlong)uVar5 >> 0x18) + (longlong)param_2;
        }
        lVar7 = (longlong)local_40 * (longlong)iVar10 + uVar5;
      }
      if (*(int *)((longlong)param_1 + 8) == 0) {
        _Src = (void *)0x0;
      }
      else {
        uVar5 = *(ulonglong *)param_1;
        if ((local_58 != None) && ((uVar5 & 1) != 0)) {
          uVar5 = ((longlong)uVar5 >> 0x18) + (longlong)param_1;
        }
        _Src = (void *)((longlong)iVar9 * (longlong)iVar10 + uVar5);
      }
      sVar8 = (size_t)local_50[0];
      *(undefined8 *)(puVar6 + -8) = 0x142142f47;
      memmove(_Dst,_Src,sVar8);
      pFVar3 = local_38;
      _Dst = local_48;
      *(FObjectInstancingGraph **)(puVar6 + 0x20) = param_4;
      pFVar1 = pFVar3->Inner;
      pcVar2 = *(code **)(pFVar1->_padding_ + 0x160);
      *(undefined8 *)(puVar6 + -8) = 0x142142f71;
      (*pcVar2)(pFVar1,_Dst,lVar7,param_3.Val);
      if (iVar10 < *(int *)((longlong)param_1 + 8)) {
        if (*(int *)((longlong)param_1 + 8) == 0) {
          sVar8 = (size_t)local_50[0];
          *(undefined8 *)(puVar6 + -8) = 0x142142f8e;
          memmove((void *)0x0,_Dst,sVar8);
        }
        else {
          uVar5 = *(ulonglong *)param_1;
          if ((local_58 != None) && (iVar9 = local_54, (uVar5 & 1) != 0)) {
            uVar5 = ((longlong)uVar5 >> 0x18) + (longlong)param_1;
          }
          sVar8 = (size_t)local_50[0];
          *(undefined8 *)(puVar6 + -8) = 0x142142fc1;
          memmove((void *)((longlong)iVar9 * (longlong)iVar10 + uVar5),_Dst,sVar8);
        }
      }
      else {
        pFVar1 = local_38->Inner;
        if ((pFVar1->PropertyFlags & CPF_NoDestructor) == CPF_None) {
          pcVar2 = *(code **)(pFVar1->_padding_ + 0x138);
          *(undefined8 *)(puVar6 + -8) = 0x142142fe7;
          (*pcVar2)(pFVar1,_Dst);
        }
      }
      iVar9 = local_54;
    }
  }
  *(undefined8 *)(puVar6 + -8) = 0x14214300a;
  return;
}

// IsIntrusiveOptionalValueSet @ 142143440

bool __thiscall FArrayProperty::IsIntrusiveOptionalValueSet(FArrayProperty *this,void *param_1)

{
  return *(int *)((longlong)param_1 + 0xc) != -1;
}

// LinkInternal @ 1421443d0

void __thiscall FArrayProperty::LinkInternal(FArrayProperty *this,FArchive *param_1)

{
  FProperty *pFVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  uint uVar5;
  ulonglong uVar6;
  
  pFVar1 = this->Inner;
  (**(code **)(pFVar1->_padding_ + 0xa8))(pFVar1);
  pUVar4 = Z_Construct_UClass_UObject_NoRegister();
  bVar2 = FFieldVariant::IsA((FFieldVariant *)&pFVar1->_padding_,pUVar4);
  if (((bVar2) && (uVar6 = pFVar1->_padding_ & 0xfffffffffffffffe, uVar6 != 0)) &&
     ((*(byte *)(*(longlong *)(uVar6 + 0x10) + 0xd8) & 8) != 0)) {
    iVar3 = (**(code **)(pFVar1->_padding_ + 0x168))(pFVar1);
    uVar5 = iVar3 + -1 + *(int *)(uVar6 + 0x58) & -iVar3;
  }
  else {
    (**(code **)(pFVar1->_padding_ + 0x168))(pFVar1);
    uVar5 = 0;
  }
  pFVar1->Offset_Internal = uVar5;
  uVar5 = pFVar1->ElementSize * pFVar1->ArrayDim + uVar5;
  if (uVar5 < 0x7fffffff) {
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::CoreUObject::Private::OnInvalidPropertySize(uVar5,pFVar1);
}

// LoadTypeName @ 142144a00

bool __thiscall
FArrayProperty::LoadTypeName(FArrayProperty *this,FPropertyTypeName param_1,FPropertyTag *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  FName FVar5;
  longlong *plVar6;
  FProperty *pFVar7;
  FPropertyTypeName local_res8 [2];
  FPropertyTypeName local_res10 [4];
  FPropertyTypeName local_res20 [2];
  FName local_58;
  FFieldObjectUnion local_50 [2];
  undefined1 local_40 [16];
  FArrayProperty *local_30;
  FPropertyTypeName *local_28;
  
  local_res8[0].Index = param_1.Index;
  local_res10[0].Index = param_1.Index;
  FVar5 = UE::FPropertyTypeName::GetName(local_res8);
  plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x158))(this,local_40);
  if (*plVar6 != *(longlong *)FVar5) {
    local_28 = local_res8;
    local_30 = this;
    bVar2 = `FProperty::LoadTypeName'::__l2::<lambda_1>::operator()(&local_30);
    if (!bVar2) {
      return false;
    }
  }
  UE::FPropertyTypeName::GetParameter(local_res10,(int)local_res20);
  bVar2 = IsThisNotNull(this,"FField::GetFName");
  if (bVar2) {
    local_58 = (FName)this->_padding_;
  }
  else {
    local_58.ComparisonIndex.Value = 0;
    local_58.Number = 0;
  }
  local_50[0] = (FFieldObjectUnion)this;
  if ((((ulonglong)this & 1) != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsUObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x180,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  FVar5 = UE::FPropertyTypeName::GetName(local_res20);
  pFVar7 = (FProperty *)
           FField::TryConstruct((FName *)FVar5,(FFieldVariant *)local_50,&local_58,RF_NoFlags);
  if (pFVar7 != (FProperty *)0x0) {
    if ((((uint)(int)((FFieldClass *)pFVar7->_padding_)->CastFlags >> 0xf & 1) != 0) &&
       (cVar4 = (**(code **)(pFVar7->_padding_ + 0x188))(pFVar7,local_res20[0].Index,param_2),
       cVar4 != '\0')) {
      this->Inner = pFVar7;
      return true;
    }
    (**(code **)(pFVar7->_padding_ + 8))(pFVar7,1);
  }
  return false;
}

// NetSerializeItem @ 1421455d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FArrayProperty::NetSerializeItem
          (FArrayProperty *this,FArchive *param_1,UPackageMap *param_2,void *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogProperty);
  return true;
}

// PostDuplicate @ 142146850

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FArrayProperty::PostDuplicate(FArrayProperty *this,FField *param_1)

{
  code *pcVar1;
  bool bVar2;
  FProperty *pFVar3;
  FArrayProperty *local_res10;
  
  local_res10 = this;
  if ((((ulonglong)this & 1) != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsUObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x180,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar3 = (FProperty *)
           FField::Duplicate(param_1[2].Next,(FFieldVariant)&local_res10,(FName)0x0,
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
  if (((pFVar3 == (FProperty *)0x0) ||
      (((uint)(int)((FFieldClass *)pFVar3->_padding_)->CastFlags >> 0xf & 1) == 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x472,L"CastFieldChecked failed with 0x%016llx"),
     pFVar3 = (FProperty *)0x0, bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->Inner = pFVar3;
  *(int *)&this->_padding_ = (int)param_1[1]._padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1[1]._padding_ + 4);
  this->_padding_ = (longlong)param_1[1].ClassPrivate;
  *(undefined2 *)&this->_padding_ = *(undefined2 *)&param_1[1].Owner.Container;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1[1].Owner.Container + 4);
  this->_padding_ = (longlong)param_1[2].ClassPrivate;
  *(undefined1 *)((longlong)&this->_padding_ + 2) =
       *(undefined1 *)((longlong)&param_1[1].Owner.Container + 2);
  FField::PostDuplicate((FField *)this,param_1);
  return;
}

// ResolveVisitedPathInfo @ 14214b270

void * __thiscall
FArrayProperty::ResolveVisitedPathInfo
          (FArrayProperty *this,void *param_1,FPropertyVisitorInfo *param_2)

{
  void *pvVar1;
  
  if ((param_2->PropertyInfo == ContainerIndex) && (param_2->Property == this->Inner)) {
                    /* WARNING: Could not recover jumptable at 0x00014214b28d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (void *)(**(code **)(this->_padding_ + 0xd8))
                               (this,param_2->Property,param_1,param_2->Index);
    return pvVar1;
  }
  return (void *)0x0;
}

// SameType @ 14214b4e0

bool __thiscall FArrayProperty::SameType(FArrayProperty *this,FProperty *param_1)

{
  FProperty *pFVar1;
  char cVar2;
  
  if (((param_1 != (FProperty *)0x0) && (this->_padding_ == param_1->_padding_)) &&
     (pFVar1 = this->Inner, pFVar1 != (FProperty *)0x0)) {
    cVar2 = (**(code **)(pFVar1->_padding_ + 0x1a0))(pFVar1,param_1[1]._padding_);
    if (cVar2 != '\0') {
      return true;
    }
  }
  return false;
}

// SaveTypeName @ 14214b5c0

void __thiscall FArrayProperty::SaveTypeName(FArrayProperty *this,FPropertyTypeNameBuilder *param_1)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (FName *)(**(code **)(this->_padding_ + 0x158))(this,local_res8);
  UE::FPropertyTypeNameBuilder::AddName(param_1,*pFVar4);
  pFVar1 = this->Inner;
  if (pFVar1 == (FProperty *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LocalInner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyArray.cpp"
                       ,0x594,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UE::FPropertyTypeNameBuilder::BeginParameters(param_1);
  (**(code **)(pFVar1->_padding_ + 400))(pFVar1,param_1);
  UE::FPropertyTypeNameBuilder::EndParameters(param_1);
  return;
}

// Serialize @ 14214c700

void __thiscall FArrayProperty::Serialize(FArrayProperty *this,FArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  FProperty *pFVar3;
  FName local_res8;
  FName local_res10;
  FFieldObjectUnion local_res18;
  undefined8 local_res20;
  
  FProperty::Serialize((FProperty *)this,param_1);
  local_res18 = (FFieldObjectUnion)this;
  if ((((ulonglong)this & 1) != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsUObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x180,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_1->field_0x28 & 1) == 0) {
    if (this->Inner == (FProperty *)0x0) {
      local_res20 = 0;
    }
    else {
      local_res20 = *(undefined8 *)this->Inner->_padding_;
    }
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_res20);
    pFVar3 = this->Inner;
    if (pFVar3 == (FProperty *)0x0) {
      return;
    }
  }
  else {
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_res8);
    if (local_res8 == (FName)0x0) {
      this->Inner = (FProperty *)0x0;
      return;
    }
    local_res10.ComparisonIndex.Value = 0;
    local_res10.Number = 0;
    pFVar3 = (FProperty *)
             FField::Construct(&local_res8,(FFieldVariant *)&local_res18,&local_res10,RF_NoFlags);
    if ((pFVar3 == (FProperty *)0x0) ||
       (((uint)(int)((FFieldClass *)pFVar3->_padding_)->CastFlags >> 0xf & 1) == 0)) {
      this->Inner = (FProperty *)0x0;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Field",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x4aa,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar3 = this->Inner;
    }
    else {
      this->Inner = pFVar3;
    }
  }
  (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,param_1);
  return;
}

// SerializeItem @ 14214d800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FArrayProperty::SerializeItem
          (FArrayProperty *this,FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  byte bVar2;
  longlong *plVar3;
  code *pcVar4;
  FProperty **ppFVar5;
  FStructuredArchiveSlot FVar6;
  bool bVar7;
  EOverriddenPropertyOperation EVar8;
  char cVar9;
  uint uVar10;
  FPropertyTypeName FVar11;
  FNameEntryId FVar12;
  FArchive *pFVar13;
  uint *puVar14;
  FObjectPropertyBase *pFVar15;
  FProperty *pFVar16;
  UObject *pUVar17;
  FOverriddenPropertyNode *pFVar18;
  FArchive *pFVar19;
  longlong lVar20;
  UObject *pUVar21;
  UObject *pUVar22;
  TNotNull<UObject_*> TVar23;
  FOverriddenPropertySet *this_00;
  UObjectBaseUtility *this_01;
  FStructProperty *pFVar24;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FPropertyTypeName *this_02;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  longlong lVar25;
  undefined8 uVar26;
  int iVar27;
  ulonglong uVar28;
  undefined1 *puVar29;
  ulonglong uVar30;
  TNotNull<FProperty_const_*> TVar31;
  FProperty *pFVar32;
  int iVar33;
  uint uVar34;
  ForAnyElementType FVar35;
  FProperty *pFVar36;
  FProperty *pFVar37;
  byte bVar38;
  uint uVar39;
  FSlotBase FVar40;
  longlong *plVar41;
  EArrayPropertyFlags EVar42;
  FSlotBase local_res10 [2];
  undefined1 auStackY_638 [32];
  uint local_5e8;
  byte local_5e4;
  char local_5e3;
  FProperty *local_5e0;
  FScriptArrayHelper local_5d8;
  int local_5b8 [2];
  TNotNull<FProperty_const_*> local_5b0;
  FArchive *local_5a8;
  undefined1 local_5a0;
  undefined1 local_59f;
  undefined1 local_59e;
  undefined1 local_59d;
  undefined1 local_59c;
  undefined1 local_59b;
  FIdentityFunctor local_59a [2];
  UObject *local_598;
  uint local_590;
  uint local_58c;
  uint local_588;
  int local_584;
  ForAnyElementType local_580;
  uint local_578;
  uint uStack_574;
  FArrayProperty *local_570;
  FProperty **local_568;
  void *local_560;
  int local_558;
  int local_554;
  int local_550;
  int local_54c;
  ForAnyElementType local_548;
  undefined8 local_540;
  ForAnyElementType local_538;
  undefined8 local_530;
  ForAnyElementType local_528;
  undefined8 local_520;
  FProperty *local_518;
  int local_510;
  undefined1 local_50c [4];
  uint local_508;
  uint local_504;
  uint local_500 [2];
  FStructuredArchiveSlot local_4f8;
  FSlotBase local_4f0;
  FSlotBase local_4e8;
  FSlotBase local_4e0;
  FSlotBase local_4d8;
  FSlotBase local_4d0;
  FSlotBase local_4c8;
  FPropertyTypeName local_4c0;
  int local_4bc [2];
  FPropertyTypeName local_4b4;
  FPropertyTypeName local_4b0 [2];
  FSerializedPropertyScope local_4a8;
  FSerializedPropertyScope local_498;
  FSerializedPropertyScope local_488;
  FSerializedPropertyScope local_478;
  FSerializedPropertyScope local_468;
  FSerializedPropertyScope local_458;
  FSerializedPropertyScope local_448;
  FSerializedPropertyScope local_438;
  FName local_428;
  FObjectPropertyBase *local_420;
  FArchive *local_418;
  FOverriddenPropertyNode *local_410;
  undefined1 local_408 [8];
  longlong local_400;
  undefined1 local_3f8 [4];
  FPropertyTypeName local_3f4;
  undefined1 local_3f0 [8];
  FString local_3e8;
  FProperty *local_3d8;
  char local_3d0;
  undefined1 local_3c8 [8];
  FScriptArrayHelper local_3c0;
  FPropertyTag local_398;
  char local_320;
  code *local_318;
  undefined1 *local_310;
  longlong local_308;
  ulonglong uStack_300;
  longlong local_2f8;
  undefined8 uStack_2f0;
  FString local_2e8;
  FString local_2d8;
  void *local_2c8 [2];
  FString local_2b8;
  FScriptArrayHelper local_2a8;
  FProperty *local_288 [9];
  long64 lStack_240;
  FGuid local_238;
  FGuid local_228;
  uchar local_218;
  uchar uStack_217;
  EPropertyTagSerializeType EStack_216;
  EOverriddenPropertyOperation EStack_215;
  bool bStack_214;
  undefined3 uStack_213;
  undefined1 local_210;
  FScriptArrayHelper local_208;
  TStringBuilderBase<wchar_t> local_1e8;
  wchar_t local_1c8 [32];
  TStringBuilderBase<wchar_t> local_188;
  wchar_t local_168 [64];
  TStringBuilderBase<wchar_t> local_e8;
  wchar_t local_c8 [64];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_638;
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  local_5b0.Val = (FProperty *)this;
  local_560 = param_3;
  if ((this->Inner == (FProperty *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Inner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyArray.cpp"
                         ,0x82,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar13 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  bVar38 = (byte)((ulonglong)this->_padding_ >> 0x39) & 1;
  bVar2 = pFVar13->field_0x28;
  local_5a8 = pFVar13;
  puVar14 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  local_310 = local_50c;
  local_318 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  FThreadSingletonInitializer::Get
            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_318,puVar14);
  EVar42 = this->ArrayFlags;
  local_320 = '\0';
  uVar10 = (**(code **)((*(FProperty **)((longlong)local_5b0.Val + 0x78))->_padding_ + 0x168))();
  FScriptArrayHelper::FScriptArrayHelper
            (&local_5d8,Internal,*(FProperty **)((longlong)local_5b0.Val + 0x78),param_2,
             (*(FProperty **)((longlong)local_5b0.Val + 0x78))->ElementSize,uVar10,EVar42);
  TVar31.Val = local_5b0.Val;
  local_5e8 = (local_5d8.field1_0x8.FreezableArray)->ArrayNum;
  if ((bVar2 & 0x40) != 0) {
    if (((pFVar13->field_0x2c & 1) != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!UnderlyingArchive.ArUseCustomPropertyList",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyArray.cpp"
                           ,0x93,L"Custom property lists are not supported with UPS"), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TVar31.Val = local_5b0.Val;
    FVar40.StructuredArchive = local_res10[0].StructuredArchive;
    uVar28 = *(ulonglong *)((*(FProperty **)((longlong)local_5b0.Val + 0x78))->_padding_ + 0x18);
    if ((uVar28 >> 0x18 & 1) != 0) {
      if (((uVar28 & 0x40) == 0) ||
         ((*(FProperty **)((longlong)local_5b0.Val + 0x78))[1]._padding_ == 0)) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      if (bVar7) {
        pFVar19 = (local_res10[0].StructuredArchive)->Formatter->Inner;
        puVar14 = (uint *)**(undefined8 **)&pFVar19->field_0x8;
        if ((uint *)(*(undefined8 **)&pFVar19->field_0x8)[1] < puVar14 + 1) {
          if ((pFVar19->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)pFVar19 + 0x188))(pFVar19,&local_5e8,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(pFVar19,&local_5e8);
          }
        }
        else {
          local_5e8 = *puVar14;
          **(longlong **)&pFVar19->field_0x8 = **(longlong **)&pFVar19->field_0x8 + 4;
        }
        if ((pFVar13->field_0x28 & 1) != 0) {
          FScriptArrayHelper::EmptyAndAddUninitializedValues(&local_5d8,local_5e8);
        }
        if ((local_5d8.field1_0x8.FreezableArray)->ArrayNum == 0) {
          uVar28 = 0;
        }
        else {
          uVar28 = (local_5d8.field1_0x8.FreezableArray)->_padding_;
          if (((local_5d8.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar28 & 1) != 0)) {
            uVar28 = (longlong)&(local_5d8.field1_0x8.HeapArray)->field_0x0 +
                     ((longlong)uVar28 >> 0x18);
          }
        }
        pFVar13 = (FVar40.StructuredArchive)->Formatter->Inner;
        (**(code **)(*(longlong *)pFVar13 + 0x188))
                  (pFVar13,uVar28,
                   (longlong)
                   (int)(local_5e8 * (*(FProperty **)((longlong)TVar31.Val + 0x78))->ElementSize));
        return;
      }
    }
    pFVar19 = (local_res10[0].StructuredArchive)->Formatter->Inner;
    puVar14 = (uint *)**(undefined8 **)&pFVar19->field_0x8;
    if ((uint *)(*(undefined8 **)&pFVar19->field_0x8)[1] < puVar14 + 1) {
      if ((pFVar19->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar19 + 0x188))(pFVar19,&local_5e8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar19,&local_5e8);
      }
    }
    else {
      local_5e8 = *puVar14;
      **(longlong **)&pFVar19->field_0x8 = **(longlong **)&pFVar19->field_0x8 + 4;
    }
    FVar40.StructuredArchive = local_res10[0].StructuredArchive;
    if ((pFVar13->field_0x28 & 1) != 0) {
      FScriptArrayHelper::EmptyAndAddValues(&local_5d8,local_5e8);
    }
    local_4a8.Property = *(FProperty **)((longlong)TVar31.Val + 0x78);
    local_4a8.Ar = pFVar13;
    if (*(FArrayProperty **)&pFVar13->field_0x70 == (FArrayProperty *)TVar31.Val) {
      FSerializedPropertyScope::PushProperty(&local_4a8);
    }
    else {
      local_4a8.Property = (FProperty *)0x0;
    }
    uVar28 = 0;
    if (0 < (int)local_5e8) {
      do {
        uVar30 = 0;
        if ((local_5d8.field1_0x8.FreezableArray)->ArrayNum != 0) {
          uVar30 = (local_5d8.field1_0x8.FreezableArray)->_padding_;
          if (((local_5d8.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar30 & 1) != 0)) {
            uVar30 = (longlong)&(local_5d8.field1_0x8.HeapArray)->field_0x0 +
                     ((longlong)uVar30 >> 0x18);
          }
          uVar30 = (longlong)local_5d8.ElementSize * (longlong)(int)uVar28 + uVar30;
        }
        (**(code **)((*(FProperty **)((longlong)TVar31.Val + 0x78))->_padding_ + 0xc0))
                  (*(FProperty **)((longlong)TVar31.Val + 0x78),FVar40.StructuredArchive,uVar30,0);
        uVar10 = (int)uVar28 + 1;
        uVar28 = (ulonglong)uVar10;
      } while ((int)uVar10 < (int)local_5e8);
    }
    FSerializedPropertyScope::PopProperty(&local_4a8);
    return;
  }
  local_568 = local_288;
  local_210 = 0;
  local_570 = (FArrayProperty *)local_5b0.Val;
  if ((pFVar13->field_0x28 & 1) != 0) {
    lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar20 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (*(longlong *)(lVar20 + 0xce0) != 0) {
      if (*(char *)(lVar20 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      bVar38 = *(byte *)(*(longlong *)(lVar20 + 0xce0) + 0x74);
    }
  }
  if (bVar38 != 0) {
    if (((pFVar13->field_0x2c & 1) != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!UnderlyingArchive.ArUseCustomPropertyList",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyArray.cpp"
                           ,0xf7,
                           L"Using custom property list is not supported by overridable serialization"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar40.StructuredArchive = local_res10[0].StructuredArchive;
    pFVar37 = (FProperty *)0x0;
    local_4f8 = (FStructuredArchiveSlot)local_res10[0].StructuredArchive;
    if ((pFVar13->field_0x28 & 1) != 0) {
      local_558 = 0;
      ::operator<<((local_res10[0].StructuredArchive)->Formatter->Inner,&local_558);
      local_438.Property = *(FProperty **)((longlong)TVar31.Val + 0x78);
      if (local_558 != -1) {
        local_438.Ar = pFVar13;
        if (*(FArrayProperty **)&pFVar13->field_0x70 == (FArrayProperty *)TVar31.Val) {
          FSerializedPropertyScope::PushProperty(&local_438);
        }
        else {
          local_438.Property = (FProperty *)0x0;
        }
        iVar27 = local_558;
        if ((local_558 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Count>=0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x10a6,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FScriptArrayHelper::EmptyValues(&local_5d8,iVar27);
        FScriptArrayHelper::AddValues(&local_5d8,iVar27);
        pFVar16 = pFVar37;
        if (0 < local_558) {
          do {
            pFVar32 = pFVar37;
            if ((local_5d8.field1_0x8.FreezableArray)->ArrayNum != 0) {
              uVar28 = (local_5d8.field1_0x8.FreezableArray)->_padding_;
              if (((local_5d8.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar28 & 1) != 0)
                 ) {
                uVar28 = (longlong)&(local_5d8.field1_0x8.HeapArray)->field_0x0 +
                         ((longlong)uVar28 >> 0x18);
              }
              pFVar32 = (FProperty *)
                        ((longlong)local_5d8.ElementSize * (longlong)(int)pFVar16 + uVar28);
            }
            `FArrayProperty::SerializeItem'::__l2::<lambda_1>::operator()
                      (&local_570,(FStructuredArchiveSlot)FVar40.StructuredArchive,(uchar *)pFVar32)
            ;
            uVar10 = (int)pFVar16 + 1;
            pFVar16 = (FProperty *)(ulonglong)uVar10;
          } while ((int)uVar10 < local_558);
        }
        FSerializedPropertyScope::PopProperty(&local_438);
        return;
      }
      pFVar15 = CastFieldChecked<FObjectPropertyBase>((FField *)local_438.Property);
      local_420 = pFVar15;
      if (((pFVar15->_padding_ & 0x2000000000000U) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InnerObjectProperty->HasAnyPropertyFlags(CPF_PersistentInstance)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyArray.cpp"
                             ,0x10c,L"Only supported code path here is the instanced subobjects"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_518 = (FProperty *)FOverridableSerializationLogic::GetOverriddenProperties();
      if ((param_3 == (void *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Defaults",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyArray.cpp"
                             ,0x110,
                             L"Expecting overridable serialization to have defaults to compare to"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      EVar42 = *(EArrayPropertyFlags *)((longlong)TVar31.Val + 0x70);
      uVar10 = (**(code **)((*(FProperty **)((longlong)local_5b0.Val + 0x78))->_padding_ + 0x168))()
      ;
      FScriptArrayHelper::FScriptArrayHelper
                (&local_3c0,Internal,*(FProperty **)((longlong)local_5b0.Val + 0x78),param_3,
                 (*(FProperty **)((longlong)local_5b0.Val + 0x78))->ElementSize,uVar10,EVar42);
      if ((local_3c0.field1_0x8.FreezableArray)->ArrayNum !=
          (local_5d8.field1_0x8.FreezableArray)->ArrayNum) {
        FField::GetName((FField *)local_5b0.Val,&local_2b8);
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("DefaultsArrayHelper.Num() == ArrayHelper.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyArray.cpp"
                           ,0x116,
                           L"The array \'%s\' is expected to be the same size as it default for removal logic."
                          );
        if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
        }
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      local_54c = 0;
      local_5e0 = (FProperty *)0x0;
      ::operator<<((FVar40.StructuredArchive)->Formatter->Inner,&local_54c);
      pFVar16 = pFVar37;
      if (local_54c != 0) {
        local_548.Data = (FScriptContainerElement *)0x0;
        local_540 = 0;
        pFVar16 = FMemory::Malloc((longlong)*(int *)((longlong)&pFVar15->_padding_ + 4),0);
        local_5e0 = pFVar16;
        if (((uint)pFVar15->_padding_ >> 9 & 1) == 0) {
          (**(code **)(pFVar15->_padding_ + 0x150))(pFVar15,pFVar16);
        }
        else {
          memset(pFVar16,0,
                 (longlong)(int)pFVar15->_padding_ *
                 (longlong)*(int *)((longlong)&pFVar15->_padding_ + 4));
        }
        local_560 = (void *)((ulonglong)local_560 & 0xffffffff00000000);
        if (0 < local_54c) {
          do {
            local_498.Property = *(FProperty **)((longlong)local_5b0.Val + 0x78);
            local_498.Ar = pFVar13;
            if (*(FArrayProperty **)&pFVar13->field_0x70 == (FArrayProperty *)local_5b0.Val) {
              FSerializedPropertyScope::PushProperty(&local_498);
            }
            else {
              local_498.Property = (FProperty *)0x0;
            }
            `FArrayProperty::SerializeItem'::__l2::<lambda_1>::operator()
                      (&local_570,(FStructuredArchiveSlot)FVar40.StructuredArchive,(uchar *)pFVar16)
            ;
            FSerializedPropertyScope::PopProperty(&local_498);
            local_598 = (UObject *)(**(code **)(pFVar15->_padding_ + 0x1f8))(pFVar15,pFVar16);
            if (local_598 != (UObject *)0x0) {
              iVar27 = (local_3c0.field1_0x8.FreezableArray)->ArrayNum;
              EVar42 = local_3c0.ArrayFlags & UsesMemoryImageAllocator;
              pFVar16 = pFVar37;
              if (0 < iVar27) {
                do {
                  iVar33 = (int)pFVar16;
                  pFVar32 = pFVar37;
                  if ((local_3c0.field1_0x8.FreezableArray)->ArrayNum != 0) {
                    puVar29 = (undefined1 *)(local_3c0.field1_0x8.FreezableArray)->_padding_;
                    if ((EVar42 != None) && (((ulonglong)puVar29 & 1) != 0)) {
                      puVar29 = &(local_3c0.field1_0x8.HeapArray)->field_0x0 +
                                ((longlong)puVar29 >> 0x18);
                    }
                    pFVar32 = (FProperty *)
                              (puVar29 + (longlong)local_3c0.ElementSize * (longlong)pFVar16);
                  }
                  pUVar17 = (UObject *)(**(code **)(pFVar15->_padding_ + 0x1f8))(pFVar15,pFVar32);
                  if (pUVar17 == local_598) {
                    local_554 = iVar33;
                    if (((local_548.Data <= (FScriptContainerElement *)&local_554) &&
                        ((FScriptContainerElement *)&local_554 <
                         local_548.Data + (longlong)local_540._4_4_ * 4)) &&
                       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar7)) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    iVar27 = (int)local_540;
                    if ((int)local_540 == local_540._4_4_) {
                      iVar27 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,&local_548,(int *)((longlong)&local_540 + 4));
                    }
                    local_540 = CONCAT44(local_540._4_4_,iVar27 + 1);
                    *(int *)(local_548.Data + (longlong)iVar27 * 4) = local_554;
                    TVar23.Val = local_598;
                    goto LAB_14214e0c8;
                  }
                  pFVar16 = (FProperty *)(ulonglong)(iVar33 + 1U);
                } while ((int)(iVar33 + 1U) < iVar27);
              }
              local_554 = -1;
              TVar23.Val = local_598;
              if (6 < (byte)LogOverridableObject._0_1_) {
                local_428.ComparisonIndex.Value = *(uint *)&local_598->field_0x18;
                local_428.Number = *(uint *)&local_598->field_0x1c;
                ::FName::ToString(&local_428,&local_3e8);
                TVar23.Val = local_598;
                UE::Logging::Private::BasicLog<7>
                          (&::LOG_Static,(FLogCategoryBase *)&LogOverridableObject);
                if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
                }
              }
LAB_14214e0c8:
              pFVar32 = local_518;
              pFVar13 = local_5a8;
              pFVar16 = local_5e0;
              if ((local_518 != (FProperty *)0x0) &&
                 (pFVar18 = FOverriddenPropertySet::RestoreOverriddenPropertyOperation
                                      ((FOverriddenPropertySet *)local_518,Modified,
                                       *(FArchiveSerializedPropertyChain **)&local_5a8->field_0x78,
                                       (FProperty *)0x0), pFVar16 = local_5e0,
                 pFVar18 != (FOverriddenPropertyNode *)0x0)) {
                FOverriddenPropertySet::RestoreSubObjectOperation
                          ((FOverriddenPropertySet *)pFVar32,Remove,pFVar18,TVar23);
                pFVar16 = local_5e0;
              }
            }
            iVar27 = (int)local_560 + 1;
            local_560 = (void *)CONCAT44(local_560._4_4_,iVar27);
          } while (iVar27 < local_54c);
        }
        AlgoImpl::
        IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TGreater<void>_>_>
                  ((int *)local_548.Data,(int)local_540,local_59a[0],(TGreater<void> *)local_59a);
        iVar27 = (int)local_540;
        uVar28 = (ulonglong)(int)local_540;
        pFVar1 = local_548.Data + uVar28 * 4;
        FVar35.Data = local_548.Data;
        while( true ) {
          if ((int)uVar28 != iVar27) {
            local_5a0 = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_5a0);
          }
          if (FVar35.Data == pFVar1) break;
          FScriptArrayHelper::RemoveValues(&local_5d8,*(int *)FVar35.Data,1);
          uVar28 = local_540 & 0xffffffff;
          FVar35.Data = FVar35.Data + 4;
        }
        pFVar16 = local_5e0;
        if (local_548.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_548.Data);
          pFVar16 = local_5e0;
        }
      }
      local_590 = 0;
      pFVar19 = (FVar40.StructuredArchive)->Formatter->Inner;
      puVar14 = (uint *)**(undefined8 **)&pFVar19->field_0x8;
      if ((uint *)(*(undefined8 **)&pFVar19->field_0x8)[1] < puVar14 + 1) {
        if ((pFVar19->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar19 + 0x188))(pFVar19,&local_590,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar19,&local_590);
        }
      }
      else {
        local_590 = *puVar14;
        **(longlong **)&pFVar19->field_0x8 = **(longlong **)&pFVar19->field_0x8 + 4;
      }
      if (local_590 != 0) {
        if (pFVar16 == (FProperty *)0x0) {
          pFVar16 = FMemory::Malloc((longlong)*(int *)((longlong)&pFVar15->_padding_ + 4),0);
          local_5e0 = pFVar16;
          if (((uint)pFVar15->_padding_ >> 9 & 1) == 0) {
            (**(code **)(pFVar15->_padding_ + 0x150))(pFVar15,pFVar16);
          }
          else {
            memset(pFVar16,0,
                   (longlong)(int)pFVar15->_padding_ *
                   (longlong)*(int *)((longlong)&pFVar15->_padding_ + 4));
          }
        }
        local_560 = (void *)((ulonglong)local_560 & 0xffffffff00000000);
        if (0 < (int)local_590) {
          do {
            local_488.Property = *(FProperty **)((longlong)local_5b0.Val + 0x78);
            local_488.Ar = pFVar13;
            if (*(FArrayProperty **)&pFVar13->field_0x70 == (FArrayProperty *)local_5b0.Val) {
              FSerializedPropertyScope::PushProperty(&local_488);
            }
            else {
              local_488.Property = (FProperty *)0x0;
            }
            ppFVar5 = local_568;
            local_4d0.StructuredArchive = FVar40.StructuredArchive;
            if (*(char *)(local_568 + 0xf) == '\0') {
LAB_14214e319:
              (**(code **)(local_570->Inner->_padding_ + 0xc0))
                        (local_570->Inner,local_4d0.StructuredArchive,pFVar16,0);
            }
            else {
              pFVar19 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_4d0);
              lVar20 = (**(code **)(*(longlong *)pFVar19 + 0x28))(pFVar19);
              pFVar32 = local_570->Inner;
              if (((pFVar32 == (FProperty *)0x0) ||
                  ((*(uint *)(pFVar32->_padding_ + 0x18) >> 0x14 & 1) == 0)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("CastResult",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                     ,0x472,L"CastFieldChecked failed with 0x%016llx"),
                 pFVar32 = pFVar37, bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              iVar27 = (**(code **)(pFVar32->_padding_ + 0xb0))
                                 (pFVar32,ppFVar5,local_4d0.StructuredArchive,local_5e0);
              pFVar16 = local_5e0;
              if (iVar27 != 1) {
                if (iVar27 == 2) {
                  (**(code **)(*(longlong *)pFVar32[1]._padding_ + 0x390))
                            ((longlong *)pFVar32[1]._padding_,local_5e0);
                  pFVar19 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive
                                      (&local_4d0);
                  (**(code **)(*(longlong *)pFVar19 + 0x1b8))
                            (pFVar19,*(int *)((longlong)ppFVar5 + 0x3c) + lVar20);
                }
                else if (iVar27 != 3) goto LAB_14214e319;
              }
            }
            FSerializedPropertyScope::PopProperty(&local_488);
            pUVar17 = (UObject *)(**(code **)(pFVar15->_padding_ + 0x1f8))(pFVar15,pFVar16);
            if (((pUVar17 != (UObject *)0x0) &&
                (pUVar21 = UObject::GetArchetype(pUVar17), pFVar13 = local_5a8,
                pUVar21 != (UObject *)0x0)) &&
               (iVar27 = (local_5d8.field1_0x8.FreezableArray)->ArrayNum, pFVar32 = pFVar37,
               pFVar16 = local_5e0, 0 < iVar27)) {
              do {
                pFVar16 = pFVar37;
                if ((local_5d8.field1_0x8.FreezableArray)->ArrayNum != 0) {
                  uVar28 = (local_5d8.field1_0x8.FreezableArray)->_padding_;
                  if (((local_5d8.ArrayFlags & UsesMemoryImageAllocator) != None) &&
                     ((uVar28 & 1) != 0)) {
                    uVar28 = (longlong)&(local_5d8.field1_0x8.HeapArray)->field_0x0 +
                             ((longlong)uVar28 >> 0x18);
                  }
                  pFVar16 = (FProperty *)
                            ((longlong)local_5d8.ElementSize * (longlong)pFVar32 + uVar28);
                }
                pUVar22 = (UObject *)(**(code **)(pFVar15->_padding_ + 0x1f8))(pFVar15,pFVar16);
                if ((pUVar22 == pUVar21) || (pUVar22 == pUVar17)) {
                  pFVar16 = pFVar37;
                  if ((local_5d8.field1_0x8.FreezableArray)->ArrayNum != 0) {
                    uVar28 = (local_5d8.field1_0x8.FreezableArray)->_padding_;
                    if (((local_5d8.ArrayFlags & UsesMemoryImageAllocator) != None) &&
                       ((uVar28 & 1) != 0)) {
                      uVar28 = (longlong)&(local_5d8.field1_0x8.HeapArray)->field_0x0 +
                               ((longlong)uVar28 >> 0x18);
                    }
                    pFVar16 = (FProperty *)
                              ((longlong)local_5d8.ElementSize * (longlong)pFVar32 + uVar28);
                  }
                  (**(code **)(pFVar15->_padding_ + 0x1d8))(pFVar15,pFVar16,pUVar17);
                  pFVar16 = local_5e0;
                  pFVar13 = local_5a8;
                  break;
                }
                uVar10 = (int)pFVar32 + 1;
                pFVar32 = (FProperty *)(ulonglong)uVar10;
                pFVar16 = local_5e0;
                pFVar13 = local_5a8;
              } while ((int)uVar10 < iVar27);
            }
            iVar27 = (int)local_560 + 1;
            local_560 = (void *)CONCAT44(local_560._4_4_,iVar27);
          } while (iVar27 < (int)local_590);
        }
      }
      if (0x3f8 < (int)((ulonglong)*(undefined8 *)&pFVar13->field_0x40 >> 0x20)) {
        local_58c = 0;
        pFVar19 = (FVar40.StructuredArchive)->Formatter->Inner;
        puVar14 = (uint *)**(undefined8 **)&pFVar19->field_0x8;
        if ((uint *)(*(undefined8 **)&pFVar19->field_0x8)[1] < puVar14 + 1) {
          if ((pFVar19->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)pFVar19 + 0x188))(pFVar19,&local_58c,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(pFVar19,&local_58c);
          }
        }
        else {
          local_58c = *puVar14;
          **(longlong **)&pFVar19->field_0x8 = **(longlong **)&pFVar19->field_0x8 + 4;
        }
        if (local_58c != 0) {
          if (pFVar16 == (FProperty *)0x0) {
            pFVar16 = FMemory::Malloc((longlong)*(int *)((longlong)&pFVar15->_padding_ + 4),0);
            local_5e0 = pFVar16;
            if (((uint)pFVar15->_padding_ >> 9 & 1) == 0) {
              (**(code **)(pFVar15->_padding_ + 0x150))(pFVar15,pFVar16);
            }
            else {
              memset(pFVar16,0,
                     (longlong)(int)pFVar15->_padding_ *
                     (longlong)*(int *)((longlong)&pFVar15->_padding_ + 4));
            }
          }
          ppFVar5 = local_568;
          pFVar32 = pFVar37;
          if (0 < (int)local_58c) {
            do {
              local_478.Property = *(FProperty **)((longlong)local_5b0.Val + 0x78);
              local_478.Ar = pFVar13;
              if (*(FArrayProperty **)&pFVar13->field_0x70 == (FArrayProperty *)local_5b0.Val) {
                FSerializedPropertyScope::PushProperty(&local_478);
              }
              else {
                local_478.Property = (FProperty *)0x0;
              }
              local_4c8.StructuredArchive = FVar40.StructuredArchive;
              if (*(char *)(ppFVar5 + 0xf) == '\0') {
LAB_14214e639:
                (**(code **)(local_570->Inner->_padding_ + 0xc0))
                          (local_570->Inner,local_4c8.StructuredArchive,pFVar16,0);
              }
              else {
                pFVar13 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive
                                    (&local_4c8);
                lVar20 = (**(code **)(*(longlong *)pFVar13 + 0x28))(pFVar13);
                pFVar36 = local_570->Inner;
                if (((pFVar36 == (FProperty *)0x0) ||
                    ((*(uint *)(pFVar36->_padding_ + 0x18) >> 0x14 & 1) == 0)) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("CastResult",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                       ,0x472,L"CastFieldChecked failed with 0x%016llx"),
                   pFVar36 = pFVar37, bVar7)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar27 = (**(code **)(pFVar36->_padding_ + 0xb0))
                                   (pFVar36,ppFVar5,local_4c8.StructuredArchive,local_5e0);
                pFVar16 = local_5e0;
                if (iVar27 != 1) {
                  if (iVar27 == 2) {
                    (**(code **)(*(longlong *)pFVar36[1]._padding_ + 0x390))
                              ((longlong *)pFVar36[1]._padding_,local_5e0);
                    pFVar13 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive
                                        (&local_4c8);
                    (**(code **)(*(longlong *)pFVar13 + 0x1b8))
                              (pFVar13,*(int *)((longlong)ppFVar5 + 0x3c) + lVar20);
                  }
                  else if (iVar27 != 3) goto LAB_14214e639;
                }
              }
              FSerializedPropertyScope::PopProperty(&local_478);
              uVar10 = (int)pFVar32 + 1;
              pFVar15 = local_420;
              pFVar13 = local_5a8;
              pFVar32 = (FProperty *)(ulonglong)uVar10;
            } while ((int)uVar10 < (int)local_58c);
          }
        }
      }
      local_588 = 0;
      pFVar19 = (FVar40.StructuredArchive)->Formatter->Inner;
      puVar14 = (uint *)**(undefined8 **)&pFVar19->field_0x8;
      if ((uint *)(*(undefined8 **)&pFVar19->field_0x8)[1] < puVar14 + 1) {
        if ((pFVar19->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar19 + 0x188))(pFVar19,&local_588,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar19,&local_588);
        }
      }
      else {
        local_588 = *puVar14;
        **(longlong **)&pFVar19->field_0x8 = **(longlong **)&pFVar19->field_0x8 + 4;
      }
      if (local_588 != 0) {
        if (pFVar16 == (FProperty *)0x0) {
          local_5e0 = FMemory::Malloc((longlong)*(int *)((longlong)&pFVar15->_padding_ + 4),0);
          if (((uint)pFVar15->_padding_ >> 9 & 1) == 0) {
            (**(code **)(pFVar15->_padding_ + 0x150))(pFVar15,local_5e0);
          }
          else {
            memset(local_5e0,0,
                   (longlong)(int)pFVar15->_padding_ *
                   (longlong)*(int *)((longlong)&pFVar15->_padding_ + 4));
          }
        }
        local_598 = (UObject *)((ulonglong)local_598 & 0xffffffff00000000);
        local_560 = (void *)CONCAT44(local_560._4_4_,(local_5d8.field1_0x8.FreezableArray)->ArrayNum
                                    );
        if (0 < (int)local_588) {
          do {
            local_468.Property = *(FProperty **)((longlong)local_5b0.Val + 0x78);
            local_468.Ar = pFVar13;
            if (*(FArrayProperty **)&pFVar13->field_0x70 == (FArrayProperty *)local_5b0.Val) {
              FSerializedPropertyScope::PushProperty(&local_468);
            }
            else {
              local_468.Property = (FProperty *)0x0;
            }
            ppFVar5 = local_568;
            local_4d8.StructuredArchive = FVar40.StructuredArchive;
            pFVar16 = local_5e0;
            if (*(char *)(local_568 + 0xf) == '\0') {
LAB_14214e891:
              (**(code **)(local_570->Inner->_padding_ + 0xc0))
                        (local_570->Inner,local_4d8.StructuredArchive,pFVar16);
            }
            else {
              pFVar13 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_4d8);
              lVar20 = (**(code **)(*(longlong *)pFVar13 + 0x28))(pFVar13);
              pFVar32 = local_570->Inner;
              if (((pFVar32 == (FProperty *)0x0) ||
                  ((*(uint *)(pFVar32->_padding_ + 0x18) >> 0x14 & 1) == 0)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("CastResult",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                     ,0x472,L"CastFieldChecked failed with 0x%016llx"),
                 pFVar32 = pFVar37, bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar16 = local_5e0;
              iVar27 = (**(code **)(pFVar32->_padding_ + 0xb0))
                                 (pFVar32,ppFVar5,local_4d8.StructuredArchive);
              if (iVar27 != 1) {
                if (iVar27 == 2) {
                  (**(code **)(*(longlong *)pFVar32[1]._padding_ + 0x390))
                            ((longlong *)pFVar32[1]._padding_,pFVar16);
                  pFVar13 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive
                                      (&local_4d8);
                  (**(code **)(*(longlong *)pFVar13 + 0x1b8))
                            (pFVar13,*(int *)((longlong)ppFVar5 + 0x3c) + lVar20);
                }
                else if (iVar27 != 3) goto LAB_14214e891;
              }
            }
            FSerializedPropertyScope::PopProperty(&local_468);
            TVar23.Val = (UObject *)(**(code **)(pFVar15->_padding_ + 0x1f8))(pFVar15,pFVar16);
            if (TVar23.Val != (UObject *)0x0) {
              pUVar17 = UObject::GetArchetype(TVar23.Val);
              if ((pUVar17 != (UObject *)0x0) &&
                 (iVar27 = (local_5d8.field1_0x8.FreezableArray)->ArrayNum, pFVar16 = pFVar37,
                 0 < iVar27)) {
                do {
                  iVar33 = (int)pFVar16;
                  pFVar32 = pFVar37;
                  if ((local_5d8.field1_0x8.FreezableArray)->ArrayNum != 0) {
                    uVar28 = (local_5d8.field1_0x8.FreezableArray)->_padding_;
                    if (((local_5d8.ArrayFlags & UsesMemoryImageAllocator) != None) &&
                       ((uVar28 & 1) != 0)) {
                      uVar28 = (longlong)&(local_5d8.field1_0x8.HeapArray)->field_0x0 +
                               ((longlong)uVar28 >> 0x18);
                    }
                    pFVar32 = (FProperty *)
                              ((longlong)local_5d8.ElementSize * (longlong)pFVar16 + uVar28);
                  }
                  pUVar21 = (UObject *)(**(code **)(pFVar15->_padding_ + 0x1f8))(pFVar15,pFVar32);
                  if ((pUVar21 == pUVar17) || (pUVar21 == TVar23.Val)) goto LAB_14214ea00;
                  pFVar16 = (FProperty *)(ulonglong)(iVar33 + 1U);
                } while ((int)(iVar33 + 1U) < iVar27);
              }
              iVar33 = (local_5d8.field1_0x8.FreezableArray)->ArrayNum;
              iVar27 = iVar33 + 1;
              (local_5d8.field1_0x8.FreezableArray)->ArrayNum = iVar27;
              if ((local_5d8.ArrayFlags & UsesMemoryImageAllocator) == None) {
                if ((local_5d8.field1_0x8.FreezableArray)->ArrayMax < iVar27) {
                  TScriptArray<TSizedHeapAllocator<32,FMemory>_>::ResizeGrow
                            ((TScriptArray<TSizedHeapAllocator<32,FMemory>_> *)
                             local_5d8.field1_0x8.HeapArray,iVar33,local_5d8.ElementSize,
                             local_5d8.ElementAlignment);
                }
              }
              else if ((local_5d8.field1_0x8.FreezableArray)->ArrayMax < iVar27) {
                TScriptArray<TMemoryImageAllocator<0>_>::ResizeGrow
                          (local_5d8.field1_0x8.FreezableArray,iVar33,local_5d8.ElementSize,
                           local_5d8.ElementAlignment);
              }
              pFVar16 = pFVar37;
              if ((local_5d8.field1_0x8.FreezableArray)->ArrayNum != 0) {
                uVar28 = (local_5d8.field1_0x8.FreezableArray)->_padding_;
                if (((local_5d8.ArrayFlags & UsesMemoryImageAllocator) != None) &&
                   ((uVar28 & 1) != 0)) {
                  uVar28 = (longlong)&(local_5d8.field1_0x8.HeapArray)->field_0x0 +
                           ((longlong)uVar28 >> 0x18);
                }
                pFVar16 = (FProperty *)((longlong)iVar33 * (longlong)local_5d8.ElementSize + uVar28)
                ;
              }
              if (((uint)(int)(local_5d8.InnerProperty)->PropertyFlags >> 9 & 1) == 0) {
                (**(code **)((local_5d8.InnerProperty)->_padding_ + 0x150))
                          (local_5d8.InnerProperty,pFVar16);
              }
              else {
                memset(pFVar16,0,(longlong)local_5d8.ElementSize);
              }
              iVar33 = (int)local_560;
              local_560 = (void *)CONCAT44(local_560._4_4_,(int)local_560 + 1);
LAB_14214ea00:
              pFVar16 = pFVar37;
              if ((local_5d8.field1_0x8.FreezableArray)->ArrayNum != 0) {
                uVar28 = (local_5d8.field1_0x8.FreezableArray)->_padding_;
                if (((local_5d8.ArrayFlags & UsesMemoryImageAllocator) != None) &&
                   ((uVar28 & 1) != 0)) {
                  uVar28 = (longlong)&(local_5d8.field1_0x8.HeapArray)->field_0x0 +
                           ((longlong)uVar28 >> 0x18);
                }
                pFVar16 = (FProperty *)((longlong)iVar33 * (longlong)local_5d8.ElementSize + uVar28)
                ;
              }
              (**(code **)(pFVar15->_padding_ + 0x1d8))(pFVar15,pFVar16,TVar23.Val);
              pFVar16 = local_518;
              if ((local_518 != (FProperty *)0x0) &&
                 (pFVar18 = FOverriddenPropertySet::RestoreOverriddenPropertyOperation
                                      ((FOverriddenPropertySet *)local_518,Modified,
                                       *(FArchiveSerializedPropertyChain **)&local_5a8->field_0x78,
                                       (FProperty *)0x0), pFVar18 != (FOverriddenPropertyNode *)0x0)
                 ) {
                FOverriddenPropertySet::RestoreSubObjectOperation
                          ((FOverriddenPropertySet *)pFVar16,Add,pFVar18,TVar23);
              }
            }
            iVar27 = (int)local_598 + 1;
            local_598 = (UObject *)CONCAT44(local_598._4_4_,iVar27);
            pFVar13 = local_5a8;
          } while (iVar27 < (int)local_588);
        }
      }
      pFVar37 = local_5e0;
      if (local_5e0 == (FProperty *)0x0) {
        return;
      }
      if ((pFVar15->_padding_ & 0x1000000000U) == 0) {
        (**(code **)(pFVar15->_padding_ + 0x138))(pFVar15,local_5e0);
      }
      FMemory::Free(pFVar37);
      return;
    }
    local_518 = *(FProperty **)((longlong)TVar31.Val + 0x78);
    local_528.Data = (FScriptContainerElement *)0x0;
    local_520 = 0;
    local_538.Data = (FScriptContainerElement *)0x0;
    local_530 = 0;
    local_580.Data = (FScriptContainerElement *)0x0;
    local_578 = 0;
    uStack_574 = 0;
    if ((((local_518 == (FProperty *)0x0) ||
         ((*(uint *)(local_518->_padding_ + 0x18) >> 0x10 & 1) == 0)) ||
        (((uint)(TVar31.Val)->PropertyFlags >> 0x14 & 1) == 0)) ||
       (((pFVar13->field_0x29 & 1) == 0 ||
        (local_5e3 = '\x01', (*(uint *)&pFVar13->field_0x34 & 0x400000) != 0)))) {
      local_5e3 = '\0';
    }
    if ((param_3 != (void *)0x0) && ((pFVar13->field_0x2a & 4) == 0)) {
      if ((local_518 == (FProperty *)0x0) ||
         ((*(uint *)(local_518->_padding_ + 0x18) >> 0x1a & 1) == 0)) {
        local_518 = (FProperty *)0x0;
      }
      pFVar16 = local_518;
      this_00 = FOverridableSerializationLogic::GetOverriddenProperties();
      if ((this_00 != (FOverriddenPropertySet *)0x0) &&
         (EVar8 = FOverriddenPropertySet::GetOverriddenPropertyOperation
                            (this_00,*(FArchiveSerializedPropertyChain **)&pFVar13->field_0x78,
                             (FProperty *)0x0), EVar8 != Replace)) {
        bVar7 = FOverridableSerializationLogic::ShouldPropertyShadowSerializeSubObject(local_5b0);
        if (bVar7) {
          iVar27 = (local_5d8.field1_0x8.FreezableArray)->ArrayNum;
          local_584 = 0;
          if (0 < iVar27) {
            do {
              if (((local_580.Data <= (FScriptContainerElement *)&local_584) &&
                  ((FScriptContainerElement *)&local_584 <
                   local_580.Data + (longlong)(int)uStack_574 * 4)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (local_578 == uStack_574) {
                local_578 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x404,&local_580,(int *)&uStack_574);
              }
              uVar10 = local_578 + 1;
              *(int *)(local_580.Data + (longlong)(int)local_578 * 4) = local_584;
              local_584 = local_584 + 1;
              local_578 = uVar10;
            } while (local_584 < iVar27);
          }
        }
        if (((pFVar16 == (FProperty *)0x0) ||
            ((pFVar16->PropertyFlags & CPF_PersistentInstance) == CPF_None)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InnerObjectProperty&& InnerObjectProperty->HasAnyPropertyFlags(CPF_PersistentInstance)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyArray.cpp"
                               ,0x1fb,L"Expecting only arrays of instanced subobjects"), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        TVar31.Val = local_5b0.Val;
        if (EVar8 != None) {
          EVar42 = *(EArrayPropertyFlags *)((longlong)local_5b0.Val + 0x70);
          local_3d0 = local_5e3;
          local_3d8 = pFVar16;
          uVar10 = (**(code **)((*(FProperty **)((longlong)local_5b0.Val + 0x78))->_padding_ + 0x168
                               ))();
          FScriptArrayHelper::FScriptArrayHelper
                    (&local_208,Internal,*(FProperty **)((longlong)TVar31.Val + 0x78),local_560,
                     (*(FProperty **)((longlong)TVar31.Val + 0x78))->ElementSize,uVar10,EVar42);
          local_410 = FOverriddenPropertySet::GetOverriddenPropertyNode
                                (this_00,*(FArchiveSerializedPropertyChain **)&pFVar13->field_0x78);
          if (local_410 != (FOverriddenPropertyNode *)0x0) {
            iVar27 = (local_410->SubPropertyNodes).ArrayNum;
            uVar28 = (ulonglong)iVar27;
            pFVar13 = (FArchive *)(local_410->SubPropertyNodes).AllocatorInstance.Data;
            local_598 = (UObject *)CONCAT44(local_598._4_4_,iVar27);
            pFVar19 = (FArchive *)(&pFVar13->field_0x0 + uVar28 * 0x38);
            local_418 = pFVar19;
            while( true ) {
              local_5a8 = pFVar13;
              if ((local_410->SubPropertyNodes).ArrayNum != (int)uVar28) {
                local_59f = 0;
                `TCheckedPointerIterator<FOverriddenPropertyNode_const_,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_59f);
              }
              FVar40.StructuredArchive = (FStructuredArchive *)local_4f8;
              TVar31.Val = local_5b0.Val;
              if (pFVar13 == pFVar19) break;
              if (pFVar13->field_0x20 == '\x03') {
                local_5b8[0] = `FArrayProperty::SerializeItem'::__l215::<lambda_4>::operator()
                                         (&local_3d8,(FOverriddenPropertyNodeID *)pFVar13,&local_5d8
                                         );
                if (local_5b8[0] == -1) {
                  if (6 < (byte)LogOverridableObject._0_1_) {
                    FOverriddenPropertyNodeID::ToDebugString
                              ((FOverriddenPropertyNodeID *)pFVar13,&local_2d8);
                    UE::Logging::Private::BasicLog<7>
                              (&::LOG_Static,(FLogCategoryBase *)&LogOverridableObject);
                    FVar35.Data = local_2d8.Data.AllocatorInstance.Data;
LAB_14214f130:
                    if (FVar35.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(FVar35.Data);
                    }
                  }
LAB_14214f13a:
                  pFVar13 = (FArchive *)&pFVar13->field_0x38;
                  uVar28 = (ulonglong)local_598 & 0xffffffff;
                }
                else {
                  if (((local_580.Data <= (FScriptContainerElement *)local_5b8) &&
                      ((FScriptContainerElement *)local_5b8 <
                       local_580.Data + (longlong)(int)uStack_574 * 4)) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  FVar35.Data = local_580.Data;
                  lVar20 = (longlong)(int)local_578;
                  if (local_578 != 0) {
                    local_5e4 = *(int *)local_580.Data != local_5b8[0];
                    pFVar32 = pFVar37;
                    pFVar16 = pFVar37;
                    pFVar36 = pFVar37;
                    do {
                      uVar34 = (uint)pFVar16;
                      uVar10 = uVar34;
                      do {
                        pFVar32 = (FProperty *)((longlong)&pFVar32->_padding_ + 1);
                        uVar10 = uVar10 + 1;
                        pFVar16 = (FProperty *)(ulonglong)uVar10;
                        if (lVar20 <= (longlong)pFVar32) break;
                      } while ((bool)local_5e4 ==
                               (*(int *)(FVar35.Data + (longlong)pFVar32 * 4) != local_5b8[0]));
                      if (local_5e4 != 0) {
                        uVar39 = (uint)pFVar36;
                        if (uVar39 != uVar34) {
                          memmove(FVar35.Data + (longlong)(int)uVar39 * 4,
                                  FVar35.Data + (longlong)(int)uVar34 * 4,
                                  (longlong)(int)(uVar10 - uVar34) << 2);
                        }
                        pFVar36 = (FProperty *)(ulonglong)(uVar39 + (uVar10 - uVar34));
                      }
                      local_5e4 = local_5e4 ^ 1;
                    } while ((longlong)pFVar32 < lVar20);
                    local_578 = (uint)pFVar36;
                    pFVar13 = local_5a8;
                    pFVar19 = local_418;
                  }
                  if (local_5e3 != '\0') {
                    pFVar16 = pFVar37;
                    if ((local_5d8.field1_0x8.FreezableArray)->ArrayNum != 0) {
                      uVar28 = (local_5d8.field1_0x8.FreezableArray)->_padding_;
                      if (((local_5d8.ArrayFlags & UsesMemoryImageAllocator) != None) &&
                         ((uVar28 & 1) != 0)) {
                        uVar28 = (longlong)&(local_5d8.field1_0x8.HeapArray)->field_0x0 +
                                 ((longlong)uVar28 >> 0x18);
                      }
                      pFVar16 = (FProperty *)
                                ((longlong)local_5b8[0] * (longlong)local_5d8.ElementSize + uVar28);
                    }
                    this_01 = (UObjectBaseUtility *)
                              (**(code **)(local_518->_padding_ + 0x1f8))(local_518,pFVar16);
                    bVar7 = UObjectBaseUtility::IsPackageExternal(this_01);
                    if (bVar7) goto LAB_14214f13a;
                  }
                  if (((local_538.Data <= local_5b8) &&
                      ((FScriptContainerElement *)local_5b8 <
                       local_538.Data + (longlong)local_530._4_4_ * 4)) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  iVar27 = (uint)local_530;
                  if ((uint)local_530 == local_530._4_4_) {
                    iVar27 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&local_538,(int *)((longlong)&local_530 + 4));
                  }
                  pFVar13 = (FArchive *)&pFVar13->field_0x38;
                  local_530 = CONCAT44(local_530._4_4_,iVar27 + 1);
                  *(int *)(local_538.Data + (longlong)iVar27 * 4) = local_5b8[0];
                  uVar28 = (ulonglong)local_598 & 0xffffffff;
                }
              }
              else {
                if (pFVar13->field_0x20 != '\x04') {
                  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("false",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyArray.cpp"
                                     ,0x238,L"Unsupported operation type");
                  if (bVar7) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  goto LAB_14214f13a;
                }
                local_550 = `FArrayProperty::SerializeItem'::__l215::<lambda_4>::operator()
                                      (&local_3d8,(FOverriddenPropertyNodeID *)pFVar13,&local_208);
                if (local_550 == -1) {
                  if (6 < (byte)LogOverridableObject._0_1_) {
                    FOverriddenPropertyNodeID::ToDebugString
                              ((FOverriddenPropertyNodeID *)pFVar13,&local_2e8);
                    UE::Logging::Private::BasicLog<7>
                              (&::LOG_Static,(FLogCategoryBase *)&LogOverridableObject);
                    FVar35.Data = local_2e8.Data.AllocatorInstance.Data;
                    goto LAB_14214f130;
                  }
                  goto LAB_14214f13a;
                }
                if (((local_528.Data <= (FScriptContainerElement *)&local_550) &&
                    ((FScriptContainerElement *)&local_550 <
                     local_528.Data + (longlong)local_520._4_4_ * 4)) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar27 = (int)local_520;
                if ((int)local_520 == local_520._4_4_) {
                  iVar27 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_528,(int *)((longlong)&local_520 + 4));
                }
                pFVar13 = (FArchive *)&pFVar13->field_0x38;
                local_520 = CONCAT44(local_520._4_4_,iVar27 + 1);
                *(int *)(local_528.Data + (longlong)iVar27 * 4) = local_550;
                uVar28 = (ulonglong)local_598 & 0xffffffff;
              }
            }
          }
        }
        local_4bc[1] = 0xffffffff;
        ::operator<<(*(FArchive **)(*(longlong *)FVar40.StructuredArchive + 8),local_4bc + 1);
        EVar42 = ((FArrayProperty *)TVar31.Val)->ArrayFlags;
        uVar10 = (**(code **)(((FArrayProperty *)TVar31.Val)->Inner->_padding_ + 0x168))();
        FScriptArrayHelper::FScriptArrayHelper
                  (&local_2a8,Internal,((FArrayProperty *)TVar31.Val)->Inner,local_560,
                   ((FArrayProperty *)TVar31.Val)->Inner->ElementSize,uVar10,EVar42);
        local_4bc[0] = (int)local_520;
        ::operator<<(*(FArchive **)(*(longlong *)FVar40.StructuredArchive + 8),local_4bc);
        iVar27 = (int)local_520;
        uVar28 = (ulonglong)(int)local_520;
        pFVar1 = local_528.Data + uVar28 * 4;
        FVar35.Data = local_528.Data;
        while( true ) {
          if ((int)uVar28 != iVar27) {
            local_59e = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_59e);
          }
          if (FVar35.Data == pFVar1) break;
          pFVar16 = pFVar37;
          if ((local_2a8.field1_0x8.FreezableArray)->ArrayNum != 0) {
            puVar29 = (undefined1 *)(local_2a8.field1_0x8.FreezableArray)->_padding_;
            if (((local_2a8.ArrayFlags & UsesMemoryImageAllocator) != None) &&
               (((ulonglong)puVar29 & 1) != 0)) {
              puVar29 = &(local_2a8.field1_0x8.HeapArray)->field_0x0 + ((longlong)puVar29 >> 0x18);
            }
            pFVar16 = (FProperty *)
                      (puVar29 + (longlong)*(int *)FVar35.Data * (longlong)local_2a8.ElementSize);
          }
          `FArrayProperty::SerializeItem'::__l2::<lambda_1>::operator()
                    (&local_570,(FStructuredArchiveSlot)FVar40.StructuredArchive,(uchar *)pFVar16);
          uVar28 = local_520 & 0xffffffff;
          FVar35.Data = FVar35.Data + 4;
        }
        local_508 = 0;
        pFVar13 = *(FArchive **)(*(longlong *)FVar40.StructuredArchive + 8);
        puVar14 = (uint *)**(undefined8 **)&pFVar13->field_0x8;
        if ((uint *)(*(undefined8 **)&pFVar13->field_0x8)[1] < puVar14 + 1) {
          if ((pFVar13->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)pFVar13 + 0x188))(pFVar13,&local_508,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(pFVar13,&local_508);
          }
        }
        else {
          local_508 = *puVar14;
          **(longlong **)&pFVar13->field_0x8 = **(longlong **)&pFVar13->field_0x8 + 4;
        }
        local_504 = local_578;
        pFVar13 = *(FArchive **)(*(longlong *)FVar40.StructuredArchive + 8);
        puVar14 = (uint *)**(undefined8 **)&pFVar13->field_0x8;
        if ((uint *)(*(undefined8 **)&pFVar13->field_0x8)[1] < puVar14 + 1) {
          if ((pFVar13->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)pFVar13 + 0x188))(pFVar13,&local_504,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(pFVar13,&local_504);
          }
        }
        else {
          local_504 = *puVar14;
          **(longlong **)&pFVar13->field_0x8 = **(longlong **)&pFVar13->field_0x8 + 4;
        }
        uVar30 = (ulonglong)(int)local_578;
        local_598 = (UObject *)CONCAT44(local_598._4_4_,local_578);
        local_4f8 = (FStructuredArchiveSlot)(local_580.Data + uVar30 * 4);
        uVar28 = uVar30;
        FVar35.Data = local_580.Data;
        while( true ) {
          FVar6 = local_4f8;
          if ((int)uVar30 != (int)uVar28) {
            local_59d = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_59d);
          }
          ppFVar5 = local_568;
          if ((FStructuredArchiveSlot)FVar35.Data == FVar6) break;
          pFVar16 = pFVar37;
          if ((local_5d8.field1_0x8.FreezableArray)->ArrayNum != 0) {
            uVar28 = (local_5d8.field1_0x8.FreezableArray)->_padding_;
            if (((local_5d8.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar28 & 1) != 0))
            {
              uVar28 = (longlong)&(local_5d8.field1_0x8.HeapArray)->field_0x0 +
                       ((longlong)uVar28 >> 0x18);
            }
            pFVar16 = (FProperty *)
                      ((longlong)*(int *)FVar35.Data * (longlong)local_5d8.ElementSize + uVar28);
          }
          local_4f0.StructuredArchive = FVar40.StructuredArchive;
          if (*(char *)(local_568 + 0xf) == '\0') {
LAB_14214f3fc:
            (**(code **)(local_570->Inner->_padding_ + 0xc0))
                      (local_570->Inner,local_4f0.StructuredArchive,pFVar16,0);
LAB_14214f413:
            uVar30 = (ulonglong)local_578;
            FVar35.Data = FVar35.Data + 4;
            uVar28 = (ulonglong)local_598 & 0xffffffff;
          }
          else {
            pFVar13 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_4f0);
            lVar20 = (**(code **)(*(longlong *)pFVar13 + 0x28))(pFVar13);
            pFVar32 = local_570->Inner;
            if (((pFVar32 == (FProperty *)0x0) ||
                ((*(uint *)(pFVar32->_padding_ + 0x18) >> 0x14 & 1) == 0)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("CastResult",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                   ,0x472,L"CastFieldChecked failed with 0x%016llx"),
               pFVar32 = pFVar37, bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar27 = (**(code **)(pFVar32->_padding_ + 0xb0))
                               (pFVar32,ppFVar5,local_4f0.StructuredArchive,pFVar16);
            if (iVar27 == 1) goto LAB_14214f413;
            if (iVar27 != 2) {
              if (iVar27 != 3) goto LAB_14214f3fc;
              goto LAB_14214f413;
            }
            (**(code **)(*(longlong *)pFVar32[1]._padding_ + 0x390))
                      ((longlong *)pFVar32[1]._padding_,pFVar16);
            pFVar13 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_4f0);
            (**(code **)(*(longlong *)pFVar13 + 0x1b8))
                      (pFVar13,*(int *)((longlong)ppFVar5 + 0x3c) + lVar20);
            uVar30 = (ulonglong)local_578;
            FVar35.Data = FVar35.Data + 4;
            uVar28 = (ulonglong)local_598 & 0xffffffff;
          }
        }
        local_500[0] = (uint)local_530;
        pFVar13 = *(FArchive **)(*(longlong *)FVar40.StructuredArchive + 8);
        puVar14 = (uint *)**(undefined8 **)&pFVar13->field_0x8;
        if ((uint *)(*(undefined8 **)&pFVar13->field_0x8)[1] < puVar14 + 1) {
          if ((pFVar13->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)pFVar13 + 0x188))(pFVar13,local_500,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(pFVar13,local_500);
          }
        }
        else {
          local_500[0] = *puVar14;
          **(longlong **)&pFVar13->field_0x8 = **(longlong **)&pFVar13->field_0x8 + 4;
        }
        uVar30 = (ulonglong)(int)(uint)local_530;
        local_598 = (UObject *)CONCAT44(local_598._4_4_,(uint)local_530);
        local_4f8 = (FStructuredArchiveSlot)((longlong)local_538.Data + uVar30 * 4);
        uVar28 = uVar30;
        FVar35.Data = local_538.Data;
        while( true ) {
          FVar6 = local_4f8;
          if ((int)uVar30 != (int)uVar28) {
            local_59c = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_59c);
          }
          ppFVar5 = local_568;
          if ((FStructuredArchiveSlot)FVar35.Data == FVar6) break;
          pFVar16 = pFVar37;
          if ((local_5d8.field1_0x8.FreezableArray)->ArrayNum != 0) {
            uVar28 = (local_5d8.field1_0x8.FreezableArray)->_padding_;
            if (((local_5d8.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar28 & 1) != 0))
            {
              uVar28 = (longlong)&(local_5d8.field1_0x8.HeapArray)->field_0x0 +
                       ((longlong)uVar28 >> 0x18);
            }
            pFVar16 = (FProperty *)
                      ((longlong)*(int *)FVar35.Data * (longlong)local_5d8.ElementSize + uVar28);
          }
          local_4e8.StructuredArchive = FVar40.StructuredArchive;
          if (*(char *)(local_568 + 0xf) == '\0') {
LAB_14214f5d6:
            (**(code **)(local_570->Inner->_padding_ + 0xc0))
                      (local_570->Inner,local_4e8.StructuredArchive,pFVar16,0);
LAB_14214f5ed:
            uVar30 = local_530 & 0xffffffff;
            FVar35.Data = FVar35.Data + 4;
            uVar28 = (ulonglong)local_598 & 0xffffffff;
          }
          else {
            pFVar13 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_4e8);
            lVar20 = (**(code **)(*(longlong *)pFVar13 + 0x28))(pFVar13);
            pFVar32 = local_570->Inner;
            if (((pFVar32 == (FProperty *)0x0) ||
                ((*(uint *)(pFVar32->_padding_ + 0x18) >> 0x14 & 1) == 0)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("CastResult",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                   ,0x472,L"CastFieldChecked failed with 0x%016llx"),
               pFVar32 = pFVar37, bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar27 = (**(code **)(pFVar32->_padding_ + 0xb0))
                               (pFVar32,ppFVar5,local_4e8.StructuredArchive,pFVar16);
            if (iVar27 == 1) goto LAB_14214f5ed;
            if (iVar27 != 2) {
              if (iVar27 != 3) goto LAB_14214f5d6;
              goto LAB_14214f5ed;
            }
            (**(code **)(*(longlong *)pFVar32[1]._padding_ + 0x390))
                      ((longlong *)pFVar32[1]._padding_,pFVar16);
            pFVar13 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_4e8);
            (**(code **)(*(longlong *)pFVar13 + 0x1b8))
                      (pFVar13,*(int *)((longlong)ppFVar5 + 0x3c) + lVar20);
            uVar30 = local_530 & 0xffffffff;
            FVar35.Data = FVar35.Data + 4;
            uVar28 = (ulonglong)local_598 & 0xffffffff;
          }
        }
        goto LAB_14214f6bd;
      }
    }
    local_510 = (local_5d8.field1_0x8.FreezableArray)->ArrayNum;
    ::operator<<((FVar40.StructuredArchive)->Formatter->Inner,&local_510);
    pFVar16 = pFVar37;
    if (0 < local_510) {
      do {
        pFVar32 = pFVar37;
        if ((local_5d8.field1_0x8.FreezableArray)->ArrayNum != 0) {
          uVar28 = (local_5d8.field1_0x8.FreezableArray)->_padding_;
          if (((local_5d8.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar28 & 1) != 0)) {
            uVar28 = (longlong)&(local_5d8.field1_0x8.HeapArray)->field_0x0 +
                     ((longlong)uVar28 >> 0x18);
          }
          pFVar32 = (FProperty *)((longlong)(int)pFVar16 * (longlong)local_5d8.ElementSize + uVar28)
          ;
        }
        `FArrayProperty::SerializeItem'::__l2::<lambda_1>::operator()
                  (&local_570,(FStructuredArchiveSlot)FVar40.StructuredArchive,(uchar *)pFVar32);
        uVar10 = (int)pFVar16 + 1;
        pFVar16 = (FProperty *)(ulonglong)uVar10;
      } while ((int)uVar10 < local_510);
    }
LAB_14214f6bd:
    if (local_580.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_580.Data);
    }
    if ((FStructuredArchiveSlot)local_538.Data != (FStructuredArchiveSlot)0x0) {
      FMemory::Free(local_538.Data);
    }
    if (local_528.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_528.Data);
    return;
  }
  pFVar19 = (local_res10[0].StructuredArchive)->Formatter->Inner;
  puVar14 = (uint *)**(undefined8 **)&pFVar19->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar19->field_0x8)[1] < puVar14 + 1) {
    if ((pFVar19->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar19 + 0x188))(pFVar19,&local_5e8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar19,&local_5e8);
    }
  }
  else {
    local_5e8 = *puVar14;
    **(longlong **)&pFVar19->field_0x8 = **(longlong **)&pFVar19->field_0x8 + 4;
  }
  FVar40.StructuredArchive = local_res10[0].StructuredArchive;
  if ((pFVar13->field_0x28 & 1) != 0) {
    if ((pFVar13->field_0x2c & 5) == 0) {
      FScriptArrayHelper::EmptyAndAddValues(&local_5d8,local_5e8);
    }
    else {
      iVar27 = (local_5d8.field1_0x8.FreezableArray)->ArrayNum;
      if (iVar27 < (int)local_5e8) {
        FScriptArrayHelper::AddValues(&local_5d8,local_5e8 - iVar27);
      }
      else if ((int)local_5e8 < iVar27) {
        FScriptArrayHelper::RemoveValues(&local_5d8,local_5e8,iVar27 - local_5e8);
      }
    }
  }
  (**(code **)(*(longlong *)pFVar13 + 0x10))
            (pFVar13,(longlong)(local_5d8.field1_0x8.FreezableArray)->ArrayNum *
                     (longlong)local_5d8.ElementSize);
  if ((((int)((ulonglong)*(undefined8 *)&pFVar13->field_0x40 >> 0x20) < 0x3f4) &&
      (499 < (int)*(undefined8 *)&pFVar13->field_0x40)) &&
     ((*(uint *)((*(FProperty **)((longlong)TVar31.Val + 0x78))->_padding_ + 0x18) >> 0x14 & 1) != 0
     )) {
    if (local_320 == '\0') {
      FPropertyTag::FPropertyTag(&local_398,*(FProperty **)((longlong)TVar31.Val + 0x78),0,param_2);
      local_320 = '\x01';
      ::operator<<(pFVar13,&local_398);
      if ((local_320 == '\0') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if ((pFVar13->field_0x28 & 1) != 0) {
      UE::ApplyRedirectsToPropertyType
                ((FPropertyTypeName)(int)&local_4b4,
                 (FProperty *)(ulonglong)(uint)local_398.TypeName.Index);
      if (local_4b4.Index != 0) {
        FPropertyTag::SetType(&local_398,local_4b4);
      }
      cVar9 = (**(code **)((*(FProperty **)((longlong)TVar31.Val + 0x78))->_padding_ + 0x198))
                        (*(FProperty **)((longlong)TVar31.Val + 0x78),local_398.TypeName.Index);
      if (cVar9 == '\0') {
        pFVar24 = CastFieldChecked<FStructProperty>
                            ((FField *)*(FProperty **)((longlong)TVar31.Val + 0x78));
        local_4b0[0].Index = local_398.TypeName.Index;
        FVar11 = UE::FPropertyTypeName::GetParameter(local_4b0,(int)local_408);
        UE::FPropertyTypeName::GetName((FPropertyTypeName *)CONCAT44(extraout_var,FVar11.Index));
        if (((((pFVar24->Struct).field0_0x0.DebugPtr)->StructFlags &
             STRUCT_SerializeFromMismatchedTag) == STRUCT_NoFlags) ||
           ((FVar12 = FNameEntryId::FromValidEName((EName)local_3f8),
            CONCAT44(local_398.Type.Number,local_398.Type.ComparisonIndex.Value) ==
            (ulonglong)*(uint *)CONCAT44(extraout_var_00,FVar12.Value) &&
            (local_400 == ((pFVar24->Struct).field0_0x0.DebugPtr)->_padding_)))) {
          if (2 < (byte)LogClass._0_1_) {
            (**(code **)(*(longlong *)pFVar13 + 0x18))(pFVar13,local_2c8);
            this_02 = UE::FPropertyTypeName::FPropertyTypeName(&local_3f4,(FProperty *)pFVar24);
            FVar11 = UE::FPropertyTypeName::GetParameter(this_02,(int)local_3f0);
            local_e8.Base = local_c8;
            local_e8.bIsDynamic = false;
            local_e8.bIsExternal = false;
            local_e8.CurPos = local_c8;
            local_e8.End = (wchar_t *)local_48;
            UE::operator<<(&local_e8,(FPropertyTypeName *)CONCAT44(extraout_var_01,FVar11.Index));
            TStringBuilderBase<wchar_t>::operator*(&local_e8);
            local_4c0.Index = local_398.TypeName.Index;
            FVar11 = UE::FPropertyTypeName::GetParameter(&local_4c0,(int)local_3c8);
            local_188.Base = local_168;
            local_188.bIsDynamic = false;
            local_188.bIsExternal = false;
            local_188.CurPos = local_168;
            local_188.End = (wchar_t *)&local_e8;
            UE::operator<<(&local_188,(FPropertyTypeName *)CONCAT44(extraout_var_02,FVar11.Index));
            TStringBuilderBase<wchar_t>::operator*(&local_188);
            local_1e8.bIsDynamic = false;
            local_1e8.bIsExternal = false;
            local_1e8.Base = local_1c8;
            local_1e8.CurPos = local_1c8;
            local_1e8.End = (wchar_t *)&local_188;
            ::FName::AppendString(&local_398.Name,&local_1e8);
            TStringBuilderBase<wchar_t>::operator*(&local_1e8);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1e8);
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_188);
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_e8);
            if (local_2c8[0] != (void *)0x0) {
              FMemory::Free(local_2c8[0]);
            }
          }
          lVar20 = (**(code **)(*(longlong *)pFVar13 + 0x28))(pFVar13);
          lVar25 = (**(code **)(*(longlong *)pFVar13 + 0x28))(pFVar13);
          lVar25 = (local_398.Size + lVar20) - lVar25;
          if (lVar25 < 1) {
            return;
          }
          do {
            plVar3 = *(longlong **)&pFVar13->field_0x8;
            if ((undefined1 *)plVar3[1] < (undefined1 *)*plVar3 + 1) {
              (**(code **)(*(longlong *)pFVar13 + 0x188))(pFVar13,&local_59b,1);
            }
            else {
              local_59b = *(undefined1 *)*plVar3;
              *plVar3 = *plVar3 + 1;
            }
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          return;
        }
        local_288[0] = local_398.Prop;
        local_288[3] = (FProperty *)local_398._24_8_;
        local_288[4] = (FProperty *)local_398._32_8_;
        local_288[5] = (FProperty *)local_398._40_8_;
        local_288[6] = (FProperty *)local_398._48_8_;
        local_288[8] = (FProperty *)local_398._64_8_;
        lStack_240 = local_398.SizeOffset;
        local_238.A = local_398.StructGuid.A;
        local_238.B = local_398.StructGuid.B;
        local_238.C = local_398.StructGuid.C;
        local_238.D = local_398.StructGuid.D;
        local_228.A = local_398.PropertyGuid.A;
        local_228.B = local_398.PropertyGuid.B;
        local_228.C = local_398.PropertyGuid.C;
        local_228.D = local_398.PropertyGuid.D;
        local_218 = local_398.HasPropertyGuid;
        uStack_217 = local_398.BoolVal;
        EStack_216 = local_398.SerializeType;
        EStack_215 = local_398.OverrideOperation;
        bStack_214 = local_398.bExperimentalOverridableLogic;
        uStack_213 = local_398._117_3_;
        local_210 = 1;
      }
    }
  }
  local_518 = (FProperty *)(**(code **)(*(longlong *)pFVar13 + 0x28))(pFVar13);
  pFVar13 = local_5a8;
  pFVar32 = (FProperty *)0x0;
  pFVar37 = (FProperty *)0x0;
  local_5e4 = local_5a8->field_0x2c;
  pFVar16 = pFVar32;
  if (((local_5e4 & 1) != 0) &&
     (plVar3 = *(longlong **)&local_5a8->field_0x60, pFVar16 = pFVar37, plVar3 != (longlong *)0x0))
  {
    bVar7 = false;
    local_458.Ar = local_5a8;
    local_458.Property = *(FProperty **)((longlong)local_5b0.Val + 0x78);
    plVar41 = plVar3;
    if (*(FArrayProperty **)&local_5a8->field_0x70 == (FArrayProperty *)local_5b0.Val) {
      FSerializedPropertyScope::PushProperty(&local_458);
      TVar31.Val = local_5b0.Val;
    }
    else {
      local_458.Property = (FProperty *)0x0;
      TVar31.Val = local_5b0.Val;
      pFVar37 = pFVar32;
    }
    do {
      if (((int)local_5e8 <= (int)pFVar37) || (bVar7)) break;
      if ((FProperty *)*plVar41 == ((FArrayProperty *)TVar31.Val)->Inner) {
        local_308 = *plVar41;
        uStack_300 = plVar41[1];
        local_2f8 = plVar41[2];
        *(longlong **)&pFVar13->field_0x60 = &local_308;
        uStack_300 = uStack_300 & 0xffffffff00000000;
        uStack_2f0 = 0;
        pFVar37 = (FProperty *)(longlong)(int)plVar41[1];
        pFVar16 = pFVar32;
        if ((local_5d8.field1_0x8.FreezableArray)->ArrayNum != 0) {
          uVar28 = (local_5d8.field1_0x8.FreezableArray)->_padding_;
          if (((local_5d8.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar28 & 1) != 0)) {
            uVar28 = (longlong)&(local_5d8.field1_0x8.HeapArray)->field_0x0 +
                     ((longlong)uVar28 >> 0x18);
          }
          pFVar16 = (FProperty *)((longlong)pFVar37 * (longlong)local_5d8.ElementSize + uVar28);
        }
        `FArrayProperty::SerializeItem'::__l2::<lambda_1>::operator()
                  (&local_570,(FStructuredArchiveSlot)FVar40.StructuredArchive,(uchar *)pFVar16);
        plVar41 = (longlong *)plVar41[3];
        *(longlong **)&pFVar13->field_0x60 = plVar3;
        TVar31.Val = local_5b0.Val;
      }
      else {
        if ((FProperty *)*plVar41 == (FProperty *)0x0) {
          pFVar37 = (FProperty *)(ulonglong)*(uint *)(plVar41 + 1);
        }
        bVar7 = true;
      }
    } while (plVar41 != (longlong *)0x0);
    FSerializedPropertyScope::PopProperty(&local_458);
    pFVar16 = pFVar37;
    pFVar13 = local_5a8;
    pFVar37 = local_518;
    if (!bVar7) goto LAB_14214fe97;
  }
  pFVar37 = local_518;
  pFVar13 = local_5a8;
  local_5a8->field_0x2c = local_5a8->field_0x2c & 0xfe;
  local_448.Property = *(FProperty **)((longlong)local_5b0.Val + 0x78);
  local_448.Ar = local_5a8;
  if (*(FArrayProperty **)&local_5a8->field_0x70 == (FArrayProperty *)local_5b0.Val) {
    FSerializedPropertyScope::PushProperty(&local_448);
  }
  else {
    local_448.Property = (FProperty *)0x0;
  }
  if ((int)pFVar16 < (int)local_5e8) {
    do {
      ppFVar5 = local_568;
      iVar27 = (int)pFVar16;
      uVar10 = iVar27 + 1;
      pFVar16 = (FProperty *)(ulonglong)uVar10;
      pFVar37 = pFVar32;
      if ((local_5d8.field1_0x8.FreezableArray)->ArrayNum != 0) {
        uVar28 = (local_5d8.field1_0x8.FreezableArray)->_padding_;
        if (((local_5d8.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar28 & 1) != 0)) {
          uVar28 = (longlong)&(local_5d8.field1_0x8.HeapArray)->field_0x0 +
                   ((longlong)uVar28 >> 0x18);
        }
        pFVar37 = (FProperty *)((longlong)iVar27 * (longlong)local_5d8.ElementSize + uVar28);
      }
      local_4e0.StructuredArchive = FVar40.StructuredArchive;
      if (*(char *)(local_568 + 0xf) == '\0') {
LAB_14214fe54:
        (**(code **)(local_570->Inner->_padding_ + 0xc0))
                  (local_570->Inner,local_4e0.StructuredArchive,pFVar37,0);
      }
      else {
        pFVar13 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_4e0);
        lVar20 = (**(code **)(*(longlong *)pFVar13 + 0x28))(pFVar13);
        pFVar36 = local_570->Inner;
        if (((pFVar36 == (FProperty *)0x0) ||
            ((*(uint *)(pFVar36->_padding_ + 0x18) >> 0x14 & 1) == 0)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("CastResult",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x472,L"CastFieldChecked failed with 0x%016llx"), pFVar36 = pFVar32,
           bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar27 = (**(code **)(pFVar36->_padding_ + 0xb0))
                           (pFVar36,ppFVar5,local_4e0.StructuredArchive,pFVar37);
        if (iVar27 != 1) {
          if (iVar27 == 2) {
            (**(code **)(*(longlong *)pFVar36[1]._padding_ + 0x390))
                      ((longlong *)pFVar36[1]._padding_,pFVar37);
            pFVar13 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_4e0);
            (**(code **)(*(longlong *)pFVar13 + 0x1b8))
                      (pFVar13,*(int *)((longlong)ppFVar5 + 0x3c) + lVar20);
          }
          else if (iVar27 != 3) goto LAB_14214fe54;
        }
      }
      pFVar13 = local_5a8;
      pFVar37 = local_518;
    } while ((int)uVar10 < (int)local_5e8);
  }
  pFVar13->field_0x2c = pFVar13->field_0x2c ^ (pFVar13->field_0x2c ^ local_5e4) & 1;
  FSerializedPropertyScope::PopProperty(&local_448);
LAB_14214fe97:
  if ((local_320 != '\0') && ((pFVar13->field_0x28 & 4) != 0)) {
    lVar20 = (**(code **)(*(longlong *)pFVar13 + 0x28))(pFVar13);
    local_398.Size = IntCastChecked<int,__int64>(lVar20 - (longlong)pFVar37);
    if (0 < local_398.Size) {
      uVar26 = (**(code **)(*(longlong *)pFVar13 + 0x28))(pFVar13);
      (**(code **)(*(longlong *)pFVar13 + 0x1b8))(pFVar13,local_398.SizeOffset);
      ::operator<<(pFVar13,&local_398.Size);
      (**(code **)(*(longlong *)pFVar13 + 0x1b8))(pFVar13,uVar26);
    }
  }
  return;
}

// StaticClass @ 1421524f0

FFieldClass * __cdecl FArrayProperty::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FArrayProperty",0x200000,
                 CASTCLASS_FArrayProperty|CASTCLASS_FProperty|CASTCLASS_UField,pFVar1,Construct);
      atexit(`FArrayProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__
            );
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

// UseBinaryOrNativeSerialization @ 142154740

bool __thiscall
FArrayProperty::UseBinaryOrNativeSerialization(FArrayProperty *this,FArchive *param_1)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((param_1->field_0x28 & 0x20) != 0) {
    return true;
  }
  pFVar1 = this->Inner;
  if (pFVar1 == (FProperty *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LocalInner",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyArray.cpp"
                       ,0x579,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014215479e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(pFVar1->_padding_ + 0x180))(pFVar1,param_1);
  return (bool)uVar4;
}

// Visit @ 142154980

EPropertyVisitorControlFlow __thiscall
FArrayProperty::Visit
          (FArrayProperty *this,FPropertyVisitorContext *param_1,
          TFunctionRef<EPropertyVisitorControlFlow___cdecl(FPropertyVisitorContext_const_&)>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  EArrayPropertyFlags EVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong *puVar6;
  FProperty *pFVar7;
  FPropertyVisitorPath *this_00;
  FScriptContainerElement *pFVar8;
  longlong *plVar9;
  code *pcVar10;
  bool bVar11;
  EPropertyVisitorControlFlow EVar12;
  FPropertyVisitorInfo *pFVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  uint uVar18;
  FPropertyVisitorInfo local_c8;
  undefined8 local_b0;
  undefined8 local_a8;
  FPropertyVisitorPath *local_a0;
  longlong local_98;
  void *local_90;
  EScope local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong uVar19;
  
  EVar2 = this->ArrayFlags;
  puVar6 = (param_1->Data).PropertyData;
  (**(code **)(this->Inner->_padding_ + 0x168))();
  pFVar7 = this->Inner;
  iVar3 = pFVar7->ElementSize;
  if ((iVar3 < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ElementSize > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x1177,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    EVar12 = (*pcVar10)();
    return EVar12;
  }
  if ((pFVar7 == (FProperty *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InnerProperty",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x1178,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    EVar12 = (*pcVar10)();
    return EVar12;
  }
  iVar4 = (int)puVar6[1];
  pFVar13 = FPropertyVisitorPath::Top(param_1->Path);
  pFVar13->bContainsInnerProperties = 0 < iVar4;
  pcVar10 = *(code **)param_2;
  uVar14 = *(undefined8 *)&param_2->field_0x8;
  pFVar13 = FPropertyVisitorPath::Top(param_1->Path);
  if (((FArrayProperty *)pFVar13->Property != this) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context.Path.Top().Property == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Property.cpp"
                          ,0x4d8,L"The property set in the info has to match to this property"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    EVar12 = (*pcVar10)();
    return EVar12;
  }
  EVar12 = (*pcVar10)(uVar14,param_1);
  if (EVar12 == StepInto) {
    if ((this->Inner == (FProperty *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Inner",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyArray.cpp"
                            ,0x5b2,L"Expecting a valid inner property type"), bVar11)) {
      pcVar10 = (code *)swi(3);
      EVar12 = (*pcVar10)();
      return EVar12;
    }
    uVar19 = 0;
    if (0 < iVar4) {
      do {
        lVar17 = 0;
        this_00 = param_1->Path;
        local_c8.Property = this->Inner;
        local_c8.ParentStructType = (UStruct *)0x0;
        local_c8.PropertyInfo = ContainerIndex;
        local_c8.bContainsInnerProperties = false;
        local_c8.Index = (int)uVar19;
        FPropertyVisitorPath::Push(this_00,&local_c8);
        if ((int)puVar6[1] != 0) {
          uVar15 = *puVar6;
          if (((EVar2 & UsesMemoryImageAllocator) != None) && ((uVar15 & 1) != 0)) {
            uVar15 = ((longlong)uVar15 >> 0x18) + (longlong)puVar6;
          }
          lVar17 = (longlong)iVar3 * uVar19 + uVar15;
        }
        local_a0 = param_1->Path;
        local_90 = (param_1->Data).ParentStructData;
        local_88 = param_1->Scope;
        local_b0 = *(undefined8 *)param_2;
        local_a8 = *(undefined8 *)&param_2->field_0x8;
        local_98 = lVar17;
        EVar12 = (**(code **)(this->Inner->_padding_ + 0x98))(this->Inner,&local_a0,&local_b0);
        iVar5 = (this_00->Path).ArrayNum;
        if (EVar12 == Stop) {
          if ((iVar5 < 1) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar10 = (code *)swi(3);
            EVar12 = (*pcVar10)();
            return EVar12;
          }
          iVar3 = (this_00->Path).ArrayNum;
          pFVar8 = (this_00->Path).AllocatorInstance.Data;
          pFVar1 = pFVar8 + (longlong)iVar3 * 0x18 + -0x18;
          local_50 = *(undefined8 *)pFVar1;
          uStack_48 = *(undefined8 *)(pFVar1 + 8);
          local_40 = *(undefined8 *)(pFVar8 + (longlong)iVar3 * 0x18 + -8);
          (this_00->Path).ArrayNum = iVar3 + -1;
          if (*(void **)&this_00->OnPopFunc != (void *)0x0) {
            UE::Core::Private::Function::CheckCallable(*(void **)&this_00->OnPopFunc);
            plVar9 = *(longlong **)&(this_00->OnPopFunc).field_0x28;
            pcVar10 = *(code **)&this_00->OnPopFunc;
            plVar16 = (longlong *)&(this_00->OnPopFunc).field_0x10;
            if (plVar9 != (longlong *)0x0) {
              plVar16 = plVar9;
            }
            uVar14 = (**(code **)(*plVar16 + 8))();
            (*pcVar10)(uVar14,&local_50);
          }
          return Stop;
        }
        if (EVar12 == StepOut) {
          if ((iVar5 < 1) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar10 = (code *)swi(3);
            EVar12 = (*pcVar10)();
            return EVar12;
          }
          iVar3 = (this_00->Path).ArrayNum;
          pFVar8 = (this_00->Path).AllocatorInstance.Data;
          pFVar1 = pFVar8 + (longlong)iVar3 * 0x18 + -0x18;
          local_68 = *(undefined8 *)pFVar1;
          uStack_60 = *(undefined8 *)(pFVar1 + 8);
          local_58 = *(undefined8 *)(pFVar8 + (longlong)iVar3 * 0x18 + -8);
          (this_00->Path).ArrayNum = iVar3 + -1;
          if (*(void **)&this_00->OnPopFunc != (void *)0x0) {
            UE::Core::Private::Function::CheckCallable(*(void **)&this_00->OnPopFunc);
            plVar9 = *(longlong **)&(this_00->OnPopFunc).field_0x28;
            pcVar10 = *(code **)&this_00->OnPopFunc;
            plVar16 = (longlong *)&(this_00->OnPopFunc).field_0x10;
            if (plVar9 != (longlong *)0x0) {
              plVar16 = plVar9;
            }
            uVar14 = (**(code **)(*plVar16 + 8))();
            (*pcVar10)(uVar14,&local_68);
          }
          return StepOver;
        }
        if ((iVar5 < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar10 = (code *)swi(3);
          EVar12 = (*pcVar10)();
          return EVar12;
        }
        iVar5 = (this_00->Path).ArrayNum;
        pFVar8 = (this_00->Path).AllocatorInstance.Data;
        pFVar1 = pFVar8 + (longlong)iVar5 * 0x18 + -0x18;
        local_80 = *(undefined8 *)pFVar1;
        uStack_78 = *(undefined8 *)(pFVar1 + 8);
        local_70 = *(undefined8 *)(pFVar8 + (longlong)iVar5 * 0x18 + -8);
        (this_00->Path).ArrayNum = iVar5 + -1;
        if (*(void **)&this_00->OnPopFunc != (void *)0x0) {
          UE::Core::Private::Function::CheckCallable(*(void **)&this_00->OnPopFunc);
          plVar9 = *(longlong **)&(this_00->OnPopFunc).field_0x28;
          pcVar10 = *(code **)&this_00->OnPopFunc;
          plVar16 = (longlong *)&(this_00->OnPopFunc).field_0x10;
          if (plVar9 != (longlong *)0x0) {
            plVar16 = plVar9;
          }
          uVar14 = (**(code **)(*plVar16 + 8))();
          (*pcVar10)(uVar14,&local_80);
        }
        uVar18 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar18;
      } while ((int)uVar18 < iVar4);
    }
  }
  return EVar12;
}

