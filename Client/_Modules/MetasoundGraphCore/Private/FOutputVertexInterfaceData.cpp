// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 34

// FOutputVertexInterfaceData @ 14ad3c070

FOutputVertexInterfaceData * __thiscall
Metasound::FOutputVertexInterfaceData::FOutputVertexInterfaceData
          (FOutputVertexInterfaceData *this,FOutputVertexInterface *param_1)

{
  TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  FSubInterfaceLayout *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FOutputVertexInterfaceData *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  
  this->bIsVertexInterfaceFrozen = true;
  (this->Bindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar1 = &this->SubInterfaces;
  (this->Bindings).ArrayNum = 0;
  (this->Bindings).ArrayMax = 0;
  iVar4 = (param_1->SubInterfaces).ArrayNum;
  pFVar5 = (FSubInterfaceLayout *)(param_1->SubInterfaces).AllocatorInstance.Data;
  if (iVar4 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FOutputVertexInterfaceData *)(*pcVar6)();
      return pFVar9;
    }
  }
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar3 = &(this->SubInterfaces).ArrayMax;
  (this->SubInterfaces).ArrayNum = iVar4;
  if (iVar4 == 0) {
    *piVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar4,0,&pTVar1->AllocatorInstance,iVar4,piVar3);
    ConstructItems<Metasound::VertexPrivate::FSubInterfaceLayout,Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((pTVar1->AllocatorInstance).Data,pFVar5,iVar4);
  }
  iVar4 = (int)param_1->_padding_;
  lVar11 = param_1->_padding_;
  lVar12 = (longlong)iVar4 * 0x20 + lVar11;
  while( true ) {
    if ((int)param_1->_padding_ != iVar4) {
      `TCheckedPointerIterator<Metasound::FOutputDataVertex_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (lVar11 == lVar12) break;
    iVar8 = (this->Bindings).ArrayNum;
    if (iVar8 == (this->Bindings).ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&(this->Bindings).AllocatorInstance,&(this->Bindings).ArrayMax);
    }
    (this->Bindings).ArrayNum = iVar8 + 1;
    pFVar10 = (this->Bindings).AllocatorInstance.Data + (longlong)iVar8 * 0x40;
    *(undefined ***)pFVar10 = &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)(pFVar10 + 8) = *(undefined8 *)(lVar11 + 8);
    *(undefined8 *)(pFVar10 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    puVar2 = (undefined4 *)(lVar11 + 0x18);
    lVar11 = lVar11 + 0x20;
    *(undefined4 *)(pFVar10 + 0x18) = *puVar2;
    *(undefined ***)pFVar10 = &___7FOutputDataVertex_Metasound__6B_;
    pFVar10[0x38] = (FScriptContainerElement)0x0;
  }
  return this;
}

// FOutputVertexInterfaceData @ 14ad3c1f0

FOutputVertexInterfaceData * __thiscall
Metasound::FOutputVertexInterfaceData::FOutputVertexInterfaceData(FOutputVertexInterfaceData *this)

{
  this->bIsVertexInterfaceFrozen = false;
  (this->Bindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bindings).ArrayNum = 0;
  (this->Bindings).ArrayMax = 0;
  (this->SubInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubInterfaces).ArrayNum = 0;
  (this->SubInterfaces).ArrayMax = 0;
  return this;
}

// operator= @ 14ad3edc0

FOutputVertexInterfaceData * __thiscall
Metasound::FOutputVertexInterfaceData::operator=
          (FOutputVertexInterfaceData *this,FOutputVertexInterfaceData *param_1)

{
  TArray<Metasound::VertexDataPrivate::FOutputBinding,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FOutputBinding *pFVar4;
  
  pTVar1 = &this->Bindings;
  this->bIsVertexInterfaceFrozen = param_1->bIsVertexInterfaceFrozen;
  if (pTVar1 != &param_1->Bindings) {
    DestructItems<Metasound::VertexDataPrivate::FOutputBinding,int>
              ((FOutputBinding *)(pTVar1->AllocatorInstance).Data,(this->Bindings).ArrayNum);
    iVar3 = (param_1->Bindings).ArrayNum;
    piVar2 = &(this->Bindings).ArrayMax;
    pFVar4 = (FOutputBinding *)(param_1->Bindings).AllocatorInstance.Data;
    (this->Bindings).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<Metasound::VertexDataPrivate::FOutputBinding,Metasound::VertexDataPrivate::FOutputBinding,int>
                ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_>::operator=
            (&this->SubInterfaces,&param_1->SubInterfaces);
  return this;
}

// operator() @ 14ad3f950

void __thiscall
`Metasound::FOutputVertexInterfaceData::
BindVertex<Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>'::__l2::<lambda_1>::operator()
          (void *this,FOutputBinding *param_1)

{
  TDataWriteReference<Metasound::FAudioBuffer> *pTVar1;
  FName FVar2;
  IDataReference *pIVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  
  pTVar1 = *(TDataWriteReference<Metasound::FAudioBuffer> **)this;
  pFVar6 = (FName *)(**(code **)(*(longlong *)pTVar1 + 8))(pTVar1);
  FVar2.ComparisonIndex.Value = *(uint *)&(param_1->Vertex).field_0x10;
  FVar2.Number = *(uint *)&(param_1->Vertex).field_0x14;
  bVar5 = Metasound::IsCastable(FVar2,*pFVar6);
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0x181,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (((param_1->Data).bIsSet != false) &&
     (pIVar3 = (param_1->Data).TypedValue.DataRefPtr.Ptr, pIVar3 != (IDataReference *)0x0)) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
  Metasound::FAnyDataReference::FAnyDataReference<Metasound::FAudioBuffer>
            (&(param_1->Data).TypedValue,pTVar1);
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  return;
}

// operator() @ 14ad3fd60

FOutputBinding * __thiscall
`Metasound::FOutputVertexInterfaceData::BindVertex'::__l2::<lambda_1>::operator()
          (void *this,FOutputBinding *__return_storage_ptr__)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  FText local_38;
  FText local_28;
  undefined1 local_18;
  
  cVar1 = *(char *)(*(longlong *)((longlong)this + 8) + 8);
  if (((cVar1 == '\x01') || (cVar1 == '\x02')) || (cVar1 != '\x04')) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  FText::FText(&local_38);
  FText::FText(&local_28);
  local_18 = 0;
  puVar4 = (undefined8 *)(**(code **)(**(longlong **)((longlong)this + 8) + 8))();
  uVar2 = *puVar4;
  uVar3 = **(undefined8 **)this;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  *(undefined8 *)&(__return_storage_ptr__->Vertex).field_0x8 = uVar3;
  *(undefined ***)&__return_storage_ptr__->Vertex = &___7FOutputDataVertex_Metasound__6B_;
  *(undefined4 *)&(__return_storage_ptr__->Vertex).field_0x18 = uVar5;
  *(undefined8 *)&(__return_storage_ptr__->Vertex).field_0x10 = uVar2;
  (__return_storage_ptr__->Data).bIsSet = false;
  return __return_storage_ptr__;
}

// operator() @ 14ad410a0

void __thiscall
`Metasound::FOutputVertexInterfaceData::FindSubInterfaceReferences'::__l2::<lambda_1>::operator()
          (void *this,uint param_1,FOutputBinding *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TOptional<Metasound::FAnyDataReference> *local_18 [2];
  
  if (*(uint *)(*(longlong *)this + 8) != param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("References.Num() == InIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertexData.cpp"
                       ,0x34b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = *(ForAnyElementType **)this;
  local_18[0] = &param_2->Data;
  if ((param_2->Data).bIsSet == false) {
    local_18[0] = (TOptional<Metasound::FAnyDataReference> *)0x0;
  }
  if ((pFVar2->Data <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(TOptional<Metasound::FAnyDataReference> **)(pFVar2->Data + (longlong)iVar5 * 8) = local_18[0];
  return;
}

// AddVertex @ 14ad46580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::FOutputVertexInterfaceData::AddVertex
          (FOutputVertexInterfaceData *this,FOutputDataVertex *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FString local_18;
  
  if (this->bIsVertexInterfaceFrozen == false) {
    iVar1 = (this->Bindings).ArrayNum;
    if (iVar1 == (this->Bindings).ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&(this->Bindings).AllocatorInstance,&(this->Bindings).ArrayMax);
    }
    (this->Bindings).ArrayNum = iVar1 + 1;
    pFVar2 = (this->Bindings).AllocatorInstance.Data + (longlong)iVar1 * 0x40;
    *(undefined ***)pFVar2 = &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)(pFVar2 + 8) = *(undefined8 *)&param_1->field_0x8;
    *(undefined8 *)(pFVar2 + 0x10) = *(undefined8 *)&param_1->field_0x10;
    *(undefined4 *)(pFVar2 + 0x18) = *(undefined4 *)&param_1->field_0x18;
    *(undefined ***)pFVar2 = &___7FOutputDataVertex_Metasound__6B_;
    pFVar2[0x38] = (FScriptContainerElement)0x0;
  }
  else if (2 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString((FName *)&param_1->field_0x8,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// Apply @ 14ad46b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::FOutputVertexInterfaceData::Apply
          (FOutputVertexInterfaceData *this,FName *param_1,
          TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *param_2,
          TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *param_3)

{
  TArray<Metasound::VertexDataPrivate::FOutputBinding,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FString local_58;
  FScriptContainerElement local_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  EDataReferenceAccessType local_20;
  IDataReference *local_18;
  FScriptContainerElement local_10;
  
  pTVar1 = &this->Bindings;
  pFVar7 = (pTVar1->AllocatorInstance).Data;
  pFVar6 = pFVar7 + (longlong)(this->Bindings).ArrayNum * 0x40;
  if (pFVar7 != pFVar6) {
    do {
      if (*(FName *)(pFVar7 + 8) == *param_1) {
                    /* WARNING: Could not recover jumptable at 0x00014ad46cf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8);
        return;
      }
      pFVar7 = pFVar7 + 0x40;
    } while (pFVar7 != pFVar6);
  }
  if (this->bIsVertexInterfaceFrozen == false) {
    (**(code **)param_2)(local_48,*(undefined8 *)&param_2->field_0x8);
    (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_48);
    pFVar7 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar7 <= local_48) && (local_48 < pFVar7 + (longlong)(this->Bindings).ArrayMax * 0x40))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = (this->Bindings).ArrayNum;
    piVar2 = &(this->Bindings).ArrayMax;
    if (iVar5 == *piVar2) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->Bindings).ArrayNum = iVar5 + 1;
    pFVar7 = (pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x40;
    *(undefined ***)pFVar7 = &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)(pFVar7 + 8) = local_40;
    *(undefined8 *)(pFVar7 + 0x10) = local_38;
    *(undefined4 *)(pFVar7 + 0x18) = local_30;
    *(undefined ***)pFVar7 = &___7FOutputDataVertex_Metasound__6B_;
    pFVar7[0x38] = (FScriptContainerElement)0x0;
    pFVar7[0x38] = local_10;
    if (local_10 != (FScriptContainerElement)0x0) {
      FAnyDataReference::FAnyDataReference((FAnyDataReference *)(pFVar7 + 0x20),local_20,local_18);
      ((FAnyDataReference *)(pFVar7 + 0x20))->_padding_ =
           (longlong)&___7FAnyDataReference_Metasound__6B_;
    }
    if ((local_10 != (FScriptContainerElement)0x0) && (local_18 != (IDataReference *)0x0)) {
      (**(code **)*local_18)(local_18,1);
      return;
    }
  }
  else if (2 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString(param_1,&local_58);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// AreAllVerticesBound @ 14ad47250

bool __thiscall
Metasound::FOutputVertexInterfaceData::AreAllVerticesBound(FOutputVertexInterfaceData *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Bindings).ArrayNum;
  pFVar2 = (this->Bindings).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x40;
  while( true ) {
    if ((this->Bindings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Metasound::VertexDataPrivate::FOutputBinding_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (pFVar2[0x38] == (FScriptContainerElement)0x0) {
      return false;
    }
    pFVar2 = pFVar2 + 0x40;
  }
  return true;
}

// Bind @ 14ad47a30

void __thiscall
Metasound::FOutputVertexInterfaceData::Bind
          (FOutputVertexInterfaceData *this,FOutputVertexInterfaceData *param_1)

{
  VertexDataPrivate::Bind<Metasound::VertexDataPrivate::FOutputBinding>
            (this->bIsVertexInterfaceFrozen,&this->Bindings,&param_1->Bindings);
  return;
}

// Bind @ 14ad47a50

void __thiscall
Metasound::FOutputVertexInterfaceData::Bind
          (FOutputVertexInterfaceData *this,FOutputVertexInterfaceData *param_1)

{
  VertexDataPrivate::Bind<Metasound::VertexDataPrivate::FOutputBinding>
            (this->bIsVertexInterfaceFrozen,&this->Bindings,&param_1->Bindings);
  return;
}

// BindVertex @ 14ad48630

void __thiscall
Metasound::FOutputVertexInterfaceData::BindVertex
          (FOutputVertexInterfaceData *this,FName *param_1,FAnyDataReference *param_2)

{
  FAnyDataReference *local_res10 [3];
  FName *local_38;
  FAnyDataReference *local_30;
  code *local_28;
  FAnyDataReference **local_20;
  code *local_18;
  FName **local_10;
  
  local_20 = local_res10;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindVertex'::__l2::<lambda_2>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindVertex'::__l2::<lambda_1>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res10[0] = param_2;
  local_38 = param_1;
  local_30 = param_2;
  Apply(this,param_1,
        (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
        (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28);
  return;
}

// BindVertex @ 14ad48690

void __thiscall
Metasound::FOutputVertexInterfaceData::BindVertex
          (FOutputVertexInterfaceData *this,FName *param_1,FAnyDataReference *param_2)

{
  FAnyDataReference *local_res10 [3];
  FName *local_38;
  FAnyDataReference *local_30;
  code *local_28;
  FAnyDataReference **local_20;
  code *local_18;
  FName **local_10;
  
  local_20 = local_res10;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindVertex'::__l2::<lambda_2>,void,Metasound::VertexDataPrivate::FOutputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::BindVertex'::__l2::<lambda_1>,Metasound::VertexDataPrivate::FOutputBinding>
             ::Call;
  local_res10[0] = param_2;
  local_38 = param_1;
  local_30 = param_2;
  Apply(this,param_1,
        (TFunctionRef<Metasound::VertexDataPrivate::FOutputBinding___cdecl(void)> *)&local_18,
        (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FOutputBinding_&)> *)&local_28);
  return;
}

// Contains @ 14ad4b670

bool __thiscall
Metasound::FOutputVertexInterfaceData::Contains(FOutputVertexInterfaceData *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->Bindings).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (longlong)(this->Bindings).ArrayNum * 0x40;
  if (pFVar1 != pFVar2) {
    do {
      if (*(FName *)(pFVar1 + 8) == *param_1) goto LAB_14ad4b698;
      pFVar1 = pFVar1 + 0x40;
    } while (pFVar1 != pFVar2);
  }
  pFVar1 = (FScriptContainerElement *)0x0;
LAB_14ad4b698:
  return pFVar1 != (FScriptContainerElement *)0x0;
}

// Find @ 14ad50b90

FOutputBinding * __thiscall
Metasound::FOutputVertexInterfaceData::Find(FOutputVertexInterfaceData *this,FName *param_1)

{
  FName FVar1;
  FOutputBinding *pFVar2;
  FOutputBinding *pFVar3;
  
  pFVar2 = (FOutputBinding *)(this->Bindings).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (this->Bindings).ArrayNum;
  if (pFVar2 != pFVar3) {
    do {
      FVar1.ComparisonIndex.Value = *(uint *)&(pFVar2->Vertex).field_0x8;
      FVar1.Number = *(uint *)&(pFVar2->Vertex).field_0xc;
      if (FVar1 == *param_1) {
        return pFVar2;
      }
      pFVar2 = pFVar2 + 1;
    } while (pFVar2 != pFVar3);
  }
  return (FOutputBinding *)0x0;
}

// Find @ 14ad50bc0

FOutputBinding * __thiscall
Metasound::FOutputVertexInterfaceData::Find(FOutputVertexInterfaceData *this,FName *param_1)

{
  FName FVar1;
  FOutputBinding *pFVar2;
  FOutputBinding *pFVar3;
  
  pFVar2 = (FOutputBinding *)(this->Bindings).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (this->Bindings).ArrayNum;
  if (pFVar2 != pFVar3) {
    do {
      FVar1.ComparisonIndex.Value = *(uint *)&(pFVar2->Vertex).field_0x8;
      FVar1.Number = *(uint *)&(pFVar2->Vertex).field_0xc;
      if (FVar1 == *param_1) {
        return pFVar2;
      }
      pFVar2 = pFVar2 + 1;
    } while (pFVar2 != pFVar3);
  }
  return (FOutputBinding *)0x0;
}

// FindChecked @ 14ad50e10

FOutputBinding * __thiscall
Metasound::FOutputVertexInterfaceData::FindChecked(FOutputVertexInterfaceData *this,FName *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FOutputBinding *pFVar4;
  FOutputBinding *pFVar5;
  FString local_18;
  
  pFVar4 = (FOutputBinding *)(this->Bindings).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (this->Bindings).ArrayNum;
  if (pFVar4 != pFVar5) {
    do {
      FVar1.ComparisonIndex.Value = *(uint *)&(pFVar4->Vertex).field_0x8;
      FVar1.Number = *(uint *)&(pFVar4->Vertex).field_0xc;
      if (FVar1 == *param_1) {
        return pFVar4;
      }
      pFVar4 = pFVar4 + 1;
    } while (pFVar4 != pFVar5);
  }
  ::FName::ToString(param_1,&local_18);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("nullptr != Binding",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertexData.cpp"
                     ,0x38e,L"Attempt to access vertex \"%s\" which does not exist on interface.");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return (FOutputBinding *)0x0;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FOutputBinding *)(*pcVar2)();
  return pFVar4;
}

// FindChecked @ 14ad50ec0

FOutputBinding * __thiscall
Metasound::FOutputVertexInterfaceData::FindChecked(FOutputVertexInterfaceData *this,FName *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FOutputBinding *pFVar4;
  FOutputBinding *pFVar5;
  FString local_18;
  
  pFVar4 = (FOutputBinding *)(this->Bindings).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (this->Bindings).ArrayNum;
  if (pFVar4 != pFVar5) {
    do {
      FVar1.ComparisonIndex.Value = *(uint *)&(pFVar4->Vertex).field_0x8;
      FVar1.Number = *(uint *)&(pFVar4->Vertex).field_0xc;
      if (FVar1 == *param_1) {
        return pFVar4;
      }
      pFVar4 = pFVar4 + 1;
    } while (pFVar4 != pFVar5);
  }
  ::FName::ToString(param_1,&local_18);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("nullptr != Binding",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertexData.cpp"
                     ,0x395,L"Attempt to access vertex \"%s\" which does not exist on interface.");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return (FOutputBinding *)0x0;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FOutputBinding *)(*pcVar2)();
  return pFVar4;
}

// FindDataReference @ 14ad50fd0

FAnyDataReference * __thiscall
Metasound::FOutputVertexInterfaceData::FindDataReference
          (FOutputVertexInterfaceData *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  FAnyDataReference *pFVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = (this->Bindings).AllocatorInstance.Data;
  pFVar3 = pFVar1 + (longlong)(this->Bindings).ArrayNum * 0x40;
  if (pFVar1 != pFVar3) {
    do {
      if (*(FName *)(pFVar1 + 8) == *param_1) {
        pFVar2 = (FAnyDataReference *)(pFVar1 + 0x20);
        if (pFVar1[0x38] == (FScriptContainerElement)0x0) {
          pFVar2 = (FAnyDataReference *)0x0;
        }
        return pFVar2;
      }
      pFVar1 = pFVar1 + 0x40;
    } while (pFVar1 != pFVar3);
  }
  return (FAnyDataReference *)0x0;
}

// FindSubInterface @ 14ad51e50

FSubInterfaceLayout * __thiscall
Metasound::FOutputVertexInterfaceData::FindSubInterface
          (FOutputVertexInterfaceData *this,FName *param_1)

{
  FSubInterfaceLayout *pFVar1;
  FSubInterfaceLayout *pFVar2;
  
  pFVar2 = (FSubInterfaceLayout *)(this->SubInterfaces).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->SubInterfaces).ArrayNum;
  if (pFVar2 != pFVar1) {
    do {
      if (pFVar2->SubInterfaceName == *param_1) {
        return pFVar2;
      }
      pFVar2 = pFVar2 + 1;
    } while (pFVar2 != pFVar1);
  }
  return (FSubInterfaceLayout *)0x0;
}

// FindSubInterfaceReferences @ 14ad52030

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<Metasound::FAnyDataReference_const_*,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::FOutputVertexInterfaceData::FindSubInterfaceReferences
          (FOutputVertexInterfaceData *this,
          TArray<Metasound::FAnyDataReference_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FName *param_1,FName *param_2)

{
  FSubInterfaceLayout *pFVar1;
  int iVar2;
  FOutputBinding *pFVar3;
  code *pcVar4;
  bool bVar5;
  TArray<Metasound::FAnyDataReference_const_*,TSizedDefaultAllocator<32>_> *pTVar6;
  FSubInterfaceLayout *pFVar7;
  TArray<Metasound::FAnyDataReference_const_*,TSizedDefaultAllocator<32>_> *local_res8;
  undefined4 uStack_3c;
  code *local_38;
  TArray<Metasound::FAnyDataReference_const_*,TSizedDefaultAllocator<32>_> **local_30;
  TArrayView<Metasound::VertexDataPrivate::FOutputBinding_const_,int> local_28;
  FString local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar7 = (FSubInterfaceLayout *)(this->SubInterfaces).AllocatorInstance.Data;
  pFVar1 = pFVar7 + (this->SubInterfaces).ArrayNum;
  local_res8 = __return_storage_ptr__;
  if (pFVar7 != pFVar1) {
    do {
      if (pFVar7->SubInterfaceName == *param_1) {
        pFVar3 = (FOutputBinding *)(this->Bindings).AllocatorInstance.Data;
        iVar2 = (this->Bindings).ArrayNum;
        if ((iVar2 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar6 = (TArray<Metasound::FAnyDataReference_const_*,TSizedDefaultAllocator<32>_> *)
                   (*pcVar4)();
          return pTVar6;
        }
        local_28._12_4_ = uStack_3c;
        local_28.ArrayNum = iVar2;
        local_38 = UE::Core::Private::Function::
                   TFunctionRefCaller<`Metasound::FOutputVertexInterfaceData::FindSubInterfaceReferences'::__l2::<lambda_1>,void,unsigned_int,Metasound::VertexDataPrivate::FOutputBinding_const_&>
                   ::Call;
        local_30 = &local_res8;
        local_28.DataPtr = pFVar3;
        VertexDataPrivate::
        ForEachSubInterfaceBindingImpl<Metasound::VertexDataPrivate::FOutputBinding_const_>
                  (pFVar7,param_2,0xffffffff,
                   (TFunctionRef<void___cdecl(unsigned_int,Metasound::VertexDataPrivate::FOutputBinding_const_&)>
                    *)&local_38,&local_28);
        return __return_storage_ptr__;
      }
      pFVar7 = pFVar7 + 1;
    } while (pFVar7 != pFVar1);
  }
  if (2 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString(param_1,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// ForEachSubInterfaceBinding @ 14ad52a40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::FOutputVertexInterfaceData::ForEachSubInterfaceBinding
          (FOutputVertexInterfaceData *this,FName *param_1,FName *param_2,uint param_3,
          TFunctionRef<void___cdecl(unsigned_int,Metasound::VertexDataPrivate::FOutputBinding_&)>
          *param_4)

{
  FSubInterfaceLayout *pFVar1;
  int iVar2;
  FOutputBinding *pFVar3;
  code *pcVar4;
  bool bVar5;
  FSubInterfaceLayout *pFVar6;
  undefined4 uStack_3c;
  TFunctionRef<void___cdecl(unsigned_int,Metasound::VertexDataPrivate::FOutputBinding_&)> local_38;
  TArrayView<Metasound::VertexDataPrivate::FOutputBinding,int> local_28;
  FString local_18;
  
  pFVar6 = (FSubInterfaceLayout *)(this->SubInterfaces).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (this->SubInterfaces).ArrayNum;
  if (pFVar6 != pFVar1) {
    do {
      if (pFVar6->SubInterfaceName == *param_1) {
        pFVar3 = (FOutputBinding *)(this->Bindings).AllocatorInstance.Data;
        iVar2 = (this->Bindings).ArrayNum;
        if ((iVar2 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_28._12_4_ = uStack_3c;
        local_28.ArrayNum = iVar2;
        local_38._0_8_ = *(undefined8 *)param_4;
        local_38._8_8_ = *(undefined8 *)&param_4->field_0x8;
        local_28.DataPtr = pFVar3;
        VertexDataPrivate::
        ForEachSubInterfaceBindingImpl<Metasound::VertexDataPrivate::FOutputBinding>
                  (pFVar6,param_2,param_3,&local_38,&local_28);
        return;
      }
      pFVar6 = pFVar6 + 1;
    } while (pFVar6 != pFVar1);
  }
  if (2 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString(param_1,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ForEachSubInterfaceBinding @ 14ad52b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::FOutputVertexInterfaceData::ForEachSubInterfaceBinding
          (FOutputVertexInterfaceData *this,FName *param_1,FName *param_2,uint param_3,
          TFunctionRef<void___cdecl(unsigned_int,Metasound::VertexDataPrivate::FOutputBinding_const_&)>
          *param_4)

{
  FSubInterfaceLayout *pFVar1;
  int iVar2;
  FOutputBinding *pFVar3;
  code *pcVar4;
  bool bVar5;
  FSubInterfaceLayout *pFVar6;
  undefined4 uStack_3c;
  TFunctionRef<void___cdecl(unsigned_int,Metasound::VertexDataPrivate::FOutputBinding_const_&)>
  local_38;
  TArrayView<Metasound::VertexDataPrivate::FOutputBinding_const_,int> local_28;
  FString local_18;
  
  pFVar6 = (FSubInterfaceLayout *)(this->SubInterfaces).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (this->SubInterfaces).ArrayNum;
  if (pFVar6 != pFVar1) {
    do {
      if (pFVar6->SubInterfaceName == *param_1) {
        pFVar3 = (FOutputBinding *)(this->Bindings).AllocatorInstance.Data;
        iVar2 = (this->Bindings).ArrayNum;
        if ((iVar2 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_28._12_4_ = uStack_3c;
        local_28.ArrayNum = iVar2;
        local_38._0_8_ = *(undefined8 *)param_4;
        local_38._8_8_ = *(undefined8 *)&param_4->field_0x8;
        local_28.DataPtr = pFVar3;
        VertexDataPrivate::
        ForEachSubInterfaceBindingImpl<Metasound::VertexDataPrivate::FOutputBinding_const_>
                  (pFVar6,param_2,param_3,&local_38,&local_28);
        return;
      }
      pFVar6 = pFVar6 + 1;
    } while (pFVar6 != pFVar1);
  }
  if (2 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString(param_1,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetNumSubInterfaceInstances @ 14ad56370

uint __thiscall
Metasound::FOutputVertexInterfaceData::GetNumSubInterfaceInstances
          (FOutputVertexInterfaceData *this,FName *param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  pFVar2 = (FName *)(this->SubInterfaces).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->SubInterfaces).ArrayNum * 3;
  if (pFVar2 != pFVar1) {
    do {
      if (*pFVar2 == *param_1) {
        return pFVar2[2].ComparisonIndex.Value;
      }
      pFVar2 = pFVar2 + 3;
    } while (pFVar2 != pFVar1);
  }
  return 0;
}

// GetVertex @ 14ad572e0

FOutputDataVertex * __thiscall
Metasound::FOutputVertexInterfaceData::GetVertex(FOutputVertexInterfaceData *this,FName *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FOutputDataVertex *pFVar4;
  FOutputDataVertex *pFVar5;
  FString local_18;
  
  pFVar4 = (FOutputDataVertex *)(this->Bindings).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)(this->Bindings).ArrayNum * 2;
  if (pFVar4 != pFVar5) {
    do {
      FVar1.ComparisonIndex.Value = *(uint *)&pFVar4->field_0x8;
      FVar1.Number = *(uint *)&pFVar4->field_0xc;
      if (FVar1 == *param_1) {
        return pFVar4;
      }
      pFVar4 = pFVar4 + 2;
    } while (pFVar4 != pFVar5);
  }
  ::FName::ToString(param_1,&local_18);
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("nullptr != Binding",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertexData.cpp"
                     ,0x395,L"Attempt to access vertex \"%s\" which does not exist on interface.");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar3) {
    return (FOutputDataVertex *)0x0;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FOutputDataVertex *)(*pcVar2)();
  return pFVar4;
}

// GetVertexDataAccessType @ 14ad573d0

EDataReferenceAccessType __thiscall
Metasound::FOutputVertexInterfaceData::GetVertexDataAccessType
          (FOutputVertexInterfaceData *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->Bindings).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (longlong)(this->Bindings).ArrayNum * 0x40;
  if (pFVar1 != pFVar2) {
    do {
      if (*(FName *)(pFVar1 + 8) == *param_1) {
        if (pFVar1[0x38] == (FScriptContainerElement)0x0) {
          return None;
        }
        return (EDataReferenceAccessType)pFVar1[0x28];
      }
      pFVar1 = pFVar1 + 0x40;
    } while (pFVar1 != pFVar2);
  }
  return None;
}

// IsVertexBound @ 14ad5a990

bool __thiscall
Metasound::FOutputVertexInterfaceData::IsVertexBound
          (FOutputVertexInterfaceData *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->Bindings).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (longlong)(this->Bindings).ArrayNum * 0x40;
  if (pFVar1 != pFVar2) {
    do {
      if (*(FName *)(pFVar1 + 8) == *param_1) {
        return (bool)pFVar1[0x38];
      }
      pFVar1 = pFVar1 + 0x40;
    } while (pFVar1 != pFVar2);
  }
  return false;
}

// IsVertexInterfaceFrozen @ 14ad5a9e0

bool __thiscall
Metasound::FOutputVertexInterfaceData::IsVertexInterfaceFrozen(FOutputVertexInterfaceData *this)

{
  return this->bIsVertexInterfaceFrozen;
}

// RemoveVertex @ 14ad622b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::FOutputVertexInterfaceData::RemoveVertex(FOutputVertexInterfaceData *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FName *pFVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  FString local_38;
  
  if (this->bIsVertexInterfaceFrozen == false) {
    iVar6 = (this->Bindings).ArrayNum;
    lVar2 = (longlong)iVar6;
    if (iVar6 != 0) {
      pFVar1 = (this->Bindings).AllocatorInstance.Data;
      iVar8 = 0;
      bVar9 = *param_1 != *(FName *)(pFVar1 + 8);
      lVar4 = 0;
      iVar6 = 0;
      do {
        lVar4 = lVar4 + 1;
        iVar7 = iVar6 + 1;
        if (lVar4 < lVar2) {
          pFVar3 = (FName *)(pFVar1 + lVar4 * 0x40 + 8);
          do {
            if (bVar9 != (*param_1 != *pFVar3)) break;
            iVar7 = iVar7 + 1;
            lVar4 = lVar4 + 1;
            pFVar3 = pFVar3 + 8;
          } while (lVar4 < lVar2);
        }
        iVar5 = iVar7 - iVar6;
        if (bVar9 == false) {
          DestructItems<Metasound::VertexDataPrivate::FOutputBinding,int>
                    ((FOutputBinding *)(pFVar1 + (longlong)iVar6 * 0x40),iVar5);
        }
        else {
          if (iVar8 != iVar6) {
            memmove(pFVar1 + (longlong)iVar8 * 0x40,pFVar1 + (longlong)iVar6 * 0x40,
                    (longlong)iVar5 << 6);
          }
          iVar8 = iVar8 + iVar5;
        }
        bVar9 = (bool)(bVar9 ^ 1);
        iVar6 = iVar7;
      } while (lVar4 < lVar2);
      (this->Bindings).ArrayNum = iVar8;
    }
  }
  else if (2 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString(param_1,&local_38);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// Set @ 14ad62f40

void __thiscall
Metasound::FOutputVertexInterfaceData::Set
          (FOutputVertexInterfaceData *this,FDataReferenceCollection *param_1)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  FName *pFVar6;
  EVertexAccessType *pEVar7;
  FDataVertex *pFVar8;
  FDataVertex *pFVar9;
  undefined1 local_res8 [8];
  
  pFVar9 = (FDataVertex *)(this->Bindings).AllocatorInstance.Data;
  iVar1 = (this->Bindings).ArrayNum;
  pFVar8 = pFVar9 + (longlong)iVar1 * 2;
  pEVar7 = &pFVar9[1].AccessType;
  while( true ) {
    if ((this->Bindings).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Metasound::VertexDataPrivate::FOutputBinding,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar8) break;
    pFVar5 = TMapBase<FName,Metasound::FAnyDataReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>_>
             ::Find((TMapBase<FName,Metasound::FAnyDataReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>_>
                     *)param_1,*(FName *)(pEVar7 + -0xc));
    if (pFVar5 != (FAnyDataReference *)0x0) {
      pFVar6 = (FName *)(**(code **)(pFVar5->_padding_ + 8))(pFVar5);
      bVar4 = IsCastable(*(FName *)(pEVar7 + -10),*pFVar6);
      if (!bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Metasound::IsCastable( Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                           ,0x181,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (((char)*pEVar7 != Reference) && (FVar2 = *(FName *)(pEVar7 + -2), FVar2 != (FName)0x0)) {
        (*(code *)**(undefined8 **)FVar2)(FVar2,1);
      }
      FAnyDataReference::FAnyDataReference
                ((FAnyDataReference *)(pEVar7 + -6),pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
      ((FDataVertex *)(pEVar7 + -6))->_padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
      *(undefined1 *)pEVar7 = Value;
      VertexDataPrivate::CheckAccessTypeCompatibility(pFVar9,(FAnyDataReference *)(pEVar7 + -6));
    }
    pFVar9 = pFVar9 + 2;
    pEVar7 = pEVar7 + 0x10;
  }
  return;
}

// SetIsVertexInterfaceFrozen @ 14ad63a60

void __thiscall
Metasound::FOutputVertexInterfaceData::SetIsVertexInterfaceFrozen
          (FOutputVertexInterfaceData *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  this->bIsVertexInterfaceFrozen = param_1;
  if ((!param_1) && ((this->SubInterfaces).ArrayNum != 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsVertexInterfaceFrozen || SubInterfaces.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertexData.cpp"
                       ,0x2d0,L"Interfaces containing sub interfaces cannot be unfrozen");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetVertex @ 14ad64b40

void __thiscall
Metasound::FOutputVertexInterfaceData::SetVertex
          (FOutputVertexInterfaceData *this,FName *param_1,FAnyDataReference *param_2)

{
  VertexDataPrivate::SetVertex<Metasound::VertexDataPrivate::FOutputBinding>
            (this->bIsVertexInterfaceFrozen,&this->Bindings,param_1,param_2);
  return;
}

// SetVertex @ 14ad64b60

void __thiscall
Metasound::FOutputVertexInterfaceData::SetVertex
          (FOutputVertexInterfaceData *this,FName *param_1,FAnyDataReference *param_2)

{
  bool bVar1;
  EDataReferenceAccessType EVar2;
  IDataReference *pIVar3;
  code *pcVar4;
  bool bVar5;
  FAnyDataReference local_28;
  
  bVar1 = this->bIsVertexInterfaceFrozen;
  EVar2 = param_2->AccessType;
  pIVar3 = (param_2->DataRefPtr).Ptr;
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  local_28.AccessType = EVar2;
  (**(code **)((longlong)*pIVar3 + 0x18))(pIVar3,&local_28.DataRefPtr);
  if (local_28.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (EVar2 == None) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::None != InAccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30f,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  local_28._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  VertexDataPrivate::SetVertex<Metasound::VertexDataPrivate::FOutputBinding>
            (bVar1,&this->Bindings,param_1,&local_28);
  if (local_28.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_28.DataRefPtr.Ptr)(local_28.DataRefPtr.Ptr,1);
  }
  return;
}

// ToDataReferenceCollection @ 14ad66340

FDataReferenceCollection * __thiscall
Metasound::FOutputVertexInterfaceData::ToDataReferenceCollection
          (FOutputVertexInterfaceData *this,FDataReferenceCollection *__return_storage_ptr__)

{
  FScriptContainerElement FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FDataReferenceCollection *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_68 [8];
  undefined **local_60;
  FScriptContainerElement local_58;
  undefined8 *local_50;
  TPairInitializer<FName_const_&,Metasound::FAnyDataReference_const_&> local_48;
  undefined ***local_38;
  
  *(undefined8 *)&__return_storage_ptr__->DataRefMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DataRefMap).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DataRefMap).field_0x48 = 0;
  pFVar8 = (this->Bindings).AllocatorInstance.Data;
  iVar2 = (this->Bindings).ArrayNum;
  pFVar7 = pFVar8 + (longlong)iVar2 * 0x40;
  pFVar6 = pFVar8 + 0x30;
  while( true ) {
    if ((this->Bindings).ArrayNum != iVar2) {
      local_68[0] = 0;
      `TCheckedPointerIterator<Metasound::VertexDataPrivate::FOutputBinding_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_68);
    }
    if (pFVar8 == pFVar7) break;
    if (pFVar6[8] != (FScriptContainerElement)0x0) {
      FVar1 = pFVar6[-8];
      local_60 = &___7FAnyDataReference_Metasound__6B_;
      local_58 = FVar1;
      (**(code **)(**(longlong **)pFVar6 + 0x18))(*(longlong **)pFVar6,&local_50);
      if (local_50 == (undefined8 *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("DataRefPtr.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30e,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar5 = (FDataReferenceCollection *)(*pcVar3)();
          return pFVar5;
        }
      }
      if (FVar1 == (FScriptContainerElement)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("EDataReferenceAccessType::None != InAccessType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                           ,0x30f,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar5 = (FDataReferenceCollection *)(*pcVar3)();
          return pFVar5;
        }
      }
      local_48.Value = (FAnyDataReference *)(pFVar6 + -0x28);
      local_60 = &___7FAnyDataReference_Metasound__6B_;
      local_38 = &local_60;
      TSet<TTuple<FName,Metasound::FAnyDataReference>,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,Metasound::FAnyDataReference_const_&>_>
                ((TSet<TTuple<FName,Metasound::FAnyDataReference>,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,&local_48,(bool *)&local_48.Value);
      if (local_50 != (undefined8 *)0x0) {
        (**(code **)*local_50)(local_50,1);
      }
    }
    pFVar8 = pFVar8 + 0x40;
    pFVar6 = pFVar6 + 0x40;
  }
  return __return_storage_ptr__;
}

