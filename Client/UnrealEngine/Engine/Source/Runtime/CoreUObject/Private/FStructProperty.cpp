// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 44

// GetFieldSize @ 141f81d00

ulong64 __thiscall FStructProperty::GetFieldSize(FStructProperty *this)

{
  return 0x78;
}

// ContainsObjectReference @ 142024910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FStructProperty::ContainsObjectReference
          (FStructProperty *this,
          TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_1,
          EPropertyObjectReferenceType param_2)

{
  UScriptStruct *this_00;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  ICppStructOps *pIVar8;
  FScriptContainerElement *pFVar9;
  FStructProperty *local_res8;
  FStructProperty *local_38;
  FString local_30;
  
  pFVar9 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar9 + (longlong)param_1->ArrayNum * 8;
  for (; pFVar9 != pFVar1; pFVar9 = pFVar9 + 8) {
    if (*(FStructProperty **)pFVar9 == this) {
      return false;
    }
  }
  this_00 = (this->Struct).field0_0x0.DebugPtr;
  if (this_00 == (UScriptStruct *)0x0) {
    if (2 < (byte)LogGarbage._0_1_) {
      FField::GetFullName((FField *)this,&local_30);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  if ((((param_2 & Strong) != None) &&
      ((this_00->StructFlags & STRUCT_AddStructReferencedObjects) != STRUCT_NoFlags)) ||
     (((this_00->StructFlags & STRUCT_SerializeNative) != STRUCT_NoFlags &&
      ((pIVar8 = UScriptStruct::GetCppStructOps(this_00), pIVar8 != (ICppStructOps *)0x0 &&
       (((pIVar8->FakeVPtr->Capabilities).HasSerializerObjectReferences & param_2) != None)))))) {
    return true;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_38 = this;
  if (((pFVar1 <= (FScriptContainerElement *)&local_38) &&
      ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar7 = param_1->ArrayNum;
  if (iVar7 == param_1->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  bVar4 = false;
  param_1->ArrayNum = iVar7 + 1;
  *(FStructProperty **)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_38;
  plVar2 = (longlong *)((this->Struct).field0_0x0.DebugPtr)->_padding_;
  do {
    if (plVar2 == (longlong *)0x0) {
LAB_142024ab5:
      local_res8 = this;
      TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
                (param_1,&local_res8,No);
      return bVar4;
    }
    cVar6 = (**(code **)(*plVar2 + 0x170))(plVar2,param_1);
    if (cVar6 != '\0') {
      bVar4 = true;
      goto LAB_142024ab5;
    }
    plVar2 = (longlong *)plVar2[9];
  } while( true );
}

// EmitIntrusiveOptionalReferenceInfo @ 14203d850

void __thiscall
FStructProperty::EmitIntrusiveOptionalReferenceInfo
          (FStructProperty *this,FSchemaBuilder *param_1,int param_2,
          TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_3,
          FPropertyStack *param_4)

{
  code *pcVar1;
  bool bVar2;
  ICppStructOps *pIVar3;
  FString local_18;
  
  pIVar3 = UScriptStruct::GetCppStructOps((this->Struct).field0_0x0.DebugPtr);
  if ((pIVar3 == (ICppStructOps *)0x0) ||
     (pIVar3 = UScriptStruct::GetCppStructOps((this->Struct).field0_0x0.DebugPtr),
     !(pIVar3->FakeVPtr->Capabilities).IsIntrusiveOptionalSafeForGC)) {
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)(this->Struct).field0_0x0.DebugPtr,&local_18,(UObject *)0x0);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Struct->GetCppStructOps() && Struct->GetCppStructOps()->IsIntrusiveOptionalSafeForGC()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0x1aa1,
                       L"Struct %s contains object references and has an intrusive unset optional state and has not verified that its unset state is safe for GC. The struct must set WithIntrusiveOptionalSafeForGC in its TStructOpsTypeTraits after ensuring that its object reference fields are nulled in its unset optional state."
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014203d928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x178))(this,param_1,param_2,param_3);
  return;
}

// EmitReferenceInfo @ 14203e700

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FStructProperty::EmitReferenceInfo
          (FStructProperty *this,FSchemaBuilder *param_1,int param_2,
          TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_3,
          FPropertyStack *param_4)

{
  int iVar1;
  UScriptStruct *this_00;
  FStructOpsFakeVTable *pFVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  ICppStructOps *pIVar11;
  FMemberWord FVar12;
  FString *pFVar13;
  FName *pFVar14;
  EStructOpsFakeVTableFlags EVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  FStructProperty *local_a8;
  FStructProperty *local_a0;
  FName local_98;
  uint uStack_90;
  undefined4 uStack_8c;
  FMemberWord local_88;
  FName local_80;
  FString local_78;
  FString local_68;
  FMemberDeclaration local_58;
  
  this_00 = (this->Struct).field0_0x0.DebugPtr;
  iVar19 = *(int *)((longlong)&this->_padding_ + 4) + param_2;
  uVar18 = 0;
  if ((this_00->StructFlags & STRUCT_AddStructReferencedObjects) != STRUCT_NoFlags) {
    pIVar11 = UScriptStruct::GetCppStructOps(this_00);
    if (pIVar11->Alignment < 8) {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)(this->Struct).field0_0x0.DebugPtr,&local_78,(UObject *)0x0);
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct->GetCppStructOps()->GetAlignment() >= 8",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0x1a7a,
                         L"\'%s\' has AddStructReferencedObjects(), which requires at least 8B alignment "
                        );
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pIVar11 = UScriptStruct::GetCppStructOps((this->Struct).field0_0x0.DebugPtr);
    pFVar2 = pIVar11->FakeVPtr;
    if (((pFVar2->Flags & AddStructReferencedObjects) == None) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!!(this->Flags & FuncFlag)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0x660,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar17 = uVar18;
    for (EVar15 = pFVar2->Flags &
                  (FindInnerPropertyInstance|ImportTextItem|ExportTextItem|Identical|Copy|
                   GetPreloadDependencies|PostScriptConstruct|NetDeltaSerialize|NetSerialize|
                   PostSerialize|SerializeSlot|SerializeArchive|Destruct|ConstructForTests|Construct
                  ); EVar15 != None; EVar15 = EVar15 & EVar15 - Construct) {
      uVar17 = (ulonglong)((int)uVar17 + 1);
    }
    FVar12.ObjectARO =
         (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)
         (**(code **)(&pFVar2[1].Flags + uVar17 * 2))();
    iVar10 = (int)this->_padding_;
    uVar17 = uVar18;
    if (0 < iVar10) {
      do {
        uVar9 = (int)uVar17 * *(int *)((longlong)&this->_padding_ + 4) + iVar19;
        pFVar13 = UE::GC::FPropertyStack::GetPropertyPath(param_4,&local_68);
        iVar1 = (pFVar13->Data).ArrayNum;
        iVar16 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar16 = 0;
        }
        pFVar14 = ::FName::FName(&local_80,iVar16,(wchar_t *)(pFVar13->Data).AllocatorInstance.Data,
                                 FNAME_Add);
        FVar3 = *pFVar14;
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        uStack_8c = CONCAT31(uStack_8c._1_3_,0xf);
        local_58._12_4_ = uStack_8c;
        local_58.Offset = uVar9;
        local_98 = FVar3;
        uStack_90 = uVar9;
        local_88.ObjectARO = FVar12.ObjectARO;
        local_58.DebugName = FVar3;
        local_58.ExtraWord.ObjectARO = FVar12.ObjectARO;
        UE::GC::FSchemaBuilder::Add(param_1,&local_58);
        uVar9 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar9;
      } while ((int)uVar9 < iVar10);
    }
  }
  cVar8 = '\0';
  if (((this->Struct).field0_0x0.DebugPtr)->_padding_ != 0) {
    pFVar4 = (param_3->AllocatorInstance).Data;
    local_a8 = this;
    if (((pFVar4 <= (FScriptContainerElement *)&local_a8) &&
        ((FScriptContainerElement *)&local_a8 < pFVar4 + (longlong)param_3->ArrayMax * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar10 = param_3->ArrayNum;
    if (iVar10 == param_3->ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar10 + 1;
    *(FStructProperty **)((param_3->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_a8;
    plVar5 = (longlong *)((this->Struct).field0_0x0.DebugPtr)->_padding_;
    while ((plVar5 != (longlong *)0x0 && (cVar8 == '\0'))) {
      cVar8 = (**(code **)(*plVar5 + 0x170))(plVar5,param_3);
      plVar5 = (longlong *)plVar5[9];
    }
    local_a0 = this;
    TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
              (param_3,&local_a0,No);
    if ((cVar8 != '\0') && (iVar10 = (int)this->_padding_, 0 < iVar10)) {
      do {
        for (plVar5 = (longlong *)((this->Struct).field0_0x0.DebugPtr)->_padding_;
            plVar5 != (longlong *)0x0; plVar5 = (longlong *)plVar5[9]) {
          (**(code **)(*plVar5 + 0x178))
                    (plVar5,param_1,(int)uVar18 * *(int *)((longlong)&this->_padding_ + 4) + iVar19,
                     param_3,param_4);
        }
        uVar9 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar9;
      } while ((int)uVar9 < iVar10);
    }
  }
  return;
}

// FStructProperty @ 1421629f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FStructProperty * __thiscall
FStructProperty::FStructProperty
          (FStructProperty *this,FFieldVariant param_1,FStructPropertyParams *param_2)

{
  UScriptStruct *this_00;
  ICppStructOps *pIVar1;
  UScriptStruct *pUVar2;
  UScriptStruct *pUVar3;
  ulonglong local_res8;
  
  pUVar2 = (UScriptStruct *)0x0;
  pUVar3 = pUVar2;
  if (((param_2->ScriptStructFunc != (_func___cdecl_UScriptStruct_ptr *)0x0) &&
      (this_00 = (*param_2->ScriptStructFunc)(), this_00 != (UScriptStruct *)0x0)) &&
     (pIVar1 = UScriptStruct::GetCppStructOps(this_00), pUVar3 = (UScriptStruct *)0x0,
     pIVar1 != (ICppStructOps *)0x0)) {
    pIVar1 = UScriptStruct::GetCppStructOps(this_00);
    pUVar3 = (UScriptStruct *)(pIVar1->FakeVPtr->Capabilities).ComputedPropertyFlags;
  }
  local_res8 = *(ulonglong *)param_1.Container;
  if ((((local_res8 & 1) != 0) && ((UObject *)(local_res8 & 0xfffffffffffffffe) != (UObject *)0x0))
     && (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(local_res8 & 0xfffffffffffffffe));
  }
  FProperty::FProperty
            ((FProperty *)this,(FFieldVariant)&local_res8,(FPropertyParamsBaseWithOffset *)param_2,
             (EPropertyFlags)pUVar3);
  this->_padding_ = (longlong)&___7FStructProperty__6B_;
  (this->Struct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  if (param_2->ScriptStructFunc != (_func___cdecl_UScriptStruct_ptr *)0x0) {
    pUVar2 = (*param_2->ScriptStructFunc)();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->Struct).field0_0x0.DebugPtr = pUVar2;
  return this;
}

// FStructProperty @ 142162ae0

FStructProperty * __thiscall
FStructProperty::FStructProperty
          (FStructProperty *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong local_res8;
  
  local_res8 = *(ulonglong *)param_1.Container;
  if ((((local_res8 & 1) != 0) && ((UObject *)(local_res8 & 0xfffffffffffffffe) != (UObject *)0x0))
     && (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(local_res8 & 0xfffffffffffffffe));
  }
  FProperty::FProperty((FProperty *)this,(FFieldVariant)&local_res8,param_2,param_3);
  this->_padding_ = (longlong)&___7FStructProperty__6B_;
  (this->Struct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  FProperty::SetElementSize((FProperty *)this,0);
  return this;
}

// AddReferencedObjects @ 142166d30

void __thiscall
FStructProperty::AddReferencedObjects(FStructProperty *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->Struct,0,0);
  FField::AddReferencedObjects((FField *)this,param_1);
  return;
}

// CanSerializeFromTypeName @ 142169510

bool __thiscall
FStructProperty::CanSerializeFromTypeName(FStructProperty *this,FPropertyTypeName param_1)

{
  UScriptStruct *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FString *pFVar5;
  uint *puVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  longlong lVar11;
  FName local_res18 [2];
  FGuid local_38;
  FString local_28;
  undefined1 local_18 [16];
  
  bVar10 = false;
  local_res18[0] = (FName)((ulonglong)local_res18[0] & 0xffffffff00000000);
  bVar3 = FProperty::CanSerializeFromTypeName((FProperty *)this,param_1);
  if (!bVar3) {
    return false;
  }
  pUVar1 = (this->Struct).field0_0x0.DebugPtr;
  if (pUVar1 == (UScriptStruct *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LocalStruct",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyStruct.cpp"
                       ,0x264,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  lVar11 = (ulonglong)(param_1.Index & 0x1fff) * 0xc;
  uVar9 = 0;
  if (0 < *(int *)(lVar11 + 8 +
                  (longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)param_1.Index >> 0xd])) {
    uVar9 = param_1.Index + 1;
  }
  if (*(longlong *)
       ((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar9 >> 0xd] +
       (ulonglong)(uVar9 & 0x1fff) * 0xc) == pUVar1->_padding_) {
    return true;
  }
  lVar11 = (longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)param_1.Index >> 0xd] + lVar11;
  if (*(int *)(lVar11 + 8) < 2) {
    uVar9 = 0;
  }
  else {
    lVar7 = lVar11 + 0xc;
    iVar8 = 1;
    do {
      iVar8 = iVar8 + -1 + *(int *)(lVar7 + 8);
      lVar7 = lVar7 + 0xc;
    } while (0 < iVar8);
    uVar9 = (int)((lVar7 - lVar11) / 0xc) + param_1.Index;
  }
  local_38.A = 0;
  local_38.B = 0;
  local_38.C = 0;
  local_38.D = 0;
  local_res18[0] =
       *(FName *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar9 >> 0xd] +
                 (ulonglong)(uVar9 & 0x1fff) * 0xc);
  if (local_res18[0] != (FName)0x0) {
    bVar10 = true;
    pFVar5 = ::FName::ToString(local_res18,&local_28);
    bVar3 = FGuid::Parse(pFVar5,&local_38);
    if ((bVar3) && (((local_38.D != 0 || local_38.C != 0) || local_38.B != 0) || local_38.A != 0)) {
      puVar6 = (uint *)(**(code **)(pUVar1->_padding_ + 0x380))(pUVar1,local_18);
      if (((local_38.D == puVar6[3] && local_38.C == puVar6[2]) && local_38.B == puVar6[1]) &&
          local_38.A == *puVar6) {
        bVar3 = true;
        goto LAB_1421696be;
      }
    }
  }
  bVar3 = false;
LAB_1421696be:
  if ((bVar10) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// ClearIntrusiveOptionalValue @ 142169bd0

void __thiscall FStructProperty::ClearIntrusiveOptionalValue(FStructProperty *this,void *param_1)

{
  FStructOpsFakeVTable *pFVar1;
  code *pcVar2;
  bool bVar3;
  EStructOpsFakeVTableFlags EVar4;
  ICppStructOps *pIVar5;
  uint uVar6;
  
  pIVar5 = UScriptStruct::GetCppStructOps((this->Struct).field0_0x0.DebugPtr);
  if (pIVar5 == (ICppStructOps *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyStruct.cpp"
                       ,0x1ca,
                       L"This should only be called when there is an intrusive unset state, which requires CppStructOps"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    return;
  }
  pFVar1 = pIVar5->FakeVPtr;
  if (((pFVar1->Flags & ClearIntrusiveOptionalValue) == None) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!!(this->Flags & FuncFlag)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x660,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar6 = 0;
  for (EVar4 = pFVar1->Flags &
               (IsIntrusiveOptionalValueSet|InitializeIntrusiveUnsetOptionalValue|GetStructTypeHash|
                StructuredSerializeFromMismatchedTag|SerializeFromMismatchedTag|
                AddStructReferencedObjects|FindInnerPropertyInstance|ImportTextItem|ExportTextItem|
                Identical|Copy|GetPreloadDependencies|PostScriptConstruct|NetDeltaSerialize|
                NetSerialize|PostSerialize|SerializeSlot|SerializeArchive|Destruct|ConstructForTests
               |Construct); EVar4 != None; EVar4 = EVar4 & EVar4 - Construct) {
    uVar6 = uVar6 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000142169c4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&pFVar1[1].Flags + (ulonglong)uVar6 * 2))
            (param_1,*(code **)(&pFVar1[1].Flags + (ulonglong)uVar6 * 2));
  return;
}

// ClearValueInternal @ 14216a0c0

void __thiscall FStructProperty::ClearValueInternal(FStructProperty *this,void *param_1)

{
  UScriptStruct::ClearScriptStruct((this->Struct).field0_0x0.DebugPtr,param_1,1);
  return;
}

// Construct @ 14216c740

FField * __cdecl
FStructProperty::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

{
  FProperty *this;
  FFieldClass *pFVar1;
  ulonglong local_res20;
  
  this = FMemory::Malloc(0x78,0);
  if (this == (FProperty *)0x0) {
    this = (FProperty *)0x0;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pFVar1 = FProperty::StaticClass();
        FFieldClass::FFieldClass
                  (&::StaticFieldClass,L"FStructProperty",0x100000,
                   CASTCLASS_FStructProperty|CASTCLASS_FProperty|CASTCLASS_UField,pFVar1,Construct);
        atexit(`FStructProperty::StaticClass'::__l2::
               _dynamic_atexit_destructor_for__StaticFieldClass__);
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
    this->_padding_ = (longlong)&___7FStructProperty__6B_;
    this[1]._padding_ = 0;
    local_res20 = (param_1->Container).Unknown;
    if ((((local_res20 & 1) != 0) &&
        ((UObject *)(local_res20 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res20 & 0xfffffffffffffffe));
    }
    if ((((local_res20 & 1) != 0) &&
        ((UObject *)(local_res20 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res20 & 0xfffffffffffffffe));
    }
    FProperty::FProperty(this,(FFieldVariant)&local_res20,param_2,param_3);
    this->_padding_ = (longlong)&___7FStructProperty__6B_;
    this[1]._padding_ = 0;
    FProperty::SetElementSize(this,0);
  }
  return (FField *)this;
}

// ContainsClearOnFinishDestroyInternal @ 14216cfa0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FStructProperty::ContainsClearOnFinishDestroyInternal
          (FStructProperty *this,
          TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  UScriptStruct *this_00;
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ICppStructOps *pIVar9;
  uint uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  FStructProperty *local_28;
  FString local_20;
  
  pFVar12 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar12 + (longlong)param_1->ArrayNum * 8;
  for (; pFVar12 != pFVar1; pFVar12 = pFVar12 + 8) {
    if (*(FStructProperty **)pFVar12 == this) {
      return false;
    }
  }
  this_00 = (this->Struct).field0_0x0.DebugPtr;
  if (this_00 == (UScriptStruct *)0x0) {
    if (2 < (byte)LogGarbage._0_1_) {
      FField::GetFullName((FField *)this,&local_20);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  pIVar9 = UScriptStruct::GetCppStructOps(this_00);
  if ((pIVar9 != (ICppStructOps *)0x0) && ((pIVar9->FakeVPtr->Capabilities).ClearOnFinishDestroy)) {
    return true;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  local_28 = this;
  if (((pFVar1 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  iVar8 = param_1->ArrayNum;
  if (iVar8 == param_1->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  bVar4 = false;
  param_1->ArrayNum = iVar8 + 1;
  *(FStructProperty **)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_28;
  plVar2 = (longlong *)((this->Struct).field0_0x0.DebugPtr)->_padding_;
  do {
    if (plVar2 == (longlong *)0x0) {
LAB_14216d14b:
      pFVar1 = (param_1->AllocatorInstance).Data;
      pFVar12 = pFVar1;
      while( true ) {
        if (pFVar12 == pFVar1 + (longlong)param_1->ArrayNum * 8) {
          return bVar4;
        }
        if (*(FStructProperty **)pFVar12 == this) break;
        pFVar12 = pFVar12 + 8;
      }
      uVar11 = (uint)((longlong)pFVar12 - (longlong)pFVar1 >> 3);
      if (uVar11 == 0xffffffff) {
        return bVar4;
      }
      uVar10 = 0;
      if ((int)(uVar11 + 1) <= param_1->ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      iVar8 = param_1->ArrayNum + ~uVar11;
      if (1 < iVar8) {
        iVar8 = 1;
      }
      if (iVar8 != 0) {
        memmove(pFVar1 + (longlong)(int)uVar11 * 8,
                pFVar1 + (longlong)(param_1->ArrayNum - iVar8) * 8,(longlong)iVar8 << 3);
      }
      param_1->ArrayNum = param_1->ArrayNum + -1;
      return bVar4;
    }
    if (((plVar2[7] & 0x1040000000U) == 0) &&
       (cVar6 = (**(code **)(*plVar2 + 0x140))(plVar2,param_1), cVar6 != '\0')) {
      bVar4 = true;
      goto LAB_14216d14b;
    }
    plVar2 = (longlong *)plVar2[9];
  } while( true );
}

// ConvertFromType @ 1421725f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EConvertFromTypeResult __thiscall
FStructProperty::ConvertFromType
          (FStructProperty *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2,uchar *param_3
          ,UStruct *param_4,uchar *param_5)

{
  undefined1 *puVar1;
  int iVar2;
  UScriptStruct *pUVar3;
  FName FVar4;
  code *pcVar5;
  FSlotBase FVar6;
  char cVar7;
  bool bVar8;
  EConvertFromTypeResult EVar9;
  FNameEntryId FVar10;
  uint uVar11;
  FArchive *pFVar12;
  ICppStructOps *pIVar13;
  FArchive *pFVar14;
  undefined4 extraout_var;
  undefined8 *puVar15;
  FPropertyTypeName *pFVar16;
  wchar_t *pwVar17;
  undefined4 extraout_var_00;
  undefined2 uVar18;
  EStructOpsFakeVTableFlags EVar19;
  FName FVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  wchar_t *pwVar24;
  FSlotBase local_res18 [2];
  undefined1 auStack_418 [32];
  wchar_t *local_3f8;
  wchar_t *local_3f0;
  FStructOpsFakeVTable *local_3e8;
  uchar *local_3e0;
  undefined1 local_3d8 [4];
  FPropertyTypeName local_3d4;
  undefined1 local_3d0 [4];
  FPropertyTypeName local_3cc;
  FSlotBase local_3c8;
  void *local_3c0 [2];
  void *local_3b0 [3];
  TStringBuilderBase<wchar_t> local_398;
  wchar_t local_378 [32];
  TStringBuilderBase<wchar_t> local_338;
  wchar_t local_318 [32];
  TStringBuilderBase<wchar_t> local_2d8;
  wchar_t local_2b8 [64];
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218 [64];
  TStringBuilderBase<wchar_t> local_198;
  wchar_t local_178 [64];
  TStringBuilderBase<wchar_t> local_f8;
  wchar_t local_d8 [64];
  ulonglong local_58 [3];
  
  local_58[0] = __security_cookie.value ^ (ulonglong)auStack_418;
  if ((this->Struct).field0_0x0.DebugPtr == (UScriptStruct *)0x0) {
    return UseSerializeItem;
  }
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  pFVar12 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
  cVar7 = (**(code **)(this->_padding_ + 0x198))(this,(param_1->TypeName).Index);
  pUVar3 = (this->Struct).field0_0x0.DebugPtr;
  if (((pUVar3->StructFlags & STRUCT_SerializeFromMismatchedTag) == STRUCT_NoFlags) ||
     (cVar7 != '\0')) {
    FVar4 = param_1->Type;
    FVar10 = FNameEntryId::FromValidEName((EName)local_3d0);
    FVar20.Number = 0;
    FVar20.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar10.Value);
    if (FVar4 != FVar20) {
      return UseSerializeItem;
    }
    if (cVar7 != '\0') {
      return UseSerializeItem;
    }
    if ((*(int *)&pFVar12->field_0x40 < 0x1b9) &&
       (cVar7 = (**(code **)(this->_padding_ + 0x180))(this,pFVar12), cVar7 != '\0')) {
      return UseSerializeItem;
    }
    if (2 < (byte)LogClass._0_1_) {
      puVar15 = (undefined8 *)(**(code **)(*(longlong *)pFVar12 + 0x18))(pFVar12,local_3b0);
      if (*(int *)(puVar15 + 1) == 0) {
        pwVar24 = L"";
      }
      else {
        pwVar24 = (wchar_t *)*puVar15;
      }
      pFVar16 = UE::FPropertyTypeName::FPropertyTypeName(&local_3cc,(FProperty *)this);
      if (*(int *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)pFVar16->Index >> 0xd] + 8
                  + (ulonglong)(pFVar16->Index & 0x1fff) * 0xc) < 1) {
        uVar11 = 0;
      }
      else {
        uVar11 = pFVar16->Index + 1;
      }
      local_2d8.Base = local_2b8;
      local_2d8.CurPos = local_2b8;
      local_2d8.End = (wchar_t *)&local_238;
      local_2d8.bIsDynamic = false;
      local_2d8.bIsExternal = false;
      UE::AppendNode(&local_2d8,
                     (FPropertyTypeNameNode *)
                     ((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar11 >> 0xd] +
                     (ulonglong)(uVar11 & 0x1fff) * 0xc));
      if (local_2d8.End < (TStringBuilderBase<wchar_t> *)(local_2d8.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_2d8,1);
      }
      pwVar17 = local_2d8.Base;
      *local_2d8.CurPos = L'\0';
      uVar11 = (param_1->TypeName).Index;
      local_f8.Base = local_d8;
      local_f8.CurPos = local_d8;
      uVar21 = 0;
      if (0 < *(int *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar11 >> 0xd] + 8
                      + (ulonglong)(uVar11 & 0x1fff) * 0xc)) {
        uVar21 = uVar11 + 1;
      }
      local_f8.End = (wchar_t *)local_58;
      local_f8.bIsDynamic = false;
      local_f8.bIsExternal = false;
      UE::AppendNode(&local_f8,
                     (FPropertyTypeNameNode *)
                     ((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar21 >> 0xd] +
                     (ulonglong)(uVar21 & 0x1fff) * 0xc));
      TStringBuilderBase<wchar_t>::operator*(&local_f8);
      local_338.bIsDynamic = false;
      local_338.bIsExternal = false;
      local_338.End = (wchar_t *)&local_2d8;
      local_338.Base = local_318;
      local_338.CurPos = local_318;
      ::FName::AppendString(&param_1->Name,&local_338);
      if (local_338.End < (TStringBuilderBase<wchar_t> *)(local_338.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_338,1);
      }
      *local_338.CurPos = L'\0';
      local_3f8 = pwVar17;
      local_3f0 = pwVar24;
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_338);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_f8);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_2d8);
      local_3c0[0] = local_3b0[0];
LAB_142172cfa:
      if (local_3c0[0] != (void *)0x0) {
        FMemory::Free(local_3c0[0]);
      }
    }
LAB_142172d04:
    EVar9 = CannotConvert;
  }
  else {
    pIVar13 = UScriptStruct::GetCppStructOps(pUVar3);
    pwVar24 = L"";
    if (((pIVar13 == (ICppStructOps *)0x0) ||
        (!(pIVar13->FakeVPtr->Capabilities).HasSerializeFromMismatchedTag &&
         !(pIVar13->FakeVPtr->Capabilities).HasStructuredSerializeFromMismatchedTag)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("CppStructOps && (CppStructOps->HasSerializeFromMismatchedTag() || CppStructOps->HasStructuredSerializeFromMismatchedTag())"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyStruct.cpp"
                           ,0x1ec,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      EVar9 = (*pcVar5)();
      return EVar9;
    }
    iVar2 = param_1->ArrayIndex;
    if ((iVar2 < 0) || ((int)this->_padding_ <= iVar2)) {
      local_3f0 = (wchar_t *)CONCAT44(local_3f0._4_4_,(int)this->_padding_);
      local_3f8 = (wchar_t *)CONCAT44(local_3f8._4_4_,iVar2);
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
    }
    if ((param_3 == (uchar *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      EVar9 = (*pcVar5)();
      return EVar9;
    }
    FVar6.StructuredArchive = local_res18[0].StructuredArchive;
    local_3e8 = pIVar13->FakeVPtr;
    uVar23 = 0;
    local_3e0 = param_3 + (longlong)*(int *)((longlong)&this->_padding_ + 4) +
                          (longlong)iVar2 * (longlong)*(int *)((longlong)&this->_padding_ + 4);
    if ((local_3e8->Capabilities).HasStructuredSerializeFromMismatchedTag) {
      if (((local_3e8->Flags & StructuredSerializeFromMismatchedTag) == None) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!!(this->Flags & FuncFlag)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0x660,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      uVar22 = uVar23;
      for (EVar19 = local_3e8->Flags &
                    (SerializeFromMismatchedTag|AddStructReferencedObjects|FindInnerPropertyInstance
                     |ImportTextItem|ExportTextItem|Identical|Copy|GetPreloadDependencies|
                     PostScriptConstruct|NetDeltaSerialize|NetSerialize|PostSerialize|SerializeSlot|
                     SerializeArchive|Destruct|ConstructForTests|Construct); EVar19 != None;
          EVar19 = EVar19 & EVar19 - Construct) {
        uVar22 = (ulonglong)((int)uVar22 + 1);
      }
      cVar7 = (**(code **)(&local_3e8[1].Flags + uVar22 * 2))
                        (param_1,FVar6.StructuredArchive,local_3e0);
      if (cVar7 == '\0') goto LAB_1421727b3;
    }
    else {
LAB_1421727b3:
      local_3c8.StructuredArchive = local_res18[0].StructuredArchive;
      pFVar14 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_3c8);
      local_3e8 = pIVar13->FakeVPtr;
      if ((local_3e8->Capabilities).HasSerializeFromMismatchedTag) {
        if (((local_3e8->Flags & SerializeFromMismatchedTag) == None) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("!!(this->Flags & FuncFlag)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0x660,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        for (uVar18 = (undefined2)local_3e8->Flags; uVar18 != None;
            uVar18 = uVar18 & uVar18 - Construct) {
          uVar23 = (ulonglong)((int)uVar23 + 1);
        }
        cVar7 = (**(code **)(&local_3e8[1].Flags + uVar23 * 2))(param_1,pFVar14,local_3e0);
        if (cVar7 != '\0') goto LAB_1421728f5;
      }
      if ((((((this->Struct).field0_0x0.DebugPtr)->StructFlags & STRUCT_SerializeNative) !=
            STRUCT_NoFlags) || (!(pIVar13->FakeVPtr->Capabilities).HasSerializeFromMismatchedTag))
         || (!(pIVar13->FakeVPtr->Capabilities).IsUECoreVariant)) {
        if (2 < (byte)LogClass._0_1_) {
          puVar15 = (undefined8 *)(**(code **)(*(longlong *)pFVar12 + 0x18))(pFVar12,local_3c0);
          if (*(int *)(puVar15 + 1) != 0) {
            pwVar24 = (wchar_t *)*puVar15;
          }
          pFVar16 = UE::FPropertyTypeName::FPropertyTypeName(&local_3d4,(FProperty *)this);
          local_198.Base = local_178;
          local_198.bIsDynamic = false;
          local_198.bIsExternal = false;
          local_198.CurPos = local_178;
          local_198.End = (wchar_t *)&local_f8;
          UE::AppendNode(&local_198,
                         (FPropertyTypeNameNode *)
                         ((longlong)
                          UE::GPropertyTypeNameTable.Blocks[(longlong)pFVar16->Index >> 0xd] +
                         (ulonglong)(pFVar16->Index & 0x1fff) * 0xc));
          pwVar17 = TStringBuilderBase<wchar_t>::operator*(&local_198);
          uVar11 = (param_1->TypeName).Index;
          local_238.bIsDynamic = false;
          local_238.bIsExternal = false;
          local_238.Base = local_218;
          local_238.CurPos = local_218;
          local_238.End = (wchar_t *)&local_198;
          UE::AppendNode(&local_238,
                         (FPropertyTypeNameNode *)
                         ((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar11 >> 0xd]
                         + (ulonglong)(uVar11 & 0x1fff) * 0xc));
          TStringBuilderBase<wchar_t>::operator*(&local_238);
          local_398.bIsDynamic = false;
          local_398.bIsExternal = false;
          local_398.Base = local_378;
          local_398.CurPos = local_378;
          local_398.End = (wchar_t *)&local_338;
          ::FName::AppendString(&param_1->Name,&local_398);
          if (local_398.End < (TStringBuilderBase<wchar_t> *)(local_398.CurPos + 1)) {
            TStringBuilderBase<wchar_t>::Extend(&local_398,1);
          }
          *local_398.CurPos = L'\0';
          local_3f8 = pwVar17;
          local_3f0 = pwVar24;
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_398);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_198);
          goto LAB_142172cfa;
        }
        goto LAB_142172d04;
      }
      uVar11 = (param_1->TypeName).Index;
      uVar21 = 0;
      if (0 < *(int *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar11 >> 0xd] + 8
                      + (ulonglong)(uVar11 & 0x1fff) * 0xc)) {
        uVar21 = uVar11 + 1;
      }
      uVar23 = *(ulonglong *)
                ((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar21 >> 0xd] +
                (ulonglong)(uVar21 & 0x1fff) * 0xc);
      FVar10 = FNameEntryId::FromValidEName((EName)local_3d8);
      if (uVar23 != *(uint *)CONCAT44(extraout_var,FVar10.Value)) {
        return UseSerializeItem;
      }
      pUVar3 = (this->Struct).field0_0x0.DebugPtr;
      local_3f0 = (wchar_t *)0x0;
      local_3f8 = (wchar_t *)0x0;
      (**(code **)(pUVar3->_padding_ + 0x2e0))
                (pUVar3,local_res18[0].StructuredArchive,local_3e0,pUVar3);
    }
LAB_1421728f5:
    EVar9 = Converted;
  }
  return EVar9;
}

// CopyValuesInternal @ 1421752a0

void __thiscall
FStructProperty::CopyValuesInternal(FStructProperty *this,void *param_1,void *param_2,int param_3)

{
  UScriptStruct::CopyScriptStruct((this->Struct).field0_0x0.DebugPtr,param_1,param_2,param_3);
  return;
}

// DestroyValueInternal @ 142175800

void __thiscall FStructProperty::DestroyValueInternal(FStructProperty *this,void *param_1)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = (this->Struct).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014217580e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar1->_padding_ + 0x300))(pUVar1,param_1,(int)this->_padding_);
  return;
}

// ExportText_Internal @ 142177630

void __thiscall
FStructProperty::ExportText_Internal
          (FStructProperty *this,FString *param_1,void *param_2,EPropertyPointerType param_3,
          void *param_4,UObject *param_5,int param_6,UObject *param_7)

{
  UScriptStruct *pUVar1;
  char cVar2;
  void *pvVar3;
  int iVar4;
  
  if (param_3 == Container) {
    cVar2 = (**(code **)(this->_padding_ + 0x78))();
    if (cVar2 == '\0') {
      param_2 = (void *)((longlong)*(int *)((longlong)&this->_padding_ + 4) + (longlong)param_2);
    }
    else {
      pUVar1 = (this->Struct).field0_0x0.DebugPtr;
      iVar4 = (int)*(short *)((longlong)&pUVar1->_padding_ + 4);
      pvVar3 = FMemory::Malloc((longlong)((int)pUVar1->_padding_ + -1 + iVar4 & -iVar4),0);
      pUVar1 = (this->Struct).field0_0x0.DebugPtr;
      (**(code **)(pUVar1->_padding_ + 0x2f8))(pUVar1,pvVar3,1);
      FProperty::GetValue_InContainer((FProperty *)this,param_2,pvVar3);
      param_2 = pvVar3;
    }
  }
  UScriptStruct::ExportText
            ((this->Struct).field0_0x0.DebugPtr,param_1,param_2,param_4,param_5,param_6,param_7,true
            );
  if ((param_3 == Container) && (cVar2 = (**(code **)(this->_padding_ + 0x78))(this), cVar2 != '\0')
     ) {
    pUVar1 = (this->Struct).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x300))(pUVar1,param_2,1);
    FMemory::Free(param_2);
  }
  return;
}

// FindInnerPropertyInstance @ 142177950

bool __thiscall
FStructProperty::FindInnerPropertyInstance
          (FStructProperty *this,FName param_1,void *param_2,FProperty **param_3,void **param_4)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014217795e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(((this->Struct).field0_0x0.DebugPtr)->_padding_ + 0x398))();
  return (bool)uVar1;
}

// FinishDestroyInternal @ 142178a50

void __thiscall FStructProperty::FinishDestroyInternal(FStructProperty *this,void *param_1)

{
  UScriptStruct *this_00;
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  ICppStructOps *pIVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  this_00 = (this->Struct).field0_0x0.DebugPtr;
  iVar7 = (int)*(short *)((longlong)&this_00->_padding_ + 4);
  lVar3 = this_00->_padding_;
  pIVar5 = UScriptStruct::GetCppStructOps(this_00);
  if ((pIVar5 != (ICppStructOps *)0x0) && ((pIVar5->FakeVPtr->Capabilities).ClearOnFinishDestroy)) {
    UScriptStruct::ClearScriptStruct
              ((this->Struct).field0_0x0.DebugPtr,param_1,(int)this->_padding_);
    return;
  }
  iVar6 = 0;
  if (0 < (int)this->_padding_) {
    iVar8 = 0;
    do {
      for (plVar1 = (longlong *)((this->Struct).field0_0x0.DebugPtr)->_padding_;
          plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[9]) {
        if (((int)plVar1[6] < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (((longlong)iVar8 + (longlong)param_1 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((plVar1[7] & 0x1040000000U) == 0) {
          (**(code **)(*plVar1 + 0x148))
                    (plVar1,(longlong)*(int *)((longlong)plVar1 + 0x44) +
                            (longlong)iVar8 + (longlong)param_1);
        }
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + ((int)lVar3 + -1 + iVar7 & -iVar7);
    } while (iVar6 < (int)this->_padding_);
  }
  return;
}

// GetCPPMacroType @ 142179cc0

FString * __thiscall
FStructProperty::GetCPPMacroType
          (FStructProperty *this,FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  void *local_18 [2];
  
  pFVar2 = (FString *)(**(code **)(this->_padding_ + 0x68))(this,local_18,0,0);
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
  ::FString::FString(__return_storage_ptr__,L"STRUCT");
  return __return_storage_ptr__;
}

// GetCPPType @ 14217b520

FString * __thiscall
FStructProperty::GetCPPType
          (FStructProperty *this,FString *__return_storage_ptr__,FString *param_1,uint param_2)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = (this->Struct).field0_0x0.DebugPtr;
  (**(code **)(pUVar1->_padding_ + 0x388))(pUVar1,__return_storage_ptr__,param_2);
  return __return_storage_ptr__;
}

// GetMinAlignment @ 14217c5b0

int __thiscall FStructProperty::GetMinAlignment(FStructProperty *this)

{
  return (int)*(short *)((longlong)&((this->Struct).field0_0x0.DebugPtr)->_padding_ + 4);
}

// GetPreloadDependencies @ 14217d560

void __thiscall
FStructProperty::GetPreloadDependencies
          (FStructProperty *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TObjectPtr<UScriptStruct>_u_0 *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TObjectPtr<UScriptStruct>_u_0 local_18 [2];
  
  FField::GetPreloadDependencies((FField *)this,param_1);
  local_18[0] = (this->Struct).field0_0x0;
  pTVar1 = (TObjectPtr<UScriptStruct>_u_0 *)(param_1->AllocatorInstance).Data;
  if ((pTVar1 <= local_18) && (local_18 < pTVar1 + param_1->ArrayMax)) {
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
  *(TObjectPtr<UScriptStruct>_u_0 *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) =
       local_18[0];
  return;
}

// GetValueTypeHashInternal @ 14217df10

uint __thiscall FStructProperty::GetValueTypeHashInternal(FStructProperty *this,void *param_1)

{
  UScriptStruct *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if ((this->Struct).field0_0x0.DebugPtr == (UScriptStruct *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Struct",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyStruct.cpp"
                       ,0xa3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  pUVar1 = (this->Struct).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014217df61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(pUVar1->_padding_ + 0x370))(pUVar1,param_1);
  return uVar4;
}

// HasIntrusiveUnsetOptionalState @ 14217e030

bool __thiscall FStructProperty::HasIntrusiveUnsetOptionalState(FStructProperty *this)

{
  ICppStructOps *pIVar1;
  
  pIVar1 = UScriptStruct::GetCppStructOps((this->Struct).field0_0x0.DebugPtr);
  if (pIVar1 != (ICppStructOps *)0x0) {
    return (pIVar1->FakeVPtr->Capabilities).HasIntrusiveUnsetOptionalState;
  }
  return false;
}

// Identical @ 14217ee80

bool __thiscall
FStructProperty::Identical(FStructProperty *this,void *param_1,void *param_2,uint param_3)

{
  bool bVar1;
  
  bVar1 = UScriptStruct::CompareScriptStruct
                    ((this->Struct).field0_0x0.DebugPtr,param_1,param_2,param_3);
  return bVar1;
}

// ImportText_Internal @ 1421822d0

wchar_t * __thiscall
FStructProperty::ImportText_Internal
          (FStructProperty *this,wchar_t *param_1,void *param_2,EPropertyPointerType param_3,
          UObject *param_4,int param_5,FOutputDevice *param_6)

{
  UScriptStruct *pUVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  wchar_t *pwVar5;
  FLinkerLoad *pFVar6;
  void *pvVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  FStructProperty *this_00;
  FStructProperty *local_res8;
  wchar_t *local_res10;
  FStructProperty *local_68;
  FScopedPlaceholderPropertyTracker local_60;
  code *local_50;
  FStructProperty **local_48;
  
  local_res10 = param_1;
  if ((((ulonglong)this & 1) != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsUObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x180,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pwVar5 = (wchar_t *)(*pcVar2)();
    return pwVar5;
  }
  local_60.bEnabled = GEventDrivenLoaderEnabled == false;
  uVar9 = 0;
  local_60.IntermediateProperty.Container.Field = (FFieldObjectUnion)0x0;
  if (GEventDrivenLoaderEnabled == false) {
    local_res8 = this;
    if (((((ulonglong)this & 1) != 0) &&
        ((UObject *)((ulonglong)this & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)((ulonglong)this & 0xfffffffffffffffe));
    }
    FScopedPlaceholderPropertyTracker::Push(&local_60,(FFieldVariant)&local_res8);
  }
  pFVar6 = FField::GetLinker((FField *)this);
  uVar10 = uVar9;
  if (pFVar6 != (FLinkerLoad *)0x0) {
    uVar10 = pFVar6->LoadFlags & 0x100000;
  }
  pFVar6 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)(this->Struct).field0_0x0.DebugPtr);
  this_00 = local_res8;
  if (pFVar6 != (FLinkerLoad *)0x0) {
    UE::FRecursiveMutex::Lock(&pFVar6->Mutex);
    uVar9 = pFVar6->LoadFlags;
    pFVar6->LoadFlags = uVar9 | uVar10;
    this_00 = (FStructProperty *)&pFVar6->Mutex;
  }
  pvVar7 = param_2;
  if (param_3 == Container) {
    cVar4 = (**(code **)(this->_padding_ + 0x70))(this);
    if (cVar4 == '\0') {
      pvVar7 = (void *)((longlong)*(int *)((longlong)&this->_padding_ + 4) + (longlong)param_2);
    }
    else {
      pUVar1 = (this->Struct).field0_0x0.DebugPtr;
      iVar8 = (int)*(short *)((longlong)&pUVar1->_padding_ + 4);
      pvVar7 = FMemory::Malloc((longlong)((int)pUVar1->_padding_ + -1 + iVar8 & -iVar8),0);
      pUVar1 = (this->Struct).field0_0x0.DebugPtr;
      (**(code **)(pUVar1->_padding_ + 0x2f8))(pUVar1,pvVar7,1);
      FProperty::GetValue_InContainer((FProperty *)this,param_2,pvVar7);
    }
  }
  local_48 = &local_68;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`FStructProperty::ImportText_Internal'::__l2::<lambda_1>,FString>::
             Call;
  local_68 = this;
  pwVar5 = UScriptStruct::ImportText
                     ((this->Struct).field0_0x0.DebugPtr,local_res10,pvVar7,param_4,param_5,param_6,
                      (TFunctionRef<FString___cdecl(void)> *)&local_50,true);
  if ((param_3 == Container) && (cVar4 = (**(code **)(this->_padding_ + 0x70))(this), cVar4 != '\0')
     ) {
    FProperty::SetValue_InContainer((FProperty *)this,param_2,pvVar7);
    pUVar1 = (this->Struct).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x300))(pUVar1,pvVar7,1);
    FMemory::Free(pvVar7);
  }
  if (pFVar6 != (FLinkerLoad *)0x0) {
    pFVar6->LoadFlags = uVar9;
    UE::FRecursiveMutex::Unlock((FRecursiveMutex *)this_00);
  }
  if (local_60.bEnabled != false) {
    FScopedPlaceholderPropertyTracker::Pop(&local_60);
  }
  return pwVar5;
}

// InitializeIntrusiveUnsetOptionalValue @ 142182760

void __thiscall
FStructProperty::InitializeIntrusiveUnsetOptionalValue(FStructProperty *this,void *param_1)

{
  FStructOpsFakeVTable *pFVar1;
  code *pcVar2;
  bool bVar3;
  EStructOpsFakeVTableFlags EVar4;
  ICppStructOps *pIVar5;
  uint uVar6;
  
  pIVar5 = UScriptStruct::GetCppStructOps((this->Struct).field0_0x0.DebugPtr);
  if (pIVar5 == (ICppStructOps *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyStruct.cpp"
                       ,0x1b6,
                       L"This should only be called when there is an intrusive unset state, which requires CppStructOps"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    return;
  }
  pFVar1 = pIVar5->FakeVPtr;
  if (((pFVar1->Flags & InitializeIntrusiveUnsetOptionalValue) == None) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!!(this->Flags & FuncFlag)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x660,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar6 = 0;
  for (EVar4 = pFVar1->Flags &
               (GetStructTypeHash|StructuredSerializeFromMismatchedTag|SerializeFromMismatchedTag|
                AddStructReferencedObjects|FindInnerPropertyInstance|ImportTextItem|ExportTextItem|
                Identical|Copy|GetPreloadDependencies|PostScriptConstruct|NetDeltaSerialize|
                NetSerialize|PostSerialize|SerializeSlot|SerializeArchive|Destruct|ConstructForTests
               |Construct); EVar4 != None; EVar4 = EVar4 & EVar4 - Construct) {
    uVar6 = uVar6 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001421827dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&pFVar1[1].Flags + (ulonglong)uVar6 * 2))
            (param_1,*(code **)(&pFVar1[1].Flags + (ulonglong)uVar6 * 2));
  return;
}

// InitializeValueInternal @ 142182c50

void __thiscall FStructProperty::InitializeValueInternal(FStructProperty *this,void *param_1)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = (this->Struct).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x000142182c5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar1->_padding_ + 0x2f8))(pUVar1,param_1,(int)this->_padding_);
  return;
}

// InstanceSubobjects @ 142183e00

void __thiscall
FStructProperty::InstanceSubobjects
          (FStructProperty *this,void *param_1,void *param_2,TNotNull<UObject_*> param_3,
          FObjectInstancingGraph *param_4)

{
  int iVar1;
  UScriptStruct *this_00;
  TNotNull<void_*> TVar2;
  int iVar3;
  void *pvVar4;
  
  iVar3 = 0;
  if (0 < (int)this->_padding_) {
    do {
      this_00 = (this->Struct).field0_0x0.DebugPtr;
      iVar1 = *(int *)((longlong)&this->_padding_ + 4);
      if (param_2 == (void *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = (void *)((longlong)(iVar1 * iVar3) + (longlong)param_2);
      }
      TVar2.Val = (longlong)(iVar1 * iVar3) + param_1;
      if (TVar2.Val == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      UStruct::InstanceSubobjectTemplates
                ((UStruct *)this_00,TVar2,pvVar4,(UStruct *)this_00,param_3,param_4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)this->_padding_);
  }
  return;
}

// IsIntrusiveOptionalValueSet @ 142184070

bool __thiscall FStructProperty::IsIntrusiveOptionalValueSet(FStructProperty *this,void *param_1)

{
  FStructOpsFakeVTable *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ICppStructOps *pIVar5;
  EStructOpsFakeVTableFlags EVar6;
  uint uVar7;
  
  pIVar5 = UScriptStruct::GetCppStructOps((this->Struct).field0_0x0.DebugPtr);
  if (pIVar5 == (ICppStructOps *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyStruct.cpp"
                       ,0x1bf,
                       L"This should only be called when there is an intrusive unset state, which requires CppStructOps"
                      );
    if (!bVar3) {
      return false;
    }
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar1 = pIVar5->FakeVPtr;
  if (((pFVar1->Flags & IsIntrusiveOptionalValueSet) == None) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!!(this->Flags & FuncFlag)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x660,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  uVar7 = 0;
  for (EVar6 = pFVar1->Flags &
               (InitializeIntrusiveUnsetOptionalValue|GetStructTypeHash|
                StructuredSerializeFromMismatchedTag|SerializeFromMismatchedTag|
                AddStructReferencedObjects|FindInnerPropertyInstance|ImportTextItem|ExportTextItem|
                Identical|Copy|GetPreloadDependencies|PostScriptConstruct|NetDeltaSerialize|
                NetSerialize|PostSerialize|SerializeSlot|SerializeArchive|Destruct|ConstructForTests
               |Construct); EVar6 != None; EVar6 = EVar6 & EVar6 - Construct) {
    uVar7 = uVar7 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001421840ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(&pFVar1[1].Flags + (ulonglong)uVar7 * 2))
                    (param_1,*(code **)(&pFVar1[1].Flags + (ulonglong)uVar7 * 2));
  return (bool)uVar4;
}

// LinkInternal @ 142185420

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStructProperty::LinkInternal(FStructProperty *this,FArchive *param_1)

{
  UScriptStruct *pUVar1;
  ICppStructOps *pIVar2;
  ulonglong uVar3;
  int iVar4;
  FString local_18;
  
  if ((this->Struct).field0_0x0.DebugPtr == (UScriptStruct *)0x0) {
    if (1 < (byte)LogProperty._0_1_) {
      FField::GetFullName((FField *)this,&local_18);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogProperty);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    pUVar1 = GetFallbackStruct();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->Struct).field0_0x0.DebugPtr = pUVar1;
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x1b0))(param_1);
  }
  PreloadInnerStructMembers(this);
  pUVar1 = (this->Struct).field0_0x0.DebugPtr;
  iVar4 = (int)*(short *)((longlong)&pUVar1->_padding_ + 4);
  FProperty::SetElementSize((FProperty *)this,(int)pUVar1->_padding_ + -1 + iVar4 & -iVar4);
  pIVar2 = UScriptStruct::GetCppStructOps((this->Struct).field0_0x0.DebugPtr);
  if (pIVar2 == (ICppStructOps *)0x0) {
    this->_padding_ = this->_padding_ | 0x8000000000000;
  }
  else {
    this->_padding_ = this->_padding_ | (pIVar2->FakeVPtr->Capabilities).ComputedPropertyFlags;
  }
  pUVar1 = (this->Struct).field0_0x0.DebugPtr;
  uVar3 = this->_padding_;
  if ((pUVar1->StructFlags & STRUCT_ZeroConstructor) != STRUCT_NoFlags) {
    uVar3 = uVar3 | 0x200;
    this->_padding_ = uVar3;
  }
  if ((pUVar1->StructFlags & STRUCT_IsPlainOldData) != STRUCT_NoFlags) {
    uVar3 = uVar3 | 0x40000000;
    this->_padding_ = uVar3;
  }
  if ((pUVar1->StructFlags & STRUCT_NoDestructor) != STRUCT_NoFlags) {
    this->_padding_ = uVar3 | 0x1000000000;
  }
  return;
}

// LoadTypeName @ 142186790

bool __thiscall
FStructProperty::LoadTypeName(FStructProperty *this,FPropertyTypeName param_1,FPropertyTag *param_2)

{
  FPropertyTypeName FVar1;
  bool bVar2;
  UClass *pUVar3;
  UScriptStruct *pUVar4;
  
  bVar2 = FProperty::LoadTypeName((FProperty *)this,param_1,param_2);
  if (!bVar2) {
    return false;
  }
  FVar1.Index = 0;
  if (0 < *(int *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)param_1.Index >> 0xd] + 8 +
                  (ulonglong)(param_1.Index & 0x1fff) * 0xc)) {
    FVar1.Index = param_1.Index + 1;
  }
  pUVar3 = Z_Construct_UClass_UScriptStruct_NoRegister();
  pUVar4 = (UScriptStruct *)UE::FindObjectByTypePath(pUVar3,FVar1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
    (this->Struct).field0_0x0.DebugPtr = pUVar4;
    return true;
  }
  (this->Struct).field0_0x0.DebugPtr = pUVar4;
  return pUVar4 != (UScriptStruct *)0x0;
}

// NetSerializeItem @ 142186e40

/* WARNING: Removing unreachable block (ram,0x000142186f24) */
/* WARNING: Removing unreachable block (ram,0x000142186f2d) */
/* WARNING: Removing unreachable block (ram,0x000142186f4c) */
/* WARNING: Removing unreachable block (ram,0x000142186f47) */
/* WARNING: Removing unreachable block (ram,0x000142186f4f) */
/* WARNING: Removing unreachable block (ram,0x000142186f62) */
/* WARNING: Removing unreachable block (ram,0x000142186f65) */
/* WARNING: Removing unreachable block (ram,0x000142186f88) */
/* WARNING: Removing unreachable block (ram,0x000142186f8d) */
/* WARNING: Removing unreachable block (ram,0x000142186f97) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FStructProperty::NetSerializeItem
          (FStructProperty *this,FArchive *param_1,UPackageMap *param_2,void *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  UScriptStruct *this_00;
  FStructOpsFakeVTable *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  ICppStructOps *pIVar6;
  EStructOpsFakeVTableFlags EVar7;
  uint uVar8;
  
  this_00 = (this->Struct).field0_0x0.DebugPtr;
  if ((this_00->StructFlags & STRUCT_NetSerializeNative) == STRUCT_NoFlags) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogProperty);
    return true;
  }
  pIVar6 = UScriptStruct::GetCppStructOps(this_00);
  if ((pIVar6 == (ICppStructOps *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CppStructOps",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyStruct.cpp"
                         ,0xb6,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar1 = pIVar6->FakeVPtr;
  if ((pFVar1->Capabilities).HasNetSerializer) {
    if (((pFVar1->Flags & NetSerialize) == None) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!!(this->Flags & FuncFlag)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0x660,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    uVar8 = 0;
    for (EVar7 = pFVar1->Flags &
                 (PostSerialize|SerializeSlot|SerializeArchive|Destruct|ConstructForTests|Construct)
        ; EVar7 != None; EVar7 = EVar7 & EVar7 - Construct) {
      uVar8 = uVar8 + 1;
    }
    cVar5 = (**(code **)(&pFVar1[1].Flags + (ulonglong)uVar8 * 2))(param_1,param_2);
    if (cVar5 != '\0') {
      return true;
    }
  }
  return false;
}

// PostDuplicate @ 142187560

void __thiscall FStructProperty::PostDuplicate(FStructProperty *this,FField *param_1)

{
  UObject *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = param_1[2].Owner.Container.Object, pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->Struct).field0_0x0 = (TObjectPtr<UScriptStruct>_u_0)param_1[2].Owner.Container;
  FProperty::PostDuplicate((FProperty *)this,param_1);
  return;
}

// ResolveVisitedPathInfo @ 1421897f0

void * __thiscall
FStructProperty::ResolveVisitedPathInfo
          (FStructProperty *this,void *param_1,FPropertyVisitorInfo *param_2)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001421897f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(**(code **)(((this->Struct).field0_0x0.DebugPtr)->_padding_ + 0x348))();
  return pvVar1;
}

// SameType @ 142189b30

bool __thiscall FStructProperty::SameType(FStructProperty *this,FProperty *param_1)

{
  bool bVar1;
  
  bVar1 = FProperty::SameType((FProperty *)this,param_1);
  if ((bVar1) && ((this->Struct).field0_0x0.DebugPtr == (UScriptStruct *)param_1[1]._padding_)) {
    return true;
  }
  return false;
}

// SaveTypeName @ 142189e50

void __thiscall
FStructProperty::SaveTypeName(FStructProperty *this,FPropertyTypeNameBuilder *param_1)

{
  UScriptStruct *pUVar1;
  code *pcVar2;
  bool bVar3;
  FGuid local_18;
  
  FProperty::SaveTypeName((FProperty *)this,param_1);
  pUVar1 = (this->Struct).field0_0x0.DebugPtr;
  if (pUVar1 == (UScriptStruct *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LocalStruct",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyStruct.cpp"
                       ,0x248,L"");
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
  UE::FPropertyTypeNameBuilder::AddPath(param_1,(UField *)pUVar1);
  (**(code **)(pUVar1->_padding_ + 0x380))(pUVar1,&local_18);
  if (((local_18.D != 0 || local_18.C != 0) || local_18.B != 0) || local_18.A != 0) {
    UE::FPropertyTypeNameBuilder::AddGuid(param_1,&local_18);
  }
  UE::FPropertyTypeNameBuilder::EndParameters(param_1);
  return;
}

// Serialize @ 14218a940

void __thiscall FStructProperty::Serialize(FStructProperty *this,FArchive *param_1)

{
  UScriptStruct *pUVar1;
  longlong lVar2;
  
  FProperty::Serialize((FProperty *)this,param_1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FallbackStruct = GetFallbackStruct();
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((param_1->field_0x29 & 1) != 0) {
    lVar2 = (**(code **)(*(longlong *)param_1 + 0x20))(param_1);
    pUVar1 = FallbackStruct;
    if (((lVar2 != 0) && ((param_1->field_0x28 & 1) != 0)) &&
       ((this->Struct).field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (FallbackStruct != (UScriptStruct *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)FallbackStruct);
      }
      (this->Struct).field0_0x0.DebugPtr = pUVar1;
    }
  }
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->Struct);
  if ((this->Struct).field0_0x0.DebugPtr != (UScriptStruct *)0x0) {
    PreloadInnerStructMembers(this);
  }
  return;
}

// SerializeItem @ 142190b00

void __thiscall
FStructProperty::SerializeItem
          (FStructProperty *this,FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  FStructProperty *local_res8;
  FScopedPlaceholderPropertyTracker local_28;
  
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
  local_28.bEnabled = GEventDrivenLoaderEnabled == false;
  local_28.IntermediateProperty.Container.Field = (FFieldObjectUnion)0x0;
  if (GEventDrivenLoaderEnabled == false) {
    local_res8 = this;
    if (((((ulonglong)this & 1) != 0) &&
        ((UObject *)((ulonglong)this & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)((ulonglong)this & 0xfffffffffffffffe));
    }
    FScopedPlaceholderPropertyTracker::Push(&local_28,(FFieldVariant)&local_res8);
  }
  UScriptStruct::SerializeItem((this->Struct).field0_0x0.DebugPtr,param_1,param_2,param_3);
  if (local_28.bEnabled != false) {
    FScopedPlaceholderPropertyTracker::Pop(&local_28);
  }
  return;
}

// StaticClass @ 142193fc0

FFieldClass * __cdecl FStructProperty::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FStructProperty",0x100000,
                 CASTCLASS_FStructProperty|CASTCLASS_FProperty|CASTCLASS_UField,pFVar1,Construct);
      atexit(`FStructProperty::StaticClass'::__l2::
             _dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

// SupportsNetSharedSerialization @ 1421943d0

bool __thiscall FStructProperty::SupportsNetSharedSerialization(FStructProperty *this)

{
  return (((this->Struct).field0_0x0.DebugPtr)->StructFlags &
         (STRUCT_NetSharedSerialization|STRUCT_NetSerializeNative)) != STRUCT_NetSerializeNative;
}

// UseBinaryOrNativeSerialization @ 1421965a0

bool __thiscall
FStructProperty::UseBinaryOrNativeSerialization(FStructProperty *this,FArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = FProperty::UseBinaryOrNativeSerialization((FProperty *)this,param_1);
  if (!bVar2) {
    if ((this->Struct).field0_0x0.DebugPtr == (UScriptStruct *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyStruct.cpp"
                         ,0x96,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        bVar2 = (bool)(*pcVar1)();
        return bVar2;
      }
    }
    bVar2 = UScriptStruct::UseBinarySerialization((this->Struct).field0_0x0.DebugPtr,param_1);
    if ((!bVar2) &&
       ((((this->Struct).field0_0x0.DebugPtr)->StructFlags & STRUCT_SerializeNative) ==
        STRUCT_NoFlags)) {
      return false;
    }
  }
  return true;
}

// Visit @ 1421970a0

EPropertyVisitorControlFlow __thiscall
FStructProperty::Visit
          (FStructProperty *this,FPropertyVisitorContext *param_1,
          TFunctionRef<EPropertyVisitorControlFlow___cdecl(FPropertyVisitorContext_const_&)>
          *param_2)

{
  UScriptStruct *pUVar1;
  EPropertyVisitorControlFlow EVar2;
  FPropertyVisitorInfo *pFVar3;
  TFunctionRef<EPropertyVisitorControlFlow___cdecl(FPropertyVisitorContext_const_&)> local_18;
  
  pFVar3 = FPropertyVisitorPath::Top(param_1->Path);
  pFVar3->bContainsInnerProperties = true;
  local_18._0_8_ = *(undefined8 *)param_2;
  local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
  EVar2 = FProperty::Visit((FProperty *)this,param_1,&local_18);
  if (EVar2 == StepInto) {
    pUVar1 = (this->Struct).field0_0x0.DebugPtr;
    local_18._0_8_ = *(undefined8 *)param_2;
    local_18._8_8_ = *(undefined8 *)&param_2->field_0x8;
    EVar2 = (**(code **)(pUVar1->_padding_ + 0x340))(pUVar1,param_1,&local_18);
  }
  return EVar2;
}

// operator_new @ 142259e90

void * __cdecl FStructProperty::operator_new(ulong64 param_1)

{
  FField *this;
  FFieldClass *pFVar1;
  
  this = FMemory::Malloc(param_1,0);
  if (this != (FField *)0x0) {
    pFVar1 = StaticClass();
    FField::FField(this,EC_InternalUseOnlyConstructor,pFVar1);
    this->_padding_ = (longlong)&___7FStructProperty__6B_;
    this[1].Next = (FField *)0x0;
    this[1].NamePrivate.ComparisonIndex = 0;
    this[1].NamePrivate.Number = 0;
    *(undefined8 *)&this[1].FlagsPrivate = 0;
    this[2]._padding_ = 0;
    this[2].ClassPrivate = (FFieldClass *)0x0;
    this[2].Owner.Container.Field = (FField *)0x0;
  }
  return this;
}

