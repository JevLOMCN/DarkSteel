// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 4

// FTrackedMetaData @ 1425be280

FTrackedMetaData * __thiscall
FTrackedMetaData::FTrackedMetaData
          (FTrackedMetaData *this,SWidget *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  FName *pFVar2;
  FScriptContainerElement *pFVar3;
  SWidget *pSVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  FSlateWidgetTracker *this_00;
  TArray<SWidget_const_*,TSizedDefaultAllocator<32>_> *pTVar11;
  FTrackedMetaData *pFVar12;
  FTrackedWidgetsChangedEvent *this_01;
  FName *pFVar13;
  undefined1 local_res8 [8];
  FName local_res20;
  SWidget *local_48 [2];
  
  pTVar1 = &this->Tags;
  this->TrackedWidget = (SWidget *)0x0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Tags).ArrayNum = 0;
  (this->Tags).ArrayMax = 0;
  this->_padding_ = (longlong)&___7FTrackedMetaData__6B_;
  FSlateWidgetTracker::Get();
  iVar8 = (**(code **)(*(longlong *)CVarEnableSlateWidgetTracker._padding_ + 200))();
  if (iVar8 == 1) {
    if ((param_1 != (SWidget *)0x0) && (0 < param_2->ArrayNum)) {
      this->TrackedWidget = param_1;
      if (pTVar1 != param_2) {
        pFVar3 = (pTVar1->AllocatorInstance).Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (pTVar1->AllocatorInstance).Data = (param_2->AllocatorInstance).Data;
        (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (this->Tags).ArrayNum = param_2->ArrayNum;
        (this->Tags).ArrayMax = param_2->ArrayMax;
        param_2->ArrayNum = 0;
        param_2->ArrayMax = 0;
      }
      this_00 = FSlateWidgetTracker::Get();
      pSVar4 = this->TrackedWidget;
      iVar8 = (**(code **)(*(longlong *)CVarEnableSlateWidgetTracker._padding_ + 200))();
      if ((iVar8 == 1) && (pSVar4 != (SWidget *)0x0)) {
        pFVar13 = (FName *)(pTVar1->AllocatorInstance).Data;
        iVar8 = (this->Tags).ArrayNum;
        pFVar2 = pFVar13 + iVar8;
        while( true ) {
          if ((this->Tags).ArrayNum != iVar8) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          if (pFVar13 == pFVar2) break;
          local_res20 = *pFVar13;
          local_48[0] = pSVar4;
          iVar9 = (**(code **)(*(longlong *)CVarEnableSlateWidgetTracker._padding_ + 200))();
          FVar6 = local_res20;
          if ((iVar9 == 1) && (local_48[0] != (SWidget *)0x0)) {
            uVar10 = ::GetTypeHash(local_res20.ComparisonIndex.Value);
            pTVar11 = TMapBase<FName,TArray<SWidget_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<SWidget_const_*,TSizedDefaultAllocator<32>_>,0>_>
                      ::FindOrAddImpl<FName_const_&>
                                ((TMapBase<FName,TArray<SWidget_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<SWidget_const_*,TSizedDefaultAllocator<32>_>,0>_>
                                  *)this_00,uVar10 + FVar6.Number,&local_res20);
            pFVar3 = (pTVar11->AllocatorInstance).Data;
            if ((pFVar3 <= (FScriptContainerElement *)local_48) &&
               (((FScriptContainerElement *)local_48 < pFVar3 + (longlong)pTVar11->ArrayMax * 8 &&
                (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)))) {
              pcVar5 = (code *)swi(3);
              pFVar12 = (FTrackedMetaData *)(*pcVar5)();
              return pFVar12;
            }
            iVar9 = pTVar11->ArrayNum;
            if (iVar9 == pTVar11->ArrayMax) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&pTVar11->AllocatorInstance,&pTVar11->ArrayMax);
            }
            pTVar11->ArrayNum = iVar9 + 1;
            *(SWidget **)((pTVar11->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_48[0];
            this_01 = TMapBase<FName,FTrackedWidgetsChangedEvent,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTrackedWidgetsChangedEvent,0>_>
                      ::Find((TMapBase<FName,FTrackedWidgetsChangedEvent,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTrackedWidgetsChangedEvent,0>_>
                              *)&this_00->TrackedWidgetsChangedEvents,local_res20);
            if (this_01 != (FTrackedWidgetsChangedEvent *)0x0) {
              TMulticastDelegate<void___cdecl(SWidget_const_*,FName_const_&,enum_ETrackedSlateWidgetOperations),FDefaultDelegateUserPolicy>
              ::Broadcast(this_01,local_48[0],&local_res20,AddedTrackedWidget);
            }
          }
          pFVar13 = pFVar13 + 1;
        }
      }
      return this;
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_567908514639380470>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\TrackedMetaData.cpp"
                       ,10,"InTrackedWidget != nullptr && InTags.Num() > 0");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar12 = (FTrackedMetaData *)(*pcVar5)();
      return pFVar12;
    }
  }
  return this;
}

// FTrackedMetaData @ 1425be520

FTrackedMetaData * __thiscall
FTrackedMetaData::FTrackedMetaData(FTrackedMetaData *this,SWidget *param_1,FName param_2)

{
  FName *pFVar1;
  SWidget *pSVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  FSlateWidgetTracker *this_00;
  TArray<SWidget_const_*,TSizedDefaultAllocator<32>_> *pTVar10;
  FTrackedMetaData *pFVar11;
  FTrackedWidgetsChangedEvent *this_01;
  FName *pFVar12;
  undefined1 local_res8 [8];
  FName local_res20;
  SWidget *local_48 [2];
  
  this->_padding_ = (longlong)&___7FTrackedMetaData__6B_;
  this->TrackedWidget = (SWidget *)0x0;
  (this->Tags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tags).ArrayNum = 0;
  (this->Tags).ArrayMax = 0;
  FSlateWidgetTracker::Get();
  iVar7 = (**(code **)(*(longlong *)CVarEnableSlateWidgetTracker._padding_ + 200))();
  if (iVar7 == 1) {
    if ((param_1 != (SWidget *)0x0) && (param_2 != (FName)0x0)) {
      this->TrackedWidget = param_1;
      iVar7 = (this->Tags).ArrayNum;
      if (iVar7 == (this->Tags).ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(this->Tags).AllocatorInstance,&(this->Tags).ArrayMax);
      }
      (this->Tags).ArrayNum = iVar7 + 1;
      *(FName *)((this->Tags).AllocatorInstance.Data + (longlong)iVar7 * 8) = param_2;
      this_00 = FSlateWidgetTracker::Get();
      pSVar2 = this->TrackedWidget;
      iVar7 = (**(code **)(*(longlong *)CVarEnableSlateWidgetTracker._padding_ + 200))();
      if ((iVar7 == 1) && (pSVar2 != (SWidget *)0x0)) {
        pFVar12 = (FName *)(this->Tags).AllocatorInstance.Data;
        iVar7 = (this->Tags).ArrayNum;
        pFVar1 = pFVar12 + iVar7;
        while( true ) {
          if ((this->Tags).ArrayNum != iVar7) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res8);
          }
          if (pFVar12 == pFVar1) break;
          local_res20 = *pFVar12;
          local_48[0] = pSVar2;
          iVar8 = (**(code **)(*(longlong *)CVarEnableSlateWidgetTracker._padding_ + 200))();
          FVar5 = local_res20;
          if ((iVar8 == 1) && (local_48[0] != (SWidget *)0x0)) {
            uVar9 = ::GetTypeHash(local_res20.ComparisonIndex.Value);
            pTVar10 = TMapBase<FName,TArray<SWidget_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<SWidget_const_*,TSizedDefaultAllocator<32>_>,0>_>
                      ::FindOrAddImpl<FName_const_&>
                                ((TMapBase<FName,TArray<SWidget_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<SWidget_const_*,TSizedDefaultAllocator<32>_>,0>_>
                                  *)this_00,uVar9 + FVar5.Number,&local_res20);
            pFVar3 = (pTVar10->AllocatorInstance).Data;
            if ((pFVar3 <= (FScriptContainerElement *)local_48) &&
               (((FScriptContainerElement *)local_48 < pFVar3 + (longlong)pTVar10->ArrayMax * 8 &&
                (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar6)))) {
              pcVar4 = (code *)swi(3);
              pFVar11 = (FTrackedMetaData *)(*pcVar4)();
              return pFVar11;
            }
            iVar8 = pTVar10->ArrayNum;
            if (iVar8 == pTVar10->ArrayMax) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
            }
            pTVar10->ArrayNum = iVar8 + 1;
            *(SWidget **)((pTVar10->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_48[0];
            this_01 = TMapBase<FName,FTrackedWidgetsChangedEvent,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTrackedWidgetsChangedEvent,0>_>
                      ::Find((TMapBase<FName,FTrackedWidgetsChangedEvent,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTrackedWidgetsChangedEvent,0>_>
                              *)&this_00->TrackedWidgetsChangedEvents,local_res20);
            if (this_01 != (FTrackedWidgetsChangedEvent *)0x0) {
              TMulticastDelegate<void___cdecl(SWidget_const_*,FName_const_&,enum_ETrackedSlateWidgetOperations),FDefaultDelegateUserPolicy>
              ::Broadcast(this_01,local_48[0],&local_res20,AddedTrackedWidget);
            }
          }
          pFVar12 = pFVar12 + 1;
        }
      }
      return this;
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_567908514639380457>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Types\\TrackedMetaData.cpp"
                       ,0x17,"InTrackedWidget != nullptr && !InTags.IsNone()");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FTrackedMetaData *)(*pcVar4)();
      return pFVar11;
    }
  }
  return this;
}

// ~FTrackedMetaData @ 1425c1ad0

void __thiscall FTrackedMetaData::~FTrackedMetaData(FTrackedMetaData *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FSlateWidgetTracker *this_00;
  
  this->_padding_ = (longlong)&___7FTrackedMetaData__6B_;
  FSlateWidgetTracker::Get();
  iVar2 = (**(code **)(*(longlong *)CVarEnableSlateWidgetTracker._padding_ + 200))();
  if (iVar2 == 1) {
    this_00 = FSlateWidgetTracker::Get();
    FSlateWidgetTracker::RemoveTrackedWidget(this_00,this->TrackedWidget);
  }
  pFVar1 = (this->Tags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  return;
}

// IsOfTypeImpl @ 1425e9940

bool __thiscall FTrackedMetaData::IsOfTypeImpl(FTrackedMetaData *this,FName *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName_const&___ptr64___cdecl_FTrackedMetaData::GetTypeId(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName_const&___ptr64___cdecl_FTrackedMetaData::GetTypeId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName_const&___ptr64___cdecl_FTrackedMetaData::GetTypeId(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName_const&___ptr64___cdecl_FTrackedMetaData::GetTypeId(void)'
                      ::__l2::Type,L"FTrackedMetaData");
      _Init_thread_footer(&`public:_static_class_FName_const&___ptr64___cdecl_FTrackedMetaData::GetTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return `public:_static_class_FName_const&___ptr64___cdecl_FTrackedMetaData::GetTypeId(void)'::__l2
         ::Type == *param_1;
}

