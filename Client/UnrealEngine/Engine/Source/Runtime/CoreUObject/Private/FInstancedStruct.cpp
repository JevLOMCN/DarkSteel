// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 25

// StaticStruct @ 141f539f0

UScriptStruct * __cdecl FInstancedStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInstancedStruct.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FInstancedStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInstancedStruct,(UObject *)pUVar1,
                         L"InstancedStruct");
  }
  return Z_Registration_Info_UScriptStruct_FInstancedStruct.OuterSingleton;
}

// FInstancedStruct @ 141f65a10

FInstancedStruct * __thiscall
FInstancedStruct::FInstancedStruct(FInstancedStruct *this,FInstancedStruct *param_1)

{
  UScriptStruct *this_00;
  uchar *puVar1;
  uchar *puVar2;
  uint uVar3;
  uint uVar4;
  
  (this->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  this->StructMemory = (uchar *)0x0;
  this_00 = (param_1->ScriptStruct).field0_0x0.DebugPtr;
  puVar1 = param_1->StructMemory;
  if (this_00 != (UScriptStruct *)0x0) {
    uVar3 = (uint)*(short *)((longlong)&this_00->_padding_ + 4);
    uVar4 = (int)this_00->_padding_ + -1 + uVar3 & -uVar3;
    if ((int)uVar4 < 1) {
      uVar4 = 1;
    }
    puVar2 = FMemory::Malloc((longlong)(int)uVar4,uVar3);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    (this->ScriptStruct).field0_0x0.DebugPtr = this_00;
    this->StructMemory = puVar2;
    (**(code **)(this_00->_padding_ + 0x2f8))(this_00,puVar2,1);
    if (puVar1 != (uchar *)0x0) {
      UScriptStruct::CopyScriptStruct(this_00,this->StructMemory,puVar1,1);
    }
    return this;
  }
  return this;
}

// FInstancedStruct @ 141f65af0

FInstancedStruct * __thiscall
FInstancedStruct::FInstancedStruct(FInstancedStruct *this,UScriptStruct *param_1)

{
  uchar *puVar1;
  uint uVar2;
  uint uVar3;
  
  (this->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  this->StructMemory = (uchar *)0x0;
  if (param_1 != (UScriptStruct *)0x0) {
    uVar2 = (uint)*(short *)((longlong)&param_1->_padding_ + 4);
    uVar3 = (int)param_1->_padding_ + -1 + uVar2 & -uVar2;
    if ((int)uVar3 < 1) {
      uVar3 = 1;
    }
    puVar1 = FMemory::Malloc((longlong)(int)uVar3,uVar2);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->ScriptStruct).field0_0x0.DebugPtr = param_1;
    this->StructMemory = puVar1;
    (**(code **)(param_1->_padding_ + 0x2f8))(param_1,puVar1,1);
  }
  return this;
}

// FInstancedStruct @ 141f65b90

FInstancedStruct * __thiscall
FInstancedStruct::FInstancedStruct(FInstancedStruct *this,FConstStructView *param_1)

{
  UScriptStruct *this_00;
  uchar *puVar1;
  uchar *puVar2;
  uint uVar3;
  uint uVar4;
  
  this_00 = param_1->ScriptStruct;
  puVar1 = param_1->StructMemory;
  (this->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  this->StructMemory = (uchar *)0x0;
  if (this_00 != (UScriptStruct *)0x0) {
    uVar3 = (uint)*(short *)((longlong)&this_00->_padding_ + 4);
    uVar4 = (int)this_00->_padding_ + -1 + uVar3 & -uVar3;
    if ((int)uVar4 < 1) {
      uVar4 = 1;
    }
    puVar2 = FMemory::Malloc((longlong)(int)uVar4,uVar3);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    (this->ScriptStruct).field0_0x0.DebugPtr = this_00;
    this->StructMemory = puVar2;
    (**(code **)(this_00->_padding_ + 0x2f8))(this_00,puVar2,1);
    if (puVar1 != (uchar *)0x0) {
      UScriptStruct::CopyScriptStruct(this_00,this->StructMemory,puVar1,1);
    }
    return this;
  }
  return this;
}

// FInstancedStruct @ 141f65c70

FInstancedStruct * __thiscall FInstancedStruct::FInstancedStruct(FInstancedStruct *this)

{
  (this->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  this->StructMemory = (uchar *)0x0;
  return this;
}

// operator= @ 141f69320

FInstancedStruct * __thiscall
FInstancedStruct::operator=(FInstancedStruct *this,FInstancedStruct *param_1)

{
  UScriptStruct *pUVar1;
  uchar *puVar2;
  UScriptStruct *this_00;
  uchar *puVar3;
  uint uVar4;
  uint uVar5;
  
  if (this == param_1) {
    return this;
  }
  pUVar1 = (this->ScriptStruct).field0_0x0.DebugPtr;
  puVar2 = param_1->StructMemory;
  this_00 = (param_1->ScriptStruct).field0_0x0.DebugPtr;
  if ((this_00 == (UScriptStruct *)0x0) || (this_00 != pUVar1)) {
    puVar3 = this->StructMemory;
    if (puVar3 != (uchar *)0x0) {
      if ((pUVar1 != (UScriptStruct *)0x0) && ((pUVar1->_padding_ & 0x40018000) == 0)) {
        pUVar1 = (this->ScriptStruct).field0_0x0.DebugPtr;
        (**(code **)(pUVar1->_padding_ + 0x300))(pUVar1,this->StructMemory,1);
      }
      FMemory::Free(puVar3);
    }
    this->StructMemory = (uchar *)0x0;
    (this->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    if (this_00 != (UScriptStruct *)0x0) {
      uVar5 = (uint)*(short *)((longlong)&this_00->_padding_ + 4);
      uVar4 = (int)this_00->_padding_ + -1 + uVar5 & -uVar5;
      if ((int)uVar4 < 1) {
        uVar4 = 1;
      }
      puVar3 = FMemory::Malloc((longlong)(int)uVar4,uVar5);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      (this->ScriptStruct).field0_0x0.DebugPtr = this_00;
      this->StructMemory = puVar3;
      (**(code **)(this_00->_padding_ + 0x2f8))(this_00,puVar3,1);
      if (puVar2 != (uchar *)0x0) {
        UScriptStruct::CopyScriptStruct(this_00,this->StructMemory,puVar2,1);
      }
    }
  }
  else if (puVar2 == (uchar *)0x0) {
    UScriptStruct::ClearScriptStruct(pUVar1,this->StructMemory,1);
  }
  else {
    UScriptStruct::CopyScriptStruct(pUVar1,this->StructMemory,puVar2,1);
  }
  return this;
}

// operator= @ 141f69470

FInstancedStruct * __thiscall
FInstancedStruct::operator=(FInstancedStruct *this,FConstStructView *param_1)

{
  UScriptStruct *pUVar1;
  UScriptStruct *this_00;
  uchar *puVar2;
  uchar *puVar3;
  uint uVar4;
  uint uVar5;
  
  pUVar1 = (this->ScriptStruct).field0_0x0.DebugPtr;
  this_00 = param_1->ScriptStruct;
  puVar3 = this->StructMemory;
  if ((pUVar1 != this_00) || (puVar3 != param_1->StructMemory)) {
    puVar2 = param_1->StructMemory;
    if ((this_00 == (UScriptStruct *)0x0) || (this_00 != pUVar1)) {
      if (puVar3 != (uchar *)0x0) {
        if ((pUVar1 != (UScriptStruct *)0x0) && ((pUVar1->_padding_ & 0x40018000) == 0)) {
          pUVar1 = (this->ScriptStruct).field0_0x0.DebugPtr;
          (**(code **)(pUVar1->_padding_ + 0x300))(pUVar1,this->StructMemory,1);
        }
        FMemory::Free(puVar3);
      }
      this->StructMemory = (uchar *)0x0;
      (this->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
      if (this_00 != (UScriptStruct *)0x0) {
        uVar5 = (uint)*(short *)((longlong)&this_00->_padding_ + 4);
        uVar4 = (int)this_00->_padding_ + -1 + uVar5 & -uVar5;
        if ((int)uVar4 < 1) {
          uVar4 = 1;
        }
        puVar3 = FMemory::Malloc((longlong)(int)uVar4,uVar5);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        (this->ScriptStruct).field0_0x0.DebugPtr = this_00;
        this->StructMemory = puVar3;
        (**(code **)(this_00->_padding_ + 0x2f8))(this_00,puVar3,1);
        if (puVar2 != (uchar *)0x0) {
          UScriptStruct::CopyScriptStruct(this_00,this->StructMemory,puVar2,1);
        }
      }
    }
    else if (puVar2 == (uchar *)0x0) {
      UScriptStruct::ClearScriptStruct(pUVar1,puVar3,1);
    }
    else {
      UScriptStruct::CopyScriptStruct(pUVar1,puVar3,puVar2,1);
    }
  }
  return this;
}

// operator() @ 141f6a800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FInstancedStruct::SerializeFromMismatchedTag'::__l5::<lambda_1>::operator()(void *this)

{
  FStructuredArchiveSlot FVar1;
  longlong *plVar2;
  FFastPathLoadBuffer *pFVar3;
  UScriptStruct *pUVar4;
  FArchiveState *this_00;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  UScriptStruct *local_res8;
  ulong64 local_res10;
  FName local_res18;
  FString local_48;
  
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive
                      (*(FSlotBase **)((longlong)this + 8));
  FVar1 = **(FStructuredArchiveSlot **)((longlong)this + 8);
  local_res8 = (UScriptStruct *)0x0;
  plVar2 = *(longlong **)(*(longlong *)FVar1 + 8);
  (**(code **)(*plVar2 + 0x168))(plVar2,&local_res8);
  if (local_res8 != (UScriptStruct *)0x0) {
    (**(code **)(this_00->_padding_ + 0x1b0))(this_00,local_res8);
  }
  pUVar4 = local_res8;
  plVar2 = *(longlong **)this;
  if ((local_res8 == (UScriptStruct *)0x0) || (local_res8 != (UScriptStruct *)*plVar2)) {
    pvVar5 = (void *)plVar2[1];
    if (pvVar5 != (void *)0x0) {
      if ((*plVar2 != 0) && ((*(uint *)(*plVar2 + 8) & 0x40018000) == 0)) {
        (**(code **)(*(longlong *)*plVar2 + 0x300))((longlong *)*plVar2,plVar2[1],1);
      }
      FMemory::Free(pvVar5);
    }
    plVar2[1] = 0;
    *plVar2 = 0;
    if (pUVar4 != (UScriptStruct *)0x0) {
      uVar9 = (uint)*(short *)((longlong)&pUVar4->_padding_ + 4);
      uVar8 = (int)pUVar4->_padding_ + -1 + uVar9 & -uVar9;
      if ((int)uVar8 < 1) {
        uVar8 = 1;
      }
      pvVar5 = FMemory::Malloc((longlong)(int)uVar8,uVar9);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      *plVar2 = (longlong)pUVar4;
      plVar2[1] = (longlong)pvVar5;
      (**(code **)(pUVar4->_padding_ + 0x2f8))(pUVar4,pvVar5,1);
    }
  }
  else {
    UScriptStruct::ClearScriptStruct((UScriptStruct *)*plVar2,(void *)plVar2[1],1);
  }
  pUVar4 = local_res8;
  pFVar3 = this_00->ActiveFPLB;
  lVar7 = *(longlong *)this;
  local_res10 = 0;
  if (pFVar3->EndFastPathLoadBuffer < (ulong64 *)((longlong)pFVar3->StartFastPathLoadBuffer + 8)) {
    if (this_00->ArForceByteSwapping == 0) {
      (**(code **)(this_00->_padding_ + 0x188))(this_00,&local_res10,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this_00,&local_res10);
    }
  }
  else {
    local_res10 = *(ulong64 *)pFVar3->StartFastPathLoadBuffer;
    pFVar3->StartFastPathLoadBuffer = pFVar3->StartFastPathLoadBuffer + 8;
  }
  lVar6 = (**(code **)(this_00->_padding_ + 0x28))(this_00);
  if (pUVar4 != (UScriptStruct *)0x0) {
    UScriptStruct::SerializeItem(pUVar4,FVar1,*(void **)(lVar7 + 8),(void *)0x0);
  }
  lVar7 = (**(code **)(this_00->_padding_ + 0x28))(this_00);
  lVar6 = local_res10 + lVar6;
  if (lVar7 != lVar6) {
    if ((local_res8 != (UScriptStruct *)0x0) &&
       (FArchiveState::SetCriticalError(this_00), 1 < (byte)LogCore._0_1_)) {
      local_res18 = (FName)local_res8->_padding_;
      ::FName::ToString(&local_res18,&local_48);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    (**(code **)(this_00->_padding_ + 0x1b8))(this_00,lVar6);
  }
  return;
}

// AddStructReferencedObjects @ 141f6dff0

void __thiscall
FInstancedStruct::AddStructReferencedObjects(FInstancedStruct *this,FReferenceCollector *param_1)

{
  if ((this->ScriptStruct).field0_0x0.DebugPtr != (UScriptStruct *)0x0) {
    (**(code **)(param_1->_padding_ + 0x88))(param_1,this,0);
    FReferenceCollector::AddPropertyReferencesWithStructARO
              (param_1,(this->ScriptStruct).field0_0x0.DebugPtr,this->StructMemory,(UObject *)0x0);
  }
  return;
}

// ExportTextItem @ 141f7a4e0

bool __thiscall
FInstancedStruct::ExportTextItem
          (FInstancedStruct *this,FString *param_1,FInstancedStruct *param_2,UObject *param_3,
          int param_4,UObject *param_5)

{
  int iVar1;
  UScriptStruct *this_00;
  FString *pFVar2;
  int iVar3;
  FString local_18;
  
  this_00 = (this->ScriptStruct).field0_0x0.DebugPtr;
  if (this_00 == (UScriptStruct *)0x0) {
    ::FString::AppendChars(param_1,L"None",4);
  }
  else {
    pFVar2 = UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0)
    ;
    iVar1 = (pFVar2->Data).ArrayNum;
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,iVar3);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    UScriptStruct::ExportText
              (this_00,param_1,this->StructMemory,this->StructMemory,param_3,param_4,param_5,true);
  }
  return true;
}

// FindInnerPropertyInstance @ 141f7c290

bool __thiscall
FInstancedStruct::FindInnerPropertyInstance
          (FInstancedStruct *this,FName param_1,FProperty **param_2,void **param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  FName FVar3;
  FName FVar4;
  TObjectPtr<UScriptStruct_const_>_u_0 local_48;
  FProperty *pFStack_40;
  undefined4 local_38;
  undefined2 uStack_34;
  undefined1 uStack_32;
  undefined1 uStack_31;
  TObjectPtr<UScriptStruct_const_>_u_0 local_30;
  FProperty *pFStack_28;
  undefined8 local_20;
  
  local_48 = (TObjectPtr<UScriptStruct_const_>_u_0)(this->ScriptStruct).field0_0x0.DebugPtr;
  if ((local_48.DebugPtr != (UScriptStruct *)0x0) && (this->StructMemory != (uchar *)0x0)) {
    pFStack_40 = (FProperty *)(local_48.DebugPtr)->_padding_;
    local_38 = 0xffffffff;
    uStack_34 = 0x101;
    uStack_32 = 0;
    TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_48.ObjectPtr);
    local_20 = CONCAT17(uStack_31,CONCAT16(uStack_32,CONCAT24(uStack_34,local_38)));
    local_30.DebugPtr = local_48.DebugPtr;
    pFStack_28 = pFStack_40;
    if (pFStack_40 != (FProperty *)0x0) {
      FVar4.ComparisonIndex.Value = 0;
      FVar4.Number = 0;
      do {
        pFVar1 = pFStack_28;
        bVar2 = IsThisNotNull(pFStack_28,"FField::GetFName");
        FVar3 = FVar4;
        if (bVar2) {
          FVar3 = (FName)pFVar1->_padding_;
        }
        if (FVar3 == param_1) {
          *param_2 = pFVar1;
          *param_3 = this->StructMemory;
          return true;
        }
        pFStack_28 = (FProperty *)pFVar1->_padding_;
        TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_30.ObjectPtr);
      } while (pFStack_28 != (FProperty *)0x0);
    }
  }
  return false;
}

// GetPreloadDependencies @ 141f83f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FInstancedStruct::GetPreloadDependencies
          (FInstancedStruct *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar1;
  uchar *puVar2;
  UScriptStruct *pUVar3;
  UObjectBaseUtility *this_00;
  undefined8 *puVar4;
  uint *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ICppStructOps *this_01;
  FFieldClass *pFVar11;
  TTuple<FProperty_const_*,void_const_*> *pTVar12;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar13;
  uint uVar14;
  undefined1 auStackY_7a8 [32];
  TObjectPtr<UScriptStruct_const_>_u_0 local_758;
  FString local_750;
  FPropertyValueIterator local_740;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_7a8;
  local_758 = (TObjectPtr<UScriptStruct_const_>_u_0)(this->ScriptStruct).field0_0x0.DebugPtr;
  if (local_758.DebugPtr != (UScriptStruct *)0x0) {
    pTVar1 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(param_1->AllocatorInstance).Data;
    if (((pTVar1 <= &local_758) && (&local_758 < pTVar1 + param_1->ArrayMax)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar9 = param_1->ArrayNum;
    if (iVar9 == param_1->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar9 + 1;
    ((TObjectPtr<UScriptStruct_const_>_u_0 *)
    ((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8))->DebugPtr =
         (UScriptStruct *)local_758;
    this_01 = UScriptStruct::GetCppStructOps((this->ScriptStruct).field0_0x0.DebugPtr);
    if (this_01 != (ICppStructOps *)0x0) {
      UScriptStruct::ICppStructOps::GetPreloadDependencies(this_01,this->StructMemory,param_1);
    }
    puVar2 = this->StructMemory;
    pUVar3 = (this->ScriptStruct).field0_0x0.DebugPtr;
    pFVar11 = FStructProperty::StaticClass();
    FPropertyValueIterator::FPropertyValueIterator
              (&local_740,pFVar11,(UStruct *)pUVar3,puVar2,FullRecursion,IncludeDeprecated);
    while( true ) {
      if (local_740.PropertyIteratorStack.ArrayNum < 1) break;
      pTVar12 = FPropertyValueIterator::operator->(&local_740);
      this_00 = *(UObjectBaseUtility **)(*(longlong *)pTVar12 + 0x70);
      if (this_00[4].field_0x14 == '\0') {
        UObjectBaseUtility::GetPathName(this_00,&local_750,(UObject *)0x0);
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("bPrepareCppStructOpsCompleted",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0x8f6,
                           L"GetCppStructOps: PrepareCppStructOps() has not been called for class %s"
                          );
        if (local_750.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_750.Data.AllocatorInstance.Data);
        }
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      puVar4 = *(undefined8 **)&this_00[4].field_0x18;
      if (puVar4 != (undefined8 *)0x0) {
        pTVar12 = FPropertyValueIterator::operator->(&local_740);
        puVar5 = (uint *)*puVar4;
        uVar6 = *(undefined8 *)&pTVar12->field_0x8;
        if ((*(byte *)((longlong)puVar5 + 0x17) & 4) != 0) {
          if (((*puVar5 & 0x200) == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("!!(this->Flags & FuncFlag)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                 ,0x660,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar14 = 0;
          for (uVar10 = *puVar5 & 0x1ff; uVar10 != 0; uVar10 = uVar10 & uVar10 - 1) {
            uVar14 = uVar14 + 1;
          }
          (**(code **)(puVar5 + (ulonglong)uVar14 * 2 + 6))(uVar6,param_1);
        }
      }
      FPropertyValueIterator::IterateToNext(&local_740);
    }
    FVar13 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_740;
    if (local_740.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
        (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
      FVar13 = local_740.PropertyIteratorStack.AllocatorInstance.SecondaryData;
    }
    DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
              ((FPropertyValueStackEntry *)FVar13,local_740.PropertyIteratorStack.ArrayNum);
    if (local_740.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
        (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
      FMemory::Free((void *)local_740.PropertyIteratorStack.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// Identical @ 141f8bfc0

bool __thiscall
FInstancedStruct::Identical(FInstancedStruct *this,FInstancedStruct *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  TObjectPtr<UScriptStruct_const_>_u_0 this_00;
  uchar *puVar3;
  uchar *puVar4;
  FStructOpsFakeVTable *pFVar5;
  code *pcVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  ICppStructOps *pIVar11;
  EStructOpsFakeVTableFlags EVar12;
  uint uVar13;
  int iVar14;
  undefined1 local_res8 [8];
  TObjectPtr<UScriptStruct_const_>_u_0 local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  this_00 = (TObjectPtr<UScriptStruct_const_>_u_0)(this->ScriptStruct).field0_0x0.DebugPtr;
  if ((param_1 == (FInstancedStruct *)0x0) ||
     (this_00.DebugPtr != (param_1->ScriptStruct).field0_0x0.DebugPtr)) {
    return false;
  }
  if (this_00.DebugPtr == (UScriptStruct *)0x0) {
    return true;
  }
  puVar3 = param_1->StructMemory;
  puVar4 = this->StructMemory;
  if ((puVar4 == (uchar *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("A",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                         ,0xe72,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  if (puVar3 == (uchar *)0x0) {
    return false;
  }
  if (((this_00.DebugPtr)->StructFlags & STRUCT_IdenticalNative) != STRUCT_NoFlags) {
    pIVar11 = UScriptStruct::GetCppStructOps(this_00.DebugPtr);
    if ((pIVar11 == (ICppStructOps *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TheCppStructOps",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Class.cpp"
                           ,0xe7c,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    local_res8[0] = 0;
    pFVar5 = pIVar11->FakeVPtr;
    if (((~(byte)(pFVar5->Flags >> 0xb) & 1) != 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!!(this->Flags & FuncFlag)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0x660,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    uVar13 = 0;
    for (EVar12 = pFVar5->Flags &
                  (Copy|GetPreloadDependencies|PostScriptConstruct|NetDeltaSerialize|NetSerialize|
                   PostSerialize|SerializeSlot|SerializeArchive|Destruct|ConstructForTests|Construct
                  ); EVar12 != None; EVar12 = EVar12 & EVar12 - Construct) {
      uVar13 = uVar13 + 1;
    }
    cVar10 = (**(code **)(&pFVar5[1].Flags + (ulonglong)uVar13 * 2))
                       (puVar4,puVar3,param_2,local_res8);
    if (cVar10 != '\0') {
      return (bool)local_res8[0];
    }
  }
  local_40 = (longlong *)(this_00.DebugPtr)->_padding_;
  local_38 = 0xffffffff;
  local_34 = 0x101;
  local_32 = 0;
  local_48 = this_00;
  TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_48.ObjectPtr);
  plVar7 = local_40;
  do {
    if (plVar7 == (longlong *)0x0) {
      return true;
    }
    iVar14 = 0;
    local_40 = plVar7;
    if (0 < (int)plVar7[6]) {
      do {
        pcVar6 = *(code **)(*plVar7 + 0xb8);
        if (((iVar14 < 0) || ((int)plVar7[6] <= iVar14)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        iVar1 = *(int *)((longlong)plVar7 + 0x34);
        iVar2 = *(int *)((longlong)plVar7 + 0x44);
        if (((iVar14 < 0) || ((int)plVar7[6] <= iVar14)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        if ((puVar4 == (uchar *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        cVar10 = (*pcVar6)(plVar7,puVar4 + (longlong)*(int *)((longlong)plVar7 + 0x44) +
                                           (longlong)iVar14 *
                                           (longlong)*(int *)((longlong)plVar7 + 0x34),
                           puVar3 + (longlong)iVar2 + (longlong)iVar14 * (longlong)iVar1,param_2);
        if (cVar10 == '\0') {
          return false;
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < (int)plVar7[6]);
    }
    local_40 = (longlong *)plVar7[3];
    TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_48.ObjectPtr);
    plVar7 = local_40;
  } while( true );
}

// ImportTextItem @ 141f8cd70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */

bool __thiscall
FInstancedStruct::ImportTextItem
          (FInstancedStruct *this,wchar_t **param_1,int param_2,UObject *param_3,
          FOutputDevice *param_4,FArchive *param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  UScriptStruct *pUVar3;
  ulong64 uVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  void *pvVar8;
  size_t sVar9;
  UClass *pUVar10;
  TObjectPtr<UScriptStruct_const_>_u_0 this_00;
  uchar *puVar11;
  wchar_t *pwVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStackY_9a8 [32];
  FString local_958;
  TObjectPtr<UScriptStruct_const_>_u_0 local_948 [2];
  wchar_t *local_938;
  undefined8 uStack_930;
  FCoreRedirectObjectName local_928;
  FCoreRedirectObjectName local_910;
  FScriptContainerElement *local_8f8;
  int iStack_8f0;
  undefined4 uStack_8ec;
  code *local_8e8;
  TObjectPtr<UScriptStruct_const_>_u_0 *local_8e0;
  FString local_8d8;
  TStringView<wchar_t> local_8c8;
  TStringView<wchar_t> local_8b8;
  TStringView<wchar_t> local_8a8;
  TStringBuilderBase<wchar_t> local_898;
  FScriptContainerElement local_878 [2070];
  FScriptContainerElement local_62 [10];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_9a8;
  pwVar12 = *param_1;
  local_898.Base = (wchar_t *)local_878;
  local_898.CurPos = (wchar_t *)local_878;
  local_898.End = (wchar_t *)local_62;
  local_898.bIsDynamic = false;
  local_898.bIsExternal = false;
  iVar6 = wcscmp(pwVar12,L"()");
  if (iVar6 == 0) {
    pwVar12 = pwVar12 + 2;
LAB_141f8ce0a:
    *param_1 = pwVar12;
    if ((int)((longlong)local_898.CurPos - (longlong)local_898.Base >> 1) != 0) {
      if (local_898.End < (FScriptContainerElement *)((longlong)local_898.CurPos + 2)) {
        TStringBuilderBase<wchar_t>::Extend(&local_898,1);
      }
      *local_898.CurPos = 0;
      iVar6 = FGenericPlatformStricmp::Stricmp(local_898.Base,L"None");
      if (iVar6 != 0) {
        if (local_898.End < (FScriptContainerElement *)((longlong)local_898.CurPos + 2)) {
          TStringBuilderBase<wchar_t>::Extend(&local_898,1);
        }
        *local_898.CurPos = 0;
        ::FString::FString(&local_958,local_898.Base);
        FCoreRedirectObjectName::FCoreRedirectObjectName(&local_928,&local_958);
        if (local_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_958.Data.AllocatorInstance.Data);
        }
        FCoreRedirects::GetRedirectedName(&local_910,Type_Struct,&local_928,AllowPartialMatch);
        if (((local_928.ObjectName != local_910.ObjectName) ||
            (local_928.OuterName != local_910.OuterName)) ||
           (local_928.PackageName != local_910.PackageName)) {
          local_898.CurPos = local_898.Base;
          pFVar7 = FCoreRedirectObjectName::ToString(&local_910,&local_8d8);
          iVar1 = (pFVar7->Data).ArrayNum;
          pFVar2 = (pFVar7->Data).AllocatorInstance.Data;
          iVar6 = iVar1 + -1;
          if (iVar1 == 0) {
            iVar6 = 0;
          }
          uVar4 = (longlong)iVar6 * 2;
          if (local_898.End < (FScriptContainerElement *)((longlong)local_898.CurPos + uVar4)) {
            TStringBuilderBase<wchar_t>::Extend(&local_898,(longlong)iVar6);
          }
          if (iVar6 != 0) {
            pvVar8 = FGenericPlatformString::Memcpy(local_898.CurPos,pFVar2,uVar4);
            local_898.CurPos = (wchar_t *)((longlong)pvVar8 + uVar4);
          }
          if (local_8d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8d8.Data.AllocatorInstance.Data);
          }
        }
        if (((uint)param_2 >> 0xb & 1) != 0) {
          local_958.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_898.Base;
          local_958.Data.ArrayNum =
               (int)((longlong)local_898.CurPos - (longlong)local_898.Base >> 1);
          local_8c8._12_4_ = local_958.Data.ArrayMax;
          local_8c8.Size = local_958.Data.ArrayNum;
          local_8c8.DataPtr = local_898.Base;
          bVar5 = FPackageName::IsValidObjectPath(&local_8c8,(FText *)0x0);
          if (!bVar5) goto LAB_141f8d164;
        }
        uStack_930._0_4_ = 0;
        uStack_930._4_4_ = 0;
        local_938 = (wchar_t *)0x0;
        if (local_898.End < (FScriptContainerElement *)((longlong)local_898.CurPos + 2)) {
          TStringBuilderBase<wchar_t>::Extend(&local_898,1);
        }
        *local_898.CurPos = 0;
        iStack_8f0 = 0;
        local_8f8 = (FScriptContainerElement *)local_898.Base;
        if ((FScriptContainerElement *)local_898.Base != (FScriptContainerElement *)0x0) {
          sVar9 = wcslen(local_898.Base);
          iStack_8f0 = (int)sVar9;
        }
        pUVar10 = UScriptStruct::StaticClass();
        local_8a8._12_4_ = uStack_8ec;
        local_8a8.Size = iStack_8f0;
        local_8b8.DataPtr = local_938;
        local_8b8.Size = (int)uStack_930;
        local_8b8._12_4_ = uStack_930._4_4_;
        local_8a8.DataPtr = (wchar_t *)local_8f8;
        this_00.DebugPtr =
             (UScriptStruct *)
             StaticLoadObject(pUVar10,(UObject *)0x0,&local_8a8,&local_8b8,0,(UPackageMap *)0x0,true
                              ,(FLinkerInstancingContext *)0x0);
        if (this_00.DebugPtr != (UScriptStruct *)0x0) {
          pUVar3 = (this->ScriptStruct).field0_0x0.DebugPtr;
          puVar11 = this->StructMemory;
          if (this_00.DebugPtr == pUVar3) {
            UScriptStruct::ClearScriptStruct(pUVar3,puVar11,1);
          }
          else {
            if (puVar11 != (uchar *)0x0) {
              if ((pUVar3 != (UScriptStruct *)0x0) && ((pUVar3->_padding_ & 0x40018000) == 0)) {
                pUVar3 = (this->ScriptStruct).field0_0x0.DebugPtr;
                (**(code **)(pUVar3->_padding_ + 0x300))(pUVar3,this->StructMemory,1);
              }
              FMemory::Free(puVar11);
            }
            this->StructMemory = (uchar *)0x0;
            (this->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
            uVar14 = (uint)*(short *)((longlong)&(this_00.DebugPtr)->_padding_ + 4);
            uVar13 = (int)(this_00.DebugPtr)->_padding_ + -1 + uVar14 & -uVar14;
            if ((int)uVar13 < 1) {
              uVar13 = 1;
            }
            puVar11 = FMemory::Malloc((longlong)(int)uVar13,uVar14);
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
            }
            (this->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)this_00;
            this->StructMemory = puVar11;
            (**(code **)((this_00.DebugPtr)->_padding_ + 0x2f8))(this_00.DebugPtr,puVar11,1);
          }
          local_8e0 = local_948;
          local_8e8 = UE::Core::Private::Function::
                      TFunctionRefCaller<`FInstancedStruct::ImportTextItem'::__l26::<lambda_1>,FString>
                      ::Call;
          local_948[0].DebugPtr = this_00.DebugPtr;
          pwVar12 = UScriptStruct::ImportText
                              (this_00.DebugPtr,*param_1,this->StructMemory,param_3,param_2,param_4,
                               (TFunctionRef<FString___cdecl(void)> *)&local_8e8,true);
          if (pwVar12 != (wchar_t *)0x0) {
            *param_1 = pwVar12;
            bVar5 = true;
            goto LAB_141f8d166;
          }
        }
        goto LAB_141f8d164;
      }
    }
    puVar11 = this->StructMemory;
    if (puVar11 != (uchar *)0x0) {
      pUVar3 = (this->ScriptStruct).field0_0x0.DebugPtr;
      if ((pUVar3 != (UScriptStruct *)0x0) && ((pUVar3->_padding_ & 0x40018000) == 0)) {
        pUVar3 = (this->ScriptStruct).field0_0x0.DebugPtr;
        (**(code **)(pUVar3->_padding_ + 0x300))(pUVar3,this->StructMemory,1);
      }
      FMemory::Free(puVar11);
    }
    this->StructMemory = (uchar *)0x0;
    (this->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    bVar5 = true;
  }
  else {
    pwVar12 = FPropertyHelpers::ReadToken(pwVar12,&local_898,true);
    if (pwVar12 != (wchar_t *)0x0) goto LAB_141f8ce0a;
LAB_141f8d164:
    bVar5 = false;
  }
LAB_141f8d166:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_898);
  return bVar5;
}

// InitializeAs @ 141f8dae0

void __thiscall
FInstancedStruct::InitializeAs(FInstancedStruct *this,UScriptStruct *param_1,uchar *param_2)

{
  UScriptStruct *pUVar1;
  uchar *puVar2;
  uint uVar3;
  uint uVar4;
  
  pUVar1 = (this->ScriptStruct).field0_0x0.DebugPtr;
  if ((param_1 == (UScriptStruct *)0x0) || (param_1 != pUVar1)) {
    puVar2 = this->StructMemory;
    if (puVar2 != (uchar *)0x0) {
      if ((pUVar1 != (UScriptStruct *)0x0) && ((pUVar1->_padding_ & 0x40018000) == 0)) {
        pUVar1 = (this->ScriptStruct).field0_0x0.DebugPtr;
        (**(code **)(pUVar1->_padding_ + 0x300))(pUVar1,this->StructMemory,1);
      }
      FMemory::Free(puVar2);
    }
    this->StructMemory = (uchar *)0x0;
    (this->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    if (param_1 != (UScriptStruct *)0x0) {
      uVar4 = (uint)*(short *)((longlong)&param_1->_padding_ + 4);
      uVar3 = (int)param_1->_padding_ + -1 + uVar4 & -uVar4;
      if ((int)uVar3 < 1) {
        uVar3 = 1;
      }
      puVar2 = FMemory::Malloc((longlong)(int)uVar3,uVar4);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      (this->ScriptStruct).field0_0x0.DebugPtr = param_1;
      this->StructMemory = puVar2;
      (**(code **)(param_1->_padding_ + 0x2f8))(param_1,puVar2,1);
      if (param_2 != (uchar *)0x0) {
        UScriptStruct::CopyScriptStruct(param_1,this->StructMemory,param_2,1);
      }
    }
  }
  else if (param_2 == (uchar *)0x0) {
    UScriptStruct::ClearScriptStruct(pUVar1,this->StructMemory,1);
  }
  else {
    UScriptStruct::CopyScriptStruct(pUVar1,this->StructMemory,param_2,1);
  }
  return;
}

// NetSerialize @ 141f93ab0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FInstancedStruct::NetSerialize
          (FInstancedStruct *this,FArchive *param_1,UPackageMap *param_2,bool *param_3)

{
  uchar **ppuVar1;
  UScriptStruct *pUVar2;
  FStructOpsFakeVTable *pFVar3;
  code *pcVar4;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar5;
  byte bVar6;
  undefined1 uVar7;
  char cVar8;
  uchar *puVar9;
  ICppStructOps *pIVar10;
  uint uVar11;
  EStructOpsFakeVTableFlags EVar12;
  uint uVar13;
  longlong *plVar14;
  bool bVar15;
  char local_res10 [8];
  UPackageMap *local_res18;
  undefined1 local_78 [8];
  TObjectPtr<UScriptStruct_const_>_u_0 local_70;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  ppuVar1 = &this->StructMemory;
  if ((((param_1->field_0x28 & 4) == 0) || (*ppuVar1 == (uchar *)0x0)) ||
     ((this->ScriptStruct).field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    local_res10[0] = '\0';
  }
  else {
    local_res10[0] = '\x01';
  }
  local_res18 = param_2;
  (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res10,1);
  bVar6 = param_1->field_0x28 & 1;
  if (local_res10[0] == '\0') {
    if (bVar6 != 0) {
      puVar9 = *ppuVar1;
      if (puVar9 != (uchar *)0x0) {
        pUVar2 = (this->ScriptStruct).field0_0x0.DebugPtr;
        if ((pUVar2 != (UScriptStruct *)0x0) && ((pUVar2->_padding_ & 0x40018000) == 0)) {
          pUVar2 = (this->ScriptStruct).field0_0x0.DebugPtr;
          (**(code **)(pUVar2->_padding_ + 0x300))(pUVar2,*ppuVar1,1);
        }
        FMemory::Free(puVar9);
      }
      this->StructMemory = (uchar *)0x0;
      (this->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    }
    *param_3 = true;
  }
  else {
    plVar14 = (longlong *)0x0;
    if (bVar6 == 0) {
      if ((param_1->field_0x28 & 4) != 0) {
        pUVar2 = (this->ScriptStruct).field0_0x0.DebugPtr;
        if (((pUVar2 == (UScriptStruct *)0x0) || (((uint)pUVar2->_padding_ >> 0x1e & 1) != 0)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("::IsValid(ScriptStruct)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\InstancedStruct.cpp"
                                ,0x217,L""), bVar15)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        (**(code **)(*(longlong *)param_1 + 0x150))(param_1,this);
      }
    }
    else {
      local_70.DebugPtr = (UScriptStruct *)0x0;
      (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_70);
      TVar5 = local_70;
      pUVar2 = (this->ScriptStruct).field0_0x0.DebugPtr;
      if (pUVar2 == (UScriptStruct *)0x0) {
        bVar15 = local_70.DebugPtr == (UScriptStruct *)0x0;
      }
      else {
        bVar15 = pUVar2 == local_70.DebugPtr;
      }
      if (!bVar15) {
        if ((local_70.DebugPtr == (UScriptStruct *)0x0) || (local_70.DebugPtr != pUVar2)) {
          puVar9 = this->StructMemory;
          if (puVar9 != (uchar *)0x0) {
            if ((pUVar2 != (UScriptStruct *)0x0) && ((pUVar2->_padding_ & 0x40018000) == 0)) {
              pUVar2 = (this->ScriptStruct).field0_0x0.DebugPtr;
              (**(code **)(pUVar2->_padding_ + 0x300))(pUVar2,this->StructMemory,1);
            }
            FMemory::Free(puVar9);
          }
          this->StructMemory = (uchar *)0x0;
          (this->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
          param_2 = local_res18;
          if (TVar5.DebugPtr != (UScriptStruct *)0x0) {
            uVar13 = (uint)*(short *)((longlong)&(TVar5.DebugPtr)->_padding_ + 4);
            uVar11 = (int)(TVar5.DebugPtr)->_padding_ + -1 + uVar13 & -uVar13;
            if ((int)uVar11 < 1) {
              uVar11 = 1;
            }
            puVar9 = FMemory::Malloc((longlong)(int)uVar11,uVar13);
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
            }
            (this->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)TVar5;
            this->StructMemory = puVar9;
            (**(code **)((TVar5.DebugPtr)->_padding_ + 0x2f8))(TVar5.DebugPtr,puVar9,1);
            param_2 = local_res18;
          }
        }
        else {
          UScriptStruct::ClearScriptStruct(pUVar2,this->StructMemory,1);
        }
      }
      if ((this->StructMemory == (uchar *)0x0) ||
         ((this->ScriptStruct).field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
        if (1 < (byte)LogCore._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
        }
        FArchiveState::SetError((FArchiveState *)param_1);
        *param_3 = false;
      }
    }
    pUVar2 = (this->ScriptStruct).field0_0x0.DebugPtr;
    if (pUVar2 != (UScriptStruct *)0x0) {
      if ((pUVar2->StructFlags & STRUCT_NetSerializeNative) == STRUCT_NoFlags) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &NetSerializeScriptStructDelegate,&local_68);
        if (((NetSerializeScriptStructDelegate._16_4_ == 0) ||
            (NetSerializeScriptStructDelegate._8_8_ == 0)) ||
           (cVar8 = (**(code **)(*(longlong *)NetSerializeScriptStructDelegate._8_8_ + 0x38))(),
           cVar8 == '\0')) {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_68);
          bVar15 = `FInstancedStruct::NetSerialize'::__l51::<lambda_1>::operator()(local_78);
          if (!bVar15) {
            return true;
          }
        }
        else {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_68);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &NetSerializeScriptStructDelegate,&local_50);
        if (NetSerializeScriptStructDelegate._16_4_ != 0) {
          plVar14 = (longlong *)NetSerializeScriptStructDelegate._8_8_;
        }
        bVar15 = (bool)(**(code **)(*plVar14 + 0x60))(plVar14,this,param_1,param_2);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&local_50);
        *param_3 = bVar15;
      }
      else {
        pIVar10 = UScriptStruct::GetCppStructOps(pUVar2);
        puVar9 = this->StructMemory;
        pFVar3 = pIVar10->FakeVPtr;
        if ((pFVar3->Capabilities).HasNetSerializer) {
          if (((pFVar3->Flags & NetSerialize) == None) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!!(this->Flags & FuncFlag)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                  ,0x660,L""), bVar15)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          for (EVar12 = pFVar3->Flags &
                        (PostSerialize|SerializeSlot|SerializeArchive|Destruct|ConstructForTests|
                        Construct); EVar12 != None; EVar12 = EVar12 & EVar12 - Construct) {
            plVar14 = (longlong *)(ulonglong)((int)plVar14 + 1);
          }
          (**(code **)(&pFVar3[1].Flags + (longlong)plVar14 * 2))(param_1,param_2,param_3,puVar9);
        }
      }
    }
  }
  return true;
}

// Reset @ 141f99cb0

void __thiscall FInstancedStruct::Reset(FInstancedStruct *this)

{
  uchar *puVar1;
  UScriptStruct *pUVar2;
  
  puVar1 = this->StructMemory;
  if (puVar1 != (uchar *)0x0) {
    pUVar2 = (this->ScriptStruct).field0_0x0.DebugPtr;
    if ((pUVar2 != (UScriptStruct *)0x0) && ((pUVar2->_padding_ & 0x40018000) == 0)) {
      pUVar2 = (this->ScriptStruct).field0_0x0.DebugPtr;
      (**(code **)(pUVar2->_padding_ + 0x300))(pUVar2,this->StructMemory,1);
    }
    FMemory::Free(puVar1);
    this->StructMemory = (uchar *)0x0;
    (this->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    return;
  }
  this->StructMemory = (uchar *)0x0;
  (this->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  return;
}

// ResolveVisitedPathInfo @ 141f9a400

void * __thiscall
FInstancedStruct::ResolveVisitedPathInfo(FInstancedStruct *this,FPropertyVisitorInfo *param_1)

{
  UScriptStruct *pUVar1;
  void *pvVar2;
  
  pUVar1 = (this->ScriptStruct).field0_0x0.DebugPtr;
  if ((pUVar1 != (UScriptStruct *)0x0) && (this->StructMemory != (uchar *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000141f9a41a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar2 = (void *)(**(code **)(pUVar1->_padding_ + 0x348))(pUVar1,this->StructMemory,param_1);
    return pvVar2;
  }
  return (void *)0x0;
}

// Serialize @ 141f9b370

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FInstancedStruct::Serialize(FInstancedStruct *this,FArchive *param_1,UStruct *param_2,void *param_3)

{
  longlong *plVar1;
  UScriptStruct *pUVar2;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  uchar *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  bool bVar14;
  uint local_res10 [2];
  uint local_58 [2];
  TObjectPtr<UScriptStruct_const_>_u_0 local_50;
  FString local_48;
  FString local_38;
  
  bVar4 = false;
  local_res10[0] = 0;
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&GInstancedStructCustomVersion);
  if (((param_1->field_0x28 & 1) != 0) &&
     (iVar5 = FArchiveState::CustomVer((FArchiveState *)param_1,&GInstancedStructCustomVersion.GUID)
     , iVar5 < 0)) {
    uVar6 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
    plVar1 = *(longlong **)&param_1->field_0x8;
    local_58[0] = 0;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_58);
      }
    }
    else {
      local_58[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    if (local_58[0] != 0xabababab) {
      (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,uVar6);
    }
    plVar1 = *(longlong **)&param_1->field_0x8;
    uVar11 = local_res10[0] >> 8;
    local_res10[0] = local_res10[0] & 0xffffff00;
    if ((undefined1 *)plVar1[1] < (undefined1 *)*plVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10);
    }
    else {
      local_res10[0] = CONCAT31((int3)uVar11,*(undefined1 *)*plVar1);
      *plVar1 = *plVar1 + 1;
    }
  }
  if ((param_1->field_0x28 & 1) == 0) {
    if ((param_1->field_0x28 & 4) != 0) {
      (**(code **)(*(longlong *)param_1 + 0x150))(param_1,this);
      uVar6 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
      plVar1 = *(longlong **)&param_1->field_0x8;
      local_58[0] = 0;
      if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_58,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_58);
        }
      }
      else {
        local_58[0] = *(uint *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      iVar5 = (**(code **)(*(longlong *)param_1 + 0x28))();
      if (((this->ScriptStruct).field0_0x0.DebugPtr != (UScriptStruct *)0x0) &&
         ((this->StructMemory != (uchar *)0x0 ||
          (bVar4 = `FInstancedStruct::Serialize'::__l51::<lambda_2>::operator()(local_res10), bVar4)
          ))) {
        UScriptStruct::SerializeItem
                  ((this->ScriptStruct).field0_0x0.DebugPtr,param_1,this->StructMemory,(void *)0x0);
      }
      uVar10 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
      (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,uVar6);
      plVar1 = *(longlong **)&param_1->field_0x8;
      local_58[0] = (int)uVar10 - iVar5;
      if ((uint *)*plVar1 + 1 <= (uint *)plVar1[1]) {
        local_58[0] = *(uint *)*plVar1;
        *plVar1 = *plVar1 + 4;
        (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,uVar10);
        return true;
      }
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_58,4);
        (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,uVar10);
        return true;
      }
      FArchive::SerializeByteOrderSwapped(param_1,local_58);
      (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,uVar10);
      return true;
    }
    if ((param_1->field_0x2b & 7) == 0) {
      return true;
    }
    (**(code **)(*(longlong *)param_1 + 0x150))(param_1,this);
    if ((this->ScriptStruct).field0_0x0.DebugPtr == (UScriptStruct *)0x0) {
      return true;
    }
    if (this->StructMemory != (uchar *)0x0) goto LAB_141f9b849;
    bVar4 = `FInstancedStruct::Serialize'::__l58::<lambda_3>::operator()(local_res10);
  }
  else {
    local_50.DebugPtr = (UScriptStruct *)0x0;
    (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_50);
    if (local_50.DebugPtr != (UScriptStruct *)0x0) {
      (**(code **)(*(longlong *)param_1 + 0x1b0))(param_1,local_50.DebugPtr);
    }
    TVar3 = local_50;
    pUVar2 = (this->ScriptStruct).field0_0x0.DebugPtr;
    if (pUVar2 == (UScriptStruct *)0x0) {
      bVar14 = local_50.DebugPtr == (UScriptStruct *)0x0;
    }
    else {
      bVar14 = pUVar2 == local_50.DebugPtr;
    }
    if (!bVar14) {
      if ((local_50.DebugPtr == (UScriptStruct *)0x0) || (local_50.DebugPtr != pUVar2)) {
        puVar7 = this->StructMemory;
        if (puVar7 != (uchar *)0x0) {
          if ((pUVar2 != (UScriptStruct *)0x0) && ((pUVar2->_padding_ & 0x40018000) == 0)) {
            pUVar2 = (this->ScriptStruct).field0_0x0.DebugPtr;
            (**(code **)(pUVar2->_padding_ + 0x300))(pUVar2,this->StructMemory);
          }
          FMemory::Free(puVar7);
        }
        this->StructMemory = (uchar *)0x0;
        (this->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
        if (TVar3.DebugPtr != (UScriptStruct *)0x0) {
          uVar12 = (uint)*(short *)((longlong)&(TVar3.DebugPtr)->_padding_ + 4);
          uVar11 = (int)(TVar3.DebugPtr)->_padding_ + -1 + uVar12 & -uVar12;
          if ((int)uVar11 < 1) {
            uVar11 = 1;
          }
          puVar7 = FMemory::Malloc((longlong)(int)uVar11,uVar12);
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
          }
          (this->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)TVar3;
          this->StructMemory = puVar7;
          (**(code **)((TVar3.DebugPtr)->_padding_ + 0x2f8))(TVar3.DebugPtr,puVar7);
        }
      }
      else {
        UScriptStruct::ClearScriptStruct(pUVar2,this->StructMemory,1);
      }
    }
    plVar1 = *(longlong **)&param_1->field_0x8;
    local_58[0] = 0;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_58);
      }
    }
    else {
      local_58[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    if ((this->ScriptStruct).field0_0x0.DebugPtr == (UScriptStruct *)0x0) {
      if ((int)local_58[0] < 1) {
        return true;
      }
      if (2 < (byte)LogCore._0_1_) {
        lVar8 = (**(code **)(*(longlong *)param_1 + 0x20))(param_1);
        if (lVar8 != 0) {
          lVar8 = (**(code **)(*(longlong *)param_1 + 0x20))(param_1);
          if (*(UObjectBaseUtility **)(lVar8 + 0xc0) == (UObjectBaseUtility *)0x0) {
            ::FString::FString(&local_48,L"None");
            bVar4 = true;
          }
          else {
            UObjectBaseUtility::GetPathName
                      (*(UObjectBaseUtility **)(lVar8 + 0xc0),&local_48,(UObject *)0x0);
            bVar4 = true;
          }
        }
        GetPathNameSafe(&local_38,*(FField **)&param_1->field_0x70,(UObject *)0x0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if ((bVar4) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      lVar8 = *(longlong *)param_1;
      lVar13 = (longlong)(int)local_58[0];
      lVar9 = (**(code **)(lVar8 + 0x28))(param_1);
      (**(code **)(lVar8 + 0x1b8))(param_1,lVar13 + lVar9);
      return true;
    }
    if (this->StructMemory != (uchar *)0x0) goto LAB_141f9b849;
    bVar4 = `FInstancedStruct::Serialize'::__l43::<lambda_1>::operator()(local_res10);
  }
  if (bVar4 == false) {
    return true;
  }
LAB_141f9b849:
  UScriptStruct::SerializeItem
            ((this->ScriptStruct).field0_0x0.DebugPtr,param_1,this->StructMemory,(void *)0x0);
  return true;
}

// SerializeFromMismatchedTag @ 141fa5c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FInstancedStruct::SerializeFromMismatchedTag
          (FInstancedStruct *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  UScriptStruct *pUVar1;
  bool bVar2;
  FNameEntryId FVar3;
  FPropertyTypeName FVar4;
  undefined4 extraout_var;
  FName FVar5;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  FName FVar6;
  size_t sVar7;
  UClass *pUVar8;
  UScriptStruct *this_00;
  uchar *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  FStructuredArchiveSlot local_res18;
  undefined1 auStackY_1b8 [32];
  FPropertyTypeName local_188;
  undefined1 local_184 [4];
  undefined1 local_180 [24];
  TStringView<wchar_t> local_168;
  FPropertyTag local_158;
  TStringBuilderBase<wchar_t> local_d8;
  wchar_t local_b8 [64];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_res18 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&NAME_StructVariant,"StructVariant");
    _Init_thread_footer(&::_TSS0);
  }
  local_188.Index = (param_1->TypeName).Index;
  bVar2 = UE::FPropertyTypeName::IsStruct(&local_188,NAME_StructVariant);
  if (bVar2) {
    local_180._8_8_ = &local_res18;
    local_180._0_8_ = this;
    `FInstancedStruct::SerializeFromMismatchedTag'::__l5::<lambda_1>::operator()(local_180);
    return true;
  }
  FVar6 = param_1->Type;
  FVar3 = FNameEntryId::FromValidEName((EName)&local_188);
  FVar5.Number = 0;
  FVar5.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  if (FVar6 != FVar5) {
    return false;
  }
  FPropertyTag::FPropertyTag(&local_158);
  local_188.Index = (param_1->TypeName).Index;
  FVar4 = UE::FPropertyTypeName::GetParameter(&local_188,(int)local_184);
  FPropertyTag::SetType(&local_158,(FPropertyTypeName)*(int *)CONCAT44(extraout_var_00,FVar4.Index))
  ;
  local_158.Name = param_1->Name;
  local_188.Index = (param_1->TypeName).Index;
  iVar12 = 0;
  local_158.ArrayIndex = 0;
  FVar4 = UE::FPropertyTypeName::GetParameter(&local_188,(int)local_184);
  FVar6 = UE::FPropertyTypeName::GetName((FPropertyTypeName *)CONCAT44(extraout_var_01,FVar4.Index))
  ;
  local_d8.bIsDynamic = false;
  local_d8.bIsExternal = false;
  local_d8.End = (wchar_t *)local_38;
  local_d8.Base = local_b8;
  local_d8.CurPos = local_b8;
  ::FName::AppendString((FName *)FVar6,&local_d8);
  if (local_d8.End < local_d8.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_d8,1);
  }
  *local_d8.CurPos = L'\0';
  ::FString::FString((FString *)local_180,local_d8.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_d8);
  if (local_180._8_4_ == 0) {
    local_168.DataPtr = L"";
  }
  else {
    local_168.DataPtr = (wchar_t *)local_180._0_8_;
    if ((FScriptContainerElement *)local_180._0_8_ == (FScriptContainerElement *)0x0)
    goto LAB_141fa5e48;
  }
  sVar7 = wcslen(local_168.DataPtr);
  iVar12 = (int)sVar7;
LAB_141fa5e48:
  local_168.Size = iVar12;
  pUVar8 = UScriptStruct::StaticClass();
  this_00 = (UScriptStruct *)
            StaticFindFirstObject
                      (pUVar8,&local_168,EnsureIfAmbiguous|NativeFirst,NoLogging,(wchar_t *)0x0);
  if (this_00 == (UScriptStruct *)0x0) {
    if ((FScriptContainerElement *)local_180._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_180._0_8_);
    }
    return false;
  }
  pUVar1 = (this->ScriptStruct).field0_0x0.DebugPtr;
  puVar9 = this->StructMemory;
  if (this_00 == pUVar1) {
    UScriptStruct::ClearScriptStruct(pUVar1,puVar9,1);
  }
  else {
    if (puVar9 != (uchar *)0x0) {
      if ((pUVar1 != (UScriptStruct *)0x0) && ((pUVar1->_padding_ & 0x40018000) == 0)) {
        pUVar1 = (this->ScriptStruct).field0_0x0.DebugPtr;
        (**(code **)(pUVar1->_padding_ + 0x300))(pUVar1,this->StructMemory,1);
      }
      FMemory::Free(puVar9);
    }
    this->StructMemory = (uchar *)0x0;
    (this->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    uVar11 = (uint)*(short *)((longlong)&this_00->_padding_ + 4);
    uVar10 = (int)this_00->_padding_ + -1 + uVar11 & -uVar11;
    if ((int)uVar10 < 1) {
      uVar10 = 1;
    }
    puVar9 = FMemory::Malloc((longlong)(int)uVar10,uVar11);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    (this->ScriptStruct).field0_0x0.DebugPtr = this_00;
    this->StructMemory = puVar9;
    (**(code **)(this_00->_padding_ + 0x2f8))(this_00,puVar9,1);
  }
  UScriptStruct::SerializeItem(this_00,local_res18,this->StructMemory,(void *)0x0);
  if ((FScriptContainerElement *)local_180._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_180._0_8_);
  }
  return true;
}

// Visit @ 141fb0360

EPropertyVisitorControlFlow __thiscall
FInstancedStruct::Visit
          (FInstancedStruct *this,FPropertyVisitorContext *param_1,
          TFunctionRef<EPropertyVisitorControlFlow___cdecl(FPropertyVisitorContext_const_&)>
          *param_2)

{
  UScriptStruct *pUVar1;
  EPropertyVisitorControlFlow EVar2;
  undefined8 local_38;
  undefined8 local_30;
  FPropertyVisitorPath *local_28;
  uchar *local_20;
  void *local_18;
  EScope local_10;
  
  pUVar1 = (this->ScriptStruct).field0_0x0.DebugPtr;
  if ((pUVar1 != (UScriptStruct *)0x0) && (local_20 = this->StructMemory, local_20 != (uchar *)0x0))
  {
    local_28 = param_1->Path;
    local_18 = (param_1->Data).ParentStructData;
    local_10 = param_1->Scope;
    local_38 = *(undefined8 *)param_2;
    local_30 = *(undefined8 *)&param_2->field_0x8;
    EVar2 = (**(code **)(pUVar1->_padding_ + 0x340))(pUVar1,&local_28,&local_38);
    return EVar2;
  }
  return StepOver;
}

// operator() @ 150483810

bool __thiscall `FInstancedStruct::Serialize'::__l43::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_21727131448901448>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_21727131448901448>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150483850

bool __thiscall `FInstancedStruct::NetSerialize'::__l51::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_21727131448901085>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_21727131448901085>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150483a30

bool __thiscall `FInstancedStruct::Serialize'::__l51::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_21727131448901416>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_21727131448901416>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150483b90

bool __thiscall `FInstancedStruct::Serialize'::__l58::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_21727131448901398>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_21727131448901398>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

