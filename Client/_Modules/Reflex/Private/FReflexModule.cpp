// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Reflex
// Functions: 2

// StartupModule @ 14accedf0

void __thiscall FReflexModule::StartupModule(FReflexModule *this)

{
  TUniquePtr<FReflexMaxTickRateHandler,TDefaultDelete<FReflexMaxTickRateHandler>_> *pTVar1;
  TUniquePtr<FReflexLatencyMarkers,TDefaultDelete<FReflexLatencyMarkers>_> *pTVar2;
  TUniquePtr<FReflexStatsLatencyMarkers,TDefaultDelete<FReflexStatsLatencyMarkers>_> *pTVar3;
  code *pcVar4;
  FReflexLatencyMarkers *pFVar5;
  IModularFeatures *pIVar6;
  FReflexLatencyMarkers *pFVar7;
  longlong lVar8;
  FReflexLatencyMarkers *pFVar9;
  ulonglong uVar10;
  longlong local_38;
  longlong local_30;
  longlong local_28 [2];
  
  pFVar5 = ::operator_new(0x28);
  pFVar9 = (FReflexLatencyMarkers *)0x0;
  pFVar7 = pFVar9;
  if (pFVar5 != (FReflexLatencyMarkers *)0x0) {
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = 0;
    pFVar5->bFeatureSupport = false;
    *(undefined3 *)&pFVar5->field_0x19 = 0;
    pFVar5->AverageTotalLatencyMs = 0.0;
    pFVar5->AverageGameLatencyMs = 0.0;
    pFVar5->AverageRenderLatencyMs = 0.0;
    pFVar5->_padding_ = (longlong)&___7IMaxTickRateHandlerModule__6B_;
    FSelfRegisteringExec::FSelfRegisteringExec((FSelfRegisteringExec *)&pFVar5->_padding_);
    *(undefined4 *)&pFVar5->_padding_ = 0;
    pFVar5->_padding_ =
         (longlong)&FReflexMaxTickRateHandler::_vftable__for__IMaxTickRateHandlerModule__;
    pFVar5->_padding_ = (longlong)&FReflexMaxTickRateHandler::_vftable__for__FSelfRegisteringExec__;
    *(undefined4 *)((longlong)&pFVar5->_padding_ + 4) = 0xbf800000;
    *(undefined2 *)&pFVar5->bFeatureSupport = 1;
    pFVar5->AverageTotalLatencyMs = 0.0;
    pFVar5->AverageGameLatencyMs = 0.0;
    pFVar7 = pFVar5;
  }
  pTVar1 = &this->ReflexMaxTickRateHandler;
  if (pTVar1 != (TUniquePtr<FReflexMaxTickRateHandler,TDefaultDelete<FReflexMaxTickRateHandler>_> *)
                &local_38) {
    pFVar5 = (FReflexLatencyMarkers *)pTVar1->Ptr;
    pTVar1->Ptr = (FReflexMaxTickRateHandler *)pFVar7;
    pFVar7 = pFVar5;
  }
  if (pFVar7 != (FReflexLatencyMarkers *)0x0) {
    (**(code **)pFVar7->_padding_)(&pFVar7->_padding_,1);
  }
  uVar10 = (ulonglong)_tls_index;
  if (pTVar1->Ptr != (FReflexMaxTickRateHandler *)0x0) {
    (**(code **)pTVar1->Ptr->_padding_)();
    pIVar6 = IModularFeatures::Get();
    pcVar4 = *(code **)((longlong)*pIVar6 + 0x28);
    pFVar7 = (FReflexLatencyMarkers *)&pTVar1->Ptr->_padding_;
    if (pTVar1->Ptr == (FReflexMaxTickRateHandler *)0x0) {
      pFVar7 = pFVar9;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8) + 0x9d4c) <
         `public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'::
       __l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"MaxTickRateHandler");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    (*pcVar4)(pIVar6,`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                     ::__l2::FeatureName,pFVar7);
  }
  pFVar5 = ::operator_new(0x58);
  pFVar7 = pFVar9;
  if (pFVar5 != (FReflexLatencyMarkers *)0x0) {
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = 0;
    pFVar5->_padding_ = 0;
    pFVar5->bFeatureSupport = false;
    *(undefined3 *)&pFVar5->field_0x19 = 0;
    pFVar5->AverageTotalLatencyMs = 0.0;
    pFVar5->AverageGameLatencyMs = 0.0;
    pFVar5->AverageRenderLatencyMs = 0.0;
    pFVar5->AverageSimulationLatencyMs = 0.0;
    pFVar5->AverageRenderSubmitLatencyMs = 0.0;
    pFVar5->AveragePresentLatencyMs = 0.0;
    pFVar5->AverageDriverLatencyMs = 0.0;
    pFVar5->AverageOSRenderQueueLatencyMs = 0.0;
    pFVar5->AverageGPURenderLatencyMs = 0.0;
    pFVar5->RenderSubmitOffsetMs = 0.0;
    pFVar5->PresentOffsetMs = 0.0;
    pFVar5->DriverOffsetMs = 0.0;
    pFVar5->OSRenderQueueOffsetMs = 0.0;
    pFVar5->GPURenderOffsetMs = 0.0;
    pFVar5->bEnabled = false;
    pFVar5->bFlashIndicatorEnabled = false;
    pFVar5->bFlashIndicatorDriverControlled = false;
    pFVar5->field_0x57 = 0;
    pFVar7 = FReflexLatencyMarkers::FReflexLatencyMarkers(pFVar5);
  }
  pTVar2 = &this->ReflexLatencyMarker;
  if (pTVar2 != (TUniquePtr<FReflexLatencyMarkers,TDefaultDelete<FReflexLatencyMarkers>_> *)
                &local_30) {
    pFVar5 = pTVar2->Ptr;
    pTVar2->Ptr = pFVar7;
    pFVar7 = pFVar5;
  }
  if (pFVar7 != (FReflexLatencyMarkers *)0x0) {
    (**(code **)(pFVar7->_padding_ + 0x28))(&pFVar7->_padding_,1);
  }
  if (pTVar2->Ptr != (FReflexLatencyMarkers *)0x0) {
    (**(code **)pTVar2->Ptr->_padding_)();
    pIVar6 = IModularFeatures::Get();
    pcVar4 = *(code **)((longlong)*pIVar6 + 0x28);
    pFVar7 = (FReflexLatencyMarkers *)&pTVar2->Ptr->_padding_;
    if (pTVar2->Ptr == (FReflexLatencyMarkers *)0x0) {
      pFVar7 = pFVar9;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8) + 0x9d4c) <
         `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::
         __l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2
       ::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"LatencyMarker");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    (*pcVar4)(pIVar6,`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                     ::__l2::FeatureName,pFVar7);
  }
  pFVar5 = ::operator_new(0x18);
  pFVar7 = pFVar9;
  if (pFVar5 != (FReflexLatencyMarkers *)0x0) {
    *(undefined4 *)((longlong)&pFVar5->_padding_ + 2) = 0;
    *(undefined2 *)((longlong)&pFVar5->_padding_ + 6) = 0;
    pFVar5->_padding_ = (longlong)&FReflexStatsLatencyMarkers::_vftable__for__ILatencyMarkerModule__
    ;
    pFVar5->_padding_ =
         (longlong)&FReflexStatsLatencyMarkers::_vftable__for__IWindowsMessageHandler__;
    *(undefined2 *)&pFVar5->_padding_ = 0;
    pFVar7 = pFVar5;
  }
  pTVar3 = &this->ReflexStatsLatencyMarker;
  if (pTVar3 == (TUniquePtr<FReflexStatsLatencyMarkers,TDefaultDelete<FReflexStatsLatencyMarkers>_>
                 *)local_28) {
    if (pFVar7 == (FReflexLatencyMarkers *)0x0) goto LAB_14accf03f;
    lVar8 = pFVar7->_padding_;
  }
  else {
    pFVar5 = (FReflexLatencyMarkers *)pTVar3->Ptr;
    pTVar3->Ptr = (FReflexStatsLatencyMarkers *)pFVar7;
    if (pFVar5 == (FReflexLatencyMarkers *)0x0) goto LAB_14accf03f;
    lVar8 = pFVar5->_padding_;
    pFVar7 = pFVar5;
  }
  (**(code **)(lVar8 + 0xe8))(pFVar7,1);
LAB_14accf03f:
  if (pTVar3->Ptr != (FReflexStatsLatencyMarkers *)0x0) {
    (**(code **)pTVar3->Ptr->_padding_)();
    pIVar6 = IModularFeatures::Get();
    pcVar4 = *(code **)((longlong)*pIVar6 + 0x28);
    pFVar7 = (FReflexLatencyMarkers *)&pTVar3->Ptr->_padding_;
    if (pTVar3->Ptr == (FReflexStatsLatencyMarkers *)0x0) {
      pFVar7 = pFVar9;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8) + 0x9d4c) <
         `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::
         __l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2
       ::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"LatencyMarker");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    (*pcVar4)(pIVar6,`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                     ::__l2::FeatureName,pFVar7);
  }
  return;
}

// ShutdownModule @ 14accf160

void __thiscall FReflexModule::ShutdownModule(FReflexModule *this)

{
  code *pcVar1;
  FReflexMaxTickRateHandler *pFVar2;
  FReflexLatencyMarkers *pFVar3;
  FReflexStatsLatencyMarkers *pFVar4;
  IModularFeatures *pIVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)0x0;
  if ((this->ReflexMaxTickRateHandler).Ptr != (FReflexMaxTickRateHandler *)0x0) {
    pIVar5 = IModularFeatures::Get();
    pcVar1 = *(code **)((longlong)*pIVar5 + 0x30);
    pFVar2 = (this->ReflexMaxTickRateHandler).Ptr;
    plVar6 = &pFVar2->_padding_;
    if (pFVar2 == (FReflexMaxTickRateHandler *)0x0) {
      plVar6 = plVar7;
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                        ::__l2::FeatureName,L"MaxTickRateHandler");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    (*pcVar1)(pIVar5,`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                     ::__l2::FeatureName,plVar6);
  }
  if ((this->ReflexLatencyMarker).Ptr != (FReflexLatencyMarkers *)0x0) {
    pIVar5 = IModularFeatures::Get();
    pcVar1 = *(code **)((longlong)*pIVar5 + 0x30);
    pFVar3 = (this->ReflexLatencyMarker).Ptr;
    plVar6 = &pFVar3->_padding_;
    if (pFVar3 == (FReflexLatencyMarkers *)0x0) {
      plVar6 = plVar7;
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2
        ::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::
          __l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                        ::__l2::FeatureName,L"LatencyMarker");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    (*pcVar1)(pIVar5,`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                     ::__l2::FeatureName,plVar6);
  }
  if ((this->ReflexStatsLatencyMarker).Ptr != (FReflexStatsLatencyMarkers *)0x0) {
    pIVar5 = IModularFeatures::Get();
    pcVar1 = *(code **)((longlong)*pIVar5 + 0x30);
    pFVar4 = (this->ReflexStatsLatencyMarker).Ptr;
    plVar6 = &pFVar4->_padding_;
    if (pFVar4 == (FReflexStatsLatencyMarkers *)0x0) {
      plVar6 = plVar7;
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2
        ::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::
          __l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                        ::__l2::FeatureName,L"LatencyMarker");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    (*pcVar1)(pIVar5,`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                     ::__l2::FeatureName,plVar6);
  }
  return;
}

