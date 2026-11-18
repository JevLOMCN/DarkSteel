// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 7

// FSlateDynamicImageBrush @ 14242d580

FSlateDynamicImageBrush * __thiscall
FSlateDynamicImageBrush::FSlateDynamicImageBrush
          (FSlateDynamicImageBrush *this,FName param_1,FDeprecateVector2DParameter *param_2,
          FLinearColor *param_3,Type param_4,Type param_5)

{
  FMargin local_18;
  
  local_18.Left = 0.0;
  local_18.Top = 0.0;
  local_18.Right = 0.0;
  local_18.Bottom = 0.0;
  FSlateBrush::FSlateBrush
            ((FSlateBrush *)this,Image,param_1,&local_18,param_4,param_5,param_2,param_3,
             (UObject *)0x0,true);
  this->bRemoveResourceFromRootSet = false;
  this->bIsInitalized = true;
  this->field_0x94 = this->field_0x94 | 1;
  *(undefined ***)this = &___7FSlateDynamicImageBrush__6B_;
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined8 *)&this->field_0xb8 = 0;
  return this;
}

// ~FSlateDynamicImageBrush @ 14242f2c0

void __thiscall FSlateDynamicImageBrush::~FSlateDynamicImageBrush(FSlateDynamicImageBrush *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7FSlateDynamicImageBrush__6B_;
  ReleaseResourceInternal(this);
  plVar3 = *(longlong **)&this->field_0xb8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *(undefined ***)this = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0xa0);
  return;
}

// CreateWithImageData @ 14243a970

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedPtr<FSlateDynamicImageBrush,1> * __cdecl
FSlateDynamicImageBrush::CreateWithImageData
          (TSharedPtr<FSlateDynamicImageBrush,1> *__return_storage_ptr__,FName param_1,
          FDeprecateVector2DParameter *param_2,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_3,FLinearColor *param_4,
          Type param_5,Type param_6)

{
  FSlateRenderer *pFVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  TSharedPtr<FSlateDynamicImageBrush,1> *pTVar5;
  FSlateDynamicImageBrush *this;
  FSlateDynamicImageBrush *pFVar6;
  TRawPtrProxy<FSlateDynamicImageBrush> local_res8;
  
  pFVar6 = (FSlateDynamicImageBrush *)0x0;
  __return_storage_ptr__->Object = (FSlateDynamicImageBrush *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (((FSlateApplicationBase::CurrentBaseApplication.Object != (FSlateApplicationBase *)0x0) &&
      (0.0 < *(float *)param_2)) && (0.0 < *(float *)&param_2->field_0x4)) {
    if (FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentBaseApplication.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Application\\SlateApplicationBase.h"
                         ,0x22a,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<FSlateDynamicImageBrush,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    if (FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<FSlateDynamicImageBrush,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
    pFVar1 = ((FSlateApplicationBase::CurrentBaseApplication.Object)->Renderer).Object;
    cVar4 = (**(code **)(pFVar1->_padding_ + 0x70))
                      (pFVar1,param_1,(longlong)*(float *)param_2,
                       (longlong)*(float *)&param_2->field_0x4,param_3);
    if (cVar4 != '\0') {
      this = ::operator_new(0xd0);
      if (this != (FSlateDynamicImageBrush *)0x0) {
        pFVar6 = FSlateDynamicImageBrush(this,param_1,param_2,param_4,param_5,param_6);
        if (((pFVar6 != (FSlateDynamicImageBrush *)0x0) && (*(longlong *)&pFVar6->field_0xb0 != 0))
           && ((*(longlong *)&pFVar6->field_0xb8 != 0 &&
               (0 < *(int *)(*(longlong *)&pFVar6->field_0xb8 + 8))))) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InObject || !InObject->DoesSharedInstanceExist()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x7a5,L"Trying to share an already-shared object");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pTVar5 = (TSharedPtr<FSlateDynamicImageBrush,1> *)(*pcVar2)();
            return pTVar5;
          }
        }
      }
      local_res8.Object = pFVar6;
      TSharedPtr<FSlateDynamicImageBrush,1>::operator=<FSlateDynamicImageBrush>
                (__return_storage_ptr__,&local_res8);
    }
  }
  return __return_storage_ptr__;
}

// ReleaseResource @ 14244e670

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FSlateDynamicImageBrush::ReleaseResource(FSlateDynamicImageBrush *this)

{
  FSlateRenderer *pFVar1;
  FSlateResourceHandle *pFVar2;
  FUObjectItem *this_00;
  FSlateApplicationBase *pFVar3;
  FSlateResourceHandle FStack_18;
  
  if ((this->bIsInitalized) &&
     (this->field_0xc0 = this->field_0xc0 & 0xfd,
     FSlateApplicationBase::CurrentBaseApplication.Object != (FSlateApplicationBase *)0x0)) {
    pFVar2 = FSlateResourceHandle::FSlateResourceHandle(&FStack_18);
    if ((FSlateResourceHandle *)&this->field_0x98 != pFVar2) {
      *(FSlateSharedHandleData **)&this->field_0x98 = (pFVar2->Data).Object;
      (pFVar2->Data).Object = (FSlateSharedHandleData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->field_0xa0,&(pFVar2->Data).SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_18.Data.SharedReferenceCount.ReferenceController);
    if ((*(longlong *)&this->field_0x38 != 0) && (this->bRemoveResourceFromRootSet)) {
      this_00 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)(*(longlong *)&this->field_0x38 + 0xc));
      FUObjectItem::ClearRootFlags(this_00,RootSet);
    }
    pFVar3 = FSlateApplicationBase::Get();
    pFVar1 = (pFVar3->Renderer).Object;
    if (pFVar1 != (FSlateRenderer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014244e72f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1,this);
      return;
    }
  }
  return;
}

// ReleaseResourceInternal @ 14244e680

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FSlateDynamicImageBrush::ReleaseResourceInternal(FSlateDynamicImageBrush *this)

{
  FSlateRenderer *pFVar1;
  FSlateResourceHandle *pFVar2;
  FUObjectItem *this_00;
  FSlateApplicationBase *pFVar3;
  FSlateResourceHandle local_18;
  
  if ((this->bIsInitalized) &&
     (this->field_0xc0 = this->field_0xc0 & 0xfd,
     FSlateApplicationBase::CurrentBaseApplication.Object != (FSlateApplicationBase *)0x0)) {
    pFVar2 = FSlateResourceHandle::FSlateResourceHandle(&local_18);
    if ((FSlateResourceHandle *)&this->field_0x98 != pFVar2) {
      *(FSlateSharedHandleData **)&this->field_0x98 = (pFVar2->Data).Object;
      (pFVar2->Data).Object = (FSlateSharedHandleData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->field_0xa0,&(pFVar2->Data).SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.Data.SharedReferenceCount.ReferenceController);
    if ((*(longlong *)&this->field_0x38 != 0) && (this->bRemoveResourceFromRootSet)) {
      this_00 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)(*(longlong *)&this->field_0x38 + 0xc));
      FUObjectItem::ClearRootFlags(this_00,RootSet);
    }
    pFVar3 = FSlateApplicationBase::Get();
    pFVar1 = (pFVar3->Renderer).Object;
    if (pFVar1 != (FSlateRenderer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014244e72f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1,this);
      return;
    }
  }
  return;
}

// FSlateDynamicImageBrush @ 142545de0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FSlateDynamicImageBrush * __thiscall
FSlateDynamicImageBrush::FSlateDynamicImageBrush
          (FSlateDynamicImageBrush *this,UTexture2D *param_1,FDeprecateVector2DParameter *param_2,
          FName param_3,FLinearColor *param_4,Type param_5,Type param_6)

{
  longlong lVar1;
  FName *pFVar2;
  FUObjectItem *pFVar3;
  FName local_res8;
  FMargin local_18;
  
  local_18.Left = 0.0;
  local_18.Top = 0.0;
  local_18.Right = 0.0;
  local_18.Bottom = 0.0;
  pFVar2 = ::FName::FName(&local_res8,L"None");
  FSlateBrush::FSlateBrush
            ((FSlateBrush *)this,Image,*pFVar2,&local_18,param_5,param_6,param_2,param_4,
             (UObject *)param_1,false);
  this->field_0x94 = this->field_0x94 | 1;
  lVar1 = *(longlong *)&this->field_0x38;
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined8 *)&this->field_0xb8 = 0;
  this->bRemoveResourceFromRootSet = false;
  this->bIsInitalized = true;
  *(undefined ***)this = &___7FSlateDynamicImageBrush__6B_;
  if (lVar1 != 0) {
    pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar1 + 0xc));
    if (((uint)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) == 0) {
      `FSlateDynamicImageBrush::InitFromTextureObject'::__l8::<lambda_1>::operator()(&local_res8);
      pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar1 + 0xc));
      FUObjectItem::SetRootFlags(pFVar3,RootSet);
      this->bRemoveResourceFromRootSet = true;
    }
    *(uint *)&this->field_0xa8 = param_3.ComparisonIndex.Value;
    *(uint *)&this->field_0xac = param_3.Number;
  }
  return this;
}

// operator() @ 15048fd40

bool __thiscall
`FSlateDynamicImageBrush::InitFromTextureObject'::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_960501828670193544>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_960501828670193544>,
                       &`public:___cdecl_`private:_void___cdecl_FSlateDynamicImageBrush::InitFromTextureObject(FName)___ptr64'::`8'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

