// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 21

// Call @ 14dc40580

float __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UChaosClothAssetInteractor::GetFloatPropertyValue'::__l8::<lambda_1>,float,int>
::Call(void *param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  FCollectionPropertyConstFacade *this;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  
  plVar2 = *(longlong **)param_1;
  iVar1 = *param_2;
  if (*plVar2 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      fVar5 = (float)(*pcVar3)();
      return fVar5;
    }
  }
  this = (FCollectionPropertyConstFacade *)*plVar2;
  fVar5 = ::Chaos::Softs::FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                    (this,iVar1,&this->LowValueArray);
  return fVar5;
}

// Call @ 14dc405e0

float __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UChaosClothAssetInteractor::GetHighFloatPropertyValue'::__l8::<lambda_1>,float,int>
::Call(void *param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  FCollectionPropertyConstFacade *this;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  
  plVar2 = *(longlong **)param_1;
  iVar1 = *param_2;
  if (*plVar2 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      fVar5 = (float)(*pcVar3)();
      return fVar5;
    }
  }
  this = (FCollectionPropertyConstFacade *)*plVar2;
  fVar5 = ::Chaos::Softs::FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                    (this,iVar1,&this->HighValueArray);
  return fVar5;
}

// Call @ 14dc40640

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UChaosClothAssetInteractor::GetIntPropertyValue'::__l8::<lambda_1>,int,int>::
Call(void *param_1,int *param_2)

{
  longlong *plVar1;
  FCollectionPropertyConstFacade *this;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  plVar1 = *(longlong **)param_1;
  iVar4 = *param_2;
  if (*plVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  this = (FCollectionPropertyConstFacade *)*plVar1;
  iVar4 = ::Chaos::Softs::FCollectionPropertyConstFacade::GetValue<int,UE::Math::TVector<float>_>
                    (this,iVar4,&this->LowValueArray);
  return iVar4;
}

// Call @ 14dc406a0

float __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UChaosClothAssetInteractor::GetLowFloatPropertyValue'::__l8::<lambda_1>,float,int>
::Call(void *param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  FCollectionPropertyConstFacade *this;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  
  plVar2 = *(longlong **)param_1;
  iVar1 = *param_2;
  if (*plVar2 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      fVar5 = (float)(*pcVar3)();
      return fVar5;
    }
  }
  this = (FCollectionPropertyConstFacade *)*plVar2;
  fVar5 = ::Chaos::Softs::FCollectionPropertyConstFacade::GetValue<float,UE::Math::TVector<float>_>
                    (this,iVar1,&this->LowValueArray);
  return fVar5;
}

// Call @ 14dc40700

FString * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UChaosClothAssetInteractor::GetStringPropertyValue'::__l8::<lambda_1>,FString,int>
::Call(FString *__return_storage_ptr__,void *param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  FCollectionPropertyConstFacade *this;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  
  plVar2 = *(longlong **)param_1;
  iVar1 = *param_2;
  if (*plVar2 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar3)();
      return pFVar5;
    }
  }
  this = (FCollectionPropertyConstFacade *)*plVar2;
  pFVar5 = ::Chaos::Softs::FCollectionPropertyConstFacade::GetValue<FString_const_&,FString>
                     (this,iVar1,&this->StringValueArray);
  ::FString::FString(__return_storage_ptr__,pFVar5);
  return __return_storage_ptr__;
}

// Call @ 14dc40780

TVector<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UChaosClothAssetInteractor::GetVectorPropertyValue'::__l8::<lambda_1>,UE::Math::TVector<double>,int>
::Call(TVector<double> *__return_storage_ptr__,void *param_1,int *param_2)

{
  `UChaosClothAssetInteractor::GetVectorPropertyValue'::__l8::<lambda_1>::operator()
            (param_1,__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 14dc407b0

TVector2<double> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UChaosClothAssetInteractor::GetWeightedFloatPropertyValue'::__l8::<lambda_1>,UE::Math::TVector2<double>,int>
::Call(TVector2<double> *__return_storage_ptr__,void *param_1,int *param_2)

{
  `UChaosClothAssetInteractor::GetWeightedFloatPropertyValue'::__l8::<lambda_1>::operator()
            (param_1,__return_storage_ptr__,*param_2);
  return __return_storage_ptr__;
}

// Call @ 14dc407e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UChaosClothAssetInteractor::SetFloatPropertyValue'::__l10::<lambda_1>,void,FName_const_&>
::Call(void *param_1,FName *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  
  plVar1 = *(longlong **)param_1;
  if (*plVar1 == 0) {
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
  ::Chaos::Softs::FCollectionPropertyFacade::SetValue<float>
            ((FCollectionPropertyFacade *)*plVar1,param_2,(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14dc40850

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UChaosClothAssetInteractor::SetHighFloatPropertyValue'::__l10::<lambda_1>,void,FName_const_&>
::Call(void *param_1,FName *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  
  plVar1 = *(longlong **)param_1;
  if (*plVar1 == 0) {
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
  ::Chaos::Softs::FCollectionPropertyFacade::SetHighValue<float>
            ((FCollectionPropertyFacade *)*plVar1,param_2,(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14dc408c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UChaosClothAssetInteractor::SetIntPropertyValue'::__l10::<lambda_1>,void,FName_const_&>
::Call(void *param_1,FName *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  
  plVar1 = *(longlong **)param_1;
  if (*plVar1 == 0) {
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
  ::Chaos::Softs::FCollectionPropertyFacade::SetValue<int>
            ((FCollectionPropertyFacade *)*plVar1,param_2,(int *)((longlong)param_1 + 8));
  return;
}

// Call @ 14dc40930

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UChaosClothAssetInteractor::SetLowFloatPropertyValue'::__l10::<lambda_1>,void,FName_const_&>
::Call(void *param_1,FName *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  
  plVar1 = *(longlong **)param_1;
  if (*plVar1 == 0) {
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
  ::Chaos::Softs::FCollectionPropertyFacade::SetLowValue<float>
            ((FCollectionPropertyFacade *)*plVar1,param_2,(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14dc409a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UChaosClothAssetInteractor::SetStringPropertyValue'::__l10::<lambda_1>,void,FName_const_&>
::Call(void *param_1,FName *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  
  plVar1 = *(longlong **)param_1;
  if (*plVar1 == 0) {
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
  ::Chaos::Softs::FCollectionPropertyFacade::SetStringValue
            ((FCollectionPropertyFacade *)*plVar1,param_2,*(FString **)((longlong)param_1 + 8));
  return;
}

// Call @ 14dc40a10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UChaosClothAssetInteractor::SetVectorPropertyValue'::__l10::<lambda_1>,void,FName_const_&>
::Call(void *param_1,FName *param_2)

{
  longlong *plVar1;
  double *pdVar2;
  code *pcVar3;
  bool bVar4;
  TVector<float>_u_0 TStack_18;
  
  plVar1 = *(longlong **)param_1;
  if (*plVar1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pdVar2 = *(double **)((longlong)param_1 + 8);
  TStack_18._s_0.Z = (float)pdVar2[2];
  TStack_18._s_0.Y = (float)pdVar2[1];
  TStack_18._s_0.X = (float)*pdVar2;
  ::Chaos::Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
            ((FCollectionPropertyFacade *)*plVar1,param_2,(TVector<float> *)&TStack_18._s_0);
  return;
}

// Call @ 14dc40a20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UChaosClothAssetInteractor::SetWeightedFloatPropertyValue'::__l10::<lambda_1>,void,FName_const_&>
::Call(void *param_1,FName *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  TVector2<float>_u_0 TStackX_8;
  
  plVar1 = *(longlong **)param_1;
  if (*plVar1 == 0) {
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
  TStackX_8._s_0.Y = (float)(*(double **)((longlong)param_1 + 8))[1];
  TStackX_8._s_0.X = (float)**(double **)((longlong)param_1 + 8);
  ::Chaos::Softs::FCollectionPropertyFacade::SetWeightedFloatValue
            ((FCollectionPropertyFacade *)*plVar1,param_2,(TVector2<float> *)&TStackX_8._s_0);
  return;
}

// Call @ 14dc40a30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UChaosClothAssetInteractor::SetFloatPropertyValue'::__l17::<lambda_2>,void,FName_const_&>
::Call(void *param_1,FName *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  
  plVar1 = *(longlong **)param_1;
  if (*plVar1 == 0) {
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
  ::Chaos::Softs::FCollectionPropertyFacade::SetValue<float>
            ((FCollectionPropertyFacade *)*plVar1,param_2,(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14dc40aa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UChaosClothAssetInteractor::SetHighFloatPropertyValue'::__l17::<lambda_2>,void,FName_const_&>
::Call(void *param_1,FName *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  
  plVar1 = *(longlong **)param_1;
  if (*plVar1 == 0) {
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
  ::Chaos::Softs::FCollectionPropertyFacade::SetHighValue<float>
            ((FCollectionPropertyFacade *)*plVar1,param_2,(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14dc40b10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UChaosClothAssetInteractor::SetIntPropertyValue'::__l17::<lambda_2>,void,FName_const_&>
::Call(void *param_1,FName *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  
  plVar1 = *(longlong **)param_1;
  if (*plVar1 == 0) {
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
  ::Chaos::Softs::FCollectionPropertyFacade::SetValue<int>
            ((FCollectionPropertyFacade *)*plVar1,param_2,(int *)((longlong)param_1 + 8));
  return;
}

// Call @ 14dc40b80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UChaosClothAssetInteractor::SetLowFloatPropertyValue'::__l17::<lambda_2>,void,FName_const_&>
::Call(void *param_1,FName *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  
  plVar1 = *(longlong **)param_1;
  if (*plVar1 == 0) {
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
  ::Chaos::Softs::FCollectionPropertyFacade::SetLowValue<float>
            ((FCollectionPropertyFacade *)*plVar1,param_2,(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 14dc40bf0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UChaosClothAssetInteractor::SetStringPropertyValue'::__l17::<lambda_2>,void,FName_const_&>
::Call(void *param_1,FName *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  
  plVar1 = *(longlong **)param_1;
  if (*plVar1 == 0) {
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
  ::Chaos::Softs::FCollectionPropertyFacade::SetStringValue
            ((FCollectionPropertyFacade *)*plVar1,param_2,*(FString **)((longlong)param_1 + 8));
  return;
}

// Call @ 14dc40c60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UChaosClothAssetInteractor::SetVectorPropertyValue'::__l17::<lambda_2>,void,FName_const_&>
::Call(void *param_1,FName *param_2)

{
  longlong *plVar1;
  double *pdVar2;
  code *pcVar3;
  bool bVar4;
  TVector<float>_u_0 TStack_18;
  
  plVar1 = *(longlong **)param_1;
  if (*plVar1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pdVar2 = *(double **)((longlong)param_1 + 8);
  TStack_18._s_0.Z = (float)pdVar2[2];
  TStack_18._s_0.Y = (float)pdVar2[1];
  TStack_18._s_0.X = (float)*pdVar2;
  ::Chaos::Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
            ((FCollectionPropertyFacade *)*plVar1,param_2,(TVector<float> *)&TStack_18._s_0);
  return;
}

// Call @ 14dc40c70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UChaosClothAssetInteractor::SetWeightedFloatPropertyValue'::__l17::<lambda_2>,void,FName_const_&>
::Call(void *param_1,FName *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  TVector2<float>_u_0 TStackX_8;
  
  plVar1 = *(longlong **)param_1;
  if (*plVar1 == 0) {
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
  TStackX_8._s_0.Y = (float)(*(double **)((longlong)param_1 + 8))[1];
  TStackX_8._s_0.X = (float)**(double **)((longlong)param_1 + 8);
  ::Chaos::Softs::FCollectionPropertyFacade::SetWeightedFloatValue
            ((FCollectionPropertyFacade *)*plVar1,param_2,(TVector2<float> *)&TStackX_8._s_0);
  return;
}

