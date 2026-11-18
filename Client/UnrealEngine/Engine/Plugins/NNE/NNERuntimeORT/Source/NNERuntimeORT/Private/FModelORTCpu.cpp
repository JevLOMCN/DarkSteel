// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNERuntimeORT
// Functions: 3

// FModelORTCpu @ 14eb05a30

FModelORTCpu * __thiscall
UE::NNERuntimeORT::Private::FModelORTCpu::FModelORTCpu
          (FModelORTCpu *this,TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1> *param_1,
          TSharedRef<UE::NNE::FSharedModelData,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = (longlong)&___7FModelORTCpu_Private_NNERuntimeORT_UE__6B_;
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

// ~FModelORTCpu @ 14eb06d40

void __thiscall UE::NNERuntimeORT::Private::FModelORTCpu::~FModelORTCpu(FModelORTCpu *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ModelData).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Environment).SharedReferenceCount.ReferenceController);
  return;
}

// CreateModelInstanceCPU @ 14eb10a00

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::NNE::IModelInstanceCPU,1> * __thiscall
UE::NNERuntimeORT::Private::FModelORTCpu::CreateModelInstanceCPU
          (FModelORTCpu *this,TSharedPtr<UE::NNE::IModelInstanceCPU,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU> *this_00;
  code *pcVar2;
  uchar *puVar3;
  long64 lVar4;
  bool bVar5;
  char cVar6;
  UClass *this_01;
  TSharedRef<UE::NNERuntimeORT::Private::FModelInstanceORTCpu,1> *pTVar7;
  TSharedPtr<UE::NNE::IModelInstanceCPU,1> *pTVar8;
  TArrayView<unsigned_char_const_,__int64> *pTVar9;
  FStaticBasicLogRecord *pFVar10;
  FRuntimeConf local_res8 [2];
  TSharedRef<UE::NNERuntimeORT::Private::FModelInstanceORTCpu,1> local_48;
  TArrayView<unsigned_char_const_,__int64> local_38;
  TArrayView<unsigned_char_const_,__int64> local_28 [2];
  
  this_01 = UNNERuntimeORTSettings::StaticClass();
  if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_01);
  }
  local_res8[0].ExecutionMode =
       (ExecutionMode)((this_01->ClassDefaultObject).field0_0x0.DebugPtr[2].field_0x4 != '\0');
  pTVar7 = MakeShared<UE::NNERuntimeORT::Private::FModelInstanceORTCpu,1,UE::NNERuntimeORT::Private::FRuntimeConf_const_&,TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1>_&>
                     (&local_48,local_res8,&this->Environment);
  pTVar1 = (pTVar7->SharedReferenceCount).ReferenceController;
  this_00 = (FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU> *)
            pTVar7->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if (this_00 ==
      (FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU> *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar8 = (TSharedPtr<UE::NNE::IModelInstanceCPU,1> *)(*pcVar2)();
      return pTVar8;
    }
  }
  pTVar9 = NNE::FSharedModelData::GetView((this->ModelData).Object,local_28);
  puVar3 = pTVar9->DataPtr;
  lVar4 = pTVar9->ArrayNum;
  cVar6 = (**(code **)(this_00->_padding_ + 0x38))(this_00);
  if (cVar6 == '\0') {
    if (1 < (byte)LogNNERuntimeORT._0_1_) {
      pFVar10 = &`public:_bool___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>::Init(TArrayView<unsigned_char_const_,__int64>)___ptr64'
                 ::__l7::LOG_Static;
LAB_14eb10b5a:
      Logging::Private::BasicLog<2>(pFVar10,(FLogCategoryBase *)&LogNNERuntimeORT);
    }
  }
  else {
    local_38.DataPtr = puVar3;
    local_38.ArrayNum = lVar4;
    bVar5 = Detail::CreateSession
                      (&local_38,(this_00->SessionOptions).Ptr,(this_00->Environment).Object,
                       &this_00->Session,&this_00->TempDirForModelWithExternalData);
    if (bVar5) {
      bVar5 = FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>::
              ConfigureTensors(this_00,true);
      if (bVar5) {
        bVar5 = FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>::
                ConfigureTensors(this_00,false);
        if (bVar5) {
          __return_storage_ptr__->Object = (IModelInstanceCPU *)this_00;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
          if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
            UNLOCK();
          }
          goto LAB_14eb10b8f;
        }
        if (1 < (byte)LogNNERuntimeORT._0_1_) {
          pFVar10 = &`public:_bool___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>::Init(TArrayView<unsigned_char_const_,__int64>)___ptr64'
                     ::__l67::LOG_Static;
          goto LAB_14eb10b5a;
        }
      }
      else if (1 < (byte)LogNNERuntimeORT._0_1_) {
        pFVar10 = &`public:_bool___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>::Init(TArrayView<unsigned_char_const_,__int64>)___ptr64'
                   ::__l47::LOG_Static;
        goto LAB_14eb10b5a;
      }
    }
    else if (1 < (byte)LogNNERuntimeORT._0_1_) {
      pFVar10 = &`public:_bool___cdecl_UE::NNERuntimeORT::Private::FModelInstanceORTRunSync<UE::NNE::IModelInstanceCPU,UE::NNE::FTensorBindingCPU>::Init(TArrayView<unsigned_char_const_,__int64>)___ptr64'
                 ::__l27::LOG_Static;
      goto LAB_14eb10b5a;
    }
  }
  __return_storage_ptr__->Object = (IModelInstanceCPU *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_14eb10b8f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

