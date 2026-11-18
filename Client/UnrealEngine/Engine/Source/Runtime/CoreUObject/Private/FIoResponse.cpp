// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 9

// ~FIoResponse @ 141f23a30

void __thiscall UE::DerivedData::Private::FIoResponse::~FIoResponse(FIoResponse *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  
  bVar4 = Cancel(this);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Cancel()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\DerivedData.cpp"
                       ,0x2a6,
                       L"Requests must be complete before the response is destroyed but it has %u remaining."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(longlong *)&this->ResponseComplete != 0) {
    plVar1 = *(longlong **)&(this->ResponseComplete).field_0x28;
    plVar5 = (longlong *)&(this->ResponseComplete).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  DestructItems<UE::DerivedData::Private::FIoRequestState,int>
            ((FIoRequestState *)(this->Requests).AllocatorInstance.Data,(this->Requests).ArrayNum);
  pFVar2 = (this->Requests).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// Cancel @ 141f2aab0

bool __thiscall UE::DerivedData::Private::FIoResponse::Cancel(FIoResponse *this)

{
  char cVar1;
  int iVar2;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  if (this->OverallStatus != (atomic<UE::EDerivedDataIoStatus>)0x3) {
    return true;
  }
  this_00 = (this->Requests).AllocatorInstance.Data;
  iVar2 = (this->Requests).ArrayNum;
  pFVar3 = this_00 + (longlong)iVar2 * 0x68;
  while( true ) {
    if ((this->Requests).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::DerivedData::Private::FIoRequestState,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar3) break;
    if ((this_00[0x30].field_0x0 == '\x01') && (this_00 != (FScriptContainerElement *)0x0)) {
      LOCK();
      cVar1 = this_00[0x28].field_0x0;
      this_00[0x28].field_0x0 = 1;
      UNLOCK();
      if (cVar1 == '\0') {
        FIoRequest::Cancel((FIoRequest *)this_00);
      }
    }
    this_00 = this_00 + 0x68;
  }
  return this->OverallStatus != (atomic<UE::EDerivedDataIoStatus>)0x3;
}

// Dispatch @ 141f2d740

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
UE::DerivedData::Private::FIoResponse::Dispatch
          (TPimplPtr<UE::DerivedData::Private::FIoResponse,0> *param_1,
          FDerivedDataIoResponse *param_2,FDerivedDataIoPriority param_3,
          TUniqueFunction<void___cdecl(void)> *param_4)

{
  int iVar1;
  FIoResponse *pFVar2;
  code *pcVar3;
  FIoResponse *pFVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  longlong *plVar19;
  FIoRequestState *pFVar20;
  FIoRequestState *pFVar21;
  undefined1 local_res18 [8];
  FIoResponseDispatcher local_38;
  
  if (param_1->Ptr == (FIoResponse *)0x0) {
    pFVar2 = (param_2->Response).Ptr;
    if (pFVar2 != (FIoResponse *)0x0) {
      (param_2->Response).Ptr = (FIoResponse *)0x0;
      (**(code **)&pFVar2[-1].ResponseComplete.field_0x20)();
    }
    if (*(void **)param_4 != (void *)0x0) {
      Core::Private::Function::CheckCallable(*(void **)param_4);
      pcVar3 = *(code **)param_4;
      plVar19 = (longlong *)&param_4->field_0x10;
      if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
        plVar19 = *(longlong **)&param_4->field_0x28;
      }
      uVar18 = (**(code **)(*plVar19 + 8))();
      (*pcVar3)(uVar18);
    }
  }
  pFVar2 = param_1->Ptr;
  uVar18 = *(undefined8 *)&param_4->field_0x8;
  uVar5 = *(undefined4 *)&pFVar2->ResponseComplete;
  uVar6 = *(undefined4 *)&(pFVar2->ResponseComplete).field_0x4;
  uVar7 = *(undefined4 *)&(pFVar2->ResponseComplete).field_0x8;
  uVar8 = *(undefined4 *)&(pFVar2->ResponseComplete).field_0xc;
  uVar9 = *(undefined4 *)&(pFVar2->ResponseComplete).field_0x10;
  uVar10 = *(undefined4 *)&(pFVar2->ResponseComplete).field_0x14;
  uVar11 = *(undefined4 *)&(pFVar2->ResponseComplete).field_0x18;
  uVar12 = *(undefined4 *)&(pFVar2->ResponseComplete).field_0x1c;
  uVar16 = *(undefined8 *)&(pFVar2->ResponseComplete).field_0x20;
  uVar17 = *(undefined8 *)&(pFVar2->ResponseComplete).field_0x28;
  *(undefined8 *)&pFVar2->ResponseComplete = *(undefined8 *)param_4;
  *(undefined8 *)&(pFVar2->ResponseComplete).field_0x8 = uVar18;
  uVar13 = *(undefined4 *)&param_4->field_0x14;
  uVar14 = *(undefined4 *)&param_4->field_0x18;
  uVar15 = *(undefined4 *)&param_4->field_0x1c;
  *(undefined4 *)&(pFVar2->ResponseComplete).field_0x10 = *(undefined4 *)&param_4->field_0x10;
  *(undefined4 *)&(pFVar2->ResponseComplete).field_0x14 = uVar13;
  *(undefined4 *)&(pFVar2->ResponseComplete).field_0x18 = uVar14;
  *(undefined4 *)&(pFVar2->ResponseComplete).field_0x1c = uVar15;
  uVar13 = *(undefined4 *)&param_4->field_0x24;
  uVar14 = *(undefined4 *)&param_4->field_0x28;
  uVar15 = *(undefined4 *)&param_4->field_0x2c;
  *(undefined4 *)&(pFVar2->ResponseComplete).field_0x20 = *(undefined4 *)&param_4->field_0x20;
  *(undefined4 *)&(pFVar2->ResponseComplete).field_0x24 = uVar13;
  *(undefined4 *)&(pFVar2->ResponseComplete).field_0x28 = uVar14;
  *(undefined4 *)&(pFVar2->ResponseComplete).field_0x2c = uVar15;
  *(undefined4 *)param_4 = uVar5;
  *(undefined4 *)&param_4->field_0x4 = uVar6;
  *(undefined4 *)&param_4->field_0x8 = uVar7;
  *(undefined4 *)&param_4->field_0xc = uVar8;
  *(undefined4 *)&param_4->field_0x10 = uVar9;
  *(undefined4 *)&param_4->field_0x14 = uVar10;
  *(undefined4 *)&param_4->field_0x18 = uVar11;
  *(undefined4 *)&param_4->field_0x1c = uVar12;
  *(undefined8 *)&param_4->field_0x20 = uVar16;
  *(undefined8 *)&param_4->field_0x28 = uVar17;
  if (param_1 != &param_2->Response) {
    pFVar4 = (param_2->Response).Ptr;
    (param_2->Response).Ptr = param_1->Ptr;
    param_1->Ptr = (FIoResponse *)0x0;
    if (pFVar4 != (FIoResponse *)0x0) {
      (**(code **)&pFVar4[-1].ResponseComplete.field_0x20)(&pFVar4[-1].ResponseComplete.field_0x20);
    }
  }
  LOCK();
  pFVar2->RemainingRequests = (atomic<unsigned_int>)((int)pFVar2->RemainingRequests + 1);
  UNLOCK();
  FIoBatch::FIoBatch(&local_38.Batch);
  iVar1 = (pFVar2->Requests).ArrayNum;
  pFVar20 = (FIoRequestState *)(pFVar2->Requests).AllocatorInstance.Data;
  pFVar21 = pFVar20 + iVar1;
  local_38.Priority.Value = param_3.Value;
  while( true ) {
    if ((pFVar2->Requests).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::DerivedData::Private::FIoRequestState,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar20 == pFVar21) break;
    if (((pFVar20->State).TypeIndex == '\x01') && (pFVar20 != (FIoRequestState *)0x0)) {
      FIoResponseDispatcher::DispatchCooked(&local_38,pFVar2,pFVar20,(FIoCookedState *)pFVar20);
      pFVar20 = pFVar20 + 1;
    }
    else {
      pFVar20->Status = (atomic<UE::EDerivedDataIoStatus>)0x1;
      pFVar20 = pFVar20 + 1;
    }
  }
  FIoBatch::Issue(&local_38.Batch);
  FIoBatch::~FIoBatch(&local_38.Batch);
  EndRequest(pFVar2);
  return;
}

// EndRequest @ 141f2e3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::DerivedData::Private::FIoResponse::EndRequest(FIoResponse *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  FScriptContainerElement FVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement FVar10;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  code *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  LOCK();
  paVar1 = &this->RemainingRequests;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<unsigned_int>)0x1) {
    pFVar8 = (this->Requests).AllocatorInstance.Data;
    iVar3 = (this->Requests).ArrayNum;
    pFVar9 = pFVar8 + (longlong)iVar3 * 0x68;
    FVar10 = (FScriptContainerElement)0x0;
    while( true ) {
      if ((this->Requests).ArrayNum != iVar3) {
        `TCheckedPointerIterator<UE::DerivedData::Private::FIoRequestState,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_68);
      }
      if (pFVar8 == pFVar9) break;
      FVar7 = pFVar8[0x61];
      if ((byte)pFVar8[0x61] < (byte)FVar10) {
        FVar7 = FVar10;
      }
      pFVar8 = pFVar8 + 0x68;
      FVar10 = FVar7;
    }
    this->OverallStatus = (atomic<UE::EDerivedDataIoStatus>)FVar10;
    local_58 = *(code **)&this->ResponseComplete;
    local_30 = *(longlong **)&(this->ResponseComplete).field_0x28;
    *(undefined8 *)&(this->ResponseComplete).field_0x28 = 0;
    local_38 = *(undefined8 *)&(this->ResponseComplete).field_0x20;
    local_48 = *(undefined4 *)&(this->ResponseComplete).field_0x10;
    uStack_44 = *(undefined4 *)&(this->ResponseComplete).field_0x14;
    uStack_40 = *(undefined4 *)&(this->ResponseComplete).field_0x18;
    uStack_3c = *(undefined4 *)&(this->ResponseComplete).field_0x1c;
    if (local_58 != (code *)0x0) {
      *(undefined8 *)&this->ResponseComplete = 0;
      Core::Private::Function::CheckCallable(local_58);
      pcVar4 = local_58;
      plVar6 = (longlong *)&local_48;
      if (local_30 != (longlong *)0x0) {
        plVar6 = local_30;
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      (*pcVar4)(uVar5);
    }
    if (local_58 != (code *)0x0) {
      plVar6 = (longlong *)&local_48;
      if (local_30 != (longlong *)0x0) {
        plVar6 = local_30;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  return;
}

// GetOverallStatus @ 141f35070

EDerivedDataIoStatus __thiscall
UE::DerivedData::Private::FIoResponse::GetOverallStatus(FIoResponse *this)

{
  return (EDerivedDataIoStatus)this->OverallStatus;
}

// Poll @ 141f40320

bool __thiscall UE::DerivedData::Private::FIoResponse::Poll(FIoResponse *this)

{
  return this->OverallStatus != (atomic<UE::EDerivedDataIoStatus>)0x3;
}

// Queue @ 141f40ee0

FDerivedDataIoRequest __cdecl
UE::DerivedData::Private::FIoResponse::Queue
          (TPimplPtr<UE::DerivedData::Private::FIoResponse,0> *param_1,FDerivedData *param_2,
          FDerivedDataIoOptions *param_3,EIoRequestType param_4)

{
  uint *puVar1;
  byte bVar2;
  ulong64 uVar3;
  ForAnyElementType *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined7 in_register_00000089;
  undefined8 *puVar16;
  undefined1 in_stack_00000028;
  
  puVar16 = (undefined8 *)CONCAT71(in_register_00000089,param_4);
  puVar15 = (undefined8 *)0x0;
  if ((param_2->CookedData).ChunkOffset == 0) {
    puVar14 = ::operator_new(0x60);
    if (puVar14 != (undefined8 *)0x0) {
      puVar14[1] = 0;
      *puVar14 = Core::Private::PimplPtr::DeleterFunc<UE::DerivedData::Private::FIoResponse>;
      *(undefined8 *)((longlong)puVar14 + 0x25) = 0;
      *(undefined2 *)((longlong)puVar14 + 0x2d) = 0;
      *(undefined1 *)((longlong)puVar14 + 0x2f) = 0;
      puVar14[7] = 0;
      puVar14[8] = 0;
      puVar14[9] = 0;
      puVar14[10] = 0;
      puVar14[2] = 0;
      puVar14[3] = 0;
      *(undefined4 *)(puVar14 + 4) = 0;
      *(undefined1 *)((longlong)puVar14 + 0x24) = 3;
      puVar14[6] = 0;
      puVar14[0xb] = 0;
      puVar15 = puVar14;
    }
    if ((FDerivedData *)&stack0xffffffffffffffc8 == param_2) {
      if (puVar15 + 2 == (undefined8 *)0x0) goto LAB_141f40f94;
    }
    else {
      uVar3 = (param_2->CookedData).ChunkOffset;
      (param_2->CookedData).ChunkOffset = (ulong64)(puVar15 + 2);
      if (uVar3 == 0) goto LAB_141f40f94;
      puVar15 = (undefined8 *)(uVar3 - 0x10);
    }
    (*(code *)*puVar15)();
  }
LAB_141f40f94:
  pFVar4 = (ForAnyElementType *)(param_2->CookedData).ChunkOffset;
  puVar1 = (uint *)((longlong)&pFVar4[1].Data + 4);
  uVar11 = *(uint *)&pFVar4[1].Data;
  if (uVar11 == *puVar1) {
    uVar11 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x868,pFVar4,(int *)puVar1);
  }
  *(uint *)&pFVar4[1].Data = uVar11 + 1;
  DefaultConstructItems<UE::DerivedData::Private::FIoRequestState,int>
            (pFVar4->Data + (longlong)(int)uVar11 * 0x68,1);
  plVar5 = (longlong *)(param_2->CookedData).ChunkOffset;
  uVar12 = 0;
  if ((int)uVar11 < (int)plVar5[1]) {
    uVar12 = ~uVar11 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar6 = (code *)swi(3);
    iVar13 = (*pcVar6)();
    return (FDerivedDataIoRequest)iVar13;
  }
  uVar7 = *puVar16;
  uVar8 = puVar16[1];
  puVar15 = (undefined8 *)(*plVar5 + (longlong)(int)uVar11 * 0x68);
  *(uint *)&param_1->Ptr = uVar11;
  puVar15[7] = uVar7;
  puVar15[8] = uVar8;
  puVar15[9] = puVar16[2];
  *(undefined1 *)(puVar15 + 0xc) = in_stack_00000028;
  if (*(char *)((longlong)&param_3[1].Target + 3) != '\0') {
    bVar2 = *(byte *)(puVar15 + 6);
    if ((2 < (ulonglong)bVar2) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      iVar13 = (*pcVar6)();
      return (FDerivedDataIoRequest)iVar13;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,UE::DerivedData::Private::FIoCookedState,UE::DerivedData::Private::FIoEditorState>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[bVar2])(puVar15);
    *puVar15 = 0;
    uVar3 = param_3->Size;
    puVar15[1] = param_3->Target;
    puVar15[2] = uVar3;
    pvVar9 = param_3[1].Target;
    puVar15[3] = param_3->Offset;
    puVar15[4] = pvVar9;
    *(undefined1 *)(puVar15 + 5) = 0;
    *(undefined1 *)(puVar15 + 6) = 1;
  }
  return (FDerivedDataIoRequest)(int)param_1;
}

// SetPriority @ 141f4d620

void __thiscall
UE::DerivedData::Private::FIoResponse::SetPriority(FIoResponse *this,FDerivedDataIoPriority param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *this_00;
  undefined1 local_res10 [8];
  
  iVar1 = (this->Requests).ArrayNum;
  this_00 = (this->Requests).AllocatorInstance.Data;
  pFVar2 = this_00 + (longlong)iVar1 * 0x68;
  while( true ) {
    if ((this->Requests).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::DerivedData::Private::FIoRequestState,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (this_00 == pFVar2) break;
    if ((this_00[0x30].field_0x0 == '\x01') && (this_00 != (FScriptContainerElement *)0x0)) {
      FIoRequest::UpdatePriority((FIoRequest *)this_00,param_1.Value);
    }
    this_00 = this_00 + 0x68;
  }
  return;
}

// TryGetRequest @ 141f4e390

FIoRequestState * __cdecl
UE::DerivedData::Private::FIoResponse::TryGetRequest
          (TPimplPtr<UE::DerivedData::Private::FIoResponse,0> *param_1,FDerivedDataIoRequest param_2
          )

{
  FIoResponse *pFVar1;
  code *pcVar2;
  bool bVar3;
  FIoRequestState *pFVar4;
  
  pFVar1 = param_1->Ptr;
  if (((pFVar1 != (FIoResponse *)0x0) && (-1 < param_2.Index)) &&
     (param_2.Index < (pFVar1->Requests).ArrayNum)) {
    if (param_2.Index < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FIoRequestState *)(*pcVar2)();
        return pFVar4;
      }
    }
    return (FIoRequestState *)
           ((pFVar1->Requests).AllocatorInstance.Data + (longlong)param_2.Index * 0x68);
  }
  return (FIoRequestState *)0x0;
}

