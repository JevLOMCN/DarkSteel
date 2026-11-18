// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 72

// AddStableReference @ 142018080

void __thiscall
UE::GC::TDebugReachabilityCollector<1>::AddStableReference
          (TDebugReachabilityCollector<1> *this,UObject **param_1)

{
  HandleObjectReference(this,param_1,this->Context->ReferencingObject,(FProperty *)0x0);
  return;
}

// AddStableReference @ 1420180a0

void __thiscall
UE::GC::TDebugReachabilityCollector<1>::AddStableReference
          (TDebugReachabilityCollector<1> *this,TObjectPtr<UObject> *param_1)

{
  HandleObjectReference(this,(UObject **)param_1,this->Context->ReferencingObject,(FProperty *)0x0);
  return;
}

// AddStableReference @ 1420180c0

void __thiscall
UE::GC::TDebugReachabilityCollector<4>::AddStableReference
          (TDebugReachabilityCollector<4> *this,UObject **param_1)

{
  HandleObjectReference(this,param_1,this->Context->ReferencingObject,(FProperty *)0x0);
  return;
}

// AddStableReference @ 1420180e0

void __thiscall
UE::GC::TDebugReachabilityCollector<4>::AddStableReference
          (TDebugReachabilityCollector<4> *this,TObjectPtr<UObject> *param_1)

{
  HandleObjectReference(this,(UObject **)param_1,this->Context->ReferencingObject,(FProperty *)0x0);
  return;
}

// AddStableReference @ 142018100

void __thiscall
UE::GC::TDebugReachabilityCollector<5>::AddStableReference
          (TDebugReachabilityCollector<5> *this,UObject **param_1)

{
  HandleObjectReference(this,param_1,this->Context->ReferencingObject,(FProperty *)0x0);
  return;
}

// AddStableReference @ 142018120

void __thiscall
UE::GC::TDebugReachabilityCollector<5>::AddStableReference
          (TDebugReachabilityCollector<5> *this,TObjectPtr<UObject> *param_1)

{
  HandleObjectReference(this,(UObject **)param_1,this->Context->ReferencingObject,(FProperty *)0x0);
  return;
}

// AddStableReference @ 142018140

void __thiscall
UE::GC::TDebugReachabilityCollector<8>::AddStableReference
          (TDebugReachabilityCollector<8> *this,UObject **param_1)

{
  HandleObjectReference(this,param_1,this->Context->ReferencingObject,(FProperty *)0x0);
  return;
}

// AddStableReference @ 142018160

void __thiscall
UE::GC::TDebugReachabilityCollector<8>::AddStableReference
          (TDebugReachabilityCollector<8> *this,TObjectPtr<UObject> *param_1)

{
  HandleObjectReference(this,(UObject **)param_1,this->Context->ReferencingObject,(FProperty *)0x0);
  return;
}

// AddStableReference @ 142018180

void __thiscall
UE::GC::TDebugReachabilityCollector<9>::AddStableReference
          (TDebugReachabilityCollector<9> *this,UObject **param_1)

{
  HandleObjectReference(this,param_1,this->Context->ReferencingObject,(FProperty *)0x0);
  return;
}

// AddStableReference @ 1420181a0

void __thiscall
UE::GC::TDebugReachabilityCollector<9>::AddStableReference
          (TDebugReachabilityCollector<9> *this,TObjectPtr<UObject> *param_1)

{
  HandleObjectReference(this,(UObject **)param_1,this->Context->ReferencingObject,(FProperty *)0x0);
  return;
}

// AddStableReference @ 1420181c0

void __thiscall
UE::GC::TDebugReachabilityCollector<0>::AddStableReference
          (TDebugReachabilityCollector<0> *this,UObject **param_1)

{
  HandleObjectReference(this,param_1,this->Context->ReferencingObject,(FProperty *)0x0);
  return;
}

// AddStableReference @ 1420181e0

void __thiscall
UE::GC::TDebugReachabilityCollector<0>::AddStableReference
          (TDebugReachabilityCollector<0> *this,TObjectPtr<UObject> *param_1)

{
  HandleObjectReference(this,(UObject **)param_1,this->Context->ReferencingObject,(FProperty *)0x0);
  return;
}

// AddStableReference @ 142018200

void __thiscall
UE::GC::TDebugReachabilityCollector<12>::AddStableReference
          (TDebugReachabilityCollector<12> *this,UObject **param_1)

{
  HandleObjectReference(this,param_1,this->Context->ReferencingObject,(FProperty *)0x0);
  return;
}

// AddStableReference @ 142018220

void __thiscall
UE::GC::TDebugReachabilityCollector<12>::AddStableReference
          (TDebugReachabilityCollector<12> *this,TObjectPtr<UObject> *param_1)

{
  HandleObjectReference(this,(UObject **)param_1,this->Context->ReferencingObject,(FProperty *)0x0);
  return;
}

// AddStableReference @ 142018240

void __thiscall
UE::GC::TDebugReachabilityCollector<13>::AddStableReference
          (TDebugReachabilityCollector<13> *this,UObject **param_1)

{
  HandleObjectReference(this,param_1,this->Context->ReferencingObject,(FProperty *)0x0);
  return;
}

// AddStableReference @ 142018260

void __thiscall
UE::GC::TDebugReachabilityCollector<13>::AddStableReference
          (TDebugReachabilityCollector<13> *this,TObjectPtr<UObject> *param_1)

{
  HandleObjectReference(this,(UObject **)param_1,this->Context->ReferencingObject,(FProperty *)0x0);
  return;
}

// AddStableReferenceArray @ 142018a00

/* WARNING: Removing unreachable block (ram,0x000142018afd) */
/* WARNING: Removing unreachable block (ram,0x000142018b05) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<1>::AddStableReferenceArray
          (TDebugReachabilityCollector<1> *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UObjectBaseUtility *this_00;
  bool bVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined4 local_res10 [2];
  FString local_38;
  
  bVar4 = false;
  local_res10[0] = 0;
  pFVar6 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pFVar2 = pFVar6 + (longlong)iVar3 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar6 == pFVar2) break;
    this_00 = (UObjectBaseUtility *)this->Context->ReferencingObject;
    if ((*(UObjectBase **)pFVar6 != (UObjectBase *)0x0) &&
       (bVar5 = UObjectBase::IsValidLowLevelFast(*(UObjectBase **)pFVar6,true), !bVar5)) {
      if (this_00 != (UObjectBaseUtility *)0x0) {
        bVar4 = true;
        UObjectBaseUtility::GetFullName(this_00,&local_38,(UObject *)0x0,None);
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<1>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar4) &&
         (bVar4 = false, local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<1>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,(UObject *)this_00,(UObject **)pFVar6,
               (FMemberId)0x20000000,*(EOrigin *)((longlong)&this->_padding_ + 1),
               SUB81(this->_padding_,0));
    puVar1 = &(this->Context->Stats).NumReferences;
    *puVar1 = *puVar1 + 1;
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// AddStableReferenceArray @ 142018b70

/* WARNING: Removing unreachable block (ram,0x000142018c6d) */
/* WARNING: Removing unreachable block (ram,0x000142018c75) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<1>::AddStableReferenceArray
          (TDebugReachabilityCollector<1> *this,
          TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UObjectBaseUtility *this_00;
  bool bVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined4 local_res10 [2];
  FString local_38;
  
  bVar4 = false;
  local_res10[0] = 0;
  pFVar6 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pFVar2 = pFVar6 + (longlong)iVar3 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UObject>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar6 == pFVar2) break;
    this_00 = (UObjectBaseUtility *)this->Context->ReferencingObject;
    if ((*(UObjectBase **)pFVar6 != (UObjectBase *)0x0) &&
       (bVar5 = UObjectBase::IsValidLowLevelFast(*(UObjectBase **)pFVar6,true), !bVar5)) {
      if (this_00 != (UObjectBaseUtility *)0x0) {
        bVar4 = true;
        UObjectBaseUtility::GetFullName(this_00,&local_38,(UObject *)0x0,None);
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<1>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar4) &&
         (bVar4 = false, local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<1>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,(UObject *)this_00,(UObject **)pFVar6,
               (FMemberId)0x20000000,*(EOrigin *)((longlong)&this->_padding_ + 1),
               SUB81(this->_padding_,0));
    puVar1 = &(this->Context->Stats).NumReferences;
    *puVar1 = *puVar1 + 1;
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// AddStableReferenceArray @ 142018ce0

/* WARNING: Removing unreachable block (ram,0x000142018ddd) */
/* WARNING: Removing unreachable block (ram,0x000142018de5) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<4>::AddStableReferenceArray
          (TDebugReachabilityCollector<4> *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UObjectBaseUtility *this_00;
  bool bVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined4 local_res10 [2];
  FString local_38;
  
  bVar4 = false;
  local_res10[0] = 0;
  pFVar6 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pFVar2 = pFVar6 + (longlong)iVar3 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar6 == pFVar2) break;
    this_00 = (UObjectBaseUtility *)this->Context->ReferencingObject;
    if ((*(UObjectBase **)pFVar6 != (UObjectBase *)0x0) &&
       (bVar5 = UObjectBase::IsValidLowLevelFast(*(UObjectBase **)pFVar6,true), !bVar5)) {
      if (this_00 != (UObjectBaseUtility *)0x0) {
        bVar4 = true;
        UObjectBaseUtility::GetFullName(this_00,&local_38,(UObject *)0x0,None);
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<4>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar4) &&
         (bVar4 = false, local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<4>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,(UObject *)this_00,(UObject **)pFVar6,
               (FMemberId)0x20000000,*(EOrigin *)((longlong)&this->_padding_ + 1),
               SUB81(this->_padding_,0));
    puVar1 = &(this->Context->Stats).NumReferences;
    *puVar1 = *puVar1 + 1;
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// AddStableReferenceArray @ 142018e50

/* WARNING: Removing unreachable block (ram,0x000142018f4d) */
/* WARNING: Removing unreachable block (ram,0x000142018f55) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<4>::AddStableReferenceArray
          (TDebugReachabilityCollector<4> *this,
          TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UObjectBaseUtility *this_00;
  bool bVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined4 local_res10 [2];
  FString local_38;
  
  bVar4 = false;
  local_res10[0] = 0;
  pFVar6 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pFVar2 = pFVar6 + (longlong)iVar3 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UObject>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar6 == pFVar2) break;
    this_00 = (UObjectBaseUtility *)this->Context->ReferencingObject;
    if ((*(UObjectBase **)pFVar6 != (UObjectBase *)0x0) &&
       (bVar5 = UObjectBase::IsValidLowLevelFast(*(UObjectBase **)pFVar6,true), !bVar5)) {
      if (this_00 != (UObjectBaseUtility *)0x0) {
        bVar4 = true;
        UObjectBaseUtility::GetFullName(this_00,&local_38,(UObject *)0x0,None);
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<4>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar4) &&
         (bVar4 = false, local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<4>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,(UObject *)this_00,(UObject **)pFVar6,
               (FMemberId)0x20000000,*(EOrigin *)((longlong)&this->_padding_ + 1),
               SUB81(this->_padding_,0));
    puVar1 = &(this->Context->Stats).NumReferences;
    *puVar1 = *puVar1 + 1;
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// AddStableReferenceArray @ 142018fc0

/* WARNING: Removing unreachable block (ram,0x0001420190bd) */
/* WARNING: Removing unreachable block (ram,0x0001420190c5) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<5>::AddStableReferenceArray
          (TDebugReachabilityCollector<5> *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UObjectBaseUtility *this_00;
  bool bVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined4 local_res10 [2];
  FString local_38;
  
  bVar4 = false;
  local_res10[0] = 0;
  pFVar6 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pFVar2 = pFVar6 + (longlong)iVar3 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar6 == pFVar2) break;
    this_00 = (UObjectBaseUtility *)this->Context->ReferencingObject;
    if ((*(UObjectBase **)pFVar6 != (UObjectBase *)0x0) &&
       (bVar5 = UObjectBase::IsValidLowLevelFast(*(UObjectBase **)pFVar6,true), !bVar5)) {
      if (this_00 != (UObjectBaseUtility *)0x0) {
        bVar4 = true;
        UObjectBaseUtility::GetFullName(this_00,&local_38,(UObject *)0x0,None);
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<5>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar4) &&
         (bVar4 = false, local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<5>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,(UObject *)this_00,(UObject **)pFVar6,
               (FMemberId)0x20000000,*(EOrigin *)((longlong)&this->_padding_ + 1),
               SUB81(this->_padding_,0));
    puVar1 = &(this->Context->Stats).NumReferences;
    *puVar1 = *puVar1 + 1;
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// AddStableReferenceArray @ 142019130

/* WARNING: Removing unreachable block (ram,0x00014201922d) */
/* WARNING: Removing unreachable block (ram,0x000142019235) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<5>::AddStableReferenceArray
          (TDebugReachabilityCollector<5> *this,
          TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UObjectBaseUtility *this_00;
  bool bVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined4 local_res10 [2];
  FString local_38;
  
  bVar4 = false;
  local_res10[0] = 0;
  pFVar6 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pFVar2 = pFVar6 + (longlong)iVar3 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UObject>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar6 == pFVar2) break;
    this_00 = (UObjectBaseUtility *)this->Context->ReferencingObject;
    if ((*(UObjectBase **)pFVar6 != (UObjectBase *)0x0) &&
       (bVar5 = UObjectBase::IsValidLowLevelFast(*(UObjectBase **)pFVar6,true), !bVar5)) {
      if (this_00 != (UObjectBaseUtility *)0x0) {
        bVar4 = true;
        UObjectBaseUtility::GetFullName(this_00,&local_38,(UObject *)0x0,None);
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<5>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar4) &&
         (bVar4 = false, local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<5>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,(UObject *)this_00,(UObject **)pFVar6,
               (FMemberId)0x20000000,*(EOrigin *)((longlong)&this->_padding_ + 1),
               SUB81(this->_padding_,0));
    puVar1 = &(this->Context->Stats).NumReferences;
    *puVar1 = *puVar1 + 1;
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// AddStableReferenceArray @ 1420192a0

/* WARNING: Removing unreachable block (ram,0x00014201939d) */
/* WARNING: Removing unreachable block (ram,0x0001420193a5) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<8>::AddStableReferenceArray
          (TDebugReachabilityCollector<8> *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UObjectBaseUtility *this_00;
  bool bVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined4 local_res10 [2];
  FString local_38;
  
  bVar4 = false;
  local_res10[0] = 0;
  pFVar6 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pFVar2 = pFVar6 + (longlong)iVar3 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar6 == pFVar2) break;
    this_00 = (UObjectBaseUtility *)this->Context->ReferencingObject;
    if ((*(UObjectBase **)pFVar6 != (UObjectBase *)0x0) &&
       (bVar5 = UObjectBase::IsValidLowLevelFast(*(UObjectBase **)pFVar6,true), !bVar5)) {
      if (this_00 != (UObjectBaseUtility *)0x0) {
        bVar4 = true;
        UObjectBaseUtility::GetFullName(this_00,&local_38,(UObject *)0x0,None);
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<8>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar4) &&
         (bVar4 = false, local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<8>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,(UObject *)this_00,(UObject **)pFVar6,
               (FMemberId)0x20000000,*(EOrigin *)((longlong)&this->_padding_ + 1),
               SUB81(this->_padding_,0));
    puVar1 = &(this->Context->Stats).NumReferences;
    *puVar1 = *puVar1 + 1;
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// AddStableReferenceArray @ 142019410

/* WARNING: Removing unreachable block (ram,0x00014201950d) */
/* WARNING: Removing unreachable block (ram,0x000142019515) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<8>::AddStableReferenceArray
          (TDebugReachabilityCollector<8> *this,
          TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UObjectBaseUtility *this_00;
  bool bVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined4 local_res10 [2];
  FString local_38;
  
  bVar4 = false;
  local_res10[0] = 0;
  pFVar6 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pFVar2 = pFVar6 + (longlong)iVar3 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UObject>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar6 == pFVar2) break;
    this_00 = (UObjectBaseUtility *)this->Context->ReferencingObject;
    if ((*(UObjectBase **)pFVar6 != (UObjectBase *)0x0) &&
       (bVar5 = UObjectBase::IsValidLowLevelFast(*(UObjectBase **)pFVar6,true), !bVar5)) {
      if (this_00 != (UObjectBaseUtility *)0x0) {
        bVar4 = true;
        UObjectBaseUtility::GetFullName(this_00,&local_38,(UObject *)0x0,None);
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<8>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar4) &&
         (bVar4 = false, local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<8>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,(UObject *)this_00,(UObject **)pFVar6,
               (FMemberId)0x20000000,*(EOrigin *)((longlong)&this->_padding_ + 1),
               SUB81(this->_padding_,0));
    puVar1 = &(this->Context->Stats).NumReferences;
    *puVar1 = *puVar1 + 1;
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// AddStableReferenceArray @ 142019580

/* WARNING: Removing unreachable block (ram,0x00014201967d) */
/* WARNING: Removing unreachable block (ram,0x000142019685) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<9>::AddStableReferenceArray
          (TDebugReachabilityCollector<9> *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UObjectBaseUtility *this_00;
  bool bVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined4 local_res10 [2];
  FString local_38;
  
  bVar4 = false;
  local_res10[0] = 0;
  pFVar6 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pFVar2 = pFVar6 + (longlong)iVar3 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar6 == pFVar2) break;
    this_00 = (UObjectBaseUtility *)this->Context->ReferencingObject;
    if ((*(UObjectBase **)pFVar6 != (UObjectBase *)0x0) &&
       (bVar5 = UObjectBase::IsValidLowLevelFast(*(UObjectBase **)pFVar6,true), !bVar5)) {
      if (this_00 != (UObjectBaseUtility *)0x0) {
        bVar4 = true;
        UObjectBaseUtility::GetFullName(this_00,&local_38,(UObject *)0x0,None);
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<9>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar4) &&
         (bVar4 = false, local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<9>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,(UObject *)this_00,(UObject **)pFVar6,
               (FMemberId)0x20000000,*(EOrigin *)((longlong)&this->_padding_ + 1),
               SUB81(this->_padding_,0));
    puVar1 = &(this->Context->Stats).NumReferences;
    *puVar1 = *puVar1 + 1;
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// AddStableReferenceArray @ 1420196f0

/* WARNING: Removing unreachable block (ram,0x0001420197ed) */
/* WARNING: Removing unreachable block (ram,0x0001420197f5) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<9>::AddStableReferenceArray
          (TDebugReachabilityCollector<9> *this,
          TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UObjectBaseUtility *this_00;
  bool bVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined4 local_res10 [2];
  FString local_38;
  
  bVar4 = false;
  local_res10[0] = 0;
  pFVar6 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pFVar2 = pFVar6 + (longlong)iVar3 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UObject>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar6 == pFVar2) break;
    this_00 = (UObjectBaseUtility *)this->Context->ReferencingObject;
    if ((*(UObjectBase **)pFVar6 != (UObjectBase *)0x0) &&
       (bVar5 = UObjectBase::IsValidLowLevelFast(*(UObjectBase **)pFVar6,true), !bVar5)) {
      if (this_00 != (UObjectBaseUtility *)0x0) {
        bVar4 = true;
        UObjectBaseUtility::GetFullName(this_00,&local_38,(UObject *)0x0,None);
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<9>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar4) &&
         (bVar4 = false, local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<9>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,(UObject *)this_00,(UObject **)pFVar6,
               (FMemberId)0x20000000,*(EOrigin *)((longlong)&this->_padding_ + 1),
               SUB81(this->_padding_,0));
    puVar1 = &(this->Context->Stats).NumReferences;
    *puVar1 = *puVar1 + 1;
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// AddStableReferenceArray @ 142019860

/* WARNING: Removing unreachable block (ram,0x00014201995d) */
/* WARNING: Removing unreachable block (ram,0x000142019965) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<0>::AddStableReferenceArray
          (TDebugReachabilityCollector<0> *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UObjectBaseUtility *this_00;
  bool bVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined4 local_res10 [2];
  FString local_38;
  
  bVar4 = false;
  local_res10[0] = 0;
  pFVar6 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pFVar2 = pFVar6 + (longlong)iVar3 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar6 == pFVar2) break;
    this_00 = (UObjectBaseUtility *)this->Context->ReferencingObject;
    if ((*(UObjectBase **)pFVar6 != (UObjectBase *)0x0) &&
       (bVar5 = UObjectBase::IsValidLowLevelFast(*(UObjectBase **)pFVar6,true), !bVar5)) {
      if (this_00 != (UObjectBaseUtility *)0x0) {
        bVar4 = true;
        UObjectBaseUtility::GetFullName(this_00,&local_38,(UObject *)0x0,None);
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<0>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar4) &&
         (bVar4 = false, local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<0>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,(UObject *)this_00,(UObject **)pFVar6,
               (FMemberId)0x20000000,*(EOrigin *)((longlong)&this->_padding_ + 1),
               SUB81(this->_padding_,0));
    puVar1 = &(this->Context->Stats).NumReferences;
    *puVar1 = *puVar1 + 1;
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// AddStableReferenceArray @ 1420199d0

/* WARNING: Removing unreachable block (ram,0x000142019acd) */
/* WARNING: Removing unreachable block (ram,0x000142019ad5) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<0>::AddStableReferenceArray
          (TDebugReachabilityCollector<0> *this,
          TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UObjectBaseUtility *this_00;
  bool bVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined4 local_res10 [2];
  FString local_38;
  
  bVar4 = false;
  local_res10[0] = 0;
  pFVar6 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pFVar2 = pFVar6 + (longlong)iVar3 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UObject>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar6 == pFVar2) break;
    this_00 = (UObjectBaseUtility *)this->Context->ReferencingObject;
    if ((*(UObjectBase **)pFVar6 != (UObjectBase *)0x0) &&
       (bVar5 = UObjectBase::IsValidLowLevelFast(*(UObjectBase **)pFVar6,true), !bVar5)) {
      if (this_00 != (UObjectBaseUtility *)0x0) {
        bVar4 = true;
        UObjectBaseUtility::GetFullName(this_00,&local_38,(UObject *)0x0,None);
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<0>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar4) &&
         (bVar4 = false, local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<0>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,(UObject *)this_00,(UObject **)pFVar6,
               (FMemberId)0x20000000,*(EOrigin *)((longlong)&this->_padding_ + 1),
               SUB81(this->_padding_,0));
    puVar1 = &(this->Context->Stats).NumReferences;
    *puVar1 = *puVar1 + 1;
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// AddStableReferenceArray @ 142019b40

/* WARNING: Removing unreachable block (ram,0x000142019c3d) */
/* WARNING: Removing unreachable block (ram,0x000142019c45) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<12>::AddStableReferenceArray
          (TDebugReachabilityCollector<12> *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UObjectBaseUtility *this_00;
  bool bVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined4 local_res10 [2];
  FString local_38;
  
  bVar4 = false;
  local_res10[0] = 0;
  pFVar6 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pFVar2 = pFVar6 + (longlong)iVar3 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar6 == pFVar2) break;
    this_00 = (UObjectBaseUtility *)this->Context->ReferencingObject;
    if ((*(UObjectBase **)pFVar6 != (UObjectBase *)0x0) &&
       (bVar5 = UObjectBase::IsValidLowLevelFast(*(UObjectBase **)pFVar6,true), !bVar5)) {
      if (this_00 != (UObjectBaseUtility *)0x0) {
        bVar4 = true;
        UObjectBaseUtility::GetFullName(this_00,&local_38,(UObject *)0x0,None);
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<12>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar4) &&
         (bVar4 = false, local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<12>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,(UObject *)this_00,(UObject **)pFVar6,
               (FMemberId)0x20000000,*(EOrigin *)((longlong)&this->_padding_ + 1),
               SUB81(this->_padding_,0));
    puVar1 = &(this->Context->Stats).NumReferences;
    *puVar1 = *puVar1 + 1;
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// AddStableReferenceArray @ 142019cb0

/* WARNING: Removing unreachable block (ram,0x000142019dad) */
/* WARNING: Removing unreachable block (ram,0x000142019db5) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<12>::AddStableReferenceArray
          (TDebugReachabilityCollector<12> *this,
          TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UObjectBaseUtility *this_00;
  bool bVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined4 local_res10 [2];
  FString local_38;
  
  bVar4 = false;
  local_res10[0] = 0;
  pFVar6 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pFVar2 = pFVar6 + (longlong)iVar3 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UObject>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar6 == pFVar2) break;
    this_00 = (UObjectBaseUtility *)this->Context->ReferencingObject;
    if ((*(UObjectBase **)pFVar6 != (UObjectBase *)0x0) &&
       (bVar5 = UObjectBase::IsValidLowLevelFast(*(UObjectBase **)pFVar6,true), !bVar5)) {
      if (this_00 != (UObjectBaseUtility *)0x0) {
        bVar4 = true;
        UObjectBaseUtility::GetFullName(this_00,&local_38,(UObject *)0x0,None);
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<12>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar4) &&
         (bVar4 = false, local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<12>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,(UObject *)this_00,(UObject **)pFVar6,
               (FMemberId)0x20000000,*(EOrigin *)((longlong)&this->_padding_ + 1),
               SUB81(this->_padding_,0));
    puVar1 = &(this->Context->Stats).NumReferences;
    *puVar1 = *puVar1 + 1;
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// AddStableReferenceArray @ 142019e20

/* WARNING: Removing unreachable block (ram,0x000142019f1d) */
/* WARNING: Removing unreachable block (ram,0x000142019f25) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<13>::AddStableReferenceArray
          (TDebugReachabilityCollector<13> *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UObjectBaseUtility *this_00;
  bool bVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined4 local_res10 [2];
  FString local_38;
  
  bVar4 = false;
  local_res10[0] = 0;
  pFVar6 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pFVar2 = pFVar6 + (longlong)iVar3 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar6 == pFVar2) break;
    this_00 = (UObjectBaseUtility *)this->Context->ReferencingObject;
    if ((*(UObjectBase **)pFVar6 != (UObjectBase *)0x0) &&
       (bVar5 = UObjectBase::IsValidLowLevelFast(*(UObjectBase **)pFVar6,true), !bVar5)) {
      if (this_00 != (UObjectBaseUtility *)0x0) {
        bVar4 = true;
        UObjectBaseUtility::GetFullName(this_00,&local_38,(UObject *)0x0,None);
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<13>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar4) &&
         (bVar4 = false, local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<13>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,(UObject *)this_00,(UObject **)pFVar6,
               (FMemberId)0x20000000,*(EOrigin *)((longlong)&this->_padding_ + 1),
               SUB81(this->_padding_,0));
    puVar1 = &(this->Context->Stats).NumReferences;
    *puVar1 = *puVar1 + 1;
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// AddStableReferenceArray @ 142019f90

/* WARNING: Removing unreachable block (ram,0x00014201a08d) */
/* WARNING: Removing unreachable block (ram,0x00014201a095) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<13>::AddStableReferenceArray
          (TDebugReachabilityCollector<13> *this,
          TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *param_1)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UObjectBaseUtility *this_00;
  bool bVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined4 local_res10 [2];
  FString local_38;
  
  bVar4 = false;
  local_res10[0] = 0;
  pFVar6 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pFVar2 = pFVar6 + (longlong)iVar3 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UObject>,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar6 == pFVar2) break;
    this_00 = (UObjectBaseUtility *)this->Context->ReferencingObject;
    if ((*(UObjectBase **)pFVar6 != (UObjectBase *)0x0) &&
       (bVar5 = UObjectBase::IsValidLowLevelFast(*(UObjectBase **)pFVar6,true), !bVar5)) {
      if (this_00 != (UObjectBaseUtility *)0x0) {
        bVar4 = true;
        UObjectBaseUtility::GetFullName(this_00,&local_38,(UObject *)0x0,None);
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<13>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar4) &&
         (bVar4 = false, local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<13>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,(UObject *)this_00,(UObject **)pFVar6,
               (FMemberId)0x20000000,*(EOrigin *)((longlong)&this->_padding_ + 1),
               SUB81(this->_padding_,0));
    puVar1 = &(this->Context->Stats).NumReferences;
    *puVar1 = *puVar1 + 1;
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// AddStableReferenceSet @ 14201a980

/* WARNING: Removing unreachable block (ram,0x00014201ac09) */
/* WARNING: Removing unreachable block (ram,0x00014201ac11) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<1>::AddStableReferenceSet
          (TDebugReachabilityCollector<1> *this,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  UObjectBaseUtility *this_00;
  UObjectBase *this_01;
  code *pcVar5;
  bool bVar6;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  UObject **ppUVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 local_res18 [2];
  int local_res20;
  FString local_a8;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  bVar6 = false;
  puVar1 = &(param_1->Elements).field_0x10;
  local_res18[0] = 0;
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14201aa2e;
      uVar10 = puVar14[lVar9 + 1];
    }
    uStack_8c = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iStack_7c = local_res20 + -1 + local_78;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_14201aa2e:
  uVar10 = *(uint *)&(param_1->Elements).field_0x28;
  iStack_70 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  uStack_80 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar10 != uVar4) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar10 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14201ab30;
      uVar10 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar10) {
      uVar10 = uVar4;
    }
  }
LAB_14201ab30:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_60.CurrentBitIndex == uVar10) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    break;
    ppUVar11 = (UObject **)
               ((longlong)TStack_60.CurrentBitIndex * 0x10 + *(longlong *)&pTVar7->Elements);
    this_00 = (UObjectBaseUtility *)this->Context->ReferencingObject;
    this_01 = (UObjectBase *)*ppUVar11;
    if ((this_01 != (UObjectBase *)0x0) &&
       (bVar8 = UObjectBase::IsValidLowLevelFast(this_01,true), !bVar8)) {
      if (this_00 != (UObjectBaseUtility *)0x0) {
        bVar6 = true;
        UObjectBaseUtility::GetFullName(this_00,&local_a8,(UObject *)0x0,None);
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<1>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar6) &&
         (bVar6 = false, local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<1>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,(UObject *)this_00,ppUVar11,(FMemberId)0x20000000,
               *(EOrigin *)((longlong)&this->_padding_ + 1),SUB81(this->_padding_,0));
    puVar14 = &(this->Context->Stats).NumReferences;
    *puVar14 = *puVar14 + 1;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// AddStableReferenceSet @ 14201ac90

/* WARNING: Removing unreachable block (ram,0x00014201af19) */
/* WARNING: Removing unreachable block (ram,0x00014201af21) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<1>::AddStableReferenceSet
          (TDebugReachabilityCollector<1> *this,
          TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  UObjectBaseUtility *this_00;
  UObjectBase *this_01;
  code *pcVar5;
  bool bVar6;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  UObject **ppUVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 local_res18 [2];
  int local_res20;
  FString local_a8;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  bVar6 = false;
  puVar1 = &(param_1->Elements).field_0x10;
  local_res18[0] = 0;
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14201ad3e;
      uVar10 = puVar14[lVar9 + 1];
    }
    uStack_8c = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iStack_7c = local_res20 + -1 + local_78;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_14201ad3e:
  uVar10 = *(uint *)&(param_1->Elements).field_0x28;
  iStack_70 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  uStack_80 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar10 != uVar4) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14201ae40;
      uVar10 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar10) {
      uVar10 = uVar4;
    }
  }
LAB_14201ae40:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_60.CurrentBitIndex == uVar10) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    break;
    ppUVar12 = (UObject **)
               (*(longlong *)&pTVar7->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10);
    this_00 = (UObjectBaseUtility *)this->Context->ReferencingObject;
    this_01 = (UObjectBase *)*ppUVar12;
    if ((this_01 != (UObjectBase *)0x0) &&
       (bVar8 = UObjectBase::IsValidLowLevelFast(this_01,true), !bVar8)) {
      if (this_00 != (UObjectBaseUtility *)0x0) {
        bVar6 = true;
        UObjectBaseUtility::GetFullName(this_00,&local_a8,(UObject *)0x0,None);
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<1>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar6) &&
         (bVar6 = false, local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<1>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,(UObject *)this_00,ppUVar12,(FMemberId)0x20000000,
               *(EOrigin *)((longlong)&this->_padding_ + 1),SUB81(this->_padding_,0));
    puVar14 = &(this->Context->Stats).NumReferences;
    *puVar14 = *puVar14 + 1;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// AddStableReferenceSet @ 14201afa0

/* WARNING: Removing unreachable block (ram,0x00014201b229) */
/* WARNING: Removing unreachable block (ram,0x00014201b231) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<4>::AddStableReferenceSet
          (TDebugReachabilityCollector<4> *this,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  UObjectBaseUtility *this_00;
  UObjectBase *this_01;
  code *pcVar5;
  bool bVar6;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  UObject **ppUVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 local_res18 [2];
  int local_res20;
  FString local_a8;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  bVar6 = false;
  puVar1 = &(param_1->Elements).field_0x10;
  local_res18[0] = 0;
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14201b04e;
      uVar10 = puVar14[lVar9 + 1];
    }
    uStack_8c = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iStack_7c = local_res20 + -1 + local_78;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_14201b04e:
  uVar10 = *(uint *)&(param_1->Elements).field_0x28;
  iStack_70 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  uStack_80 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar10 != uVar4) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar10 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14201b150;
      uVar10 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar10) {
      uVar10 = uVar4;
    }
  }
LAB_14201b150:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_60.CurrentBitIndex == uVar10) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    break;
    ppUVar11 = (UObject **)
               ((longlong)TStack_60.CurrentBitIndex * 0x10 + *(longlong *)&pTVar7->Elements);
    this_00 = (UObjectBaseUtility *)this->Context->ReferencingObject;
    this_01 = (UObjectBase *)*ppUVar11;
    if ((this_01 != (UObjectBase *)0x0) &&
       (bVar8 = UObjectBase::IsValidLowLevelFast(this_01,true), !bVar8)) {
      if (this_00 != (UObjectBaseUtility *)0x0) {
        bVar6 = true;
        UObjectBaseUtility::GetFullName(this_00,&local_a8,(UObject *)0x0,None);
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<4>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar6) &&
         (bVar6 = false, local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<4>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,(UObject *)this_00,ppUVar11,(FMemberId)0x20000000,
               *(EOrigin *)((longlong)&this->_padding_ + 1),SUB81(this->_padding_,0));
    puVar14 = &(this->Context->Stats).NumReferences;
    *puVar14 = *puVar14 + 1;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// AddStableReferenceSet @ 14201b2b0

/* WARNING: Removing unreachable block (ram,0x00014201b539) */
/* WARNING: Removing unreachable block (ram,0x00014201b541) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<4>::AddStableReferenceSet
          (TDebugReachabilityCollector<4> *this,
          TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  UObjectBaseUtility *this_00;
  UObjectBase *this_01;
  code *pcVar5;
  bool bVar6;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  UObject **ppUVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 local_res18 [2];
  int local_res20;
  FString local_a8;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  bVar6 = false;
  puVar1 = &(param_1->Elements).field_0x10;
  local_res18[0] = 0;
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14201b35e;
      uVar10 = puVar14[lVar9 + 1];
    }
    uStack_8c = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iStack_7c = local_res20 + -1 + local_78;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_14201b35e:
  uVar10 = *(uint *)&(param_1->Elements).field_0x28;
  iStack_70 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  uStack_80 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar10 != uVar4) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14201b460;
      uVar10 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar10) {
      uVar10 = uVar4;
    }
  }
LAB_14201b460:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_60.CurrentBitIndex == uVar10) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    break;
    ppUVar12 = (UObject **)
               (*(longlong *)&pTVar7->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10);
    this_00 = (UObjectBaseUtility *)this->Context->ReferencingObject;
    this_01 = (UObjectBase *)*ppUVar12;
    if ((this_01 != (UObjectBase *)0x0) &&
       (bVar8 = UObjectBase::IsValidLowLevelFast(this_01,true), !bVar8)) {
      if (this_00 != (UObjectBaseUtility *)0x0) {
        bVar6 = true;
        UObjectBaseUtility::GetFullName(this_00,&local_a8,(UObject *)0x0,None);
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<4>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar6) &&
         (bVar6 = false, local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<4>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,(UObject *)this_00,ppUVar12,(FMemberId)0x20000000,
               *(EOrigin *)((longlong)&this->_padding_ + 1),SUB81(this->_padding_,0));
    puVar14 = &(this->Context->Stats).NumReferences;
    *puVar14 = *puVar14 + 1;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// AddStableReferenceSet @ 14201b5c0

/* WARNING: Removing unreachable block (ram,0x00014201b849) */
/* WARNING: Removing unreachable block (ram,0x00014201b851) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<5>::AddStableReferenceSet
          (TDebugReachabilityCollector<5> *this,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  UObjectBaseUtility *this_00;
  UObjectBase *this_01;
  code *pcVar5;
  bool bVar6;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  UObject **ppUVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 local_res18 [2];
  int local_res20;
  FString local_a8;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  bVar6 = false;
  puVar1 = &(param_1->Elements).field_0x10;
  local_res18[0] = 0;
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14201b66e;
      uVar10 = puVar14[lVar9 + 1];
    }
    uStack_8c = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iStack_7c = local_res20 + -1 + local_78;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_14201b66e:
  uVar10 = *(uint *)&(param_1->Elements).field_0x28;
  iStack_70 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  uStack_80 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar10 != uVar4) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar10 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14201b770;
      uVar10 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar10) {
      uVar10 = uVar4;
    }
  }
LAB_14201b770:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_60.CurrentBitIndex == uVar10) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    break;
    ppUVar11 = (UObject **)
               ((longlong)TStack_60.CurrentBitIndex * 0x10 + *(longlong *)&pTVar7->Elements);
    this_00 = (UObjectBaseUtility *)this->Context->ReferencingObject;
    this_01 = (UObjectBase *)*ppUVar11;
    if ((this_01 != (UObjectBase *)0x0) &&
       (bVar8 = UObjectBase::IsValidLowLevelFast(this_01,true), !bVar8)) {
      if (this_00 != (UObjectBaseUtility *)0x0) {
        bVar6 = true;
        UObjectBaseUtility::GetFullName(this_00,&local_a8,(UObject *)0x0,None);
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<5>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar6) &&
         (bVar6 = false, local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<5>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,(UObject *)this_00,ppUVar11,(FMemberId)0x20000000,
               *(EOrigin *)((longlong)&this->_padding_ + 1),SUB81(this->_padding_,0));
    puVar14 = &(this->Context->Stats).NumReferences;
    *puVar14 = *puVar14 + 1;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// AddStableReferenceSet @ 14201b8d0

/* WARNING: Removing unreachable block (ram,0x00014201bb59) */
/* WARNING: Removing unreachable block (ram,0x00014201bb61) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<5>::AddStableReferenceSet
          (TDebugReachabilityCollector<5> *this,
          TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  UObjectBaseUtility *this_00;
  UObjectBase *this_01;
  code *pcVar5;
  bool bVar6;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  UObject **ppUVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 local_res18 [2];
  int local_res20;
  FString local_a8;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  bVar6 = false;
  puVar1 = &(param_1->Elements).field_0x10;
  local_res18[0] = 0;
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14201b97e;
      uVar10 = puVar14[lVar9 + 1];
    }
    uStack_8c = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iStack_7c = local_res20 + -1 + local_78;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_14201b97e:
  uVar10 = *(uint *)&(param_1->Elements).field_0x28;
  iStack_70 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  uStack_80 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar10 != uVar4) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14201ba80;
      uVar10 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar10) {
      uVar10 = uVar4;
    }
  }
LAB_14201ba80:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_60.CurrentBitIndex == uVar10) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    break;
    ppUVar12 = (UObject **)
               (*(longlong *)&pTVar7->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10);
    this_00 = (UObjectBaseUtility *)this->Context->ReferencingObject;
    this_01 = (UObjectBase *)*ppUVar12;
    if ((this_01 != (UObjectBase *)0x0) &&
       (bVar8 = UObjectBase::IsValidLowLevelFast(this_01,true), !bVar8)) {
      if (this_00 != (UObjectBaseUtility *)0x0) {
        bVar6 = true;
        UObjectBaseUtility::GetFullName(this_00,&local_a8,(UObject *)0x0,None);
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<5>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar6) &&
         (bVar6 = false, local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<5>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,(UObject *)this_00,ppUVar12,(FMemberId)0x20000000,
               *(EOrigin *)((longlong)&this->_padding_ + 1),SUB81(this->_padding_,0));
    puVar14 = &(this->Context->Stats).NumReferences;
    *puVar14 = *puVar14 + 1;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// AddStableReferenceSet @ 14201bbe0

/* WARNING: Removing unreachable block (ram,0x00014201be69) */
/* WARNING: Removing unreachable block (ram,0x00014201be71) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<8>::AddStableReferenceSet
          (TDebugReachabilityCollector<8> *this,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  UObjectBaseUtility *this_00;
  UObjectBase *this_01;
  code *pcVar5;
  bool bVar6;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  UObject **ppUVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 local_res18 [2];
  int local_res20;
  FString local_a8;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  bVar6 = false;
  puVar1 = &(param_1->Elements).field_0x10;
  local_res18[0] = 0;
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14201bc8e;
      uVar10 = puVar14[lVar9 + 1];
    }
    uStack_8c = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iStack_7c = local_res20 + -1 + local_78;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_14201bc8e:
  uVar10 = *(uint *)&(param_1->Elements).field_0x28;
  iStack_70 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  uStack_80 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar10 != uVar4) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar10 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14201bd90;
      uVar10 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar10) {
      uVar10 = uVar4;
    }
  }
LAB_14201bd90:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_60.CurrentBitIndex == uVar10) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    break;
    ppUVar11 = (UObject **)
               ((longlong)TStack_60.CurrentBitIndex * 0x10 + *(longlong *)&pTVar7->Elements);
    this_00 = (UObjectBaseUtility *)this->Context->ReferencingObject;
    this_01 = (UObjectBase *)*ppUVar11;
    if ((this_01 != (UObjectBase *)0x0) &&
       (bVar8 = UObjectBase::IsValidLowLevelFast(this_01,true), !bVar8)) {
      if (this_00 != (UObjectBaseUtility *)0x0) {
        bVar6 = true;
        UObjectBaseUtility::GetFullName(this_00,&local_a8,(UObject *)0x0,None);
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<8>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar6) &&
         (bVar6 = false, local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<8>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,(UObject *)this_00,ppUVar11,(FMemberId)0x20000000,
               *(EOrigin *)((longlong)&this->_padding_ + 1),SUB81(this->_padding_,0));
    puVar14 = &(this->Context->Stats).NumReferences;
    *puVar14 = *puVar14 + 1;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// AddStableReferenceSet @ 14201bef0

/* WARNING: Removing unreachable block (ram,0x00014201c179) */
/* WARNING: Removing unreachable block (ram,0x00014201c181) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<8>::AddStableReferenceSet
          (TDebugReachabilityCollector<8> *this,
          TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  UObjectBaseUtility *this_00;
  UObjectBase *this_01;
  code *pcVar5;
  bool bVar6;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  UObject **ppUVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 local_res18 [2];
  int local_res20;
  FString local_a8;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  bVar6 = false;
  puVar1 = &(param_1->Elements).field_0x10;
  local_res18[0] = 0;
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14201bf9e;
      uVar10 = puVar14[lVar9 + 1];
    }
    uStack_8c = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iStack_7c = local_res20 + -1 + local_78;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_14201bf9e:
  uVar10 = *(uint *)&(param_1->Elements).field_0x28;
  iStack_70 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  uStack_80 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar10 != uVar4) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14201c0a0;
      uVar10 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar10) {
      uVar10 = uVar4;
    }
  }
LAB_14201c0a0:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_60.CurrentBitIndex == uVar10) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    break;
    ppUVar12 = (UObject **)
               (*(longlong *)&pTVar7->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10);
    this_00 = (UObjectBaseUtility *)this->Context->ReferencingObject;
    this_01 = (UObjectBase *)*ppUVar12;
    if ((this_01 != (UObjectBase *)0x0) &&
       (bVar8 = UObjectBase::IsValidLowLevelFast(this_01,true), !bVar8)) {
      if (this_00 != (UObjectBaseUtility *)0x0) {
        bVar6 = true;
        UObjectBaseUtility::GetFullName(this_00,&local_a8,(UObject *)0x0,None);
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<8>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar6) &&
         (bVar6 = false, local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<8>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,(UObject *)this_00,ppUVar12,(FMemberId)0x20000000,
               *(EOrigin *)((longlong)&this->_padding_ + 1),SUB81(this->_padding_,0));
    puVar14 = &(this->Context->Stats).NumReferences;
    *puVar14 = *puVar14 + 1;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// AddStableReferenceSet @ 14201c200

/* WARNING: Removing unreachable block (ram,0x00014201c489) */
/* WARNING: Removing unreachable block (ram,0x00014201c491) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<9>::AddStableReferenceSet
          (TDebugReachabilityCollector<9> *this,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  UObjectBaseUtility *this_00;
  UObjectBase *this_01;
  code *pcVar5;
  bool bVar6;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  UObject **ppUVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 local_res18 [2];
  int local_res20;
  FString local_a8;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  bVar6 = false;
  puVar1 = &(param_1->Elements).field_0x10;
  local_res18[0] = 0;
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14201c2ae;
      uVar10 = puVar14[lVar9 + 1];
    }
    uStack_8c = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iStack_7c = local_res20 + -1 + local_78;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_14201c2ae:
  uVar10 = *(uint *)&(param_1->Elements).field_0x28;
  iStack_70 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  uStack_80 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar10 != uVar4) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar10 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14201c3b0;
      uVar10 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar10) {
      uVar10 = uVar4;
    }
  }
LAB_14201c3b0:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_60.CurrentBitIndex == uVar10) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    break;
    ppUVar11 = (UObject **)
               ((longlong)TStack_60.CurrentBitIndex * 0x10 + *(longlong *)&pTVar7->Elements);
    this_00 = (UObjectBaseUtility *)this->Context->ReferencingObject;
    this_01 = (UObjectBase *)*ppUVar11;
    if ((this_01 != (UObjectBase *)0x0) &&
       (bVar8 = UObjectBase::IsValidLowLevelFast(this_01,true), !bVar8)) {
      if (this_00 != (UObjectBaseUtility *)0x0) {
        bVar6 = true;
        UObjectBaseUtility::GetFullName(this_00,&local_a8,(UObject *)0x0,None);
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<9>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar6) &&
         (bVar6 = false, local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<9>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,(UObject *)this_00,ppUVar11,(FMemberId)0x20000000,
               *(EOrigin *)((longlong)&this->_padding_ + 1),SUB81(this->_padding_,0));
    puVar14 = &(this->Context->Stats).NumReferences;
    *puVar14 = *puVar14 + 1;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// AddStableReferenceSet @ 14201c510

/* WARNING: Removing unreachable block (ram,0x00014201c799) */
/* WARNING: Removing unreachable block (ram,0x00014201c7a1) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<9>::AddStableReferenceSet
          (TDebugReachabilityCollector<9> *this,
          TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  UObjectBaseUtility *this_00;
  UObjectBase *this_01;
  code *pcVar5;
  bool bVar6;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  UObject **ppUVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 local_res18 [2];
  int local_res20;
  FString local_a8;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  bVar6 = false;
  puVar1 = &(param_1->Elements).field_0x10;
  local_res18[0] = 0;
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14201c5be;
      uVar10 = puVar14[lVar9 + 1];
    }
    uStack_8c = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iStack_7c = local_res20 + -1 + local_78;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_14201c5be:
  uVar10 = *(uint *)&(param_1->Elements).field_0x28;
  iStack_70 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  uStack_80 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar10 != uVar4) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14201c6c0;
      uVar10 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar10) {
      uVar10 = uVar4;
    }
  }
LAB_14201c6c0:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_60.CurrentBitIndex == uVar10) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    break;
    ppUVar12 = (UObject **)
               (*(longlong *)&pTVar7->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10);
    this_00 = (UObjectBaseUtility *)this->Context->ReferencingObject;
    this_01 = (UObjectBase *)*ppUVar12;
    if ((this_01 != (UObjectBase *)0x0) &&
       (bVar8 = UObjectBase::IsValidLowLevelFast(this_01,true), !bVar8)) {
      if (this_00 != (UObjectBaseUtility *)0x0) {
        bVar6 = true;
        UObjectBaseUtility::GetFullName(this_00,&local_a8,(UObject *)0x0,None);
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<9>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar6) &&
         (bVar6 = false, local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<9>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,(UObject *)this_00,ppUVar12,(FMemberId)0x20000000,
               *(EOrigin *)((longlong)&this->_padding_ + 1),SUB81(this->_padding_,0));
    puVar14 = &(this->Context->Stats).NumReferences;
    *puVar14 = *puVar14 + 1;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// AddStableReferenceSet @ 14201c820

/* WARNING: Removing unreachable block (ram,0x00014201caa9) */
/* WARNING: Removing unreachable block (ram,0x00014201cab1) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<0>::AddStableReferenceSet
          (TDebugReachabilityCollector<0> *this,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  UObjectBaseUtility *this_00;
  UObjectBase *this_01;
  code *pcVar5;
  bool bVar6;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  UObject **ppUVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 local_res18 [2];
  int local_res20;
  FString local_a8;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  bVar6 = false;
  puVar1 = &(param_1->Elements).field_0x10;
  local_res18[0] = 0;
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14201c8ce;
      uVar10 = puVar14[lVar9 + 1];
    }
    uStack_8c = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iStack_7c = local_res20 + -1 + local_78;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_14201c8ce:
  uVar10 = *(uint *)&(param_1->Elements).field_0x28;
  iStack_70 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  uStack_80 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar10 != uVar4) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar10 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14201c9d0;
      uVar10 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar10) {
      uVar10 = uVar4;
    }
  }
LAB_14201c9d0:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_60.CurrentBitIndex == uVar10) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    break;
    ppUVar11 = (UObject **)
               ((longlong)TStack_60.CurrentBitIndex * 0x10 + *(longlong *)&pTVar7->Elements);
    this_00 = (UObjectBaseUtility *)this->Context->ReferencingObject;
    this_01 = (UObjectBase *)*ppUVar11;
    if ((this_01 != (UObjectBase *)0x0) &&
       (bVar8 = UObjectBase::IsValidLowLevelFast(this_01,true), !bVar8)) {
      if (this_00 != (UObjectBaseUtility *)0x0) {
        bVar6 = true;
        UObjectBaseUtility::GetFullName(this_00,&local_a8,(UObject *)0x0,None);
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<0>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar6) &&
         (bVar6 = false, local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<0>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,(UObject *)this_00,ppUVar11,(FMemberId)0x20000000,
               *(EOrigin *)((longlong)&this->_padding_ + 1),SUB81(this->_padding_,0));
    puVar14 = &(this->Context->Stats).NumReferences;
    *puVar14 = *puVar14 + 1;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// AddStableReferenceSet @ 14201cb30

/* WARNING: Removing unreachable block (ram,0x00014201cdb9) */
/* WARNING: Removing unreachable block (ram,0x00014201cdc1) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<0>::AddStableReferenceSet
          (TDebugReachabilityCollector<0> *this,
          TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  UObjectBaseUtility *this_00;
  UObjectBase *this_01;
  code *pcVar5;
  bool bVar6;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  UObject **ppUVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 local_res18 [2];
  int local_res20;
  FString local_a8;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  bVar6 = false;
  puVar1 = &(param_1->Elements).field_0x10;
  local_res18[0] = 0;
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14201cbde;
      uVar10 = puVar14[lVar9 + 1];
    }
    uStack_8c = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iStack_7c = local_res20 + -1 + local_78;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_14201cbde:
  uVar10 = *(uint *)&(param_1->Elements).field_0x28;
  iStack_70 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  uStack_80 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar10 != uVar4) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14201cce0;
      uVar10 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar10) {
      uVar10 = uVar4;
    }
  }
LAB_14201cce0:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_60.CurrentBitIndex == uVar10) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    break;
    ppUVar12 = (UObject **)
               (*(longlong *)&pTVar7->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10);
    this_00 = (UObjectBaseUtility *)this->Context->ReferencingObject;
    this_01 = (UObjectBase *)*ppUVar12;
    if ((this_01 != (UObjectBase *)0x0) &&
       (bVar8 = UObjectBase::IsValidLowLevelFast(this_01,true), !bVar8)) {
      if (this_00 != (UObjectBaseUtility *)0x0) {
        bVar6 = true;
        UObjectBaseUtility::GetFullName(this_00,&local_a8,(UObject *)0x0,None);
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<0>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar6) &&
         (bVar6 = false, local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<0>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,(UObject *)this_00,ppUVar12,(FMemberId)0x20000000,
               *(EOrigin *)((longlong)&this->_padding_ + 1),SUB81(this->_padding_,0));
    puVar14 = &(this->Context->Stats).NumReferences;
    *puVar14 = *puVar14 + 1;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// AddStableReferenceSet @ 14201ce40

/* WARNING: Removing unreachable block (ram,0x00014201d0c9) */
/* WARNING: Removing unreachable block (ram,0x00014201d0d1) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<12>::AddStableReferenceSet
          (TDebugReachabilityCollector<12> *this,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  UObjectBaseUtility *this_00;
  UObjectBase *this_01;
  code *pcVar5;
  bool bVar6;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  UObject **ppUVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 local_res18 [2];
  int local_res20;
  FString local_a8;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  bVar6 = false;
  puVar1 = &(param_1->Elements).field_0x10;
  local_res18[0] = 0;
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14201ceee;
      uVar10 = puVar14[lVar9 + 1];
    }
    uStack_8c = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iStack_7c = local_res20 + -1 + local_78;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_14201ceee:
  uVar10 = *(uint *)&(param_1->Elements).field_0x28;
  iStack_70 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  uStack_80 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar10 != uVar4) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar10 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14201cff0;
      uVar10 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar10) {
      uVar10 = uVar4;
    }
  }
LAB_14201cff0:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_60.CurrentBitIndex == uVar10) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    break;
    ppUVar11 = (UObject **)
               ((longlong)TStack_60.CurrentBitIndex * 0x10 + *(longlong *)&pTVar7->Elements);
    this_00 = (UObjectBaseUtility *)this->Context->ReferencingObject;
    this_01 = (UObjectBase *)*ppUVar11;
    if ((this_01 != (UObjectBase *)0x0) &&
       (bVar8 = UObjectBase::IsValidLowLevelFast(this_01,true), !bVar8)) {
      if (this_00 != (UObjectBaseUtility *)0x0) {
        bVar6 = true;
        UObjectBaseUtility::GetFullName(this_00,&local_a8,(UObject *)0x0,None);
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<12>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar6) &&
         (bVar6 = false, local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<12>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,(UObject *)this_00,ppUVar11,(FMemberId)0x20000000,
               *(EOrigin *)((longlong)&this->_padding_ + 1),SUB81(this->_padding_,0));
    puVar14 = &(this->Context->Stats).NumReferences;
    *puVar14 = *puVar14 + 1;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// AddStableReferenceSet @ 14201d150

/* WARNING: Removing unreachable block (ram,0x00014201d3d9) */
/* WARNING: Removing unreachable block (ram,0x00014201d3e1) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<12>::AddStableReferenceSet
          (TDebugReachabilityCollector<12> *this,
          TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  UObjectBaseUtility *this_00;
  UObjectBase *this_01;
  code *pcVar5;
  bool bVar6;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  UObject **ppUVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 local_res18 [2];
  int local_res20;
  FString local_a8;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  bVar6 = false;
  puVar1 = &(param_1->Elements).field_0x10;
  local_res18[0] = 0;
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14201d1fe;
      uVar10 = puVar14[lVar9 + 1];
    }
    uStack_8c = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iStack_7c = local_res20 + -1 + local_78;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_14201d1fe:
  uVar10 = *(uint *)&(param_1->Elements).field_0x28;
  iStack_70 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  uStack_80 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar10 != uVar4) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14201d300;
      uVar10 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar10) {
      uVar10 = uVar4;
    }
  }
LAB_14201d300:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_60.CurrentBitIndex == uVar10) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    break;
    ppUVar12 = (UObject **)
               (*(longlong *)&pTVar7->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10);
    this_00 = (UObjectBaseUtility *)this->Context->ReferencingObject;
    this_01 = (UObjectBase *)*ppUVar12;
    if ((this_01 != (UObjectBase *)0x0) &&
       (bVar8 = UObjectBase::IsValidLowLevelFast(this_01,true), !bVar8)) {
      if (this_00 != (UObjectBaseUtility *)0x0) {
        bVar6 = true;
        UObjectBaseUtility::GetFullName(this_00,&local_a8,(UObject *)0x0,None);
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<12>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar6) &&
         (bVar6 = false, local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<12>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,(UObject *)this_00,ppUVar12,(FMemberId)0x20000000,
               *(EOrigin *)((longlong)&this->_padding_ + 1),SUB81(this->_padding_,0));
    puVar14 = &(this->Context->Stats).NumReferences;
    *puVar14 = *puVar14 + 1;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// AddStableReferenceSet @ 14201d460

/* WARNING: Removing unreachable block (ram,0x00014201d6e9) */
/* WARNING: Removing unreachable block (ram,0x00014201d6f1) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<13>::AddStableReferenceSet
          (TDebugReachabilityCollector<13> *this,
          TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  UObjectBaseUtility *this_00;
  UObjectBase *this_01;
  code *pcVar5;
  bool bVar6;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  UObject **ppUVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 local_res18 [2];
  int local_res20;
  FString local_a8;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  bVar6 = false;
  puVar1 = &(param_1->Elements).field_0x10;
  local_res18[0] = 0;
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14201d50e;
      uVar10 = puVar14[lVar9 + 1];
    }
    uStack_8c = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iStack_7c = local_res20 + -1 + local_78;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_14201d50e:
  uVar10 = *(uint *)&(param_1->Elements).field_0x28;
  iStack_70 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  uStack_80 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar10 != uVar4) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar10 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14201d610;
      uVar10 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar10) {
      uVar10 = uVar4;
    }
  }
LAB_14201d610:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_60.CurrentBitIndex == uVar10) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    break;
    ppUVar11 = (UObject **)
               ((longlong)TStack_60.CurrentBitIndex * 0x10 + *(longlong *)&pTVar7->Elements);
    this_00 = (UObjectBaseUtility *)this->Context->ReferencingObject;
    this_01 = (UObjectBase *)*ppUVar11;
    if ((this_01 != (UObjectBase *)0x0) &&
       (bVar8 = UObjectBase::IsValidLowLevelFast(this_01,true), !bVar8)) {
      if (this_00 != (UObjectBaseUtility *)0x0) {
        bVar6 = true;
        UObjectBaseUtility::GetFullName(this_00,&local_a8,(UObject *)0x0,None);
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<13>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar6) &&
         (bVar6 = false, local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<13>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,(UObject *)this_00,ppUVar11,(FMemberId)0x20000000,
               *(EOrigin *)((longlong)&this->_padding_ + 1),SUB81(this->_padding_,0));
    puVar14 = &(this->Context->Stats).NumReferences;
    *puVar14 = *puVar14 + 1;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// AddStableReferenceSet @ 14201d770

/* WARNING: Removing unreachable block (ram,0x00014201d9f9) */
/* WARNING: Removing unreachable block (ram,0x00014201da01) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<13>::AddStableReferenceSet
          (TDebugReachabilityCollector<13> *this,
          TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  UObjectBaseUtility *this_00;
  UObjectBase *this_01;
  code *pcVar5;
  bool bVar6;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  UObject **ppUVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 local_res18 [2];
  int local_res20;
  FString local_a8;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  bVar6 = false;
  puVar1 = &(param_1->Elements).field_0x10;
  local_res18[0] = 0;
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  iStack_90 = 0;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14201d81e;
      uVar10 = puVar14[lVar9 + 1];
    }
    uStack_8c = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iStack_7c = local_res20 + -1 + local_78;
    if (iVar3 < iStack_7c) {
      iStack_7c = iVar3;
    }
  }
LAB_14201d81e:
  uVar10 = *(uint *)&(param_1->Elements).field_0x28;
  iStack_70 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  uStack_80 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = param_1;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar10 != uVar4) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14201d920;
      uVar10 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar10) {
      uVar10 = uVar4;
    }
  }
LAB_14201d920:
  while( true ) {
    pTVar7 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_60.CurrentBitIndex == uVar10) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    break;
    ppUVar12 = (UObject **)
               (*(longlong *)&pTVar7->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10);
    this_00 = (UObjectBaseUtility *)this->Context->ReferencingObject;
    this_01 = (UObjectBase *)*ppUVar12;
    if ((this_01 != (UObjectBase *)0x0) &&
       (bVar8 = UObjectBase::IsValidLowLevelFast(this_01,true), !bVar8)) {
      if (this_00 != (UObjectBaseUtility *)0x0) {
        bVar6 = true;
        UObjectBaseUtility::GetFullName(this_00,&local_a8,(UObject *)0x0,None);
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<13>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar6) &&
         (bVar6 = false, local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<13>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,(UObject *)this_00,ppUVar12,(FMemberId)0x20000000,
               *(EOrigin *)((longlong)&this->_padding_ + 1),SUB81(this->_padding_,0));
    puVar14 = &(this->Context->Stats).NumReferences;
    *puVar14 = *puVar14 + 1;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// HandleObjectReference @ 142057b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<1>::HandleObjectReference
          (TDebugReachabilityCollector<1> *this,UObject **param_1,UObject *param_2,
          FProperty *param_3)

{
  uint *puVar1;
  bool bVar2;
  bool bVar3;
  FString *pFVar4;
  FString local_38;
  FString local_28;
  
  bVar2 = false;
  if (((UObjectBase *)*param_1 != (UObjectBase *)0x0) &&
     (bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*param_1,true), !bVar3)) {
    if (param_3 != (FProperty *)0x0) {
      pFVar4 = FField::GetFullName((FField *)param_3,&local_28);
      if ((pFVar4->Data).ArrayNum == 0) {
        bVar2 = true;
      }
      else {
        bVar2 = true;
      }
    }
    if (param_2 != (UObject *)0x0) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_38,(UObject *)0x0,None);
    }
    Logging::Private::BasicFatalLog
              (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<1>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
    if ((param_2 != (UObject *)0x0) &&
       (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  TDebugReachabilityProcessor<1>::HandleTokenStreamObjectReference
            (this->Processor,this->Context,param_2,param_1,(FMemberId)0x20000000,
             *(EOrigin *)((longlong)&this->_padding_ + 1),SUB81(this->_padding_,0));
  puVar1 = &(this->Context->Stats).NumReferences;
  *puVar1 = *puVar1 + 1;
  return;
}

// HandleObjectReference @ 142057ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<4>::HandleObjectReference
          (TDebugReachabilityCollector<4> *this,UObject **param_1,UObject *param_2,
          FProperty *param_3)

{
  uint *puVar1;
  bool bVar2;
  bool bVar3;
  FString *pFVar4;
  FString local_38;
  FString local_28;
  
  bVar2 = false;
  if (((UObjectBase *)*param_1 != (UObjectBase *)0x0) &&
     (bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*param_1,true), !bVar3)) {
    if (param_3 != (FProperty *)0x0) {
      pFVar4 = FField::GetFullName((FField *)param_3,&local_28);
      if ((pFVar4->Data).ArrayNum == 0) {
        bVar2 = true;
      }
      else {
        bVar2 = true;
      }
    }
    if (param_2 != (UObject *)0x0) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_38,(UObject *)0x0,None);
    }
    Logging::Private::BasicFatalLog
              (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<4>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
    if ((param_2 != (UObject *)0x0) &&
       (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  TDebugReachabilityProcessor<4>::HandleTokenStreamObjectReference
            (this->Processor,this->Context,param_2,param_1,(FMemberId)0x20000000,
             *(EOrigin *)((longlong)&this->_padding_ + 1),SUB81(this->_padding_,0));
  puVar1 = &(this->Context->Stats).NumReferences;
  *puVar1 = *puVar1 + 1;
  return;
}

// HandleObjectReference @ 142057e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<5>::HandleObjectReference
          (TDebugReachabilityCollector<5> *this,UObject **param_1,UObject *param_2,
          FProperty *param_3)

{
  uint *puVar1;
  bool bVar2;
  bool bVar3;
  FString *pFVar4;
  FString local_38;
  FString local_28;
  
  bVar2 = false;
  if (((UObjectBase *)*param_1 != (UObjectBase *)0x0) &&
     (bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*param_1,true), !bVar3)) {
    if (param_3 != (FProperty *)0x0) {
      pFVar4 = FField::GetFullName((FField *)param_3,&local_28);
      if ((pFVar4->Data).ArrayNum == 0) {
        bVar2 = true;
      }
      else {
        bVar2 = true;
      }
    }
    if (param_2 != (UObject *)0x0) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_38,(UObject *)0x0,None);
    }
    Logging::Private::BasicFatalLog
              (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<5>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
    if ((param_2 != (UObject *)0x0) &&
       (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  TDebugReachabilityProcessor<5>::HandleTokenStreamObjectReference
            (this->Processor,this->Context,param_2,param_1,(FMemberId)0x20000000,
             *(EOrigin *)((longlong)&this->_padding_ + 1),SUB81(this->_padding_,0));
  puVar1 = &(this->Context->Stats).NumReferences;
  *puVar1 = *puVar1 + 1;
  return;
}

// HandleObjectReference @ 142057fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<8>::HandleObjectReference
          (TDebugReachabilityCollector<8> *this,UObject **param_1,UObject *param_2,
          FProperty *param_3)

{
  uint *puVar1;
  bool bVar2;
  bool bVar3;
  FString *pFVar4;
  FString local_38;
  FString local_28;
  
  bVar2 = false;
  if (((UObjectBase *)*param_1 != (UObjectBase *)0x0) &&
     (bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*param_1,true), !bVar3)) {
    if (param_3 != (FProperty *)0x0) {
      pFVar4 = FField::GetFullName((FField *)param_3,&local_28);
      if ((pFVar4->Data).ArrayNum == 0) {
        bVar2 = true;
      }
      else {
        bVar2 = true;
      }
    }
    if (param_2 != (UObject *)0x0) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_38,(UObject *)0x0,None);
    }
    Logging::Private::BasicFatalLog
              (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<8>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
    if ((param_2 != (UObject *)0x0) &&
       (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  TDebugReachabilityProcessor<8>::HandleTokenStreamObjectReference
            (this->Processor,this->Context,param_2,param_1,(FMemberId)0x20000000,
             *(EOrigin *)((longlong)&this->_padding_ + 1),SUB81(this->_padding_,0));
  puVar1 = &(this->Context->Stats).NumReferences;
  *puVar1 = *puVar1 + 1;
  return;
}

// HandleObjectReference @ 142058100

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<9>::HandleObjectReference
          (TDebugReachabilityCollector<9> *this,UObject **param_1,UObject *param_2,
          FProperty *param_3)

{
  uint *puVar1;
  bool bVar2;
  bool bVar3;
  FString *pFVar4;
  FString local_38;
  FString local_28;
  
  bVar2 = false;
  if (((UObjectBase *)*param_1 != (UObjectBase *)0x0) &&
     (bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*param_1,true), !bVar3)) {
    if (param_3 != (FProperty *)0x0) {
      pFVar4 = FField::GetFullName((FField *)param_3,&local_28);
      if ((pFVar4->Data).ArrayNum == 0) {
        bVar2 = true;
      }
      else {
        bVar2 = true;
      }
    }
    if (param_2 != (UObject *)0x0) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_38,(UObject *)0x0,None);
    }
    Logging::Private::BasicFatalLog
              (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<9>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
    if ((param_2 != (UObject *)0x0) &&
       (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  TDebugReachabilityProcessor<9>::HandleTokenStreamObjectReference
            (this->Processor,this->Context,param_2,param_1,(FMemberId)0x20000000,
             *(EOrigin *)((longlong)&this->_padding_ + 1),SUB81(this->_padding_,0));
  puVar1 = &(this->Context->Stats).NumReferences;
  *puVar1 = *puVar1 + 1;
  return;
}

// HandleObjectReference @ 142058260

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<0>::HandleObjectReference
          (TDebugReachabilityCollector<0> *this,UObject **param_1,UObject *param_2,
          FProperty *param_3)

{
  uint *puVar1;
  bool bVar2;
  bool bVar3;
  FString *pFVar4;
  FString local_38;
  FString local_28;
  
  bVar2 = false;
  if (((UObjectBase *)*param_1 != (UObjectBase *)0x0) &&
     (bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*param_1,true), !bVar3)) {
    if (param_3 != (FProperty *)0x0) {
      pFVar4 = FField::GetFullName((FField *)param_3,&local_28);
      if ((pFVar4->Data).ArrayNum == 0) {
        bVar2 = true;
      }
      else {
        bVar2 = true;
      }
    }
    if (param_2 != (UObject *)0x0) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_38,(UObject *)0x0,None);
    }
    Logging::Private::BasicFatalLog
              (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<0>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
    if ((param_2 != (UObject *)0x0) &&
       (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  TDebugReachabilityProcessor<0>::HandleTokenStreamObjectReference
            (this->Processor,this->Context,param_2,param_1,(FMemberId)0x20000000,
             *(EOrigin *)((longlong)&this->_padding_ + 1),SUB81(this->_padding_,0));
  puVar1 = &(this->Context->Stats).NumReferences;
  *puVar1 = *puVar1 + 1;
  return;
}

// HandleObjectReference @ 1420583c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<12>::HandleObjectReference
          (TDebugReachabilityCollector<12> *this,UObject **param_1,UObject *param_2,
          FProperty *param_3)

{
  uint *puVar1;
  bool bVar2;
  bool bVar3;
  FString *pFVar4;
  FString local_38;
  FString local_28;
  
  bVar2 = false;
  if (((UObjectBase *)*param_1 != (UObjectBase *)0x0) &&
     (bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*param_1,true), !bVar3)) {
    if (param_3 != (FProperty *)0x0) {
      pFVar4 = FField::GetFullName((FField *)param_3,&local_28);
      if ((pFVar4->Data).ArrayNum == 0) {
        bVar2 = true;
      }
      else {
        bVar2 = true;
      }
    }
    if (param_2 != (UObject *)0x0) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_38,(UObject *)0x0,None);
    }
    Logging::Private::BasicFatalLog
              (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<12>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
    if ((param_2 != (UObject *)0x0) &&
       (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  TDebugReachabilityProcessor<12>::HandleTokenStreamObjectReference
            (this->Processor,this->Context,param_2,param_1,(FMemberId)0x20000000,
             *(EOrigin *)((longlong)&this->_padding_ + 1),SUB81(this->_padding_,0));
  puVar1 = &(this->Context->Stats).NumReferences;
  *puVar1 = *puVar1 + 1;
  return;
}

// HandleObjectReference @ 142058520

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<13>::HandleObjectReference
          (TDebugReachabilityCollector<13> *this,UObject **param_1,UObject *param_2,
          FProperty *param_3)

{
  uint *puVar1;
  bool bVar2;
  bool bVar3;
  FString *pFVar4;
  FString local_38;
  FString local_28;
  
  bVar2 = false;
  if (((UObjectBase *)*param_1 != (UObjectBase *)0x0) &&
     (bVar3 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*param_1,true), !bVar3)) {
    if (param_3 != (FProperty *)0x0) {
      pFVar4 = FField::GetFullName((FField *)param_3,&local_28);
      if ((pFVar4->Data).ArrayNum == 0) {
        bVar2 = true;
      }
      else {
        bVar2 = true;
      }
    }
    if (param_2 != (UObject *)0x0) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_38,(UObject *)0x0,None);
    }
    Logging::Private::BasicFatalLog
              (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<13>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
    if ((param_2 != (UObject *)0x0) &&
       (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  TDebugReachabilityProcessor<13>::HandleTokenStreamObjectReference
            (this->Processor,this->Context,param_2,param_1,(FMemberId)0x20000000,
             *(EOrigin *)((longlong)&this->_padding_ + 1),SUB81(this->_padding_,0));
  puVar1 = &(this->Context->Stats).NumReferences;
  *puVar1 = *puVar1 + 1;
  return;
}

// HandleObjectReferences @ 14205a050

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<1>::HandleObjectReferences
          (TDebugReachabilityCollector<1> *this,UObject **param_1,int param_2,UObject *param_3,
          FProperty *param_4)

{
  uint *puVar1;
  UObject **ppUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FString local_48;
  FString local_38;
  
  bVar5 = false;
  bVar4 = false;
  if ((param_2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ppUVar2 = param_1 + param_2;
  for (; param_1 != ppUVar2; param_1 = param_1 + 1) {
    if (((UObjectBase *)*param_1 != (UObjectBase *)0x0) &&
       (bVar6 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*param_1,true), !bVar6)) {
      if (param_4 != (FProperty *)0x0) {
        bVar5 = true;
        FField::GetFullName((FField *)param_4,&local_38);
      }
      if (param_3 != (UObject *)0x0) {
        bVar4 = true;
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_3,&local_48,(UObject *)0x0,None)
        ;
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<1>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar4) &&
         (bVar4 = false, local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if ((bVar5) &&
         (bVar5 = false, local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<1>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,param_3,param_1,(FMemberId)0x20000000,
               *(EOrigin *)((longlong)&this->_padding_ + 1),SUB81(this->_padding_,0));
    puVar1 = &(this->Context->Stats).NumReferences;
    *puVar1 = *puVar1 + 1;
  }
  return;
}

// HandleObjectReferences @ 14205a1f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<4>::HandleObjectReferences
          (TDebugReachabilityCollector<4> *this,UObject **param_1,int param_2,UObject *param_3,
          FProperty *param_4)

{
  uint *puVar1;
  UObject **ppUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FString local_48;
  FString local_38;
  
  bVar5 = false;
  bVar4 = false;
  if ((param_2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ppUVar2 = param_1 + param_2;
  for (; param_1 != ppUVar2; param_1 = param_1 + 1) {
    if (((UObjectBase *)*param_1 != (UObjectBase *)0x0) &&
       (bVar6 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*param_1,true), !bVar6)) {
      if (param_4 != (FProperty *)0x0) {
        bVar5 = true;
        FField::GetFullName((FField *)param_4,&local_38);
      }
      if (param_3 != (UObject *)0x0) {
        bVar4 = true;
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_3,&local_48,(UObject *)0x0,None)
        ;
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<4>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar4) &&
         (bVar4 = false, local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if ((bVar5) &&
         (bVar5 = false, local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<4>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,param_3,param_1,(FMemberId)0x20000000,
               *(EOrigin *)((longlong)&this->_padding_ + 1),SUB81(this->_padding_,0));
    puVar1 = &(this->Context->Stats).NumReferences;
    *puVar1 = *puVar1 + 1;
  }
  return;
}

// HandleObjectReferences @ 14205a390

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<5>::HandleObjectReferences
          (TDebugReachabilityCollector<5> *this,UObject **param_1,int param_2,UObject *param_3,
          FProperty *param_4)

{
  uint *puVar1;
  UObject **ppUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FString local_48;
  FString local_38;
  
  bVar5 = false;
  bVar4 = false;
  if ((param_2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ppUVar2 = param_1 + param_2;
  for (; param_1 != ppUVar2; param_1 = param_1 + 1) {
    if (((UObjectBase *)*param_1 != (UObjectBase *)0x0) &&
       (bVar6 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*param_1,true), !bVar6)) {
      if (param_4 != (FProperty *)0x0) {
        bVar5 = true;
        FField::GetFullName((FField *)param_4,&local_38);
      }
      if (param_3 != (UObject *)0x0) {
        bVar4 = true;
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_3,&local_48,(UObject *)0x0,None)
        ;
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<5>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar4) &&
         (bVar4 = false, local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if ((bVar5) &&
         (bVar5 = false, local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<5>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,param_3,param_1,(FMemberId)0x20000000,
               *(EOrigin *)((longlong)&this->_padding_ + 1),SUB81(this->_padding_,0));
    puVar1 = &(this->Context->Stats).NumReferences;
    *puVar1 = *puVar1 + 1;
  }
  return;
}

// HandleObjectReferences @ 14205a530

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<8>::HandleObjectReferences
          (TDebugReachabilityCollector<8> *this,UObject **param_1,int param_2,UObject *param_3,
          FProperty *param_4)

{
  uint *puVar1;
  UObject **ppUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FString local_48;
  FString local_38;
  
  bVar5 = false;
  bVar4 = false;
  if ((param_2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ppUVar2 = param_1 + param_2;
  for (; param_1 != ppUVar2; param_1 = param_1 + 1) {
    if (((UObjectBase *)*param_1 != (UObjectBase *)0x0) &&
       (bVar6 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*param_1,true), !bVar6)) {
      if (param_4 != (FProperty *)0x0) {
        bVar5 = true;
        FField::GetFullName((FField *)param_4,&local_38);
      }
      if (param_3 != (UObject *)0x0) {
        bVar4 = true;
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_3,&local_48,(UObject *)0x0,None)
        ;
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<8>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar4) &&
         (bVar4 = false, local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if ((bVar5) &&
         (bVar5 = false, local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<8>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,param_3,param_1,(FMemberId)0x20000000,
               *(EOrigin *)((longlong)&this->_padding_ + 1),SUB81(this->_padding_,0));
    puVar1 = &(this->Context->Stats).NumReferences;
    *puVar1 = *puVar1 + 1;
  }
  return;
}

// HandleObjectReferences @ 14205a6d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<9>::HandleObjectReferences
          (TDebugReachabilityCollector<9> *this,UObject **param_1,int param_2,UObject *param_3,
          FProperty *param_4)

{
  uint *puVar1;
  UObject **ppUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FString local_48;
  FString local_38;
  
  bVar5 = false;
  bVar4 = false;
  if ((param_2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ppUVar2 = param_1 + param_2;
  for (; param_1 != ppUVar2; param_1 = param_1 + 1) {
    if (((UObjectBase *)*param_1 != (UObjectBase *)0x0) &&
       (bVar6 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*param_1,true), !bVar6)) {
      if (param_4 != (FProperty *)0x0) {
        bVar5 = true;
        FField::GetFullName((FField *)param_4,&local_38);
      }
      if (param_3 != (UObject *)0x0) {
        bVar4 = true;
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_3,&local_48,(UObject *)0x0,None)
        ;
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<9>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar4) &&
         (bVar4 = false, local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if ((bVar5) &&
         (bVar5 = false, local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<9>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,param_3,param_1,(FMemberId)0x20000000,
               *(EOrigin *)((longlong)&this->_padding_ + 1),SUB81(this->_padding_,0));
    puVar1 = &(this->Context->Stats).NumReferences;
    *puVar1 = *puVar1 + 1;
  }
  return;
}

// HandleObjectReferences @ 14205a870

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<0>::HandleObjectReferences
          (TDebugReachabilityCollector<0> *this,UObject **param_1,int param_2,UObject *param_3,
          FProperty *param_4)

{
  uint *puVar1;
  UObject **ppUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FString local_48;
  FString local_38;
  
  bVar5 = false;
  bVar4 = false;
  if ((param_2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ppUVar2 = param_1 + param_2;
  for (; param_1 != ppUVar2; param_1 = param_1 + 1) {
    if (((UObjectBase *)*param_1 != (UObjectBase *)0x0) &&
       (bVar6 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*param_1,true), !bVar6)) {
      if (param_4 != (FProperty *)0x0) {
        bVar5 = true;
        FField::GetFullName((FField *)param_4,&local_38);
      }
      if (param_3 != (UObject *)0x0) {
        bVar4 = true;
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_3,&local_48,(UObject *)0x0,None)
        ;
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<0>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar4) &&
         (bVar4 = false, local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if ((bVar5) &&
         (bVar5 = false, local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<0>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,param_3,param_1,(FMemberId)0x20000000,
               *(EOrigin *)((longlong)&this->_padding_ + 1),SUB81(this->_padding_,0));
    puVar1 = &(this->Context->Stats).NumReferences;
    *puVar1 = *puVar1 + 1;
  }
  return;
}

// HandleObjectReferences @ 14205aa10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<12>::HandleObjectReferences
          (TDebugReachabilityCollector<12> *this,UObject **param_1,int param_2,UObject *param_3,
          FProperty *param_4)

{
  uint *puVar1;
  UObject **ppUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FString local_48;
  FString local_38;
  
  bVar5 = false;
  bVar4 = false;
  if ((param_2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ppUVar2 = param_1 + param_2;
  for (; param_1 != ppUVar2; param_1 = param_1 + 1) {
    if (((UObjectBase *)*param_1 != (UObjectBase *)0x0) &&
       (bVar6 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*param_1,true), !bVar6)) {
      if (param_4 != (FProperty *)0x0) {
        bVar5 = true;
        FField::GetFullName((FField *)param_4,&local_38);
      }
      if (param_3 != (UObject *)0x0) {
        bVar4 = true;
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_3,&local_48,(UObject *)0x0,None)
        ;
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<12>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar4) &&
         (bVar4 = false, local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if ((bVar5) &&
         (bVar5 = false, local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<12>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,param_3,param_1,(FMemberId)0x20000000,
               *(EOrigin *)((longlong)&this->_padding_ + 1),SUB81(this->_padding_,0));
    puVar1 = &(this->Context->Stats).NumReferences;
    *puVar1 = *puVar1 + 1;
  }
  return;
}

// HandleObjectReferences @ 14205abb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::GC::TDebugReachabilityCollector<13>::HandleObjectReferences
          (TDebugReachabilityCollector<13> *this,UObject **param_1,int param_2,UObject *param_3,
          FProperty *param_4)

{
  uint *puVar1;
  UObject **ppUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FString local_48;
  FString local_38;
  
  bVar5 = false;
  bVar4 = false;
  if ((param_2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ppUVar2 = param_1 + param_2;
  for (; param_1 != ppUVar2; param_1 = param_1 + 1) {
    if (((UObjectBase *)*param_1 != (UObjectBase *)0x0) &&
       (bVar6 = UObjectBase::IsValidLowLevelFast((UObjectBase *)*param_1,true), !bVar6)) {
      if (param_4 != (FProperty *)0x0) {
        bVar5 = true;
        FField::GetFullName((FField *)param_4,&local_38);
      }
      if (param_3 != (UObject *)0x0) {
        bVar4 = true;
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_3,&local_48,(UObject *)0x0,None)
        ;
      }
      Logging::Private::BasicFatalLog
                (&`public:_virtual_void___cdecl_UE::GC::TDebugReachabilityCollector<13>::HandleObjectReference(UObject*___ptr64&___ptr64,UObject_const*___ptr64,FProperty_const*___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if ((bVar4) &&
         (bVar4 = false, local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if ((bVar5) &&
         (bVar5 = false, local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    TDebugReachabilityProcessor<13>::HandleTokenStreamObjectReference
              (this->Processor,this->Context,param_3,param_1,(FMemberId)0x20000000,
               *(EOrigin *)((longlong)&this->_padding_ + 1),SUB81(this->_padding_,0));
    puVar1 = &(this->Context->Stats).NumReferences;
    *puVar1 = *puVar1 + 1;
  }
  return;
}

// MarkWeakObjectReferenceForClearing @ 1420647c0

bool __thiscall
UE::GC::TDebugReachabilityCollector<1>::MarkWeakObjectReferenceForClearing
          (TDebugReachabilityCollector<1> *this,UObject **param_1,UObject *param_2)

{
  int *piVar1;
  FWorkerContext *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UObject *local_28;
  UObject **ppUStack_20;
  UObject *local_18;
  
  local_28 = *param_1;
  pFVar2 = this->Context;
  pFVar3 = (pFVar2->WeakReferences).AllocatorInstance.Data;
  ppUStack_20 = param_1;
  local_18 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar3 + (longlong)(pFVar2->WeakReferences).ArrayMax * 0x18)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  iVar8 = (pFVar2->WeakReferences).ArrayNum;
  piVar1 = &(pFVar2->WeakReferences).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(pFVar2->WeakReferences).AllocatorInstance,piVar1);
  }
  (pFVar2->WeakReferences).ArrayNum = iVar8 + 1;
  pFVar4 = (pFVar2->WeakReferences).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar8 * 0x18;
  *(UObject **)pFVar3 = local_28;
  *(UObject ***)(pFVar3 + 8) = ppUStack_20;
  *(UObject **)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = local_18;
  return true;
}

// MarkWeakObjectReferenceForClearing @ 142064890

bool __thiscall
UE::GC::TDebugReachabilityCollector<4>::MarkWeakObjectReferenceForClearing
          (TDebugReachabilityCollector<4> *this,UObject **param_1,UObject *param_2)

{
  int *piVar1;
  FWorkerContext *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UObject *local_28;
  UObject **ppUStack_20;
  UObject *local_18;
  
  local_28 = *param_1;
  pFVar2 = this->Context;
  pFVar3 = (pFVar2->WeakReferences).AllocatorInstance.Data;
  ppUStack_20 = param_1;
  local_18 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar3 + (longlong)(pFVar2->WeakReferences).ArrayMax * 0x18)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  iVar8 = (pFVar2->WeakReferences).ArrayNum;
  piVar1 = &(pFVar2->WeakReferences).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(pFVar2->WeakReferences).AllocatorInstance,piVar1);
  }
  (pFVar2->WeakReferences).ArrayNum = iVar8 + 1;
  pFVar4 = (pFVar2->WeakReferences).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar8 * 0x18;
  *(UObject **)pFVar3 = local_28;
  *(UObject ***)(pFVar3 + 8) = ppUStack_20;
  *(UObject **)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = local_18;
  return true;
}

// MarkWeakObjectReferenceForClearing @ 142064960

bool __thiscall
UE::GC::TDebugReachabilityCollector<5>::MarkWeakObjectReferenceForClearing
          (TDebugReachabilityCollector<5> *this,UObject **param_1,UObject *param_2)

{
  int *piVar1;
  FWorkerContext *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UObject *local_28;
  UObject **ppUStack_20;
  UObject *local_18;
  
  local_28 = *param_1;
  pFVar2 = this->Context;
  pFVar3 = (pFVar2->WeakReferences).AllocatorInstance.Data;
  ppUStack_20 = param_1;
  local_18 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar3 + (longlong)(pFVar2->WeakReferences).ArrayMax * 0x18)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  iVar8 = (pFVar2->WeakReferences).ArrayNum;
  piVar1 = &(pFVar2->WeakReferences).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(pFVar2->WeakReferences).AllocatorInstance,piVar1);
  }
  (pFVar2->WeakReferences).ArrayNum = iVar8 + 1;
  pFVar4 = (pFVar2->WeakReferences).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar8 * 0x18;
  *(UObject **)pFVar3 = local_28;
  *(UObject ***)(pFVar3 + 8) = ppUStack_20;
  *(UObject **)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = local_18;
  return true;
}

// MarkWeakObjectReferenceForClearing @ 142064a30

bool __thiscall
UE::GC::TDebugReachabilityCollector<8>::MarkWeakObjectReferenceForClearing
          (TDebugReachabilityCollector<8> *this,UObject **param_1,UObject *param_2)

{
  int *piVar1;
  FWorkerContext *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UObject *local_28;
  UObject **ppUStack_20;
  UObject *local_18;
  
  local_28 = *param_1;
  pFVar2 = this->Context;
  pFVar3 = (pFVar2->WeakReferences).AllocatorInstance.Data;
  ppUStack_20 = param_1;
  local_18 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar3 + (longlong)(pFVar2->WeakReferences).ArrayMax * 0x18)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  iVar8 = (pFVar2->WeakReferences).ArrayNum;
  piVar1 = &(pFVar2->WeakReferences).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(pFVar2->WeakReferences).AllocatorInstance,piVar1);
  }
  (pFVar2->WeakReferences).ArrayNum = iVar8 + 1;
  pFVar4 = (pFVar2->WeakReferences).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar8 * 0x18;
  *(UObject **)pFVar3 = local_28;
  *(UObject ***)(pFVar3 + 8) = ppUStack_20;
  *(UObject **)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = local_18;
  return true;
}

// MarkWeakObjectReferenceForClearing @ 142064b00

bool __thiscall
UE::GC::TDebugReachabilityCollector<9>::MarkWeakObjectReferenceForClearing
          (TDebugReachabilityCollector<9> *this,UObject **param_1,UObject *param_2)

{
  int *piVar1;
  FWorkerContext *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UObject *local_28;
  UObject **ppUStack_20;
  UObject *local_18;
  
  local_28 = *param_1;
  pFVar2 = this->Context;
  pFVar3 = (pFVar2->WeakReferences).AllocatorInstance.Data;
  ppUStack_20 = param_1;
  local_18 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar3 + (longlong)(pFVar2->WeakReferences).ArrayMax * 0x18)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  iVar8 = (pFVar2->WeakReferences).ArrayNum;
  piVar1 = &(pFVar2->WeakReferences).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(pFVar2->WeakReferences).AllocatorInstance,piVar1);
  }
  (pFVar2->WeakReferences).ArrayNum = iVar8 + 1;
  pFVar4 = (pFVar2->WeakReferences).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar8 * 0x18;
  *(UObject **)pFVar3 = local_28;
  *(UObject ***)(pFVar3 + 8) = ppUStack_20;
  *(UObject **)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = local_18;
  return true;
}

// MarkWeakObjectReferenceForClearing @ 142064bd0

bool __thiscall
UE::GC::TDebugReachabilityCollector<0>::MarkWeakObjectReferenceForClearing
          (TDebugReachabilityCollector<0> *this,UObject **param_1,UObject *param_2)

{
  int *piVar1;
  FWorkerContext *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UObject *local_28;
  UObject **ppUStack_20;
  UObject *local_18;
  
  local_28 = *param_1;
  pFVar2 = this->Context;
  pFVar3 = (pFVar2->WeakReferences).AllocatorInstance.Data;
  ppUStack_20 = param_1;
  local_18 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar3 + (longlong)(pFVar2->WeakReferences).ArrayMax * 0x18)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  iVar8 = (pFVar2->WeakReferences).ArrayNum;
  piVar1 = &(pFVar2->WeakReferences).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(pFVar2->WeakReferences).AllocatorInstance,piVar1);
  }
  (pFVar2->WeakReferences).ArrayNum = iVar8 + 1;
  pFVar4 = (pFVar2->WeakReferences).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar8 * 0x18;
  *(UObject **)pFVar3 = local_28;
  *(UObject ***)(pFVar3 + 8) = ppUStack_20;
  *(UObject **)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = local_18;
  return true;
}

// MarkWeakObjectReferenceForClearing @ 142064ca0

bool __thiscall
UE::GC::TDebugReachabilityCollector<12>::MarkWeakObjectReferenceForClearing
          (TDebugReachabilityCollector<12> *this,UObject **param_1,UObject *param_2)

{
  int *piVar1;
  FWorkerContext *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UObject *local_28;
  UObject **ppUStack_20;
  UObject *local_18;
  
  local_28 = *param_1;
  pFVar2 = this->Context;
  pFVar3 = (pFVar2->WeakReferences).AllocatorInstance.Data;
  ppUStack_20 = param_1;
  local_18 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar3 + (longlong)(pFVar2->WeakReferences).ArrayMax * 0x18)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  iVar8 = (pFVar2->WeakReferences).ArrayNum;
  piVar1 = &(pFVar2->WeakReferences).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(pFVar2->WeakReferences).AllocatorInstance,piVar1);
  }
  (pFVar2->WeakReferences).ArrayNum = iVar8 + 1;
  pFVar4 = (pFVar2->WeakReferences).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar8 * 0x18;
  *(UObject **)pFVar3 = local_28;
  *(UObject ***)(pFVar3 + 8) = ppUStack_20;
  *(UObject **)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = local_18;
  return true;
}

// MarkWeakObjectReferenceForClearing @ 142064d70

bool __thiscall
UE::GC::TDebugReachabilityCollector<13>::MarkWeakObjectReferenceForClearing
          (TDebugReachabilityCollector<13> *this,UObject **param_1,UObject *param_2)

{
  int *piVar1;
  FWorkerContext *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  UObject *local_28;
  UObject **ppUStack_20;
  UObject *local_18;
  
  local_28 = *param_1;
  pFVar2 = this->Context;
  pFVar3 = (pFVar2->WeakReferences).AllocatorInstance.Data;
  ppUStack_20 = param_1;
  local_18 = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar3 + (longlong)(pFVar2->WeakReferences).ArrayMax * 0x18)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  iVar8 = (pFVar2->WeakReferences).ArrayNum;
  piVar1 = &(pFVar2->WeakReferences).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(pFVar2->WeakReferences).AllocatorInstance,piVar1);
  }
  (pFVar2->WeakReferences).ArrayNum = iVar8 + 1;
  pFVar4 = (pFVar2->WeakReferences).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar8 * 0x18;
  *(UObject **)pFVar3 = local_28;
  *(UObject ***)(pFVar3 + 8) = ppUStack_20;
  *(UObject **)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = local_18;
  return true;
}

