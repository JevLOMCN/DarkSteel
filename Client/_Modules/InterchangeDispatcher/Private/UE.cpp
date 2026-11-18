// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeDispatcher
// Functions: 9

// operator<< @ 14e6612f0

FArchive * __cdecl UE::Interchange::operator<<(FArchive *param_1,FTaskProgressData *param_2)

{
  ETaskState *pEVar1;
  float *pfVar2;
  int *piVar3;
  ETaskState *pEVar4;
  float *pfVar5;
  
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->TaskIndex = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pEVar1 = &param_2->TaskState;
  pEVar4 = (ETaskState *)**(undefined8 **)&param_1->field_0x8;
  if ((ETaskState *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pEVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,pEVar1);
    }
  }
  else {
    *pEVar1 = *pEVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar2 = &param_2->TaskProgress;
  pfVar5 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar5 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pfVar2 = *pfVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar2,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar2);
  return param_1;
}

// operator<< @ 14e661410

void __cdecl UE::Interchange::operator<<(FArchive *param_1,FMessageHeader *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  FString local_18;
  
  pwVar5 = L"guard";
  if ((param_1->field_0x28 & 1) != 0) {
    pwVar5 = L"";
  }
  ::FString::FString(&local_18,pwVar5);
  ::operator<<(param_1,&local_18);
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->ByteSize = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar6.Data = local_18.Data.AllocatorInstance.Data;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar6.Data,L"guard");
  if (iVar4 != 0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6121364488940683222>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Dispatcher\\Public\\InterchangeDispatcherNetworking.h"
                       ,0x2a,"Guard == L\"guard\"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// CreateCommand @ 14e6628d0

TSharedPtr<UE::Interchange::ICommand,1> * __cdecl
UE::Interchange::CreateCommand
          (TSharedPtr<UE::Interchange::ICommand,1> *__return_storage_ptr__,ECommandId param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<UE::Interchange::ICommand,1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  undefined **ppuVar5;
  
  switch(param_1) {
  case Error:
    pTVar4 = ::operator_new(0x28);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
LAB_14e66298b:
      __return_storage_ptr__->Object = (ICommand *)0x10;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      return __return_storage_ptr__;
    }
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFErrorCommand_Interchange_UE___00_SharedPointerInternals__6B_
    ;
    ppuVar5 = &___7FErrorCommand_Interchange_UE__6B_;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[2]._padding_ = 0;
    break;
  case Ping:
    pTVar4 = ::operator_new(0x18);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) goto LAB_14e66298b;
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPingCommand_Interchange_UE___00_SharedPointerInternals__6B_
    ;
    ppuVar5 = &___7FPingCommand_Interchange_UE__6B_;
    break;
  case BackPing:
    pTVar4 = ::operator_new(0x18);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) goto LAB_14e66298b;
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFBackPingCommand_Interchange_UE___00_SharedPointerInternals__6B_
    ;
    ppuVar5 = &___7FBackPingCommand_Interchange_UE__6B_;
    break;
  case RunTask:
    pTVar4 = ::operator_new(0x30);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) goto LAB_14e66298b;
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFRunTaskCommand_Interchange_UE___00_SharedPointerInternals__6B_
    ;
    ppuVar5 = &___7FRunTaskCommand_Interchange_UE__6B_;
    pTVar4[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[2]._padding_ = 0;
    pTVar4[2].SharedReferenceCount = (atomic<int>)0xffffffff;
    break;
  case NotifyEndTask:
    pTVar4 = ::operator_new(0x48);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) goto LAB_14e66298b;
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFCompletedTaskCommand_Interchange_UE___00_SharedPointerInternals__6B_
    ;
    ppuVar5 = &___7FCompletedTaskCommand_Interchange_UE__6B_;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)((longlong)&pTVar4[4]._padding_ + 4) = 0;
    pTVar4[2]._padding_ = 0;
    pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[3]._padding_ = 0;
    pTVar4[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[3].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar4[4]._padding_ = 0xffffffff;
    break;
  case QueryTaskProgress:
    pTVar4 = ::operator_new(0x28);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) goto LAB_14e66298b;
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFQueryTaskProgressCommand_Interchange_UE___00_SharedPointerInternals__6B_
    ;
    ppuVar5 = &___7FQueryTaskProgressCommand_Interchange_UE__6B_;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[2]._padding_ = 0;
    break;
  case CompletedQueryTaskProgress:
    pTVar4 = ::operator_new(0x28);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) goto LAB_14e66298b;
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFCompletedQueryTaskProgressCommand_Interchange_UE___00_SharedPointerInternals__6B_
    ;
    ppuVar5 = &___7FCompletedQueryTaskProgressCommand_Interchange_UE__6B_;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[2]._padding_ = 0;
    break;
  case Terminate:
    pTVar4 = ::operator_new(0x18);
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) goto LAB_14e66298b;
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFTerminateCommand_Interchange_UE___00_SharedPointerInternals__6B_
    ;
    ppuVar5 = &___7FTerminateCommand_Interchange_UE__6B_;
    break;
  default:
    __return_storage_ptr__->Object = (ICommand *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  pTVar4[1]._padding_ = (longlong)ppuVar5;
  if ((pTVar4 + 1 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TSharedPtr<UE::Interchange::ICommand,1> *)(*pcVar1)();
    return pTVar3;
  }
  __return_storage_ptr__->Object = (ICommand *)(pTVar4 + 1);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  LOCK();
  pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
  UNLOCK();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return __return_storage_ptr__;
}

// DeserializeCommand @ 14e662d30

TSharedPtr<UE::Interchange::ICommand,1> * __cdecl
UE::Interchange::DeserializeCommand
          (TSharedPtr<UE::Interchange::ICommand,1> *__return_storage_ptr__,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<UE::Interchange::ICommand,1> *pTVar3;
  ECommandId local_res10 [8];
  TSharedPtr<UE::Interchange::ICommand,1> local_d8;
  FMemoryReader local_c8;
  
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  local_c8._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_c8);
  local_c8._padding_ = 0;
  local_c8._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_c8.LimitSize = 0x7fffffffffffffff;
  local_c8.Bytes = param_1;
  FArchiveState::SetIsLoading((FArchiveState *)&local_c8,true);
  (**(code **)(local_c8._padding_ + 0x108))(&local_c8,0);
  local_res10[0] = Invalid;
  if (*(ECommandId **)(local_c8._padding_ + 8) < *(ECommandId **)local_c8._padding_ + 1) {
    if (*(code **)(local_c8._padding_ + 0x188) == FMemoryReader::Serialize) {
      FMemoryReader::Serialize(&local_c8,local_res10,1);
    }
    else {
      (**(code **)(local_c8._padding_ + 0x188))();
    }
  }
  else {
    local_res10[0] = **(ECommandId **)local_c8._padding_;
    *(longlong *)local_c8._padding_ = *(longlong *)local_c8._padding_ + 1;
  }
  CreateCommand(&local_d8,local_res10[0]);
  if (local_d8.Object == (ICommand *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.SharedReferenceCount.ReferenceController);
    __return_storage_ptr__->Object = (ICommand *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    FArchive::~FArchive((FArchive *)&local_c8);
  }
  else {
    if (local_d8.Object == (ICommand *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedPtr<UE::Interchange::ICommand,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
    (**(code **)((longlong)*local_d8.Object + 0x10))(local_d8.Object,&local_c8);
    if ((local_c8._padding_ & 0x200U) == 0) {
      if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      __return_storage_ptr__->Object = local_d8.Object;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           local_d8.SharedReferenceCount.ReferenceController;
    }
    else {
      __return_storage_ptr__->Object = (ICommand *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.SharedReferenceCount.ReferenceController);
    FArchive::~FArchive((FArchive *)&local_c8);
  }
  return __return_storage_ptr__;
}

// GetMajor @ 14e665490

int __cdecl UE::Interchange::DispatcherCommandVersion::GetMajor(void)

{
  return 0x14;
}

// GetMinor @ 14e6655a0

int __cdecl UE::Interchange::DispatcherCommandVersion::GetMinor(void)

{
  return 0;
}

// GetPatch @ 14e6659d0

int __cdecl UE::Interchange::DispatcherCommandVersion::GetPatch(void)

{
  return 0;
}

// SerializeCommand @ 14e667ec0

void __cdecl
UE::Interchange::SerializeCommand
          (ICommand *param_1,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 local_res8 [8];
  FName local_res10;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_b8;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_b8);
  local_b8._padding_ = 0;
  local_b8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_b8.ArchiveName = local_res10;
  local_b8.Bytes = param_2;
  FArchiveState::SetIsSaving((FArchiveState *)&local_b8,true);
  (**(code **)(local_b8._padding_ + 0x108))(&local_b8,0);
  local_b8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  local_res8[0] = (**(code **)((longlong)*param_1 + 8))(param_1);
  if (*(undefined1 **)(local_b8._padding_ + 8) < *(undefined1 **)local_b8._padding_ + 1) {
    if (*(code **)(local_b8._padding_ + 0x188) ==
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_b8,local_res8,1);
    }
    else {
      (**(code **)(local_b8._padding_ + 0x188))();
    }
  }
  else {
    local_res8[0] = **(undefined1 **)local_b8._padding_;
    *(longlong *)local_b8._padding_ = *(longlong *)local_b8._padding_ + 1;
  }
  (**(code **)((longlong)*param_1 + 0x10))(param_1,&local_b8);
  FArchive::~FArchive((FArchive *)&local_b8);
  return;
}

// ToString @ 14e66a600

FString * __cdecl
UE::Interchange::DispatcherCommandVersion::ToString(FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  longlong lVar3;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FString___cdecl_UE::Interchange::DispatcherCommandVersion::ToString(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FString___cdecl_UE::Interchange::DispatcherCommandVersion::ToString(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FString___cdecl_UE::Interchange::DispatcherCommandVersion::ToString(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_68,0);
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_78,0);
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_88,0);
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_98,0x14);
      ::FString::ConcatFC(&local_18,&local_98,L".");
      ::FString::ConcatFF(&local_28,&local_18,&local_88);
      ::FString::ConcatFC(&local_38,&local_28,L".");
      ::FString::ConcatFF(&local_48,&local_38,&local_78);
      ::FString::ConcatFC(&local_58,&local_48,L".");
      ::FString::ConcatFF(&`public:_static_class_FString___cdecl_UE::Interchange::DispatcherCommandVersion::ToString(void)'
                           ::__l2::Version,&local_58,&local_68);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      atexit(`UE::Interchange::DispatcherCommandVersion::ToString'::__l2::
             _dynamic_atexit_destructor_for__Version__);
      _Init_thread_footer(&`public:_static_class_FString___cdecl_UE::Interchange::DispatcherCommandVersion::ToString(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = `public:_static_class_FString___cdecl_UE::Interchange::DispatcherCommandVersion::ToString(void)'
          ::__l2::Version.Data.ArrayNum;
  _Src = `public:_static_class_FString___cdecl_UE::Interchange::DispatcherCommandVersion::ToString(void)'
         ::__l2::Version.Data.AllocatorInstance;
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  lVar3 = (longlong)
          `public:_static_class_FString___cdecl_UE::Interchange::DispatcherCommandVersion::ToString(void)'
          ::__l2::Version.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum =
       `public:_static_class_FString___cdecl_UE::Interchange::DispatcherCommandVersion::ToString(void)'
       ::__l2::Version.Data.ArrayNum;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
    memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,lVar3 * 2);
  }
  return __return_storage_ptr__;
}

