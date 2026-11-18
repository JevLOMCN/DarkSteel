// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNERuntimeORT
// Functions: 3

// FModelORTDmlRDG @ 14eb05b10

FModelORTDmlRDG * __thiscall
UE::NNERuntimeORT::Private::FModelORTDmlRDG::FModelORTDmlRDG
          (FModelORTDmlRDG *this,TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1> *param_1,
          TSharedRef<UE::NNE::FSharedModelData,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FModelORTDmlRDG_Private_NNERuntimeORT_UE__6B_;
  (this->Environment).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Environment).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->ModelData).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->ModelData).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FModelORTDmlRDG @ 14eb06da0

void __thiscall UE::NNERuntimeORT::Private::FModelORTDmlRDG::~FModelORTDmlRDG(FModelORTDmlRDG *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ModelData).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Environment).SharedReferenceCount.ReferenceController);
  return;
}

// CreateModelInstanceRDG @ 14eb10f40

TSharedPtr<UE::NNE::IModelInstanceRDG,1> * __thiscall
UE::NNERuntimeORT::Private::FModelORTDmlRDG::CreateModelInstanceRDG
          (FModelORTDmlRDG *this,TSharedPtr<UE::NNE::IModelInstanceRDG,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UClass *this_00;
  TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG,1> *pTVar3;
  TSharedPtr<UE::NNE::IModelInstanceRDG,1> *pTVar4;
  FModelInstanceORTDmlRDG *this_01;
  FRuntimeConf local_res18 [2];
  
  this_00 = UNNERuntimeORTSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  local_res18[0].ExecutionMode =
       (ExecutionMode)((this_00->ClassDefaultObject).field0_0x0.DebugPtr[2].field_0x4 != '\0');
  pTVar3 = ::operator_new(0x68);
  if (pTVar3 == (TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG,1>
                 *)0x0) {
    pTVar3 = (TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG,1> *
             )0x0;
    this_01 = (FModelInstanceORTDmlRDG *)&DAT_00000010;
  }
  else {
    pTVar3 = SharedPointerInternals::
             TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG,1>::
             TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG,1><TSharedRef<UE::NNE::FSharedModelData,1>_&,UE::NNERuntimeORT::Private::FRuntimeConf_const_&,TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1>_&>
                       (pTVar3,&this->ModelData,local_res18,&this->Environment);
    this_01 = (FModelInstanceORTDmlRDG *)&pTVar3->ObjectStorage;
    if (this_01 == (FModelInstanceORTDmlRDG *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<UE::NNE::IModelInstanceRDG,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (pTVar3 != (TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG,1>
                   *)0x0) {
      LOCK();
      *(int *)&pTVar3->_padding_ = (int)pTVar3->_padding_ + 1;
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar3);
  if (this_01 == (FModelInstanceORTDmlRDG *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UE::NNE::IModelInstanceRDG,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  bVar2 = FModelInstanceORTDmlRDG::Init(this_01);
  if (bVar2) {
    __return_storage_ptr__->Object = (IModelInstanceRDG *)this_01;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)pTVar3;
    if (pTVar3 != (TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG,1>
                   *)0x0) {
      LOCK();
      *(int *)&pTVar3->_padding_ = (int)pTVar3->_padding_ + 1;
      UNLOCK();
    }
  }
  else {
    __return_storage_ptr__->Object = (IModelInstanceRDG *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar3);
  return __return_storage_ptr__;
}

