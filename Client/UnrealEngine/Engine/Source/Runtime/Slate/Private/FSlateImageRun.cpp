// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 29

// FSlateImageRun @ 142845310

FSlateImageRun * __thiscall
FSlateImageRun::FSlateImageRun
          (FSlateImageRun *this,FRunInfo *param_1,TSharedRef<FString_const_,1> *param_2,
          FSlateBrush *param_3,TAttribute<short> *param_4)

{
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *this_00;
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSlateImageRun *pFVar6;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSlateImageRun__6B_;
  ::FString::FString(&(this->RunInfo).Name,&param_1->Name);
  this_00 = &(this->RunInfo).MetaData;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->RunInfo).MetaData.field_0x8 = 0;
  *(undefined8 *)&(this->RunInfo).MetaData.field_0x20 = 0;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x28 = 0;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x2c = 0x80;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x34 = 0;
  *(undefined8 *)&(this->RunInfo).MetaData.field_0x40 = 0;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x48 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)this_00,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&param_1->MetaData);
  (this->Text).Object = param_2->Object;
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  (this->Text).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar1 = (((this->Text).Object)->Data).ArrayNum;
  (this->Range).BeginIndex = 0;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  (this->Range).EndIndex = iVar5;
  this->Image = param_3;
  (this->Baseline).Value = param_4->Value;
  (this->Baseline).bIsSet = param_4->bIsSet;
  TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy>
            (&(this->Baseline).Getter,&param_4->Getter);
  (this->DynamicBrush).Object = (FSlateDynamicImageBrush *)0x0;
  (this->DynamicBrush).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  if (this->Image == (FSlateBrush *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Image != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\SlateImageRun.cpp"
                       ,0x3c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FSlateImageRun *)(*pcVar3)();
      return pFVar6;
    }
  }
  return this;
}

// FSlateImageRun @ 142845460

FSlateImageRun * __thiscall
FSlateImageRun::FSlateImageRun
          (FSlateImageRun *this,FRunInfo *param_1,TSharedRef<FString_const_,1> *param_2,
          FSlateBrush *param_3,TAttribute<short> *param_4,FTextRange *param_5)

{
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *this_00;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FSlateImageRun *pFVar4;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSlateImageRun__6B_;
  ::FString::FString(&(this->RunInfo).Name,&param_1->Name);
  this_00 = &(this->RunInfo).MetaData;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->RunInfo).MetaData.field_0x8 = 0;
  *(undefined8 *)&(this->RunInfo).MetaData.field_0x20 = 0;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x28 = 0;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x2c = 0x80;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x34 = 0;
  *(undefined8 *)&(this->RunInfo).MetaData.field_0x40 = 0;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x48 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)this_00,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&param_1->MetaData);
  (this->Text).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->Text).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->Range = *param_5;
  this->Image = param_3;
  (this->Baseline).Value = param_4->Value;
  (this->Baseline).bIsSet = param_4->bIsSet;
  TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy>
            (&(this->Baseline).Getter,&param_4->Getter);
  (this->DynamicBrush).Object = (FSlateDynamicImageBrush *)0x0;
  (this->DynamicBrush).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  if (this->Image == (FSlateBrush *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Image != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\SlateImageRun.cpp"
                       ,0x32,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FSlateImageRun *)(*pcVar2)();
      return pFVar4;
    }
  }
  return this;
}

// FSlateImageRun @ 1428455a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FSlateImageRun * __thiscall
FSlateImageRun::FSlateImageRun
          (FSlateImageRun *this,FRunInfo *param_1,TSharedRef<FString_const_,1> *param_2,
          FName param_3,TAttribute<short> *param_4)

{
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *this_00;
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSlateApplication *pFVar6;
  FSlateDynamicImageBrush *this_01;
  FSlateDynamicImageBrush *pFVar7;
  FSlateImageRun *pFVar8;
  int local_res8;
  int local_resc;
  FDeprecateVector2DParameter local_res10;
  TRawPtrProxy<FSlateDynamicImageBrush> local_res18;
  FLinearColor_u_0 local_38;
  
  pFVar7 = (FSlateDynamicImageBrush *)0x0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSlateImageRun__6B_;
  ::FString::FString(&(this->RunInfo).Name,&param_1->Name);
  this_00 = &(this->RunInfo).MetaData;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->RunInfo).MetaData.field_0x8 = 0;
  *(undefined8 *)&(this->RunInfo).MetaData.field_0x20 = 0;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x28 = 0;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x2c = 0x80;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x34 = 0;
  *(undefined8 *)&(this->RunInfo).MetaData.field_0x40 = 0;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x48 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)this_00,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&param_1->MetaData);
  (this->Text).Object = param_2->Object;
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  (this->Text).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar1 = (((this->Text).Object)->Data).ArrayNum;
  (this->Range).BeginIndex = 0;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  (this->Range).EndIndex = iVar5;
  this->Image = (FSlateBrush *)0x0;
  (this->Baseline).Value = param_4->Value;
  (this->Baseline).bIsSet = param_4->bIsSet;
  TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy>
            (&(this->Baseline).Getter,&param_4->Getter);
  (this->DynamicBrush).Object = (FSlateDynamicImageBrush *)0x0;
  (this->DynamicBrush).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  pFVar6 = FSlateApplication::Get();
  (**(code **)(**(longlong **)&pFVar6->field_0x60 + 0x78))
            (*(longlong **)&pFVar6->field_0x60,&local_res8,param_3);
  this_01 = ::operator_new(0xd0);
  if (this_01 != (FSlateDynamicImageBrush *)0x0) {
    local_38._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
    local_38._8_8_ = _UNK_15076b1f8;
    local_res10._4_4_ = (float)local_resc;
    local_res10._0_4_ = (float)local_res8;
    pFVar7 = FSlateDynamicImageBrush::FSlateDynamicImageBrush
                       (this_01,param_3,&local_res10,(FLinearColor *)&local_38._s_0,NoTile,FullColor
                       );
    if ((((pFVar7 != (FSlateDynamicImageBrush *)0x0) && (*(longlong *)&pFVar7->field_0xb0 != 0)) &&
        (*(longlong *)&pFVar7->field_0xb8 != 0)) &&
       (0 < *(int *)(*(longlong *)&pFVar7->field_0xb8 + 8))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FSlateImageRun *)(*pcVar3)();
        return pFVar8;
      }
    }
  }
  local_res18.Object = pFVar7;
  TSharedPtr<FSlateDynamicImageBrush,1>::operator=<FSlateDynamicImageBrush>
            (&this->DynamicBrush,&local_res18);
  this->Image = (FSlateBrush *)(this->DynamicBrush).Object;
  return this;
}

// FSlateImageRun @ 1428457b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FSlateImageRun * __thiscall
FSlateImageRun::FSlateImageRun
          (FSlateImageRun *this,FRunInfo *param_1,TSharedRef<FString_const_,1> *param_2,
          FName param_3,TAttribute<short> *param_4,FTextRange *param_5)

{
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *this_00;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FSlateApplication *pFVar4;
  FSlateDynamicImageBrush *this_01;
  FSlateDynamicImageBrush *pFVar5;
  FSlateImageRun *pFVar6;
  int local_res8;
  int local_resc;
  TRawPtrProxy<FSlateDynamicImageBrush> local_res10;
  FLinearColor_u_0 local_38;
  
  pFVar5 = (FSlateDynamicImageBrush *)0x0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FSlateImageRun__6B_;
  ::FString::FString(&(this->RunInfo).Name,&param_1->Name);
  this_00 = &(this->RunInfo).MetaData;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->RunInfo).MetaData.field_0x8 = 0;
  *(undefined8 *)&(this->RunInfo).MetaData.field_0x20 = 0;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x28 = 0;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x2c = 0x80;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x34 = 0;
  *(undefined8 *)&(this->RunInfo).MetaData.field_0x40 = 0;
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x48 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)this_00,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&param_1->MetaData);
  (this->Text).Object = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  (this->Text).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->Range = *param_5;
  this->Image = (FSlateBrush *)0x0;
  (this->Baseline).Value = param_4->Value;
  (this->Baseline).bIsSet = param_4->bIsSet;
  TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy>
            (&(this->Baseline).Getter,&param_4->Getter);
  (this->DynamicBrush).Object = (FSlateDynamicImageBrush *)0x0;
  (this->DynamicBrush).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  pFVar4 = FSlateApplication::Get();
  (**(code **)(**(longlong **)&pFVar4->field_0x60 + 0x78))
            (*(longlong **)&pFVar4->field_0x60,&local_res8,param_3);
  this_01 = ::operator_new(0xd0);
  if (this_01 != (FSlateDynamicImageBrush *)0x0) {
    local_38._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
    local_38._8_8_ = _UNK_15076b1f8;
    param_5._0_4_ = (float)local_res8;
    param_5._4_4_ = (float)local_resc;
    param_4 = (TAttribute<short> *)CONCAT44(param_5._4_4_,param_5._0_4_);
    pFVar5 = FSlateDynamicImageBrush::FSlateDynamicImageBrush
                       (this_01,param_3,(FDeprecateVector2DParameter *)&param_4,
                        (FLinearColor *)&local_38._s_0,NoTile,FullColor);
    param_5 = (FTextRange *)CONCAT44(param_5._4_4_,param_5._0_4_);
    if ((((pFVar5 != (FSlateDynamicImageBrush *)0x0) &&
         (param_5 = (FTextRange *)CONCAT44(param_5._4_4_,param_5._0_4_),
         *(longlong *)&pFVar5->field_0xb0 != 0)) &&
        (param_5 = (FTextRange *)CONCAT44(param_5._4_4_,param_5._0_4_),
        *(longlong *)&pFVar5->field_0xb8 != 0)) &&
       (param_5 = (FTextRange *)CONCAT44(param_5._4_4_,param_5._0_4_),
       0 < *(int *)(*(longlong *)&pFVar5->field_0xb8 + 8))) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FSlateImageRun *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  local_res10.Object = pFVar5;
  TSharedPtr<FSlateDynamicImageBrush,1>::operator=<FSlateDynamicImageBrush>
            (&this->DynamicBrush,&local_res10);
  this->Image = (FSlateBrush *)(this->DynamicBrush).Object;
  return this;
}

// ~FSlateImageRun @ 142849c10

void __thiscall FSlateImageRun::~FSlateImageRun(FSlateImageRun *this)

{
  int *piVar1;
  int iVar2;
  FSlateDynamicImageBrush *this_00;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  
  this->_padding_ = (longlong)&___7FSlateImageRun__6B_;
  this_00 = (this->DynamicBrush).Object;
  if (this_00 != (FSlateDynamicImageBrush *)0x0) {
    FSlateDynamicImageBrush::ReleaseResource(this_00);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DynamicBrush).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Baseline).Getter);
  pvVar3 = *(void **)&(this->Baseline).Getter.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Baseline).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Text).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->RunInfo).MetaData.field_0x48 = 0;
  pvVar3 = *(void **)&(this->RunInfo).MetaData.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->RunInfo).MetaData);
  pFVar4 = (this->RunInfo).Name.Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  this->_padding_ = (longlong)&___7IRun__6B_;
  return;
}

// AppendTextTo @ 142853220

void __thiscall FSlateImageRun::AppendTextTo(FSlateImageRun *this,FString *param_1)

{
  int iVar1;
  FString *pFVar2;
  int iVar3;
  
  iVar1 = (this->Range).BeginIndex;
  pFVar2 = (this->Text).Object;
  iVar3 = (this->Range).EndIndex - iVar1;
  if ((pFVar2->Data).ArrayNum != 0) {
    ::FString::AppendChars
              (param_1,(wchar_t *)((pFVar2->Data).AllocatorInstance.Data + (longlong)iVar1 * 2),
               iVar3);
    return;
  }
  ::FString::AppendChars(param_1,L"" + iVar1,iVar3);
  return;
}

// AppendTextTo @ 142853270

void __thiscall
FSlateImageRun::AppendTextTo(FSlateImageRun *this,FString *param_1,FTextRange *param_2)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  
  pwVar4 = L"";
  if (param_2->BeginIndex < (this->Range).BeginIndex) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Range.BeginIndex <= PartialRange.BeginIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\SlateImageRun.cpp"
                       ,0xe7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->Range).EndIndex < param_2->EndIndex) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Range.EndIndex >= PartialRange.EndIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\SlateImageRun.cpp"
                       ,0xe8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->Text).Object;
  if ((pFVar1->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  ::FString::AppendChars
            (param_1,(wchar_t *)((longlong)pwVar4 + (longlong)param_2->BeginIndex * 2),
             param_2->EndIndex - param_2->BeginIndex);
  return;
}

// ArrangeChildren @ 142853780

void __thiscall
FSlateImageRun::ArrangeChildren
          (FSlateImageRun *this,TSharedRef<ILayoutBlock,1> *param_1,FGeometry *param_2,
          FArrangedChildren *param_3)

{
  return;
}

// BeginLayout @ 142855770

void __thiscall FSlateImageRun::BeginLayout(FSlateImageRun *this)

{
  return;
}

// Clone @ 142857ca0

TSharedRef<IRun,1> * __thiscall
FSlateImageRun::Clone(FSlateImageRun *this,TSharedRef<IRun,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FSlateDynamicImageBrush *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FSlateImageRun,1> local_18;
  
  Create(&local_18,&this->RunInfo,&this->Text,this->Image,&this->Baseline,&this->Range);
  pTVar1 = (this->DynamicBrush).SharedReferenceCount.ReferenceController;
  pFVar2 = (this->DynamicBrush).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = ((local_18.Object)->DynamicBrush).SharedReferenceCount.ReferenceController;
  ((local_18.Object)->DynamicBrush).Object = pFVar2;
  ((local_18.Object)->DynamicBrush).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  __return_storage_ptr__->Object = (IRun *)local_18.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_18.SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Create @ 142864ec0

TSharedRef<FSlateImageRun,1> * __cdecl
FSlateImageRun::Create
          (TSharedRef<FSlateImageRun,1> *__return_storage_ptr__,FRunInfo *param_1,
          TSharedRef<FString_const_,1> *param_2,FSlateBrush *param_3,TAttribute<short> *param_4)

{
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *this;
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FSlateImageRun *pFVar6;
  TSharedRef<FSlateImageRun,1> *pTVar7;
  TRawPtrProxy<FSlateImageRun> local_res8;
  
  if (param_3 == (FSlateBrush *)0x0) {
    param_3 = FStyleDefaults::GetNoBrush();
  }
  pFVar6 = ::operator_new(200);
  if (pFVar6 == (FSlateImageRun *)0x0) {
    pFVar6 = (FSlateImageRun *)0x0;
  }
  else {
    pFVar6->_padding_ = 0;
    pFVar6->_padding_ = 0;
    pFVar6->_padding_ = (longlong)&___7FSlateImageRun__6B_;
    ::FString::FString(&(pFVar6->RunInfo).Name,&param_1->Name);
    this = &(pFVar6->RunInfo).MetaData;
    *(undefined8 *)&this->field_0x0 = 0;
    *(undefined8 *)&(pFVar6->RunInfo).MetaData.field_0x8 = 0;
    *(undefined8 *)&(pFVar6->RunInfo).MetaData.field_0x20 = 0;
    *(undefined4 *)&(pFVar6->RunInfo).MetaData.field_0x28 = 0;
    *(undefined4 *)&(pFVar6->RunInfo).MetaData.field_0x2c = 0x80;
    *(undefined4 *)&(pFVar6->RunInfo).MetaData.field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar6->RunInfo).MetaData.field_0x34 = 0;
    *(undefined8 *)&(pFVar6->RunInfo).MetaData.field_0x40 = 0;
    *(undefined4 *)&(pFVar6->RunInfo).MetaData.field_0x48 = 0;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)this,(TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                         *)&param_1->MetaData);
    (pFVar6->Text).Object = param_2->Object;
    pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
    (pFVar6->Text).SharedReferenceCount.ReferenceController = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    iVar1 = (((pFVar6->Text).Object)->Data).ArrayNum;
    (pFVar6->Range).BeginIndex = 0;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    (pFVar6->Range).EndIndex = iVar5;
    pFVar6->Image = param_3;
    (pFVar6->Baseline).Value = param_4->Value;
    (pFVar6->Baseline).bIsSet = param_4->bIsSet;
    TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy>
              (&(pFVar6->Baseline).Getter,&param_4->Getter);
    (pFVar6->DynamicBrush).Object = (FSlateDynamicImageBrush *)0x0;
    (pFVar6->DynamicBrush).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pFVar6->Image == (FSlateBrush *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Image != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\SlateImageRun.cpp"
                         ,0x3c,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TSharedRef<FSlateImageRun,1> *)(*pcVar3)();
        return pTVar7;
      }
    }
    if (((pFVar6->_padding_ != 0) && (pFVar6->_padding_ != 0)) &&
       (0 < *(int *)(pFVar6->_padding_ + 8))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TSharedRef<FSlateImageRun,1> *)(*pcVar3)();
        return pTVar7;
      }
    }
  }
  local_res8.Object = pFVar6;
  TSharedRef<FSlateImageRun,1>::TSharedRef<FSlateImageRun,1><FSlateImageRun>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// Create @ 142865070

TSharedRef<FSlateImageRun,1> * __cdecl
FSlateImageRun::Create
          (TSharedRef<FSlateImageRun,1> *__return_storage_ptr__,FRunInfo *param_1,
          TSharedRef<FString_const_,1> *param_2,FSlateBrush *param_3,TAttribute<short> *param_4,
          FTextRange *param_5)

{
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *this;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FSlateImageRun *pFVar4;
  TSharedRef<FSlateImageRun,1> *pTVar5;
  TRawPtrProxy<FSlateImageRun> local_res8;
  
  if (param_3 == (FSlateBrush *)0x0) {
    param_3 = FStyleDefaults::GetNoBrush();
  }
  pFVar4 = ::operator_new(200);
  if (pFVar4 == (FSlateImageRun *)0x0) {
    pFVar4 = (FSlateImageRun *)0x0;
  }
  else {
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = (longlong)&___7FSlateImageRun__6B_;
    ::FString::FString(&(pFVar4->RunInfo).Name,&param_1->Name);
    this = &(pFVar4->RunInfo).MetaData;
    *(undefined8 *)&this->field_0x0 = 0;
    *(undefined8 *)&(pFVar4->RunInfo).MetaData.field_0x8 = 0;
    *(undefined8 *)&(pFVar4->RunInfo).MetaData.field_0x20 = 0;
    *(undefined4 *)&(pFVar4->RunInfo).MetaData.field_0x28 = 0;
    *(undefined4 *)&(pFVar4->RunInfo).MetaData.field_0x2c = 0x80;
    *(undefined4 *)&(pFVar4->RunInfo).MetaData.field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar4->RunInfo).MetaData.field_0x34 = 0;
    *(undefined8 *)&(pFVar4->RunInfo).MetaData.field_0x40 = 0;
    *(undefined4 *)&(pFVar4->RunInfo).MetaData.field_0x48 = 0;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                 *)this,(TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                         *)&param_1->MetaData);
    (pFVar4->Text).Object = param_2->Object;
    pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
    (pFVar4->Text).SharedReferenceCount.ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->Range = *param_5;
    pFVar4->Image = param_3;
    (pFVar4->Baseline).Value = param_4->Value;
    (pFVar4->Baseline).bIsSet = param_4->bIsSet;
    TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy>::
    TDelegate<short___cdecl(void),FDefaultDelegateUserPolicy>
              (&(pFVar4->Baseline).Getter,&param_4->Getter);
    (pFVar4->DynamicBrush).Object = (FSlateDynamicImageBrush *)0x0;
    (pFVar4->DynamicBrush).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pFVar4->Image == (FSlateBrush *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Image != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\SlateImageRun.cpp"
                         ,0x32,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedRef<FSlateImageRun,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    if (((pFVar4->_padding_ != 0) && (pFVar4->_padding_ != 0)) &&
       (0 < *(int *)(pFVar4->_padding_ + 8))) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedRef<FSlateImageRun,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  local_res8.Object = pFVar4;
  TSharedRef<FSlateImageRun,1>::TSharedRef<FSlateImageRun,1><FSlateImageRun>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// Create @ 142865220

TSharedRef<FSlateImageRun,1> * __cdecl
FSlateImageRun::Create
          (TSharedRef<FSlateImageRun,1> *__return_storage_ptr__,FRunInfo *param_1,
          TSharedRef<FString_const_,1> *param_2,FName param_3,TAttribute<short> *param_4)

{
  code *pcVar1;
  bool bVar2;
  FSlateImageRun *this;
  TSharedRef<FSlateImageRun,1> *pTVar3;
  TRawPtrProxy<FSlateImageRun> local_res8;
  
  this = ::operator_new(200);
  if (this == (FSlateImageRun *)0x0) {
    local_res8.Object = (FSlateImageRun *)0x0;
  }
  else {
    local_res8.Object = FSlateImageRun(this,param_1,param_2,param_3,param_4);
    if ((((local_res8.Object != (FSlateImageRun *)0x0) && ((local_res8.Object)->_padding_ != 0)) &&
        ((local_res8.Object)->_padding_ != 0)) && (0 < *(int *)((local_res8.Object)->_padding_ + 8))
       ) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedRef<FSlateImageRun,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  TSharedRef<FSlateImageRun,1>::TSharedRef<FSlateImageRun,1><FSlateImageRun>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// Create @ 1428652f0

TSharedRef<FSlateImageRun,1> * __cdecl
FSlateImageRun::Create
          (TSharedRef<FSlateImageRun,1> *__return_storage_ptr__,FRunInfo *param_1,
          TSharedRef<FString_const_,1> *param_2,FName param_3,TAttribute<short> *param_4,
          FTextRange *param_5)

{
  code *pcVar1;
  bool bVar2;
  FSlateImageRun *this;
  TSharedRef<FSlateImageRun,1> *pTVar3;
  TRawPtrProxy<FSlateImageRun> local_res8;
  
  this = ::operator_new(200);
  if (this == (FSlateImageRun *)0x0) {
    local_res8.Object = (FSlateImageRun *)0x0;
  }
  else {
    local_res8.Object = FSlateImageRun(this,param_1,param_2,param_3,param_4,param_5);
    if ((((local_res8.Object != (FSlateImageRun *)0x0) && ((local_res8.Object)->_padding_ != 0)) &&
        ((local_res8.Object)->_padding_ != 0)) && (0 < *(int *)((local_res8.Object)->_padding_ + 8))
       ) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TSharedRef<FSlateImageRun,1> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  TSharedRef<FSlateImageRun,1>::TSharedRef<FSlateImageRun,1><FSlateImageRun>
            (__return_storage_ptr__,&local_res8);
  return __return_storage_ptr__;
}

// CreateBlock @ 142867eb0

TSharedRef<ILayoutBlock,1> * __thiscall
FSlateImageRun::CreateBlock
          (FSlateImageRun *this,TSharedRef<ILayoutBlock,1> *__return_storage_ptr__,int param_1,
          int param_2,TVector2<double> *param_3,FLayoutBlockTextContext *param_4,
          TSharedPtr<IRunRenderer,1> *param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  FSlateImageRun *pFVar2;
  double dVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FSlateImageRun,1> *pTVar5;
  TVector2<double> *pTVar6;
  atomic<int> *paVar7;
  TSharedRef<FSlateImageRun,1> local_28;
  
  pTVar5 = TSharedFromThis<FSlateImageRun,1>::AsShared
                     ((TSharedFromThis<FSlateImageRun,1> *)&this->_padding_,&local_28);
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar5->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar7 = (atomic<int> *)&DAT_00000008;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  else {
    paVar7 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar7 = (atomic<int>)((int)*paVar7 + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    LOCK();
    *paVar7 = (atomic<int>)((int)*paVar7 + 1);
    UNLOCK();
  }
  pTVar6 = ::operator_new(0x70);
  if (pTVar6 == (TVector2<double> *)0x0) {
    pTVar6 = (TVector2<double> *)0x0;
  }
  else {
    (pTVar6->field0_0x0)._s_0.Y = (double)pFVar2;
    (pTVar6->field0_0x0)._s_0.X = (double)&___7FDefaultLayoutBlock__6B_;
    *(TReferenceControllerBase<1> **)&pTVar6[1].field0_0x0 = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar7 = (atomic<int>)((int)*paVar7 + 1);
      UNLOCK();
    }
    pTVar6[1].field0_0x0._s_0.Y = (double)CONCAT44(param_2,param_1);
    dVar3 = (param_3->field0_0x0)._s_0.Y;
    pTVar6[2].field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
    pTVar6[2].field0_0x0._s_0.Y = dVar3;
    pTVar6[3].field0_0x0._s_0.X = 0.0;
    pTVar6[3].field0_0x0._s_0.Y = 0.0;
    *(short *)&pTVar6[4].field0_0x0 = (short)param_4->_padding_;
    pTVar6[4].field0_0x0._s_0.Y = (double)param_4->_padding_;
    dVar3 = (double)param_4->_padding_;
    pTVar6[5].field0_0x0._s_0.X = dVar3;
    if (dVar3 != 0.0) {
      LOCK();
      *(int *)((longlong)dVar3 + 8) = *(int *)((longlong)dVar3 + 8) + 1;
      UNLOCK();
    }
    *(ETextDirection *)((longlong)&pTVar6[5].field0_0x0 + 8) = param_4->TextDirection;
    pTVar6[6].field0_0x0._s_0.X = (double)param_5->Object;
    pTVar4 = (param_5->SharedReferenceCount).ReferenceController;
    pTVar6[6].field0_0x0._s_0.Y = (double)pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  param_3 = pTVar6;
  TSharedRef<FDefaultLayoutBlock,1>::TSharedRef<FDefaultLayoutBlock,1><FDefaultLayoutBlock>
            ((TSharedRef<FDefaultLayoutBlock,1> *)&local_28,
             (TRawPtrProxy<FDefaultLayoutBlock> *)&param_3);
  __return_storage_ptr__->Object = (ILayoutBlock *)local_28.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// EndLayout @ 14286f0b0

void __thiscall FSlateImageRun::EndLayout(FSlateImageRun *this)

{
  return;
}

// GetBaseLine @ 142875100

short __thiscall FSlateImageRun::GetBaseLine(FSlateImageRun *this,float param_1)

{
  short *psVar1;
  short local_res10 [12];
  
  local_res10[0] = 0;
  psVar1 = TAttribute<short>::Get(&this->Baseline,local_res10);
  return (short)(int)((float)(int)*psVar1 * param_1);
}

// GetChildren @ 142875940

TArray<TSharedRef<SWidget,1>,TSizedDefaultAllocator<32>_> * __thiscall
FSlateImageRun::GetChildren(FSlateImageRun *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FSlateImageRun::GetChildren'::__l2::_dynamic_atexit_destructor_for__NoChildren__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &NoChildren;
}

// GetKerning @ 142877080

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

schar __thiscall
FSlateImageRun::GetKerning(FSlateImageRun *this,int param_1,float param_2,FRunTextContext *param_3)

{
  return '\0';
}

// GetLocationAt @ 142877810

TVector2<double> * __thiscall
FSlateImageRun::GetLocationAt
          (FSlateImageRun *this,TVector2<double> *__return_storage_ptr__,
          TSharedRef<ILayoutBlock,1> *param_1,int param_2,float param_3)

{
  (**(code **)((longlong)*param_1->Object + 0x38))();
  return __return_storage_ptr__;
}

// GetMaxHeight @ 142877e20

short __thiscall FSlateImageRun::GetMaxHeight(FSlateImageRun *this,float param_1)

{
  return (short)(int)(param_1 * *(float *)&(this->Image->ImageSize).field_0x4);
}

// GetRunAttributes @ 142879e80

ERunAttributes __thiscall FSlateImageRun::GetRunAttributes(FSlateImageRun *this)

{
  return None;
}

// GetRunInfo @ 142879ec0

FRunInfo * __thiscall FSlateImageRun::GetRunInfo(FSlateImageRun *this)

{
  return &this->RunInfo;
}

// GetTextIndexAt @ 14287c030

int __thiscall
FSlateImageRun::GetTextIndexAt
          (FSlateImageRun *this,TSharedRef<ILayoutBlock,1> *param_1,TVector2<double> *param_2,
          float param_3,ETextHitPoint *param_4)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ETextHitPoint EVar6;
  FTextRange *pFVar7;
  undefined1 local_res8 [4];
  int local_resc;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  undefined1 local_48 [16];
  TReferenceControllerBase<1> *local_38;
  
  if (((this->Range).EndIndex - (this->Range).BeginIndex != 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Range.Len() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Text\\SlateImageRun.cpp"
                         ,0x6d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  (**(code **)((longlong)*param_1->Object + 0x38))(param_1->Object,&local_68);
  (**(code **)((longlong)*param_1->Object + 0x18))(param_1->Object,&local_58);
  dVar1 = (param_2->field0_0x0)._s_0.X;
  if ((((dVar1 < (double)(float)local_68) || ((double)(float)(local_58 + local_68) <= dVar1)) ||
      (dVar2 = (param_2->field0_0x0)._s_0.Y, dVar2 < (double)(float)local_60)) ||
     ((double)(float)(local_50 + local_60) <= dVar2)) {
    iVar5 = -1;
  }
  else {
    pFVar7 = &this->Range;
    if ((double)(param_3 * *(float *)&this->Image->ImageSize * __real_3f000000 + (float)local_68) <
        dVar1) {
      pFVar7 = (FTextRange *)&(this->Range).EndIndex;
    }
    iVar5 = pFVar7->BeginIndex;
    if (param_4 != (ETextHitPoint *)0x0) {
      (**(code **)((longlong)*param_1->Object + 0x10))(param_1->Object,local_res8);
      (**(code **)((longlong)*param_1->Object + 0x20))(param_1->Object,local_48);
      EVar6 = WithinText;
      if (iVar5 == local_resc) {
        EVar6 = RightGutter;
      }
      *param_4 = EVar6;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
    }
  }
  return iVar5;
}

// GetTextRange @ 14287ce70

FTextRange __thiscall FSlateImageRun::GetTextRange(FSlateImageRun *this)

{
  FTextRange in_RDX;
  
  *(FTextRange *)in_RDX = this->Range;
  return in_RDX;
}

// Measure @ 1428843b0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TVector2<double> * __thiscall
FSlateImageRun::Measure
          (FSlateImageRun *this,TVector2<double> *__return_storage_ptr__,int param_1,int param_2,
          float param_3,FRunTextContext *param_4)

{
  float fVar1;
  short sVar2;
  
  if (param_2 == param_1) {
    sVar2 = (**(code **)(this->_padding_ + 0x20))();
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(int)sVar2;
    return __return_storage_ptr__;
  }
  fVar1 = *(float *)&(this->Image->ImageSize).field_0x4;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)(param_3 * *(float *)&this->Image->ImageSize);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(param_3 * fVar1);
  return __return_storage_ptr__;
}

// Move @ 142884b20

void __thiscall
FSlateImageRun::Move(FSlateImageRun *this,TSharedRef<FString,1> *param_1,FTextRange *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FString *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->Text).SharedReferenceCount.ReferenceController;
  (this->Text).Object = pFVar2;
  (this->Text).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this->Range = *param_2;
  return;
}

// OnPaint @ 14288a010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FSlateImageRun::OnPaint
          (FSlateImageRun *this,FPaintArgs *param_1,FTextArgs *param_2,FGeometry *param_3,
          FSlateRect *param_4,FSlateWindowElementList *param_5,int param_6,FWidgetStyle *param_7,
          bool param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ESlateColorStylingMode EVar5;
  undefined1 uVar6;
  FSlateBrush *pFVar7;
  ILayoutBlock *pIVar8;
  TVector2<float>_u_0_s_0 TVar9;
  double dVar10;
  FSlateColor *this_00;
  double *pdVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStackY_128 [32];
  undefined8 local_f8;
  FLinearColor_u_0 local_e0;
  TTransform2<float> local_d0;
  TTransform2<float> local_b8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  TVector2<float>_u_0 local_80;
  float local_78;
  undefined8 local_74;
  undefined8 local_6c;
  float local_64 [2];
  float afStack_5c [2];
  TVector2<float>_u_0 local_54;
  byte local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pFVar7 = this->Image;
  fVar14 = __real_3f800000 / param_3->Scale;
  if ((pFVar7->DrawAs).Value != '\0') {
    EVar5 = (pFVar7->TintColor).ColorUseRule;
    this_00 = &pFVar7->TintColor;
    if (EVar5 != UseColor_Specified) {
      if (EVar5 == UseColor_ColorTable) {
        this_00 = (FSlateColor *)FSlateColor::GetColorFromTable(this_00);
      }
      else if ((EVar5 == UseColor_Foreground) || (EVar5 != UseColor_Foreground_Subdued)) {
        this_00 = (FSlateColor *)&param_7->ForegroundColor;
      }
      else {
        this_00 = (FSlateColor *)&param_7->SubduedForeground;
      }
    }
    pFVar7 = this->Image;
    local_e0._s_0.R =
         (this_00->SpecifiedColor).field0_0x0._s_0.R *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.R;
    local_e0._s_0.G =
         (this_00->SpecifiedColor).field0_0x0._s_0.G *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.G;
    local_e0._s_0.B =
         (this_00->SpecifiedColor).field0_0x0._s_0.B *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.B;
    local_e0._s_0.A =
         (this_00->SpecifiedColor).field0_0x0._s_0.A *
         (param_7->ColorAndOpacityTint).field0_0x0._s_0.A;
    pIVar8 = param_2->Block->Object;
    pdVar11 = (double *)(**(code **)((longlong)*pIVar8 + 0x38))(pIVar8,local_a0);
    dVar10 = (double)fVar14;
    dVar1 = *pdVar11;
    dVar2 = pdVar11[1];
    pIVar8 = param_2->Block->Object;
    local_f8._4_4_ = (float)(dVar10 * dVar2);
    local_f8._0_4_ = (float)(dVar10 * dVar1);
    pdVar11 = (double *)(**(code **)((longlong)*pIVar8 + 0x18))(pIVar8,local_90);
    dVar3 = *pdVar11;
    dVar4 = pdVar11[1];
    TVar9 = (param_3->AbsolutePosition).field0_0x0._s_0;
    local_d0.M.M[0][1] = TVar9.X;
    local_d0.M.M[1][0] = TVar9.Y;
    local_d0.Trans.field0_0x0 = local_f8;
    fVar14 = param_3->Scale;
    fVar13 = fVar14 * (float)(dVar10 * dVar2) + local_d0.M.M[1][0];
    fVar12 = fVar14 * (float)(dVar10 * dVar1) + local_d0.M.M[0][1];
    local_d0.M.M[0][0] = (float)___xmm_3f80000000000000000000003f800000;
    local_d0.M.M[0][1] = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
    local_d0.M.M[1][0] = (float)_UNK_15076b188;
    local_d0.M.M[1][1] = (float)((ulonglong)_UNK_15076b188 >> 0x20);
    Concatenate<TTransform2<float>_>(&local_b8,&local_d0,&param_3->AccumulatedRenderTransform);
    local_80._s_0.Y = fVar13;
    local_80._s_0.X = fVar12;
    local_6c = CONCAT44((float)(dVar10 * dVar4),(float)(dVar10 * dVar3));
    local_4c = param_3->bHasRenderTransform * '\x02' | local_4c & 0xfc;
    local_74 = 0;
    local_64[0] = local_b8.M.M[0][0];
    local_64[1] = local_b8.M.M[0][1];
    afStack_5c[0] = local_b8.M.M[1][0];
    afStack_5c[1] = local_b8.M.M[1][1];
    local_54 = local_b8.Trans.field0_0x0;
    local_78 = fVar14;
    FSlateDrawElement::MakeBox
              (param_5,param_6 + 1,(FPaintGeometry *)&local_80._s_0,pFVar7,!param_8 << 5,
               (FLinearColor *)&local_e0._s_0);
    param_6 = param_6 + 1;
  }
  return param_6;
}

// SetTextRange @ 14289ad80

void __thiscall FSlateImageRun::SetTextRange(FSlateImageRun *this,FTextRange *param_1)

{
  this->Range = *param_1;
  return;
}

