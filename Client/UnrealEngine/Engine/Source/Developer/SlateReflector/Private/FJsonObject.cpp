// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 1

// GetField<0> @ 142df4f10

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FJsonValue,1> * __thiscall
FJsonObject::GetField<0>
          (FJsonObject *this,TSharedPtr<FJsonValue,1> *__return_storage_ptr__,
          TStringView<wchar_t> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<FJsonValue,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined8 uStack_10;
  
  local_28.DataPtr = param_1->DataPtr;
  local_28.Size = param_1->Size;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_18 = local_28.DataPtr;
  uStack_10 = local_28._8_8_;
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>((int)*(undefined8 *)&param_1->Size,local_28.DataPtr);
  pTVar4 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           ::FindByHash<TStringView<wchar_t>_>
                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       *)this,uVar3,&local_28);
  if ((pTVar4 == (TSharedPtr<FJsonValue,1> *)0x0) || (pTVar4->Object == (FJsonValue *)0x0)) {
    if (2 < (byte)LogJson._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&`public:_class_TSharedPtr<FJsonValue,1>___cdecl_FJsonObject::GetField(TStringView<wchar_t>,EJson)const___ptr64'
                  ::__l31::LOG_Static,(FLogCategoryBase *)&LogJson);
    }
    pTVar5 = ::operator_new(0x20);
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
      pTVar5 = (TReferenceControllerBase<1> *)0x0;
      __return_storage_ptr__->Object = (FJsonValue *)0x10;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar5->SharedReferenceCount = (atomic<int>)0x1;
      pTVar5->WeakReferenceCount = (atomic<int>)0x1;
      pTVar5->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFJsonValueNull___00_SharedPointerInternals__6B_;
      FJsonValueNull::FJsonValueNull((FJsonValueNull *)(pTVar5 + 1));
      if (pTVar5 + 1 == (TReferenceControllerBase<1> *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar4 = (TSharedPtr<FJsonValue,1> *)(*pcVar1)();
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
  }
  else {
    __return_storage_ptr__->Object = pTVar4->Object;
    pTVar5 = (pTVar4->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

