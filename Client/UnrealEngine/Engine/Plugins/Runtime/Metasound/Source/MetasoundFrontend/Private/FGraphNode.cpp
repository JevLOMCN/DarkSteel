// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 9

// FGraphNode @ 14af3b3e0

FGraphNode * __thiscall
Metasound::Frontend::FGraphNode::FGraphNode
          (FGraphNode *this,FNodeInitData *param_1,TSharedRef<Metasound::IGraph_const_,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  IGraph *pIVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  FVertexInterface *pFVar6;
  FNodeData *this_00;
  TReferenceControllerBase<1> *pTVar7;
  FGraphNode *pFVar8;
  FVertexInterface local_e8;
  FNodeData local_98;
  
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pIVar2 = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  lVar5 = (**(code **)((longlong)*param_2->Object + 0x18))();
  pFVar6 = FVertexInterface::FVertexInterface(&local_e8,(FVertexInterface *)(lVar5 + 0x60));
  this_00 = FNodeData::FNodeData(&local_98,&param_1->InstanceName,&param_1->InstanceID,pFVar6);
  this->_padding_ = (longlong)&___7FGraphNode_Frontend_Metasound__6B_;
  FNodeData::FNodeData(&this->NodeData,this_00);
  pTVar7 = ::operator_new(0x30);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    (this->Factory).Object = (FGraphOperatorFactoryAdapter *)0x10;
    (this->Factory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFGraphOperatorFactoryAdapter_FGraphNode_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar7[1]._padding_ =
         (longlong)&___7FGraphOperatorFactoryAdapter_FGraphNode_Frontend_Metasound__6B_;
    *(IGraph **)&pTVar7[1].SharedReferenceCount = pIVar2;
    (**(code **)((longlong)*pIVar2 + 0x48))(pIVar2,pTVar7 + 2);
    (this->Factory).SharedReferenceCount.ReferenceController = pTVar7;
    (this->Factory).Object = (FGraphOperatorFactoryAdapter *)(pTVar7 + 1);
    if ((FGraphOperatorFactoryAdapter *)(pTVar7 + 1) == (FGraphOperatorFactoryAdapter *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FGraphNode *)(*pcVar3)();
        return pFVar8;
      }
    }
  }
  (this->Graph).Object = pIVar2;
  (this->Graph).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  FNodeData::~FNodeData(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  this->_padding_ = (longlong)&___7FGraphNode_Frontend_Metasound__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// FGraphNode @ 14af3b560

FGraphNode * __thiscall
Metasound::Frontend::FGraphNode::FGraphNode
          (FGraphNode *this,FNodeData *param_1,TSharedRef<Metasound::IGraph_const_,1> *param_2)

{
  IGraph *pIVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  FGraphNode *pFVar5;
  
  this->_padding_ = (longlong)&___7FGraphNode_Frontend_Metasound__6B_;
  FNodeData::FNodeData(&this->NodeData,param_1);
  pIVar1 = param_2->Object;
  pTVar4 = ::operator_new(0x30);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    (this->Factory).Object = (FGraphOperatorFactoryAdapter *)0x10;
    (this->Factory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    *(IGraph **)&pTVar4[1].SharedReferenceCount = pIVar1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFGraphOperatorFactoryAdapter_FGraphNode_Frontend_Metasound___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ =
         (longlong)&___7FGraphOperatorFactoryAdapter_FGraphNode_Frontend_Metasound__6B_;
    (**(code **)((longlong)*pIVar1 + 0x48))(pIVar1,pTVar4 + 2);
    (this->Factory).SharedReferenceCount.ReferenceController = pTVar4;
    (this->Factory).Object = (FGraphOperatorFactoryAdapter *)(pTVar4 + 1);
    if ((FGraphOperatorFactoryAdapter *)(pTVar4 + 1) == (FGraphOperatorFactoryAdapter *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FGraphNode *)(*pcVar2)();
        return pFVar5;
      }
    }
  }
  (this->Graph).Object = param_2->Object;
  pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
  (this->Graph).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  FNodeData::~FNodeData(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// GetDefaultOperatorFactory @ 14af99cd0

TSharedRef<Metasound::IOperatorFactory,1> * __thiscall
Metasound::Frontend::FGraphNode::GetDefaultOperatorFactory
          (FGraphNode *this,TSharedRef<Metasound::IOperatorFactory,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (IOperatorFactory *)(this->Factory).Object;
  pTVar1 = (this->Factory).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetInstanceID @ 14af9b2c0

FGuid * __thiscall Metasound::Frontend::FGraphNode::GetInstanceID(FGraphNode *this)

{
  return &(this->NodeData).ID;
}

// GetInstanceName @ 14af9b2e0

FName * __thiscall Metasound::Frontend::FGraphNode::GetInstanceName(FGraphNode *this)

{
  FName *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014af9b2ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FName *)(**(code **)((longlong)*(this->Graph).Object + 8))();
  return pFVar1;
}

// GetMetadata @ 14af9b430

/* WARNING: Enum "ENodeClassAccessFlags": Some values do not have unique names */

FNodeClassMetadata * __thiscall Metasound::Frontend::FGraphNode::GetMetadata(FGraphNode *this)

{
  FNodeClassMetadata *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014af9b43a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FNodeClassMetadata *)(**(code **)((longlong)*(this->Graph).Object + 0x18))();
  return pFVar1;
}

// GetOperatorData @ 14afa6530

TSharedPtr<Metasound::IOperatorData_const_,1> * __thiscall
Metasound::Frontend::FGraphNode::GetOperatorData
          (FGraphNode *this,TSharedPtr<Metasound::IOperatorData_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->NodeData).OperatorData.Object;
  pTVar1 = (this->NodeData).OperatorData.SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetVertexInterface @ 14afa9a50

FVertexInterface * __thiscall Metasound::Frontend::FGraphNode::GetVertexInterface(FGraphNode *this)

{
  return &(this->NodeData).Interface;
}

// SetDefaultInput @ 14afbd6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::Frontend::FGraphNode::SetDefaultInput(FGraphNode *this,FName *param_1,FLiteral *param_2)

{
  FLiteral *pFVar1;
  ulonglong uVar2;
  byte bVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  FInputVertexInterface *pFVar7;
  FNodeClassName *this_00;
  FString *pFVar8;
  FName *this_01;
  longlong lVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  undefined1 auStack_a8 [32];
  FScriptContainerElement *local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFVar7 = FVertexInterface::GetInputInterface(&(this->NodeData).Interface);
  lVar9 = pFVar7->_padding_;
  lVar10 = (longlong)(int)pFVar7->_padding_ * 0x38 + lVar9;
  if (lVar9 != lVar10) {
    do {
      if (*(FName *)(lVar9 + 8) == *param_1) {
        pFVar1 = (FLiteral *)(lVar9 + 0x20);
        if (param_2 == pFVar1) {
          return;
        }
        bVar3 = (param_2->Value).TypeIndex;
        local_38 = CONCAT71(local_38._1_7_,bVar3);
        if ((0xc < (ulonglong)bVar3) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xec,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[bVar3])(&local_48,param_2);
        uVar2 = *(ulonglong *)(lVar9 + 0x30);
        lVar10 = (pFVar1->Value)._padding_;
        uVar5 = *(undefined8 *)(lVar9 + 0x28);
        (pFVar1->Value)._padding_ = local_48;
        *(undefined8 *)(lVar9 + 0x28) = uStack_40;
        *(ulonglong *)(lVar9 + 0x30) = local_38;
        local_48 = lVar10;
        uStack_40 = uVar5;
        local_38 = uVar2;
        if ((0xc < (uVar2 & 0xff)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<Metasound::FLiteral::FNone,bool,int,float,FString,TSharedPtr<Audio::IProxyData,1>,TArray<Metasound::FLiteral::FNone,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,TArray<int,TSizedDefaultAllocator<32>_>,TArray<float,TSizedDefaultAllocator<32>_>,TArray<FString,TSizedDefaultAllocator<32>_>,TArray<TSharedPtr<Audio::IProxyData,1>,TSizedDefaultAllocator<32>_>,Metasound::FLiteral::FInvalid>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar2 & 0xff])(&local_48);
        return;
      }
      lVar9 = lVar9 + 0x38;
    } while (lVar9 != lVar10);
  }
  if (1 < (byte)LogMetaSound._0_1_) {
    this_00 = (FNodeClassName *)(**(code **)(this->_padding_ + 0x18))(this);
    pFVar8 = FNodeClassName::ToString(this_00,&local_58);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    this_01 = (FName *)(**(code **)(this->_padding_ + 8))(this);
    ::FName::ToString(this_01,&local_68);
    ::FName::ToString(param_1,&local_78);
    local_88 = (FScriptContainerElement *)pwVar11;
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return;
}

