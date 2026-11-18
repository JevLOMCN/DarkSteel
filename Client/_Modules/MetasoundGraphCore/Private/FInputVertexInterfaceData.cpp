// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 36

// FInputVertexInterfaceData @ 14ad3a940

FInputVertexInterfaceData * __thiscall
Metasound::FInputVertexInterfaceData::FInputVertexInterfaceData
          (FInputVertexInterfaceData *this,FInputVertexInterface *param_1)

{
  TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  FScriptContainerElement FVar4;
  FSubInterfaceLayout *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FInputVertexInterfaceData *pFVar9;
  ulonglong uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  undefined1 local_res10 [8];
  uint local_res18;
  
  this->bIsVertexInterfaceFrozen = true;
  pTVar1 = &this->Bindings;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar2 = &this->SubInterfaces;
  (this->Bindings).ArrayNum = 0;
  (this->Bindings).ArrayMax = 0;
  iVar8 = (param_1->SubInterfaces).ArrayNum;
  pFVar5 = (FSubInterfaceLayout *)(param_1->SubInterfaces).AllocatorInstance.Data;
  if (iVar8 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FInputVertexInterfaceData *)(*pcVar6)();
      return pFVar9;
    }
  }
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar3 = &(this->SubInterfaces).ArrayMax;
  (this->SubInterfaces).ArrayNum = iVar8;
  if (iVar8 == 0) {
    *piVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar8,0,&pTVar2->AllocatorInstance,iVar8,piVar3);
    ConstructItems<Metasound::VertexPrivate::FSubInterfaceLayout,Metasound::VertexPrivate::FSubInterfaceLayout,int>
              ((pTVar2->AllocatorInstance).Data,pFVar5,iVar8);
  }
  local_res18 = (uint)param_1->_padding_;
  uVar10 = (ulonglong)(int)local_res18;
  lVar11 = param_1->_padding_;
  lVar13 = uVar10 * 0x38 + lVar11;
  while( true ) {
    if ((int)param_1->_padding_ != (int)uVar10) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Metasound::FInputDataVertex_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (lVar11 == lVar13) break;
    iVar8 = (this->Bindings).ArrayNum;
    if (iVar8 == (this->Bindings).ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x858,&pTVar1->AllocatorInstance,&(this->Bindings).ArrayMax);
    }
    (this->Bindings).ArrayNum = iVar8 + 1;
    pFVar12 = (pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x58;
    *(undefined ***)pFVar12 = &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)(pFVar12 + 8) = *(undefined8 *)(lVar11 + 8);
    *(undefined8 *)(pFVar12 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    *(undefined4 *)(pFVar12 + 0x18) = *(undefined4 *)(lVar11 + 0x18);
    *(undefined ***)pFVar12 = &___7FInputDataVertex_Metasound__6B_;
    FVar4 = *(FScriptContainerElement *)(lVar11 + 0x30);
    pFVar12[0x30] = FVar4;
    if (0xc < (byte)FVar4) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xec,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FInputVertexInterfaceData *)(*pcVar6)();
        return pFVar9;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                ::__l2::CopyConstructors)[(byte)FVar4])(pFVar12 + 0x20,lVar11 + 0x20);
    uVar10 = (ulonglong)local_res18;
    lVar11 = lVar11 + 0x38;
    pFVar12[0x50] = (FScriptContainerElement)0x0;
  }
  return this;
}

// FInputVertexInterfaceData @ 14ad3ab20

FInputVertexInterfaceData * __thiscall
Metasound::FInputVertexInterfaceData::FInputVertexInterfaceData(FInputVertexInterfaceData *this)

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

// operator= @ 14ad3e880

FInputVertexInterfaceData * __thiscall
Metasound::FInputVertexInterfaceData::operator=
          (FInputVertexInterfaceData *this,FInputVertexInterfaceData *param_1)

{
  TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FInputBinding *pFVar4;
  
  pTVar1 = &this->Bindings;
  this->bIsVertexInterfaceFrozen = param_1->bIsVertexInterfaceFrozen;
  if (pTVar1 != &param_1->Bindings) {
    DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>
              ((FInputBinding *)(pTVar1->AllocatorInstance).Data,(this->Bindings).ArrayNum);
    iVar3 = (param_1->Bindings).ArrayNum;
    piVar2 = &(this->Bindings).ArrayMax;
    pFVar4 = (FInputBinding *)(param_1->Bindings).AllocatorInstance.Data;
    (this->Bindings).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<Metasound::VertexDataPrivate::FInputBinding,Metasound::VertexDataPrivate::FInputBinding,int>
                ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  TArray<Metasound::VertexPrivate::FSubInterfaceLayout,TSizedDefaultAllocator<32>_>::operator=
            (&this->SubInterfaces,&param_1->SubInterfaces);
  return this;
}

// operator() @ 14ad3f810

void __thiscall
`Metasound::FInputVertexInterfaceData::
BindVertex<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>'::__l2::<lambda_1>::operator()
          (void *this,FInputBinding *param_1)

{
  longlong *plVar1;
  IDataReference *pIVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar8;
  FName *pFVar9;
  undefined1 local_28 [32];
  
  plVar1 = *(longlong **)this;
  if ((param_1->Data).bIsSet != false) {
    pTVar8 = Metasound::FAnyDataReference::
             GetAs<Metasound::TDataReadReference<Metasound::FAudioBuffer>_>
                       (&(param_1->Data).TypedValue,
                        (TDataReadReference<Metasound::FAudioBuffer> *)local_28);
    lVar4 = plVar1[1];
    lVar5 = plVar1[2];
    lVar6 = *(longlong *)&pTVar8->field_0x10;
    plVar1[1] = *(longlong *)&pTVar8->field_0x8;
    plVar1[2] = lVar6;
    *(longlong *)&pTVar8->field_0x8 = lVar4;
    *(longlong *)&pTVar8->field_0x10 = lVar5;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
    return;
  }
  pFVar9 = (FName *)(**(code **)(*plVar1 + 8))(plVar1);
  bVar7 = Metasound::IsCastable((FName)(param_1->Vertex)._padding_,*pFVar9);
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                       ,0xf3,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (((param_1->Data).bIsSet != false) &&
     (pIVar2 = (param_1->Data).TypedValue.DataRefPtr.Ptr, pIVar2 != (IDataReference *)0x0)) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  (param_1->Data).TypedValue.AccessType = Read;
  (param_1->Data).TypedValue._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (**(code **)(*plVar1 + 0x18))(plVar1,&(param_1->Data).TypedValue.DataRefPtr);
  if ((param_1->Data).TypedValue.DataRefPtr.Ptr == (IDataReference *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (param_1->Data).TypedValue._padding_ = (longlong)&___7FAnyDataReference_Metasound__6B_;
  (param_1->Data).bIsSet = true;
  Metasound::VertexDataPrivate::CheckAccessTypeCompatibility
            ((FDataVertex *)param_1,&(param_1->Data).TypedValue);
  return;
}

// operator() @ 14ad3fbb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FInputBinding * __thiscall
`Metasound::FInputVertexInterfaceData::BindVertex'::__l2::<lambda_1>::operator()
          (void *this,FInputBinding *__return_storage_ptr__)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FInputBinding *pFVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined1 auStack_a8 [32];
  FText local_88;
  FText local_78;
  undefined1 local_68;
  undefined **local_60;
  longlong local_58;
  longlong local_50;
  undefined4 local_48;
  undefined1 local_40 [16];
  byte local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  cVar1 = *(char *)(*(longlong *)((longlong)this + 8) + 8);
  if (((cVar1 == '\x01') || (cVar1 == '\x02')) || (cVar1 != '\x04')) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  FText::FText(&local_88);
  FText::FText(&local_78);
  local_68 = 0;
  plVar4 = (longlong *)(**(code **)(**(longlong **)((longlong)this + 8) + 8))();
  local_58 = **(longlong **)this;
  local_50 = *plVar4;
  local_60 = &___7FInputDataVertex_Metasound__6B_;
  local_30 = 0;
  local_48 = uVar6;
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_88.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
  }
  (__return_storage_ptr__->Vertex)._padding_ = local_58;
  (__return_storage_ptr__->Vertex)._padding_ = local_50;
  (__return_storage_ptr__->Vertex)._padding_ = (longlong)&___7FInputDataVertex_Metasound__6B_;
  uVar7 = (ulonglong)local_30;
  *(undefined4 *)&(__return_storage_ptr__->Vertex)._padding_ = local_48;
  (__return_storage_ptr__->Vertex).Literal.Value.TypeIndex = local_30;
  if (0xc < local_30) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xec,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FInputBinding *)(*pcVar2)();
      return pFVar5;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                ::__l2::CopyConstructors)[uVar7] !=
      UE::Core::Private::TCopyConstructorCaller<Metasound::FLiteral::FNone>::Construct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                ::__l2::CopyConstructors)[uVar7])
              (&(__return_storage_ptr__->Vertex).Literal,local_40);
  }
  uVar7 = (ulonglong)local_30;
  (__return_storage_ptr__->Data).bIsSet = false;
  if (0xc < local_30) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FInputBinding *)(*pcVar2)();
      return pFVar5;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar7] !=
      UE::Core::Private::TDestructorCaller<Metasound::FLiteral::FNone>::Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar7])(local_40);
  }
  return __return_storage_ptr__;
}

// operator() @ 14ad40fa0

void __thiscall
`Metasound::FInputVertexInterfaceData::FindSubInterfaceReferences'::__l2::<lambda_1>::operator()
          (void *this,uint param_1,FInputBinding *param_2)

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
                       ,0x267,L"");
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

// operator() @ 14ad41860

void __thiscall
`Metasound::FInputVertexInterfaceData::BindVertex'::__l2::<lambda_2>::operator()
          (void *this,FInputBinding *param_1)

{
  TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> *pTVar1;
  EDataReferenceAccessType EVar2;
  FAnyDataReference *pFVar3;
  IDataReference *pIVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 *local_res8;
  longlong *local_18 [2];
  
  pFVar3 = *(FAnyDataReference **)this;
  if ((param_1->Data).bIsSet == false) {
    Metasound::VertexDataPrivate::FInputBinding::Set<Metasound::FAnyDataReference>(param_1,pFVar3);
    return;
  }
  pIVar4 = (param_1->Data).TypedValue.DataRefPtr.Ptr;
  EVar2 = (param_1->Data).TypedValue.AccessType;
  (**(code **)((longlong)*pIVar4 + 0x18))
            (pIVar4,local_18,in_R8,in_R9,&___7FAnyDataReference_Metasound__6B_);
  if (local_18[0] == (longlong *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30e,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (EVar2 == None) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::None != InAccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x30f,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3->AccessType = EVar2;
  puVar7 = (undefined8 *)(**(code **)(*local_18[0] + 0x18))(local_18[0],&local_res8);
  pTVar1 = &pFVar3->DataRefPtr;
  if (pTVar1 != (TUniquePtr<Metasound::IDataReference,TDefaultDelete<Metasound::IDataReference>_> *)
                puVar7) {
    pIVar4 = pTVar1->Ptr;
    pTVar1->Ptr = (IDataReference *)*puVar7;
    *puVar7 = 0;
    if (pIVar4 != (IDataReference *)0x0) {
      (**(code **)*pIVar4)(pIVar4,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  if (pTVar1->Ptr == (IDataReference *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataRefPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x334,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (pFVar3->AccessType == None) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("EDataReferenceAccessType::None != AccessType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundDataReference.h"
                       ,0x335,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (local_18[0] != (longlong *)0x0) {
    (**(code **)*local_18[0])(local_18[0],1);
    return;
  }
  return;
}

// AddVertex @ 14ad46490

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::FInputVertexInterfaceData::AddVertex
          (FInputVertexInterfaceData *this,FInputDataVertex *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FString local_18;
  
  if (this->bIsVertexInterfaceFrozen == false) {
    iVar1 = (this->Bindings).ArrayNum;
    if (iVar1 == (this->Bindings).ArrayMax) {
      iVar1 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x858,&(this->Bindings).AllocatorInstance,&(this->Bindings).ArrayMax);
    }
    (this->Bindings).ArrayNum = iVar1 + 1;
    pFVar2 = (this->Bindings).AllocatorInstance.Data + (longlong)iVar1 * 0x58;
    *(undefined ***)pFVar2 = &___7FDataVertex_Metasound__6B_;
    *(longlong *)(pFVar2 + 8) = param_1->_padding_;
    *(longlong *)(pFVar2 + 0x10) = param_1->_padding_;
    *(int *)(pFVar2 + 0x18) = (int)param_1->_padding_;
    *(undefined ***)pFVar2 = &___7FInputDataVertex_Metasound__6B_;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(pFVar2 + 0x20),&(param_1->Literal).Value);
    pFVar2[0x50] = (FScriptContainerElement)0x0;
  }
  else if (2 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString((FName *)&param_1->_padding_,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// Apply @ 14ad468c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::FInputVertexInterfaceData::Apply
          (FInputVertexInterfaceData *this,FName *param_1,
          TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *param_2,
          TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *param_3)

{
  TArray<Metasound::VertexDataPrivate::FInputBinding,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  FScriptContainerElement *local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  FString local_88;
  FScriptContainerElement local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
  local_58;
  EDataReferenceAccessType local_38;
  IDataReference *local_30;
  FScriptContainerElement local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pTVar1 = &this->Bindings;
  pFVar7 = (pTVar1->AllocatorInstance).Data;
  pFVar6 = pFVar7 + (longlong)(this->Bindings).ArrayNum * 0x58;
  if (pFVar7 != pFVar6) {
    do {
      if (*(FName *)(pFVar7 + 8) == *param_1) {
        (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8);
        return;
      }
      pFVar7 = pFVar7 + 0x58;
    } while (pFVar7 != pFVar6);
  }
  if (this->bIsVertexInterfaceFrozen == false) {
    (**(code **)param_2)(local_78,*(undefined8 *)&param_2->field_0x8);
    (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,local_78);
    pFVar7 = (pTVar1->AllocatorInstance).Data;
    if ((pFVar7 <= local_78) &&
       (lVar8 = (longlong)(this->Bindings).ArrayMax, local_78 < pFVar7 + lVar8 * 0x58)) {
      local_a0 = (longlong)(this->Bindings).ArrayNum;
      local_98 = 0x58;
      local_b8 = local_78;
      local_b0 = pFVar7;
      local_a8 = lVar8;
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
    iVar5 = (this->Bindings).ArrayNum;
    piVar2 = &(this->Bindings).ArrayMax;
    if (iVar5 == *piVar2) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x858,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->Bindings).ArrayNum = iVar5 + 1;
    pFVar7 = (pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x58;
    *(undefined ***)pFVar7 = &___7FDataVertex_Metasound__6B_;
    *(undefined8 *)(pFVar7 + 8) = local_70;
    *(undefined8 *)(pFVar7 + 0x10) = local_68;
    *(undefined4 *)(pFVar7 + 0x18) = local_60;
    *(undefined ***)pFVar7 = &___7FInputDataVertex_Metasound__6B_;
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
    ::
    TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
              ((TVariant<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>
                *)(pFVar7 + 0x20),&local_58);
    pFVar7[0x50] = (FScriptContainerElement)0x0;
    pFVar7[0x50] = local_28;
    if (local_28 != (FScriptContainerElement)0x0) {
      FAnyDataReference::FAnyDataReference((FAnyDataReference *)(pFVar7 + 0x38),local_38,local_30);
      *(undefined ***)(pFVar7 + 0x38) = &___7FAnyDataReference_Metasound__6B_;
    }
    if ((local_28 != (FScriptContainerElement)0x0) && (local_30 != (IDataReference *)0x0)) {
      (**(code **)*local_30)(local_30,1);
    }
    if ((0xc < local_58.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_58.TypeIndex])(&local_58);
  }
  else if (2 < (byte)LogMetaSound._0_1_) {
    ::FName::ToString(param_1,&local_88);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// AreAllVerticesBound @ 14ad471e0

bool __thiscall
Metasound::FInputVertexInterfaceData::AreAllVerticesBound(FInputVertexInterfaceData *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Bindings).ArrayNum;
  pFVar2 = (this->Bindings).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x58;
  while( true ) {
    if ((this->Bindings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Metasound::VertexDataPrivate::FInputBinding_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (pFVar2[0x50] == (FScriptContainerElement)0x0) {
      return false;
    }
    pFVar2 = pFVar2 + 0x58;
  }
  return true;
}

// Bind @ 14ad47900

void __thiscall
Metasound::FInputVertexInterfaceData::Bind
          (FInputVertexInterfaceData *this,FInputVertexInterfaceData *param_1)

{
  VertexDataPrivate::Bind<Metasound::VertexDataPrivate::FInputBinding>
            (this->bIsVertexInterfaceFrozen,&this->Bindings,&param_1->Bindings);
  return;
}

// Bind @ 14ad47920

void __thiscall
Metasound::FInputVertexInterfaceData::Bind
          (FInputVertexInterfaceData *this,FInputVertexInterfaceData *param_1)

{
  VertexDataPrivate::Bind<Metasound::VertexDataPrivate::FInputBinding>
            (this->bIsVertexInterfaceFrozen,&this->Bindings,&param_1->Bindings);
  return;
}

// BindVertex @ 14ad48570

void __thiscall
Metasound::FInputVertexInterfaceData::BindVertex
          (FInputVertexInterfaceData *this,FName *param_1,FAnyDataReference *param_2)

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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindVertex'::__l2::<lambda_2>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindVertex'::__l2::<lambda_1>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res10[0] = param_2;
  local_38 = param_1;
  local_30 = param_2;
  Apply(this,param_1,
        (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
        (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28);
  return;
}

// BindVertex @ 14ad485d0

void __thiscall
Metasound::FInputVertexInterfaceData::BindVertex
          (FInputVertexInterfaceData *this,FName *param_1,FAnyDataReference *param_2)

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
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindVertex'::__l2::<lambda_2>,void,Metasound::VertexDataPrivate::FInputBinding_&>
             ::Call;
  local_10 = &local_38;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::BindVertex'::__l2::<lambda_1>,Metasound::VertexDataPrivate::FInputBinding>
             ::Call;
  local_res10[0] = param_2;
  local_38 = param_1;
  local_30 = param_2;
  Apply(this,param_1,
        (TFunctionRef<Metasound::VertexDataPrivate::FInputBinding___cdecl(void)> *)&local_18,
        (TFunctionRef<void___cdecl(Metasound::VertexDataPrivate::FInputBinding_&)> *)&local_28);
  return;
}

// Contains @ 14ad4b630

bool __thiscall
Metasound::FInputVertexInterfaceData::Contains(FInputVertexInterfaceData *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->Bindings).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (longlong)(this->Bindings).ArrayNum * 0x58;
  if (pFVar1 != pFVar2) {
    do {
      if (*(FName *)(pFVar1 + 8) == *param_1) goto LAB_14ad4b658;
      pFVar1 = pFVar1 + 0x58;
    } while (pFVar1 != pFVar2);
  }
  pFVar1 = (FScriptContainerElement *)0x0;
LAB_14ad4b658:
  return pFVar1 != (FScriptContainerElement *)0x0;
}

// Find @ 14ad50b30

FInputBinding * __thiscall
Metasound::FInputVertexInterfaceData::Find(FInputVertexInterfaceData *this,FName *param_1)

{
  FInputBinding *pFVar1;
  FInputBinding *pFVar2;
  
  pFVar1 = (FInputBinding *)(this->Bindings).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->Bindings).ArrayNum;
  if (pFVar1 != pFVar2) {
    do {
      if ((FName)(pFVar1->Vertex)._padding_ == *param_1) {
        return pFVar1;
      }
      pFVar1 = pFVar1 + 1;
    } while (pFVar1 != pFVar2);
  }
  return (FInputBinding *)0x0;
}

// Find @ 14ad50b60

FInputBinding * __thiscall
Metasound::FInputVertexInterfaceData::Find(FInputVertexInterfaceData *this,FName *param_1)

{
  FInputBinding *pFVar1;
  FInputBinding *pFVar2;
  
  pFVar1 = (FInputBinding *)(this->Bindings).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->Bindings).ArrayNum;
  if (pFVar1 != pFVar2) {
    do {
      if ((FName)(pFVar1->Vertex)._padding_ == *param_1) {
        return pFVar1;
      }
      pFVar1 = pFVar1 + 1;
    } while (pFVar1 != pFVar2);
  }
  return (FInputBinding *)0x0;
}

// FindChecked @ 14ad50cb0

FInputBinding * __thiscall
Metasound::FInputVertexInterfaceData::FindChecked(FInputVertexInterfaceData *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  FInputBinding *pFVar4;
  FString local_18;
  
  pFVar3 = (FInputBinding *)(this->Bindings).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (this->Bindings).ArrayNum;
  if (pFVar3 != pFVar4) {
    do {
      if ((FName)(pFVar3->Vertex)._padding_ == *param_1) {
        return pFVar3;
      }
      pFVar3 = pFVar3 + 1;
    } while (pFVar3 != pFVar4);
  }
  ::FName::ToString(param_1,&local_18);
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("nullptr != Binding",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertexData.cpp"
                     ,0x2ac,L"Attempt to access vertex \"%s\" which does not exist on interface.");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar2) {
    return (FInputBinding *)0x0;
  }
  pcVar1 = (code *)swi(3);
  pFVar3 = (FInputBinding *)(*pcVar1)();
  return pFVar3;
}

// FindChecked @ 14ad50d60

FInputBinding * __thiscall
Metasound::FInputVertexInterfaceData::FindChecked(FInputVertexInterfaceData *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  FInputBinding *pFVar3;
  FInputBinding *pFVar4;
  FString local_18;
  
  pFVar3 = (FInputBinding *)(this->Bindings).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (this->Bindings).ArrayNum;
  if (pFVar3 != pFVar4) {
    do {
      if ((FName)(pFVar3->Vertex)._padding_ == *param_1) {
        return pFVar3;
      }
      pFVar3 = pFVar3 + 1;
    } while (pFVar3 != pFVar4);
  }
  ::FName::ToString(param_1,&local_18);
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("nullptr != Binding",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertexData.cpp"
                     ,0x2b3,L"Attempt to access vertex \"%s\" which does not exist on interface.");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar2) {
    return (FInputBinding *)0x0;
  }
  pcVar1 = (code *)swi(3);
  pFVar3 = (FInputBinding *)(*pcVar1)();
  return pFVar3;
}

// FindDataReference @ 14ad50f80

FAnyDataReference * __thiscall
Metasound::FInputVertexInterfaceData::FindDataReference
          (FInputVertexInterfaceData *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  FAnyDataReference *pFVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = (this->Bindings).AllocatorInstance.Data;
  pFVar3 = pFVar1 + (longlong)(this->Bindings).ArrayNum * 0x58;
  if (pFVar1 != pFVar3) {
    do {
      if (*(FName *)(pFVar1 + 8) == *param_1) {
        pFVar2 = (FAnyDataReference *)(pFVar1 + 0x38);
        if (pFVar1[0x50] == (FScriptContainerElement)0x0) {
          pFVar2 = (FAnyDataReference *)0x0;
        }
        return pFVar2;
      }
      pFVar1 = pFVar1 + 0x58;
    } while (pFVar1 != pFVar3);
  }
  return (FAnyDataReference *)0x0;
}

// FindSubInterface @ 14ad51e20

FSubInterfaceLayout * __thiscall
Metasound::FInputVertexInterfaceData::FindSubInterface
          (FInputVertexInterfaceData *this,FName *param_1)

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

// FindSubInterfaceReferences @ 14ad51ee0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<Metasound::FAnyDataReference_const_*,TSizedDefaultAllocator<32>_> * __thiscall
Metasound::FInputVertexInterfaceData::FindSubInterfaceReferences
          (FInputVertexInterfaceData *this,
          TArray<Metasound::FAnyDataReference_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FName *param_1,FName *param_2)

{
  FSubInterfaceLayout *pFVar1;
  int iVar2;
  FInputBinding *pFVar3;
  code *pcVar4;
  bool bVar5;
  TArray<Metasound::FAnyDataReference_const_*,TSizedDefaultAllocator<32>_> *pTVar6;
  FSubInterfaceLayout *pFVar7;
  TArray<Metasound::FAnyDataReference_const_*,TSizedDefaultAllocator<32>_> *local_res8;
  undefined4 uStack_3c;
  code *local_38;
  TArray<Metasound::FAnyDataReference_const_*,TSizedDefaultAllocator<32>_> **local_30;
  TArrayView<Metasound::VertexDataPrivate::FInputBinding_const_,int> local_28;
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
        pFVar3 = (FInputBinding *)(this->Bindings).AllocatorInstance.Data;
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
                   TFunctionRefCaller<`Metasound::FInputVertexInterfaceData::FindSubInterfaceReferences'::__l2::<lambda_1>,void,unsigned_int,Metasound::VertexDataPrivate::FInputBinding_const_&>
                   ::Call;
        local_30 = &local_res8;
        local_28.DataPtr = pFVar3;
        VertexDataPrivate::
        ForEachSubInterfaceBindingImpl<Metasound::VertexDataPrivate::FInputBinding_const_>
                  (pFVar7,param_2,0xffffffff,
                   (TFunctionRef<void___cdecl(unsigned_int,Metasound::VertexDataPrivate::FInputBinding_const_&)>
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

// ForEachSubInterfaceBinding @ 14ad527c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::FInputVertexInterfaceData::ForEachSubInterfaceBinding
          (FInputVertexInterfaceData *this,FName *param_1,FName *param_2,uint param_3,
          TFunctionRef<void___cdecl(unsigned_int,Metasound::VertexDataPrivate::FInputBinding_&)>
          *param_4)

{
  FSubInterfaceLayout *pFVar1;
  int iVar2;
  FInputBinding *pFVar3;
  code *pcVar4;
  bool bVar5;
  FSubInterfaceLayout *pFVar6;
  undefined4 uStack_3c;
  TFunctionRef<void___cdecl(unsigned_int,Metasound::VertexDataPrivate::FInputBinding_&)> local_38;
  TArrayView<Metasound::VertexDataPrivate::FInputBinding,int> local_28;
  FString local_18;
  
  pFVar6 = (FSubInterfaceLayout *)(this->SubInterfaces).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (this->SubInterfaces).ArrayNum;
  if (pFVar6 != pFVar1) {
    do {
      if (pFVar6->SubInterfaceName == *param_1) {
        pFVar3 = (FInputBinding *)(this->Bindings).AllocatorInstance.Data;
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
        ForEachSubInterfaceBindingImpl<Metasound::VertexDataPrivate::FInputBinding>
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

// ForEachSubInterfaceBinding @ 14ad52900

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::FInputVertexInterfaceData::ForEachSubInterfaceBinding
          (FInputVertexInterfaceData *this,FName *param_1,FName *param_2,uint param_3,
          TFunctionRef<void___cdecl(unsigned_int,Metasound::VertexDataPrivate::FInputBinding_const_&)>
          *param_4)

{
  FSubInterfaceLayout *pFVar1;
  int iVar2;
  FInputBinding *pFVar3;
  code *pcVar4;
  bool bVar5;
  FSubInterfaceLayout *pFVar6;
  undefined4 uStack_3c;
  TFunctionRef<void___cdecl(unsigned_int,Metasound::VertexDataPrivate::FInputBinding_const_&)>
  local_38;
  TArrayView<Metasound::VertexDataPrivate::FInputBinding_const_,int> local_28;
  FString local_18;
  
  pFVar6 = (FSubInterfaceLayout *)(this->SubInterfaces).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (this->SubInterfaces).ArrayNum;
  if (pFVar6 != pFVar1) {
    do {
      if (pFVar6->SubInterfaceName == *param_1) {
        pFVar3 = (FInputBinding *)(this->Bindings).AllocatorInstance.Data;
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
        ForEachSubInterfaceBindingImpl<Metasound::VertexDataPrivate::FInputBinding_const_>
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

// GetNumSubInterfaceInstances @ 14ad56330

uint __thiscall
Metasound::FInputVertexInterfaceData::GetNumSubInterfaceInstances
          (FInputVertexInterfaceData *this,FName *param_1)

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

// GetVertex @ 14ad57220

FInputDataVertex * __thiscall
Metasound::FInputVertexInterfaceData::GetVertex(FInputVertexInterfaceData *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  FInputDataVertex *pFVar3;
  FInputDataVertex *pFVar4;
  FString local_18;
  
  pFVar3 = (FInputDataVertex *)(this->Bindings).AllocatorInstance.Data;
  pFVar4 = (FInputDataVertex *)((longlong)pFVar3 + (longlong)(this->Bindings).ArrayNum * 0x58);
  if (pFVar3 != pFVar4) {
    do {
      if ((FName)pFVar3->_padding_ == *param_1) {
        return pFVar3;
      }
      pFVar3 = (FInputDataVertex *)&pFVar3[1].Literal;
    } while (pFVar3 != pFVar4);
  }
  ::FName::ToString(param_1,&local_18);
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("nullptr != Binding",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertexData.cpp"
                     ,0x2b3,L"Attempt to access vertex \"%s\" which does not exist on interface.");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar2) {
    return (FInputDataVertex *)0x0;
  }
  pcVar1 = (code *)swi(3);
  pFVar3 = (FInputDataVertex *)(*pcVar1)();
  return pFVar3;
}

// GetVertexDataAccessType @ 14ad57390

EDataReferenceAccessType __thiscall
Metasound::FInputVertexInterfaceData::GetVertexDataAccessType
          (FInputVertexInterfaceData *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->Bindings).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (longlong)(this->Bindings).ArrayNum * 0x58;
  if (pFVar1 != pFVar2) {
    do {
      if (*(FName *)(pFVar1 + 8) == *param_1) {
        if (pFVar1[0x50] == (FScriptContainerElement)0x0) {
          return None;
        }
        return (EDataReferenceAccessType)pFVar1[0x40];
      }
      pFVar1 = pFVar1 + 0x58;
    } while (pFVar1 != pFVar2);
  }
  return None;
}

// IsVertexBound @ 14ad5a950

bool __thiscall
Metasound::FInputVertexInterfaceData::IsVertexBound(FInputVertexInterfaceData *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->Bindings).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (longlong)(this->Bindings).ArrayNum * 0x58;
  if (pFVar1 != pFVar2) {
    do {
      if (*(FName *)(pFVar1 + 8) == *param_1) {
        return (bool)pFVar1[0x50];
      }
      pFVar1 = pFVar1 + 0x58;
    } while (pFVar1 != pFVar2);
  }
  return false;
}

// IsVertexInterfaceFrozen @ 14ad5a9d0

bool __thiscall
Metasound::FInputVertexInterfaceData::IsVertexInterfaceFrozen(FInputVertexInterfaceData *this)

{
  return this->bIsVertexInterfaceFrozen;
}

// RemoveVertex @ 14ad62130

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::FInputVertexInterfaceData::RemoveVertex(FInputVertexInterfaceData *this,FName *param_1)

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
          pFVar3 = (FName *)(pFVar1 + lVar4 * 0x58 + 8);
          do {
            if (bVar9 != (*param_1 != *pFVar3)) break;
            iVar7 = iVar7 + 1;
            lVar4 = lVar4 + 1;
            pFVar3 = pFVar3 + 0xb;
          } while (lVar4 < lVar2);
        }
        iVar5 = iVar7 - iVar6;
        if (bVar9 == false) {
          DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>
                    ((FInputBinding *)(pFVar1 + (longlong)iVar6 * 0x58),iVar5);
        }
        else {
          if (iVar8 != iVar6) {
            memmove(pFVar1 + (longlong)iVar8 * 0x58,pFVar1 + (longlong)iVar6 * 0x58,
                    (longlong)iVar5 * 0x58);
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

// Set @ 14ad62d70

void __thiscall
Metasound::FInputVertexInterfaceData::Set
          (FInputVertexInterfaceData *this,FDataReferenceCollection *param_1)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FAnyDataReference *pFVar5;
  FName *pFVar6;
  FName *pFVar7;
  FDataVertex *pFVar8;
  FDataVertex *pFVar9;
  undefined1 local_res8 [8];
  
  pFVar8 = (FDataVertex *)(this->Bindings).AllocatorInstance.Data;
  iVar1 = (this->Bindings).ArrayNum;
  pFVar7 = &pFVar8[2].DataTypeName;
  pFVar9 = (FDataVertex *)((longlong)pFVar8 + (longlong)iVar1 * 0x58);
  while( true ) {
    if ((this->Bindings).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Metasound::VertexDataPrivate::FInputBinding,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar9) break;
    pFVar5 = TMapBase<FName,Metasound::FAnyDataReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>_>
             ::Find((TMapBase<FName,Metasound::FAnyDataReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,Metasound::FAnyDataReference,0>_>
                     *)param_1,pFVar7[-9]);
    if (pFVar5 != (FAnyDataReference *)0x0) {
      pFVar6 = (FName *)(**(code **)(pFVar5->_padding_ + 8))(pFVar5);
      bVar4 = IsCastable(pFVar7[-8],*pFVar6);
      if (!bVar4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Metasound::IsCastable(Vertex.DataTypeName, InDataReference.GetDataTypeName())"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVertexData.h"
                           ,0xf3,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (((char)(pFVar7->ComparisonIndex).Value != '\0') &&
         (FVar2 = pFVar7[-1], FVar2 != (FName)0x0)) {
        (*(code *)**(undefined8 **)FVar2)(FVar2,1);
      }
      FAnyDataReference::FAnyDataReference
                ((FAnyDataReference *)(pFVar7 + -3),pFVar5->AccessType,(pFVar5->DataRefPtr).Ptr);
      pFVar7[-3] = (FName)&___7FAnyDataReference_Metasound__6B_;
      *(undefined1 *)&(pFVar7->ComparisonIndex).Value = 1;
      VertexDataPrivate::CheckAccessTypeCompatibility(pFVar8,(FAnyDataReference *)(pFVar7 + -3));
    }
    pFVar8 = (FDataVertex *)&pFVar8[2].AccessType;
    pFVar7 = pFVar7 + 0xb;
  }
  return;
}

// SetDefaultLiteral @ 14ad63980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::FInputVertexInterfaceData::SetDefaultLiteral
          (FInputVertexInterfaceData *this,FName *param_1,FLiteral *param_2)

{
  FInputDataVertex *this_00;
  FInputDataVertex *pFVar1;
  FString local_18;
  
  this_00 = (FInputDataVertex *)(this->Bindings).AllocatorInstance.Data;
  pFVar1 = (FInputDataVertex *)((longlong)this_00 + (longlong)(this->Bindings).ArrayNum * 0x58);
  if (this_00 != pFVar1) {
    do {
      if ((FName)this_00->_padding_ == *param_1) {
        FInputDataVertex::SetDefaultLiteral(this_00,param_2);
        return;
      }
      this_00 = (FInputDataVertex *)&this_00[1].Literal;
    } while (this_00 != pFVar1);
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

// SetIsVertexInterfaceFrozen @ 14ad63a10

void __thiscall
Metasound::FInputVertexInterfaceData::SetIsVertexInterfaceFrozen
          (FInputVertexInterfaceData *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  this->bIsVertexInterfaceFrozen = param_1;
  if ((!param_1) && ((this->SubInterfaces).ArrayNum != 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsVertexInterfaceFrozen || SubInterfaces.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundVertexData.cpp"
                       ,0x1df,L"Interfaces containing sub interfaces cannot be unfrozen");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetVertex @ 14ad64a30

void __thiscall
Metasound::FInputVertexInterfaceData::SetVertex
          (FInputVertexInterfaceData *this,FName *param_1,FAnyDataReference *param_2)

{
  VertexDataPrivate::SetVertex<Metasound::VertexDataPrivate::FInputBinding>
            (this->bIsVertexInterfaceFrozen,&this->Bindings,param_1,param_2);
  return;
}

// SetVertex @ 14ad64a50

void __thiscall
Metasound::FInputVertexInterfaceData::SetVertex
          (FInputVertexInterfaceData *this,FName *param_1,FAnyDataReference *param_2)

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
  VertexDataPrivate::SetVertex<Metasound::VertexDataPrivate::FInputBinding>
            (bVar1,&this->Bindings,param_1,&local_28);
  if (local_28.DataRefPtr.Ptr != (IDataReference *)0x0) {
    (**(code **)*local_28.DataRefPtr.Ptr)(local_28.DataRefPtr.Ptr,1);
  }
  return;
}

// ToDataReferenceCollection @ 14ad661c0

FDataReferenceCollection * __thiscall
Metasound::FInputVertexInterfaceData::ToDataReferenceCollection
          (FInputVertexInterfaceData *this,FDataReferenceCollection *__return_storage_ptr__)

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
  pFVar7 = (this->Bindings).AllocatorInstance.Data;
  iVar2 = (this->Bindings).ArrayNum;
  pFVar6 = pFVar7 + 0x48;
  pFVar8 = pFVar7 + (longlong)iVar2 * 0x58;
  while( true ) {
    if ((this->Bindings).ArrayNum != iVar2) {
      local_68[0] = 0;
      `TCheckedPointerIterator<Metasound::VertexDataPrivate::FInputBinding_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_68);
    }
    if (pFVar7 == pFVar8) break;
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
      local_48.Value = (FAnyDataReference *)(pFVar6 + -0x40);
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
    pFVar7 = pFVar7 + 0x58;
    pFVar6 = pFVar6 + 0x58;
  }
  return __return_storage_ptr__;
}

