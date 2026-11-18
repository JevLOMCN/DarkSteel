// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 15

// FNavigationSimulationWidgetNode @ 142e0a4d0

/* WARNING: Enum "Type": Some values do not have unique names */

FNavigationSimulationWidgetNode * __thiscall
FNavigationSimulationWidgetNode::FNavigationSimulationWidgetNode
          (FNavigationSimulationWidgetNode *this,ENavigationSimulationNodeType param_1,
          FWidgetPath *param_2)

{
  TWeakPtr<SWidget_const_,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined8 local_18 [2];
  
  FNavigationSimulationWidgetInfo::FNavigationSimulationWidgetInfo(&this->NavigationSource,param_2);
  (this->Simulations).AllocatorInstance.SecondaryData =
       (ForElementType<FNavigationSimulationWidgetNodeItem>)0x0;
  (this->Simulations).ArrayNum = 0;
  (this->Simulations).ArrayMax = 4;
  this->NodeType = param_1;
  if ((param_1 == Snapshot) &&
     (pTVar1 = &(this->NavigationSource).WidgetLive,
     pTVar1 != (TWeakPtr<SWidget_const_,1> *)local_18)) {
    pTVar4 = (this->NavigationSource).WidgetLive.WeakReferenceCount.ReferenceController;
    pTVar1->Object = (SWidget *)0x0;
    (this->NavigationSource).WidgetLive.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar4->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  return this;
}

// ~FNavigationSimulationWidgetNode @ 142e13d70

void __thiscall
FNavigationSimulationWidgetNode::~FNavigationSimulationWidgetNode
          (FNavigationSimulationWidgetNode *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  ITextData *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  ForElementType<FNavigationSimulationWidgetNodeItem> FVar5;
  
  FVar5 = (this->Simulations).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<FNavigationSimulationWidgetNodeItem>)0x0) {
    FVar5 = (ForElementType<FNavigationSimulationWidgetNodeItem>)&this->Simulations;
  }
  DestructItems<FNavigationSimulationWidgetNodeItem,int>
            ((FNavigationSimulationWidgetNodeItem *)FVar5,(this->Simulations).ArrayNum);
  FVar5 = (this->Simulations).AllocatorInstance.SecondaryData;
  if (FVar5 != (ForElementType<FNavigationSimulationWidgetNodeItem>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  pIVar3 = (this->NavigationSource).WidgetTypeAndShortName.TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pTVar4 = (this->NavigationSource).WidgetLive.WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  return;
}

// CreateJsonValue @ 142e6b160

TSharedRef<FJsonValue,1> * __cdecl
`FNavigationSimulationWidgetNode::ToJson'::__l2::Internal::CreateJsonValue
          (TSharedRef<FJsonValue,1> *__return_storage_ptr__,TVector2<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TSharedRef<FJsonValueNumber,1> *pTVar4;
  TSharedRef<FJsonValue,1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_58;
  TSharedPtr<FJsonValue,1> local_48;
  TSharedPtr<FJsonValue,1> local_38;
  TSharedRef<FJsonValueNumber,1> local_28;
  TSharedRef<FJsonValueNumber,1> local_18;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  pTVar4 = MakeShared<FJsonValueNumber,1,double_const_&>(&local_28,(double *)param_1);
  local_48.Object = (FJsonValue *)pTVar4->Object;
  local_48.SharedReferenceCount.ReferenceController =
       (pTVar4->SharedReferenceCount).ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((local_58.AllocatorInstance.Data <= &local_48) &&
      (&local_48 <
       (TSharedPtr<FJsonValue,1> *)
       (local_58.AllocatorInstance.Data + (longlong)local_58.ArrayMax * 0x10))) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FJsonValue,1> *)(*pcVar1)();
    return pTVar5;
  }
  iVar3 = local_58.ArrayNum;
  if (local_58.ArrayNum == local_58.ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_58.AllocatorInstance,&local_58.ArrayMax);
  }
  *(FJsonValue **)&local_58.AllocatorInstance.Data[(longlong)iVar3 * 0x10].field_0x0 =
       local_48.Object;
  *(TReferenceControllerBase<1> **)(local_58.AllocatorInstance.Data + (longlong)iVar3 * 0x10 + 8) =
       local_48.SharedReferenceCount.ReferenceController;
  local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_48.Object = (FJsonValue *)0x0;
  local_58.ArrayNum = iVar3 + 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  pTVar4 = MakeShared<FJsonValueNumber,1,double_const_&>(&local_18,&(param_1->field0_0x0)._s_0.Y);
  local_38.Object = (FJsonValue *)pTVar4->Object;
  local_38.SharedReferenceCount.ReferenceController =
       (pTVar4->SharedReferenceCount).ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((local_58.AllocatorInstance.Data <= &local_38) &&
      (&local_38 <
       (TSharedPtr<FJsonValue,1> *)
       (local_58.AllocatorInstance.Data + (longlong)local_58.ArrayMax * 0x10))) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<FJsonValue,1> *)(*pcVar1)();
    return pTVar5;
  }
  iVar3 = local_58.ArrayNum;
  if (local_58.ArrayNum == local_58.ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_58.AllocatorInstance,&local_58.ArrayMax);
  }
  local_58.ArrayNum = iVar3 + 1;
  *(FJsonValue **)&local_58.AllocatorInstance.Data[(longlong)iVar3 * 0x10].field_0x0 =
       local_38.Object;
  *(TReferenceControllerBase<1> **)(local_58.AllocatorInstance.Data + (longlong)iVar3 * 0x10 + 8) =
       local_38.SharedReferenceCount.ReferenceController;
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_38.Object = (FJsonValue *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  pTVar6 = ::operator_new(0x30);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FJsonValue *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueArray___00_SharedPointerInternals__6B_;
    FJsonValueArray::FJsonValueArray((FJsonValueArray *)(pTVar6 + 1),&local_58);
    if ((pTVar6 + 1 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TSharedRef<FJsonValue,1> *)(*pcVar1)();
      return pTVar5;
    }
    __return_storage_ptr__->Object = (FJsonValue *)(pTVar6 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar6;
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    pTVar7 = pTVar6;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if ((TSharedPtr<FJsonValue,1> *)local_58.AllocatorInstance.Data != (TSharedPtr<FJsonValue,1> *)0x0
     ) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CreateJsonValue @ 142e6b440

TSharedRef<FJsonValue,1> * __cdecl
`FNavigationSimulationWidgetNode::ToJson'::__l2::Internal::CreateJsonValue
          (TSharedRef<FJsonValue,1> *__return_storage_ptr__,FGeometry *param_1)

{
  float fVar1;
  TVector2<float>_u_0_s_0 TVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  FJsonObject *this;
  FJsonObject *this_00;
  bool bVar5;
  TSharedRef<FJsonValue,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  float local_res8;
  float fStackX_c;
  TSharedPtr<FJsonValue,1> local_168;
  TSharedRef<FJsonObject,1> local_158;
  TSharedRef<FJsonObject,1> local_148;
  TSharedPtr<FJsonValue,1> local_138;
  FString local_128;
  FString local_118;
  TVector2<double>_u_0 local_108;
  FString local_f8;
  TSharedPtr<FJsonValue,1> local_e8;
  FString local_d8;
  TVector2<double>_u_0 local_c8;
  FString local_b8;
  TSharedPtr<FJsonValue,1> local_a8;
  TSharedRef<FJsonValue,1> local_98;
  TSharedRef<FJsonValue,1> local_88;
  TSharedPtr<FJsonObject,1> local_78;
  TSharedRef<FJsonValue,1> local_68;
  TSharedPtr<FJsonObject,1> local_58 [2];
  
  MakeShared<FJsonObject,1>(&local_158);
  this = local_158.Object;
  pTVar6 = CreateJsonValue(&local_98,&param_1->AccumulatedRenderTransform);
  local_138.Object = pTVar6->Object;
  local_138.SharedReferenceCount.ReferenceController =
       (pTVar6->SharedReferenceCount).ReferenceController;
  if (local_138.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&local_128,L"AccumulatedRenderTransform");
  FJsonObject::SetField(this,&local_128,&local_138);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  fVar1 = param_1->Scale;
  TVar2 = (param_1->AbsolutePosition).field0_0x0._s_0;
  MakeShared<FJsonObject,1>(&local_148);
  ::FString::FString(&local_118,L"Scale");
  this_00 = local_148.Object;
  FJsonObject::SetNumberField(local_148.Object,&local_118,(double)fVar1);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  local_res8 = TVar2.X;
  fStackX_c = TVar2.Y;
  local_108._s_0.X = (double)local_res8;
  local_108._s_0.Y = (double)fStackX_c;
  CreateJsonValue(&local_88,(TVector2<double> *)&local_108._s_0);
  local_e8.Object = local_88.Object;
  local_e8.SharedReferenceCount.ReferenceController =
       local_88.SharedReferenceCount.ReferenceController;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&local_f8,L"Translation");
  FJsonObject::SetField(this_00,&local_f8,&local_e8);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  pTVar7 = ::operator_new(0x30);
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    local_168.Object = (FJsonValue *)&DAT_00000010;
    local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_78.Object = local_148.Object;
    local_78.SharedReferenceCount.ReferenceController =
         local_148.SharedReferenceCount.ReferenceController;
    pTVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_;
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FJsonValueObject::FJsonValueObject((FJsonValueObject *)(pTVar7 + 1),&local_78);
    if (pTVar7 == (TReferenceControllerBase<1> *)0xfffffffffffffff0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedRef<FJsonValue,1> *)(*pcVar3)();
        return pTVar6;
      }
    }
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    local_168.Object = (FJsonValue *)(pTVar7 + 1);
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    local_168.SharedReferenceCount.ReferenceController = pTVar7;
  }
  FVar4.ReferenceController = local_168.SharedReferenceCount.ReferenceController;
  ::FString::FString(&local_d8,L"AccumulatedLayoutTransform");
  FJsonObject::SetField(this,&local_d8,&local_168);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  local_res8 = SUB84(param_1->Size,0);
  fStackX_c = SUB84(param_1->Size,4);
  local_c8._s_0.X = (double)local_res8;
  local_c8._s_0.Y = (double)fStackX_c;
  CreateJsonValue(&local_68,(TVector2<double> *)&local_c8._s_0);
  local_a8.Object = local_68.Object;
  local_a8.SharedReferenceCount.ReferenceController =
       local_68.SharedReferenceCount.ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&local_b8,L"LocalSize");
  FJsonObject::SetField(this,&local_b8,&local_a8);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  pTVar7 = ::operator_new(0x30);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FJsonValue *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_58[0].Object = local_158.Object;
    local_58[0].SharedReferenceCount.ReferenceController =
         local_158.SharedReferenceCount.ReferenceController;
    pTVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_;
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FJsonValueObject::FJsonValueObject((FJsonValueObject *)(pTVar7 + 1),local_58);
    if (pTVar7 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedRef<FJsonValue,1> *)(*pcVar3)();
        return pTVar6;
      }
    }
    __return_storage_ptr__->Object = (FJsonValue *)(pTVar7 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    pTVar8 = pTVar7;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CreateJsonValue @ 142e6b870

TSharedRef<FJsonValue,1> * __cdecl
`FNavigationSimulationWidgetNode::ToJson'::__l2::Internal::CreateJsonValue
          (TSharedRef<FJsonValue,1> *__return_storage_ptr__,FNavigationSimulationWidgetInfo *param_1
          )

{
  code *pcVar1;
  FJsonObject *this;
  bool bVar2;
  FString *pFVar3;
  TSharedRef<FJsonValue,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedRef<FJsonObject,1> local_a8;
  TSharedPtr<FJsonValue,1> local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  TSharedRef<FJsonValue,1> local_38;
  TSharedPtr<FJsonObject,1> local_28;
  
  MakeShared<FJsonObject,1>(&local_a8);
  ::FString::PrintfImpl(&local_78,L"0x%0llx");
  ::FString::FString(&local_88,L"WidgetPtr");
  this = local_a8.Object;
  FJsonObject::SetStringField(local_a8.Object,&local_88,&local_78);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pFVar3 = FText::ToString(&param_1->WidgetTypeAndShortName);
  ::FString::FString(&local_68,L"WidgetTypeAndShortName");
  FJsonObject::SetStringField(this,&local_68,pFVar3);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  bVar2 = param_1->bHasGeometry;
  ::FString::FString(&local_58,L"bHasGeometry");
  FJsonObject::SetBoolField(this,&local_58,bVar2);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (param_1->bHasGeometry != false) {
    pTVar4 = CreateJsonValue(&local_38,&param_1->WidgetGeometry);
    local_98.Object = pTVar4->Object;
    local_98.SharedReferenceCount.ReferenceController =
         (pTVar4->SharedReferenceCount).ReferenceController;
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    ::FString::FString(&local_48,L"WidgetGeometry");
    FJsonObject::SetField(this,&local_48,&local_98);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  pTVar5 = ::operator_new(0x30);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (FJsonValue *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_28.Object = local_a8.Object;
    local_28.SharedReferenceCount.ReferenceController =
         local_a8.SharedReferenceCount.ReferenceController;
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_;
    if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FJsonValueObject::FJsonValueObject((FJsonValueObject *)(pTVar5 + 1),&local_28);
    if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FJsonValue,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (FJsonValue *)(pTVar5 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CreateJsonValue @ 142e6bab0

TSharedRef<FJsonValue,1> * __cdecl
`FNavigationSimulationWidgetNode::ToJson'::__l2::Internal::CreateJsonValue
          (TSharedRef<FJsonValue,1> *__return_storage_ptr__,
          FNavigationSimulationWidgetNodeItem *param_1)

{
  EUINavigation EVar1;
  EUINavigationRule EVar2;
  undefined1 uVar3;
  ERoutedReason EVar4;
  code *pcVar5;
  FJsonObject *this;
  bool bVar6;
  TSharedRef<FJsonValue,1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FJsonObject,1> local_1b8;
  TSharedPtr<FJsonValue,1> local_1a8;
  TSharedPtr<FJsonValue,1> local_198;
  TSharedPtr<FJsonValue,1> local_188;
  TSharedPtr<FJsonValue,1> local_178;
  TSharedPtr<FJsonValue,1> local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  TSharedRef<FJsonValue,1> local_88;
  TSharedRef<FJsonValue,1> local_78;
  TSharedRef<FJsonValue,1> local_68;
  TSharedRef<FJsonValue,1> local_58;
  TSharedRef<FJsonValue,1> local_48;
  TSharedPtr<FJsonObject,1> local_38 [2];
  
  MakeShared<FJsonObject,1>(&local_1b8);
  EVar1 = param_1->NavigationType;
  ::FString::FString(&local_158,L"NavigationType");
  this = local_1b8.Object;
  FJsonObject::SetNumberField(local_1b8.Object,&local_158,(double)EVar1);
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  EVar2 = param_1->ReplyBoundaryRule;
  ::FString::FString(&local_148,L"ReplyBoundaryRule");
  FJsonObject::SetNumberField(this,&local_148,(double)EVar2);
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  EVar4 = param_1->RoutedReason;
  ::FString::FString(&local_138,L"RoutedReason");
  FJsonObject::SetNumberField(this,&local_138,(double)(int)EVar4);
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  pTVar7 = CreateJsonValue(&local_88,&param_1->Destination);
  local_1a8.Object = pTVar7->Object;
  local_1a8.SharedReferenceCount.ReferenceController =
       (pTVar7->SharedReferenceCount).ReferenceController;
  if (local_1a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&local_128,L"Destination");
  FJsonObject::SetField(this,&local_128,&local_1a8);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  pTVar7 = CreateJsonValue(&local_78,&param_1->ReplyEventHandler);
  local_198.Object = pTVar7->Object;
  local_198.SharedReferenceCount.ReferenceController =
       (pTVar7->SharedReferenceCount).ReferenceController;
  if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&local_118,L"ReplyEventHandler");
  FJsonObject::SetField(this,&local_118,&local_198);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  pTVar7 = CreateJsonValue(&local_68,&param_1->ReplyFocusRecipient);
  local_188.Object = pTVar7->Object;
  local_188.SharedReferenceCount.ReferenceController =
       (pTVar7->SharedReferenceCount).ReferenceController;
  if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&local_108,L"ReplyFocusRecipient");
  FJsonObject::SetField(this,&local_108,&local_188);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  pTVar7 = CreateJsonValue(&local_58,&param_1->WidgetThatShouldReceivedFocus);
  local_178.Object = pTVar7->Object;
  local_178.SharedReferenceCount.ReferenceController =
       (pTVar7->SharedReferenceCount).ReferenceController;
  if (local_178.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&local_f8,L"WidgetThatShouldReceivedFocus");
  FJsonObject::SetField(this,&local_f8,&local_178);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  pTVar7 = CreateJsonValue(&local_48,&param_1->FocusedWidget);
  local_168.Object = pTVar7->Object;
  local_168.SharedReferenceCount.ReferenceController =
       (pTVar7->SharedReferenceCount).ReferenceController;
  if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&local_e8,L"FocusedWidget");
  FJsonObject::SetField(this,&local_e8,&local_168);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  ::FString::FString(&local_d8,L"bIsDynamic");
  FJsonObject::SetBoolField(this,&local_d8,param_1->bIsDynamic);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_c8,L"bAlwaysHandleNavigationAttempt");
  FJsonObject::SetBoolField(this,&local_c8,param_1->bAlwaysHandleNavigationAttempt);
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_b8,L"bCanFindWidgetForSetFocus");
  FJsonObject::SetBoolField(this,&local_b8,param_1->bCanFindWidgetForSetFocus);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_a8,L"bRoutedHandlerHasNavigationMeta");
  FJsonObject::SetBoolField(this,&local_a8,param_1->bRoutedHandlerHasNavigationMeta);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_98,L"bHandledByViewport");
  FJsonObject::SetBoolField(this,&local_98,param_1->bHandledByViewport);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pTVar8 = ::operator_new(0x30);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (FJsonValue *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_38[0].Object = local_1b8.Object;
    local_38[0].SharedReferenceCount.ReferenceController =
         local_1b8.SharedReferenceCount.ReferenceController;
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_;
    if (local_1b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FJsonValueObject::FJsonValueObject((FJsonValueObject *)(pTVar8 + 1),local_38);
    if (pTVar8 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar7 = (TSharedRef<FJsonValue,1> *)(*pcVar5)();
        return pTVar7;
      }
    }
    __return_storage_ptr__->Object = (FJsonValue *)(pTVar8 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b8.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CreateJsonValue @ 142e6bfe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSharedRef<FJsonValue,1> * __cdecl
`FNavigationSimulationWidgetNode::ToJson'::__l2::Internal::CreateJsonValue
          (TSharedRef<FJsonValue,1> *__return_storage_ptr__,TMatrix2x2<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TReferenceControllerBase<1> *pTVar8;
  TSharedRef<FJsonValue,1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_a8;
  TSharedPtr<FJsonValue,1> local_98;
  TSharedPtr<FJsonValue,1> local_88;
  TSharedPtr<FJsonValue,1> local_78;
  TSharedPtr<FJsonValue,1> local_68 [5];
  
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  fVar1 = param_1->M[0][0];
  fVar2 = param_1->M[0][1];
  fVar3 = param_1->M[1][0];
  fVar4 = param_1->M[1][1];
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  pTVar8 = ::operator_new(0x28);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    local_98.Object = (FJsonValue *)___xmm_00000000000000000000000000000010;
    local_98.SharedReferenceCount.ReferenceController = _UNK_150651568;
    pTVar8 = pTVar10;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueNumber___00_SharedPointerInternals__6B_;
    FJsonValueNumber::FJsonValueNumber((FJsonValueNumber *)(pTVar8 + 1),(double)fVar1);
    local_98.Object = (FJsonValue *)(pTVar8 + 1);
    if (((TReferenceControllerBase<1> *)local_98.Object == (TReferenceControllerBase<1> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TSharedRef<FJsonValue,1> *)(*pcVar5)();
      return pTVar9;
    }
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    local_98.SharedReferenceCount.ReferenceController = pTVar8;
  }
  if (((local_a8.AllocatorInstance.Data <= &local_98) &&
      (&local_98 <
       (TSharedPtr<FJsonValue,1> *)
       (local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayMax * 0x10))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedRef<FJsonValue,1> *)(*pcVar5)();
    return pTVar9;
  }
  iVar7 = local_a8.ArrayNum;
  if (local_a8.ArrayNum == local_a8.ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_a8.AllocatorInstance,&local_a8.ArrayMax);
  }
  local_a8.ArrayNum = iVar7 + 1;
  *(FJsonValue **)&local_a8.AllocatorInstance.Data[(longlong)iVar7 * 0x10].field_0x0 =
       local_98.Object;
  *(TReferenceControllerBase<1> **)(local_a8.AllocatorInstance.Data + (longlong)iVar7 * 0x10 + 8) =
       local_98.SharedReferenceCount.ReferenceController;
  local_98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_98.Object = (FJsonValue *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  pTVar8 = ::operator_new(0x28);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    local_88.Object = (FJsonValue *)___xmm_00000000000000000000000000000010;
    local_88.SharedReferenceCount.ReferenceController = _UNK_150651568;
    pTVar8 = pTVar10;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueNumber___00_SharedPointerInternals__6B_;
    FJsonValueNumber::FJsonValueNumber((FJsonValueNumber *)(pTVar8 + 1),(double)fVar2);
    local_88.Object = (FJsonValue *)(pTVar8 + 1);
    if (((TReferenceControllerBase<1> *)local_88.Object == (TReferenceControllerBase<1> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TSharedRef<FJsonValue,1> *)(*pcVar5)();
      return pTVar9;
    }
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    local_88.SharedReferenceCount.ReferenceController = pTVar8;
  }
  if (((local_a8.AllocatorInstance.Data <= &local_88) &&
      (&local_88 <
       (TSharedPtr<FJsonValue,1> *)
       (local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayMax * 0x10))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedRef<FJsonValue,1> *)(*pcVar5)();
    return pTVar9;
  }
  iVar7 = local_a8.ArrayNum;
  if (local_a8.ArrayNum == local_a8.ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_a8.AllocatorInstance,&local_a8.ArrayMax);
  }
  local_a8.ArrayNum = iVar7 + 1;
  *(FJsonValue **)&local_a8.AllocatorInstance.Data[(longlong)iVar7 * 0x10].field_0x0 =
       local_88.Object;
  *(TReferenceControllerBase<1> **)(local_a8.AllocatorInstance.Data + (longlong)iVar7 * 0x10 + 8) =
       local_88.SharedReferenceCount.ReferenceController;
  local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_88.Object = (FJsonValue *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  pTVar8 = ::operator_new(0x28);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    local_78.Object = (FJsonValue *)___xmm_00000000000000000000000000000010;
    local_78.SharedReferenceCount.ReferenceController = _UNK_150651568;
    pTVar8 = pTVar10;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueNumber___00_SharedPointerInternals__6B_;
    FJsonValueNumber::FJsonValueNumber((FJsonValueNumber *)(pTVar8 + 1),(double)fVar3);
    local_78.Object = (FJsonValue *)(pTVar8 + 1);
    if (((TReferenceControllerBase<1> *)local_78.Object == (TReferenceControllerBase<1> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TSharedRef<FJsonValue,1> *)(*pcVar5)();
      return pTVar9;
    }
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    local_78.SharedReferenceCount.ReferenceController = pTVar8;
  }
  if (((local_a8.AllocatorInstance.Data <= &local_78) &&
      (&local_78 <
       (TSharedPtr<FJsonValue,1> *)
       (local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayMax * 0x10))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedRef<FJsonValue,1> *)(*pcVar5)();
    return pTVar9;
  }
  iVar7 = local_a8.ArrayNum;
  if (local_a8.ArrayNum == local_a8.ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_a8.AllocatorInstance,&local_a8.ArrayMax);
  }
  local_a8.ArrayNum = iVar7 + 1;
  *(FJsonValue **)&local_a8.AllocatorInstance.Data[(longlong)iVar7 * 0x10].field_0x0 =
       local_78.Object;
  *(TReferenceControllerBase<1> **)(local_a8.AllocatorInstance.Data + (longlong)iVar7 * 0x10 + 8) =
       local_78.SharedReferenceCount.ReferenceController;
  local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_78.Object = (FJsonValue *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  pTVar8 = ::operator_new(0x28);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    local_68[0].Object = (FJsonValue *)___xmm_00000000000000000000000000000010;
    local_68[0].SharedReferenceCount.ReferenceController = _UNK_150651568;
    pTVar8 = pTVar10;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueNumber___00_SharedPointerInternals__6B_;
    FJsonValueNumber::FJsonValueNumber((FJsonValueNumber *)(pTVar8 + 1),(double)fVar4);
    local_68[0].Object = (FJsonValue *)(pTVar8 + 1);
    if (((TReferenceControllerBase<1> *)local_68[0].Object == (TReferenceControllerBase<1> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TSharedRef<FJsonValue,1> *)(*pcVar5)();
      return pTVar9;
    }
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    local_68[0].SharedReferenceCount.ReferenceController = pTVar8;
  }
  if (((local_a8.AllocatorInstance.Data <= local_68) &&
      (local_68 <
       (TSharedPtr<FJsonValue,1> *)
       (local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayMax * 0x10))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TSharedRef<FJsonValue,1> *)(*pcVar5)();
    return pTVar9;
  }
  iVar7 = local_a8.ArrayNum;
  if (local_a8.ArrayNum == local_a8.ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_a8.AllocatorInstance,&local_a8.ArrayMax);
  }
  local_a8.ArrayNum = iVar7 + 1;
  *(FJsonValue **)&local_a8.AllocatorInstance.Data[(longlong)iVar7 * 0x10].field_0x0 =
       local_68[0].Object;
  *(TReferenceControllerBase<1> **)(local_a8.AllocatorInstance.Data + (longlong)iVar7 * 0x10 + 8) =
       local_68[0].SharedReferenceCount.ReferenceController;
  local_68[0].SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_68[0].Object = (FJsonValue *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  pTVar8 = ::operator_new(0x30);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FJsonValue *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueArray___00_SharedPointerInternals__6B_;
    FJsonValueArray::FJsonValueArray((FJsonValueArray *)(pTVar8 + 1),&local_a8);
    if ((pTVar8 + 1 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TSharedRef<FJsonValue,1> *)(*pcVar5)();
      return pTVar9;
    }
    __return_storage_ptr__->Object = (FJsonValue *)(pTVar8 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar8;
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    pTVar10 = pTVar8;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
  if ((TSharedPtr<FJsonValue,1> *)local_a8.AllocatorInstance.Data != (TSharedPtr<FJsonValue,1> *)0x0
     ) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CreateJsonValue @ 142e6c660

TSharedRef<FJsonValue,1> * __cdecl
`FNavigationSimulationWidgetNode::ToJson'::__l2::Internal::CreateJsonValue
          (TSharedRef<FJsonValue,1> *__return_storage_ptr__,TTransform2<float> *param_1)

{
  code *pcVar1;
  FJsonObject *this;
  bool bVar2;
  TSharedRef<FJsonValue,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FJsonObject,1> local_a8;
  TSharedPtr<FJsonValue,1> local_98;
  TSharedPtr<FJsonValue,1> local_88;
  FString local_78;
  TVector2<double>_u_0 local_68;
  FString local_58;
  TSharedRef<FJsonValue,1> local_48;
  TSharedRef<FJsonValue,1> local_38;
  TSharedPtr<FJsonObject,1> local_28;
  
  MakeShared<FJsonObject,1>(&local_a8);
  pTVar3 = CreateJsonValue(&local_48,&param_1->M);
  local_98.Object = pTVar3->Object;
  local_98.SharedReferenceCount.ReferenceController =
       (pTVar3->SharedReferenceCount).ReferenceController;
  if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&local_78,L"Matrix");
  this = local_a8.Object;
  FJsonObject::SetField(local_a8.Object,&local_78,&local_98);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  local_68._s_0.X = (double)(param_1->Trans).field0_0x0._s_0.X;
  local_68._s_0.Y = (double)(param_1->Trans).field0_0x0._s_0.Y;
  pTVar3 = CreateJsonValue(&local_38,(TVector2<double> *)&local_68._s_0);
  local_88.Object = pTVar3->Object;
  local_88.SharedReferenceCount.ReferenceController =
       (pTVar3->SharedReferenceCount).ReferenceController;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&local_58,L"Translation");
  FJsonObject::SetField(this,&local_58,&local_88);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  pTVar4 = ::operator_new(0x30);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (FJsonValue *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_28.Object = local_a8.Object;
    local_28.SharedReferenceCount.ReferenceController =
         local_a8.SharedReferenceCount.ReferenceController;
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_;
    if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FJsonValueObject::FJsonValueObject((FJsonValueObject *)(pTVar4 + 1),&local_28);
    if (pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedRef<FJsonValue,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
    __return_storage_ptr__->Object = (FJsonValue *)(pTVar4 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// FromJson @ 142e856e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<FNavigationSimulationWidgetNode,1> * __cdecl
FNavigationSimulationWidgetNode::FromJson
          (TSharedPtr<FNavigationSimulationWidgetNode,1> *__return_storage_ptr__,
          TSharedRef<FJsonValue,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FJsonValue *pFVar4;
  ForElementType<FNavigationSimulationWidgetNodeItem> FVar5;
  code *pcVar6;
  double dVar7;
  int *piVar8;
  bool bVar9;
  int iVar10;
  TSharedPtr<FNavigationSimulationWidgetNode,1> *pTVar11;
  longlong *plVar12;
  TSharedPtr<FJsonValue,1> *pTVar13;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar14;
  ulonglong uVar15;
  ForElementType<FNavigationSimulationWidgetNodeItem> FVar16;
  ForElementType<FNavigationSimulationWidgetNodeItem> FVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  FNavigationSimulationWidgetNode *pFVar21;
  undefined1 auStack_358 [32];
  FNavigationSimulationWidgetNodeItem *local_338;
  ForElementType<FNavigationSimulationWidgetNodeItem> local_330;
  longlong local_328;
  longlong local_320;
  undefined8 local_318;
  undefined1 local_308 [8];
  TReferenceControllerBase<1> *local_300;
  uint local_2f8;
  TSharedPtr<FNavigationSimulationWidgetNode,1> *local_2f0;
  wchar_t *local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  wchar_t *local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  wchar_t *local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  TSharedPtr<FJsonValue,1> local_2b8;
  TStringView<wchar_t> local_2a8;
  TSharedPtr<FJsonValue,1> local_298;
  TStringView<wchar_t> local_288;
  TStringView<wchar_t> local_278;
  FNavigationSimulationWidgetNodeItem local_268;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_358;
  local_2f0 = __return_storage_ptr__;
  local_300 = ::operator_new(0x910);
  if (local_300 == (TReferenceControllerBase<1> *)0x0) {
    pFVar21 = (FNavigationSimulationWidgetNode *)&DAT_00000010;
    local_300 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_300->SharedReferenceCount = (atomic<int>)0x1;
    local_300->WeakReferenceCount = (atomic<int>)0x1;
    local_300->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFNavigationSimulationWidgetNode___00_SharedPointerInternals__6B_
    ;
    local_300[1]._padding_ = 0;
    memset(&local_300[2].SharedReferenceCount,0,0x8e8);
    local_300[1].SharedReferenceCount = (atomic<int>)0x0;
    local_300[1].WeakReferenceCount = (atomic<int>)0x0;
    local_300[2]._padding_ = 0;
    FText::FText((FText *)&local_300[2].SharedReferenceCount);
    FGeometry::FGeometry((FGeometry *)&local_300[3].SharedReferenceCount);
    local_300[0x8f].SharedReferenceCount = (atomic<int>)0x0;
    local_300[0x8f].WeakReferenceCount = (atomic<int>)0x0;
    pFVar21 = (FNavigationSimulationWidgetNode *)(local_300 + 1);
    *(undefined4 *)&local_300[0x90]._padding_ = 0;
    *(undefined4 *)((longlong)&local_300[0x90]._padding_ + 4) = 4;
    if (pFVar21 == (FNavigationSimulationWidgetNode *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TSharedPtr<FNavigationSimulationWidgetNode,1> *)(*pcVar6)();
        return pTVar11;
      }
    }
  }
  plVar12 = (longlong *)(**(code **)param_1->Object->_padding_)();
  if (*plVar12 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("RootJsonObject.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Models\\NavigationSimulationNode.cpp"
                       ,0x14d,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TSharedPtr<FNavigationSimulationWidgetNode,1> *)(*pcVar6)();
      return pTVar11;
    }
  }
  if (*plVar12 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TSharedPtr<FNavigationSimulationWidgetNode,1> *)(*pcVar6)();
      return pTVar11;
    }
  }
  local_2e8 = L"NavigationSource";
  uStack_2e0 = 0x10;
  local_2a8._12_4_ = uStack_2dc;
  local_2a8.Size = 0x10;
  local_2a8.DataPtr = L"NavigationSource";
  pTVar13 = FJsonObject::GetField<0>((FJsonObject *)*plVar12,&local_298,&local_2a8);
  `FNavigationSimulationWidgetNode::FromJson'::__l2::Internal::ParseJsonValue
            (pTVar13,&pFVar21->NavigationSource);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_298.SharedReferenceCount.ReferenceController);
  if (*plVar12 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TSharedPtr<FNavigationSimulationWidgetNode,1> *)(*pcVar6)();
      return pTVar11;
    }
  }
  local_2d8 = L"NodeType";
  uStack_2d0 = 8;
  local_288._12_4_ = uStack_2cc;
  local_288.Size = 8;
  local_288.DataPtr = L"NodeType";
  dVar7 = FJsonObject::GetNumberField((FJsonObject *)*plVar12,&local_288);
  pFVar21->NodeType = (ENavigationSimulationNodeType)(int)dVar7;
  if (*plVar12 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar11 = (TSharedPtr<FNavigationSimulationWidgetNode,1> *)(*pcVar6)();
      return pTVar11;
    }
  }
  local_2c8 = L"Simulations";
  uStack_2c0 = 0xb;
  local_278._12_4_ = uStack_2bc;
  local_278.Size = 0xb;
  local_278.DataPtr = L"Simulations";
  pTVar14 = FJsonObject::GetArrayField((FJsonObject *)*plVar12,&local_278);
  pFVar18 = (pTVar14->AllocatorInstance).Data;
  local_2f8 = pTVar14->ArrayNum;
  uVar15 = (ulonglong)(int)local_2f8;
  pFVar20 = pFVar18 + uVar15 * 0x10;
  do {
    if (pTVar14->ArrayNum != (int)uVar15) {
      local_308[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_308);
    }
    pTVar11 = local_2f0;
    if (pFVar18 == pFVar20) {
      local_2f0->Object = pFVar21;
      (local_2f0->SharedReferenceCount).ReferenceController = local_300;
      if (local_300 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_300->SharedReferenceCount = (atomic<int>)((int)local_300->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_300)
      ;
      return pTVar11;
    }
    local_268.Destination.WidgetLive.Object = (SWidget *)0x0;
    local_268.Destination.WidgetLive.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    FText::FText(&local_268.Destination.WidgetTypeAndShortName);
    FGeometry::FGeometry(&local_268.Destination.WidgetGeometry);
    local_268.ReplyEventHandler.WidgetLive.Object = (SWidget *)0x0;
    local_268.ReplyEventHandler.WidgetLive.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    FText::FText(&local_268.ReplyEventHandler.WidgetTypeAndShortName);
    FGeometry::FGeometry(&local_268.ReplyEventHandler.WidgetGeometry);
    local_268.ReplyFocusRecipient.WidgetLive.Object = (SWidget *)0x0;
    local_268.ReplyFocusRecipient.WidgetLive.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    FText::FText(&local_268.ReplyFocusRecipient.WidgetTypeAndShortName);
    FGeometry::FGeometry(&local_268.ReplyFocusRecipient.WidgetGeometry);
    local_268.WidgetThatShouldReceivedFocus.WidgetLive.Object = (SWidget *)0x0;
    local_268.WidgetThatShouldReceivedFocus.WidgetLive.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    FText::FText(&local_268.WidgetThatShouldReceivedFocus.WidgetTypeAndShortName);
    FGeometry::FGeometry(&local_268.WidgetThatShouldReceivedFocus.WidgetGeometry);
    local_268.FocusedWidget.WidgetLive.Object = (SWidget *)0x0;
    local_268.FocusedWidget.WidgetLive.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    FText::FText(&local_268.FocusedWidget.WidgetTypeAndShortName);
    FGeometry::FGeometry(&local_268.FocusedWidget.WidgetGeometry);
    if (*(longlong *)pFVar18 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TSharedPtr<FNavigationSimulationWidgetNode,1> *)(*pcVar6)();
        return pTVar11;
      }
    }
    pTVar3 = *(TReferenceControllerBase<1> **)(pFVar18 + 8);
    pFVar4 = *(FJsonValue **)pFVar18;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar4 == (FJsonValue *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        pTVar11 = (TSharedPtr<FNavigationSimulationWidgetNode,1> *)(*pcVar6)();
        return pTVar11;
      }
    }
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_2b8.Object = pFVar4;
    local_2b8.SharedReferenceCount.ReferenceController = pTVar3;
    `FNavigationSimulationWidgetNode::FromJson'::__l2::Internal::ParseJsonValue
              (&local_2b8,&local_268);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    FVar17 = (ForElementType<FNavigationSimulationWidgetNodeItem>)&pFVar21->Simulations;
    FVar5 = (pFVar21->Simulations).AllocatorInstance.SecondaryData;
    FVar16 = FVar17;
    if (FVar5 != (ForElementType<FNavigationSimulationWidgetNodeItem>)0x0) {
      FVar16 = FVar5;
    }
    if ((ulonglong)FVar16 <= &local_268) {
      lVar19 = (longlong)(pFVar21->Simulations).ArrayMax;
      FVar16 = FVar17;
      if (FVar5 != (ForElementType<FNavigationSimulationWidgetNodeItem>)0x0) {
        FVar16 = FVar5;
      }
      if (&local_268 < (FNavigationSimulationWidgetNodeItem *)((longlong)FVar16 + lVar19 * 0x220)) {
        local_320 = (longlong)(pFVar21->Simulations).ArrayNum;
        local_318 = 0x220;
        local_330 = FVar17;
        if (FVar5 != (ForElementType<FNavigationSimulationWidgetNodeItem>)0x0) {
          local_330 = FVar5;
        }
        local_338 = &local_268;
        local_328 = lVar19;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          pTVar11 = (TSharedPtr<FNavigationSimulationWidgetNode,1> *)(*pcVar6)();
          return pTVar11;
        }
      }
    }
    iVar10 = (pFVar21->Simulations).ArrayNum;
    piVar8 = &(pFVar21->Simulations).ArrayMax;
    if (iVar10 == *piVar8) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FNavigationSimulationWidgetNodeItem>_>
                         (0x220,8,(ForElementType<FNavigationSimulationWidgetNodeItem> *)FVar17,
                          piVar8);
      (pFVar21->Simulations).ArrayNum = iVar10;
    }
    (pFVar21->Simulations).ArrayNum = iVar10 + 1;
    FVar5 = (pFVar21->Simulations).AllocatorInstance.SecondaryData;
    if (FVar5 != (ForElementType<FNavigationSimulationWidgetNodeItem>)0x0) {
      FVar17 = FVar5;
    }
    FNavigationSimulationWidgetNodeItem::FNavigationSimulationWidgetNodeItem
              ((FNavigationSimulationWidgetNodeItem *)((longlong)FVar17 + (longlong)iVar10 * 0x220),
               &local_268);
    if (local_268.FocusedWidget.WidgetTypeAndShortName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_268.FocusedWidget.WidgetTypeAndShortName.TextData.Reference +
                  0x10))();
    }
    if (local_268.FocusedWidget.WidgetLive.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_268.FocusedWidget.WidgetLive.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_268.FocusedWidget.WidgetLive.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_268.FocusedWidget.WidgetLive.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_268.WidgetThatShouldReceivedFocus.WidgetTypeAndShortName.TextData.Reference !=
        (ITextData *)0x0) {
      (**(code **)((longlong)
                   *local_268.WidgetThatShouldReceivedFocus.WidgetTypeAndShortName.TextData.
                    Reference + 0x10))();
    }
    if (local_268.WidgetThatShouldReceivedFocus.WidgetLive.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_268.WidgetThatShouldReceivedFocus.WidgetLive.WeakReferenceCount.
                ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_268.WidgetThatShouldReceivedFocus.WidgetLive.WeakReferenceCount.
                     ReferenceController)->_padding_ + 8))
                  (local_268.WidgetThatShouldReceivedFocus.WidgetLive.WeakReferenceCount.
                   ReferenceController,1);
      }
    }
    if (local_268.ReplyFocusRecipient.WidgetTypeAndShortName.TextData.Reference != (ITextData *)0x0)
    {
      (**(code **)((longlong)
                   *local_268.ReplyFocusRecipient.WidgetTypeAndShortName.TextData.Reference + 0x10))
                ();
    }
    if (local_268.ReplyFocusRecipient.WidgetLive.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_268.ReplyFocusRecipient.WidgetLive.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_268.ReplyFocusRecipient.WidgetLive.WeakReferenceCount.
                     ReferenceController)->_padding_ + 8))
                  (local_268.ReplyFocusRecipient.WidgetLive.WeakReferenceCount.ReferenceController,1
                  );
      }
    }
    if (local_268.ReplyEventHandler.WidgetTypeAndShortName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_268.ReplyEventHandler.WidgetTypeAndShortName.TextData.Reference
                  + 0x10))();
    }
    if (local_268.ReplyEventHandler.WidgetLive.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_268.ReplyEventHandler.WidgetLive.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_268.ReplyEventHandler.WidgetLive.WeakReferenceCount.ReferenceController)
                     ->_padding_ + 8))
                  (local_268.ReplyEventHandler.WidgetLive.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_268.Destination.WidgetTypeAndShortName.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_268.Destination.WidgetTypeAndShortName.TextData.Reference + 0x10
                  ))();
    }
    if (local_268.Destination.WidgetLive.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_268.Destination.WidgetLive.WeakReferenceCount.ReferenceController)->
                WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_268.Destination.WidgetLive.WeakReferenceCount.ReferenceController)->
                     _padding_ + 8))
                  (local_268.Destination.WidgetLive.WeakReferenceCount.ReferenceController,1);
      }
    }
    uVar15 = (ulonglong)local_2f8;
    pFVar18 = pFVar18 + 0x10;
  } while( true );
}

// ParseJsonValue @ 142ee2ea0

void __cdecl
`FNavigationSimulationWidgetNode::FromJson'::__l2::Internal::ParseJsonValue
          (TSharedPtr<FJsonValue,1> *param_1,TVector2<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  double dVar5;
  double dVar6;
  
  if (param_1->Object != (FJsonValue *)0x0) {
    pTVar4 = FJsonValue::AsArray(param_1->Object);
    if (pTVar4->ArrayNum != 2) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructJsonArray.Num() == 2",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Models\\NavigationSimulationNode.cpp"
                         ,0xd7,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (pTVar4->ArrayNum < 2) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (pTVar4->AllocatorInstance).Data;
    if (*(longlong *)(pFVar1 + 0x10) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    dVar5 = FJsonValue::AsNumber(*(FJsonValue **)(pFVar1 + 0x10));
    if (pTVar4->ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (pTVar4->AllocatorInstance).Data;
    if (*(longlong *)pFVar1 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    dVar6 = FJsonValue::AsNumber(*(FJsonValue **)pFVar1);
    (param_2->field0_0x0)._s_0.X = (double)(float)dVar6;
    (param_2->field0_0x0)._s_0.Y = (double)(float)dVar5;
  }
  return;
}

// ParseJsonValue @ 142ee3020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
`FNavigationSimulationWidgetNode::FromJson'::__l2::Internal::ParseJsonValue
          (TSharedPtr<FJsonValue,1> *param_1,FGeometry *param_2)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  longlong *plVar4;
  TSharedPtr<FJsonValue,1> *pTVar5;
  longlong *plVar6;
  TVector2<float>_u_0 TVar7;
  byte bVar8;
  double dVar9;
  float fVar10;
  undefined1 auStack_2b8 [32];
  undefined8 local_298;
  TVector2<float>_u_0 local_290;
  float local_288 [2];
  float afStack_280 [2];
  undefined8 local_278;
  TVector2<float>_u_0 local_26c;
  TTransform2<float> local_260;
  wchar_t *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  wchar_t *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  wchar_t *local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  TMatrix2x2<float> local_218;
  TVector2<double>_u_0 local_208;
  wchar_t *local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  wchar_t *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  wchar_t *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  TVector2<double>_u_0 local_1c8;
  wchar_t *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  TVector2<double>_u_0 local_1a8;
  TTransform2<float> local_198;
  TStringView<wchar_t> local_178;
  TStringView<wchar_t> local_168;
  TSharedPtr<FJsonValue,1> local_158;
  TStringView<wchar_t> local_148;
  TSharedPtr<FJsonValue,1> local_138;
  TSharedPtr<FJsonValue,1> local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  TSharedPtr<FJsonValue,1> local_e8;
  TSharedPtr<FJsonValue,1> local_d8;
  TStringView<wchar_t> local_c8;
  TSharedPtr<FJsonValue,1> local_b8;
  float local_a8 [2];
  float afStack_a0 [2];
  undefined8 local_98;
  FGeometry local_90;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  if (param_1->Object != (FJsonValue *)0x0) {
    plVar4 = (longlong *)(**(code **)param_1->Object->_padding_)();
    if ((*plVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("StructJsonObject.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Models\\NavigationSimulationNode.cpp"
                           ,0x116,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    fVar2 = __real_3f800000;
    local_290 = (TVector2<float>_u_0)0x0;
    local_278 = 0;
    local_26c = (TVector2<float>_u_0)0x0;
    local_288[0] = ___xmm_3f80000000000000000000003f800000;
    local_288[1] = _UNK_15076b184;
    afStack_280[0] = _UNK_15076b188;
    afStack_280[1] = _UNK_15076b18c;
    if ((*plVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_248 = L"AccumulatedRenderTransform";
    uStack_240 = 0x1a;
    local_178._12_4_ = uStack_23c;
    local_178.Size = 0x1a;
    local_178.DataPtr = L"AccumulatedRenderTransform";
    pTVar5 = FJsonObject::GetField<0>((FJsonObject *)*plVar4,&local_128,&local_178);
    if (pTVar5->Object != (FJsonValue *)0x0) {
      plVar6 = (longlong *)(**(code **)pTVar5->Object->_padding_)();
      if ((*plVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("StructJsonObject.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Models\\NavigationSimulationNode.cpp"
                             ,0x107,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_218.M[0][0] = ___xmm_3f80000000000000000000003f800000;
      local_218.M[0][1] = _UNK_15076b184;
      local_218.M[1][0] = _UNK_15076b188;
      local_218.M[1][1] = _UNK_15076b18c;
      if ((*plVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_238 = L"Matrix";
      uStack_230 = 6;
      local_168._12_4_ = uStack_22c;
      local_168.Size = 6;
      local_168.DataPtr = L"Matrix";
      pTVar5 = FJsonObject::GetField<0>((FJsonObject *)*plVar6,&local_158,&local_168);
      ParseJsonValue(pTVar5,&local_218);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.SharedReferenceCount.ReferenceController);
      if ((*plVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_228 = L"Translation";
      uStack_220 = 0xb;
      local_148._12_4_ = uStack_21c;
      local_148.Size = 0xb;
      local_148.DataPtr = L"Translation";
      pTVar5 = FJsonObject::GetField<0>((FJsonObject *)*plVar6,&local_138,&local_148);
      ParseJsonValue(pTVar5,(TVector2<double> *)&local_208._s_0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_138.SharedReferenceCount.ReferenceController);
      local_a8[0] = local_218.M[0][0];
      local_a8[1] = local_218.M[0][1];
      afStack_a0[0] = local_218.M[1][0];
      afStack_a0[1] = local_218.M[1][1];
      local_278 = CONCAT44((float)local_208._s_0.Y,(float)local_208._s_0.X);
      local_288[0] = local_218.M[0][0];
      local_288[1] = local_218.M[0][1];
      afStack_280[0] = local_218.M[1][0];
      afStack_280[1] = local_218.M[1][1];
      local_98 = local_278;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_128.SharedReferenceCount.ReferenceController);
    if ((*plVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_1f8 = L"AccumulatedLayoutTransform";
    uStack_1f0 = 0x1a;
    local_118._12_4_ = uStack_1ec;
    local_118.Size = 0x1a;
    local_118.DataPtr = L"AccumulatedLayoutTransform";
    pTVar5 = FJsonObject::GetField<0>((FJsonObject *)*plVar4,&local_d8,&local_118);
    TVar7 = local_26c;
    fVar10 = fVar2;
    if (pTVar5->Object != (FJsonValue *)0x0) {
      plVar6 = (longlong *)(**(code **)pTVar5->Object->_padding_)();
      if (*plVar6 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("StructJsonObject.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Models\\NavigationSimulationNode.cpp"
                           ,0xf8,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((*plVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      local_1e8 = L"Scale";
      uStack_1e0 = 5;
      local_108._12_4_ = uStack_1dc;
      local_108.Size = 5;
      local_108.DataPtr = L"Scale";
      dVar9 = FJsonObject::GetNumberField((FJsonObject *)*plVar6,&local_108);
      if ((*plVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_1d8 = L"Translation";
      uStack_1d0 = 0xb;
      local_f8._12_4_ = uStack_1cc;
      local_f8.Size = 0xb;
      local_f8.DataPtr = L"Translation";
      pTVar5 = FJsonObject::GetField<0>((FJsonObject *)*plVar6,&local_e8,&local_f8);
      ParseJsonValue(pTVar5,(TVector2<double> *)&local_1c8._s_0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e8.SharedReferenceCount.ReferenceController);
      local_298._4_4_ = (float)local_1c8._s_0.Y;
      local_298._0_4_ = (float)local_1c8._s_0.X;
      TVar7 = local_298;
      fVar10 = (float)dVar9;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.SharedReferenceCount.ReferenceController);
    if ((*plVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_1b8 = L"LocalSize";
    uStack_1b0 = 9;
    local_c8._12_4_ = uStack_1ac;
    local_c8.Size = 9;
    local_c8.DataPtr = L"LocalSize";
    pTVar5 = FJsonObject::GetField<0>((FJsonObject *)*plVar4,&local_b8,&local_c8);
    ParseJsonValue(pTVar5,(TVector2<double> *)&local_1a8._s_0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
    local_298._4_4_ = (float)local_1a8._s_0.Y;
    local_298._0_4_ = (float)local_1a8._s_0.X;
    if ((((local_288[0] == fVar2) && (local_288[1] == 0.0)) && (afStack_280[0] == 0.0)) &&
       (((afStack_280[1] == fVar2 &&
         ((float)local_278 == UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.X)) &&
        (local_278._4_4_ == UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.Y)))) {
      bVar8 = 0;
    }
    else {
      bVar8 = 1;
    }
    local_90.Size = (FDeprecateSlateVector2D)local_298;
    local_90.Position.field0_0x0._s_0.Y = UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.Y;
    local_90.Position.field0_0x0._s_0.X = UE::Math::TVector2<float>::ZeroVector.field0_0x0._s_0.X;
    local_198.M.M[0][0] = ___xmm_3f80000000000000000000003f800000;
    local_198.M.M[0][1] = _UNK_15076b184;
    local_198.M.M[1][0] = _UNK_15076b188;
    local_198.M.M[1][1] = _UNK_15076b18c;
    local_198.Trans.field0_0x0 = (TVector2<float>_u_0)0x0;
    local_90.Scale = 1.0;
    local_90.AbsolutePosition.field0_0x0._s_0.X = 0.0;
    local_90.AbsolutePosition.field0_0x0._s_0.Y = 0.0;
    local_260.M.M[0][1] = 0.0;
    local_260.M.M[1][0] = 0.0;
    local_260.M.M[0][0] = fVar10;
    local_260.M.M[1][1] = fVar10;
    local_260.Trans.field0_0x0 = TVar7;
    Concatenate<TTransform2<float>_>(&local_90.AccumulatedRenderTransform,&local_260,&local_198);
    local_90.bHasRenderTransform = bVar8;
    local_298._4_4_ = TVar7._s_0.Y;
    local_90.AbsolutePosition.field0_0x0._s_0.X = TVar7._s_0.X;
    local_90.AbsolutePosition.field0_0x0._s_0.Y = (float)local_298._4_4_;
    local_298 = TVar7;
    local_290 = TVar7;
    local_90.Scale = fVar10;
    local_90.Position.field0_0x0 = TVar7;
    FGeometry::operator=(param_2,&local_90);
  }
  return;
}

// ParseJsonValue @ 142ee3650

void __cdecl
`FNavigationSimulationWidgetNode::FromJson'::__l2::Internal::ParseJsonValue
          (TSharedPtr<FJsonValue,1> *param_1,FNavigationSimulationWidgetInfo *param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  FString *pFVar4;
  ulonglong uVar5;
  FText *pFVar6;
  TSharedPtr<FJsonValue,1> *pTVar7;
  wchar_t *_Str;
  undefined4 uStack_bc;
  undefined4 uStack_ac;
  undefined4 uStack_9c;
  undefined4 uStack_8c;
  TStringView<wchar_t> local_88;
  FString local_78;
  TStringView<wchar_t> local_68;
  FText local_58;
  FString local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TSharedPtr<FJsonValue,1> local_18;
  
  if (param_1->Object != (FJsonValue *)0x0) {
    plVar3 = (longlong *)(**(code **)param_1->Object->_padding_)();
    if (*plVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructJsonObject.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Models\\NavigationSimulationNode.cpp"
                         ,0x128,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((*plVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_88._12_4_ = uStack_bc;
    local_88.Size = 9;
    local_88.DataPtr = L"WidgetPtr";
    pFVar4 = FJsonObject::GetStringField((FJsonObject *)*plVar3,&local_78,&local_88);
    if ((pFVar4->Data).ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    uVar5 = _wcstoui64(_Str,(wchar_t **)0x0,0);
    param_2->WidgetPtr = uVar5;
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if ((*plVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_68._12_4_ = uStack_ac;
    local_68.Size = 0x16;
    local_68.DataPtr = L"WidgetTypeAndShortName";
    pFVar4 = FJsonObject::GetStringField((FJsonObject *)*plVar3,&local_48,&local_68);
    pFVar6 = FText::FromString(&local_58,pFVar4);
    FText::operator=(&param_2->WidgetTypeAndShortName,pFVar6);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if ((*plVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_38._12_4_ = uStack_9c;
    local_38.Size = 0xc;
    local_38.DataPtr = L"bHasGeometry";
    bVar2 = FJsonObject::GetBoolField((FJsonObject *)*plVar3,&local_38);
    param_2->bHasGeometry = bVar2;
    if (bVar2) {
      if ((*plVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_28._12_4_ = uStack_8c;
      local_28.Size = 0xe;
      local_28.DataPtr = L"WidgetGeometry";
      pTVar7 = FJsonObject::GetField<0>((FJsonObject *)*plVar3,&local_18,&local_28);
      ParseJsonValue(pTVar7,&param_2->WidgetGeometry);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// ParseJsonValue @ 142ee38e0

void __cdecl
`FNavigationSimulationWidgetNode::FromJson'::__l2::Internal::ParseJsonValue
          (TSharedPtr<FJsonValue,1> *param_1,FNavigationSimulationWidgetNodeItem *param_2)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  longlong *plVar4;
  TSharedPtr<FJsonValue,1> *pTVar5;
  undefined4 uStack_1ec;
  undefined4 uStack_1dc;
  undefined4 uStack_1cc;
  undefined4 uStack_1bc;
  undefined4 uStack_1ac;
  undefined4 uStack_19c;
  undefined4 uStack_18c;
  undefined4 uStack_17c;
  undefined4 uStack_16c;
  undefined4 uStack_15c;
  undefined4 uStack_14c;
  undefined4 uStack_13c;
  undefined4 uStack_12c;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  TSharedPtr<FJsonValue,1> local_e8;
  TStringView<wchar_t> local_d8;
  TSharedPtr<FJsonValue,1> local_c8;
  TStringView<wchar_t> local_b8;
  TSharedPtr<FJsonValue,1> local_a8;
  TStringView<wchar_t> local_98;
  TSharedPtr<FJsonValue,1> local_88;
  TStringView<wchar_t> local_78;
  TSharedPtr<FJsonValue,1> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  if (param_1->Object != (FJsonValue *)0x0) {
    plVar4 = (longlong *)(**(code **)param_1->Object->_padding_)();
    if (*plVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructJsonObject.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Models\\NavigationSimulationNode.cpp"
                         ,0x139,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (*plVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    local_128._12_4_ = uStack_1ec;
    local_128.Size = 0xe;
    local_128.DataPtr = L"NavigationType";
    dVar2 = FJsonObject::GetNumberField((FJsonObject *)*plVar4,&local_128);
    param_2->NavigationType = (EUINavigation)(int)dVar2;
    if (*plVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_118._12_4_ = uStack_1dc;
    local_118.Size = 0x11;
    local_118.DataPtr = L"ReplyBoundaryRule";
    dVar2 = FJsonObject::GetNumberField((FJsonObject *)*plVar4,&local_118);
    param_2->ReplyBoundaryRule = (EUINavigationRule)(int)dVar2;
    if (*plVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_108._12_4_ = uStack_1cc;
    local_108.Size = 0xc;
    local_108.DataPtr = L"RoutedReason";
    dVar2 = FJsonObject::GetNumberField((FJsonObject *)*plVar4,&local_108);
    param_2->RoutedReason = (int)dVar2;
    if (*plVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_f8._12_4_ = uStack_1bc;
    local_f8.Size = 0xb;
    local_f8.DataPtr = L"Destination";
    pTVar5 = FJsonObject::GetField<0>((FJsonObject *)*plVar4,&local_e8,&local_f8);
    ParseJsonValue(pTVar5,&param_2->Destination);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.SharedReferenceCount.ReferenceController);
    if (*plVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_d8._12_4_ = uStack_1ac;
    local_d8.Size = 0x11;
    local_d8.DataPtr = L"ReplyEventHandler";
    pTVar5 = FJsonObject::GetField<0>((FJsonObject *)*plVar4,&local_c8,&local_d8);
    ParseJsonValue(pTVar5,&param_2->ReplyEventHandler);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
    if (*plVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_b8._12_4_ = uStack_19c;
    local_b8.Size = 0x13;
    local_b8.DataPtr = L"ReplyFocusRecipient";
    pTVar5 = FJsonObject::GetField<0>((FJsonObject *)*plVar4,&local_a8,&local_b8);
    ParseJsonValue(pTVar5,&param_2->ReplyFocusRecipient);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    if (*plVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_98._12_4_ = uStack_18c;
    local_98.Size = 0x1d;
    local_98.DataPtr = L"WidgetThatShouldReceivedFocus";
    pTVar5 = FJsonObject::GetField<0>((FJsonObject *)*plVar4,&local_88,&local_98);
    ParseJsonValue(pTVar5,&param_2->WidgetThatShouldReceivedFocus);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    if (*plVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_78._12_4_ = uStack_17c;
    local_78.Size = 0xd;
    local_78.DataPtr = L"FocusedWidget";
    pTVar5 = FJsonObject::GetField<0>((FJsonObject *)*plVar4,&local_68,&local_78);
    ParseJsonValue(pTVar5,&param_2->FocusedWidget);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    if (*plVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_58._12_4_ = uStack_16c;
    local_58.Size = 10;
    local_58.DataPtr = L"bIsDynamic";
    bVar3 = FJsonObject::GetBoolField((FJsonObject *)*plVar4,&local_58);
    param_2->bIsDynamic = '\0';
    param_2->field_0x218 = param_2->field_0x218 | bVar3;
    if (*plVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_48._12_4_ = uStack_15c;
    local_48.Size = 0x1e;
    local_48.DataPtr = L"bAlwaysHandleNavigationAttempt";
    bVar3 = FJsonObject::GetBoolField((FJsonObject *)*plVar4,&local_48);
    param_2->bAlwaysHandleNavigationAttempt = bVar3;
    if (*plVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_38._12_4_ = uStack_14c;
    local_38.Size = 0x19;
    local_38.DataPtr = L"bCanFindWidgetForSetFocus";
    bVar3 = FJsonObject::GetBoolField((FJsonObject *)*plVar4,&local_38);
    param_2->bCanFindWidgetForSetFocus = bVar3;
    if (*plVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_28._12_4_ = uStack_13c;
    local_28.Size = 0x1f;
    local_28.DataPtr = L"bRoutedHandlerHasNavigationMeta";
    bVar3 = FJsonObject::GetBoolField((FJsonObject *)*plVar4,&local_28);
    param_2->bRoutedHandlerHasNavigationMeta = bVar3;
    if (*plVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_18._12_4_ = uStack_12c;
    local_18.Size = 0x12;
    local_18.DataPtr = L"bHandledByViewport";
    bVar3 = FJsonObject::GetBoolField((FJsonObject *)*plVar4,&local_18);
    param_2->bHandledByViewport = bVar3;
  }
  return;
}

// ParseJsonValue @ 142ee3ef0

void __cdecl
`FNavigationSimulationWidgetNode::FromJson'::__l2::Internal::ParseJsonValue
          (TSharedPtr<FJsonValue,1> *param_1,TMatrix2x2<float> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (param_1->Object != (FJsonValue *)0x0) {
    pTVar4 = FJsonValue::AsArray(param_1->Object);
    if (pTVar4->ArrayNum != 4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructJsonArray.Num() == 4",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Models\\NavigationSimulationNode.cpp"
                         ,0xe8,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (pTVar4->ArrayNum < 4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (pTVar4->AllocatorInstance).Data;
    if (*(longlong *)(pFVar1 + 0x30) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    dVar5 = FJsonValue::AsNumber(*(FJsonValue **)(pFVar1 + 0x30));
    if (pTVar4->ArrayNum < 3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (pTVar4->AllocatorInstance).Data;
    if (*(longlong *)(pFVar1 + 0x20) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    dVar6 = FJsonValue::AsNumber(*(FJsonValue **)(pFVar1 + 0x20));
    if (pTVar4->ArrayNum < 2) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (pTVar4->AllocatorInstance).Data;
    if (*(longlong *)(pFVar1 + 0x10) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    dVar7 = FJsonValue::AsNumber(*(FJsonValue **)(pFVar1 + 0x10));
    if (pTVar4->ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (pTVar4->AllocatorInstance).Data;
    if (*(longlong *)pFVar1 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    dVar8 = FJsonValue::AsNumber(*(FJsonValue **)pFVar1);
    param_2->M[0][0] = (float)dVar8;
    param_2->M[0][1] = (float)dVar7;
    param_2->M[1][0] = (float)dVar6;
    param_2->M[1][1] = (float)dVar5;
  }
  return;
}

// ToJson @ 142f0e7c0

TSharedRef<FJsonValue,1> * __cdecl
FNavigationSimulationWidgetNode::ToJson
          (TSharedRef<FJsonValue,1> *__return_storage_ptr__,FNavigationSimulationWidgetNode *param_1
          )

{
  ENavigationSimulationNodeType EVar1;
  int iVar2;
  code *pcVar3;
  FJsonObject *this;
  bool bVar4;
  int iVar5;
  TSharedRef<FJsonValue,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  ForElementType<FNavigationSimulationWidgetNodeItem> FVar8;
  TReferenceControllerBase<1> *pTVar9;
  ForElementType<FNavigationSimulationWidgetNodeItem> FVar10;
  undefined1 local_res8 [8];
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_d8;
  TSharedPtr<FJsonValue,1> local_c8;
  TSharedRef<FJsonObject,1> local_b8;
  TSharedPtr<FJsonValue,1> local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  TSharedRef<FJsonValue,1> local_68;
  TSharedRef<FJsonValue,1> local_58;
  TSharedPtr<FJsonObject,1> local_48 [2];
  
  MakeShared<FJsonObject,1>(&local_b8);
  pTVar6 = `FNavigationSimulationWidgetNode::ToJson'::__l2::Internal::CreateJsonValue
                     (&local_68,&param_1->NavigationSource);
  local_a8.Object = pTVar6->Object;
  local_a8.SharedReferenceCount.ReferenceController =
       (pTVar6->SharedReferenceCount).ReferenceController;
  if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  ::FString::FString(&local_98,L"NavigationSource");
  this = local_b8.Object;
  FJsonObject::SetField(local_b8.Object,&local_98,&local_a8);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  EVar1 = param_1->NodeType;
  ::FString::FString(&local_88,L"NodeType");
  FJsonObject::SetNumberField(this,&local_88,(double)EVar1);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  FVar8 = (param_1->Simulations).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->Simulations).ArrayNum;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (FVar8 == (ForElementType<FNavigationSimulationWidgetNodeItem>)0x0) {
    FVar8 = (ForElementType<FNavigationSimulationWidgetNodeItem>)&param_1->Simulations;
  }
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  FVar10 = (ForElementType<FNavigationSimulationWidgetNodeItem>)
           ((longlong)iVar2 * 0x220 + (longlong)FVar8);
  while( true ) {
    if ((param_1->Simulations).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FNavigationSimulationWidgetNodeItem_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (FVar8 == FVar10) break;
    pTVar6 = `FNavigationSimulationWidgetNode::ToJson'::__l2::Internal::CreateJsonValue
                       (&local_58,(FNavigationSimulationWidgetNodeItem *)FVar8);
    local_c8.Object = pTVar6->Object;
    local_c8.SharedReferenceCount.ReferenceController =
         (pTVar6->SharedReferenceCount).ReferenceController;
    if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((local_d8.AllocatorInstance.Data <= &local_c8) &&
        (&local_c8 <
         (TSharedPtr<FJsonValue,1> *)
         (local_d8.AllocatorInstance.Data + (longlong)local_d8.ArrayMax * 0x10))) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<FJsonValue,1> *)(*pcVar3)();
      return pTVar6;
    }
    iVar5 = local_d8.ArrayNum;
    if (local_d8.ArrayNum == local_d8.ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_d8.AllocatorInstance,&local_d8.ArrayMax);
    }
    local_d8.ArrayNum = iVar5 + 1;
    *(FJsonValue **)&local_d8.AllocatorInstance.Data[(longlong)iVar5 * 0x10].field_0x0 =
         local_c8.Object;
    *(TReferenceControllerBase<1> **)(local_d8.AllocatorInstance.Data + (longlong)iVar5 * 0x10 + 8)
         = local_c8.SharedReferenceCount.ReferenceController;
    local_c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_c8.Object = (FJsonValue *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    FVar8 = (ForElementType<FNavigationSimulationWidgetNodeItem>)((longlong)FVar8 + 0x220);
  }
  ::FString::FString(&local_78,L"Simulations");
  FJsonObject::SetArrayField(local_b8.Object,&local_78,&local_d8);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pTVar7 = ::operator_new(0x30);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FJsonValue *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_48[0].Object = local_b8.Object;
    local_48[0].SharedReferenceCount.ReferenceController =
         local_b8.SharedReferenceCount.ReferenceController;
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_;
    if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FJsonValueObject::FJsonValueObject((FJsonValueObject *)(pTVar7 + 1),local_48);
    if ((pTVar7 + 1 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<FJsonValue,1> *)(*pcVar3)();
      return pTVar6;
    }
    __return_storage_ptr__->Object = (FJsonValue *)(pTVar7 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    pTVar9 = pTVar7;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
  if ((TSharedPtr<FJsonValue,1> *)local_d8.AllocatorInstance.Data != (TSharedPtr<FJsonValue,1> *)0x0
     ) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

