// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 498

// ButtonStates'' @ 140f4b560

void __cdecl `dynamic_initializer_for_'SMultiBoxTest::ButtonStates__(void)

{
  atexit(`dynamic_atexit_destructor_for_'SMultiBoxTest::ButtonStates__);
  return;
}

// DefaultUndeterminedString'' @ 140f4b580

void __cdecl
`dynamic_initializer_for_'SNumericEntryBox<unsigned_short>::DefaultUndeterminedString__(void)

{
  FText::FromString(&SNumericEntryBox<unsigned_short>::DefaultUndeterminedString,L"---");
  atexit(`dynamic_atexit_destructor_for_'SNumericEntryBox<unsigned_short>::
         DefaultUndeterminedString__);
  return;
}

// `dynamic_initializer_for_'DeveloperCategory'' @ 140f4b5b0

void __cdecl TestSuiteMenu::_dynamic_initializer_for__DeveloperCategory__(void)

{
  FWorkspaceItem *this;
  FSlateIcon *pFVar1;
  FText *pFVar2;
  FText local_38;
  FSlateIcon local_28;
  
  this = TSharedRef<FWorkspaceItem,1>::operator->(&MenuRoot);
  pFVar1 = FSlateIcon::FSlateIcon(&local_28);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"TestSuite",L"DeveloperCategory",L"Developer");
  FWorkspaceItem::AddGroup(this,&DeveloperCategory,pFVar2,pFVar1,false);
  FText::~FText(&local_38);
  atexit(_dynamic_atexit_destructor_for__DeveloperCategory__);
  return;
}

// `dynamic_initializer_for_'MenuRoot'' @ 140f4b650

void __cdecl TestSuiteMenu::_dynamic_initializer_for__MenuRoot__(void)

{
  FSlateIcon *pFVar1;
  FText *pFVar2;
  FText local_38;
  FSlateIcon local_28;
  
  pFVar1 = FSlateIcon::FSlateIcon(&local_28);
  pFVar2 = FText::AsLocalizable_Advanced_LocText(&local_38,L"TestSuite",L"MenuRoot",L"MenuRoot");
  FWorkspaceItem::NewGroup(&MenuRoot,pFVar2,pFVar1,false);
  FText::~FText(&local_38);
  atexit(_dynamic_atexit_destructor_for__MenuRoot__);
  return;
}

// `dynamic_initializer_for_'NestedCategory'' @ 140f4b6d0

void __cdecl TestSuiteMenu::_dynamic_initializer_for__NestedCategory__(void)

{
  FWorkspaceItem *this;
  FSlateIcon *pFVar1;
  FText *pFVar2;
  FText local_38;
  FSlateIcon local_28;
  
  this = TSharedRef<FWorkspaceItem,1>::operator->(&SuiteTabs);
  pFVar1 = FSlateIcon::FSlateIcon(&local_28);
  pFVar2 = FText::AsLocalizable_Advanced_LocText(&local_38,L"TestSuite",L"NestedCategory",L"Nested")
  ;
  FWorkspaceItem::AddGroup(this,&NestedCategory,pFVar2,pFVar1,false);
  FText::~FText(&local_38);
  atexit(_dynamic_atexit_destructor_for__NestedCategory__);
  return;
}

// `dynamic_initializer_for_'Offset'' @ 140f4b770

void __cdecl TestSuiteNS::_dynamic_initializer_for__Offset__(void)

{
  Offset.field0_0x0._s_0.X = 0.0;
  Offset.field0_0x0._s_0.Y = 0.0;
  return;
}

// `dynamic_initializer_for_'Rot'' @ 140f4b7a0

void __cdecl TestSuiteNS::_dynamic_initializer_for__Rot__(void)

{
  TQuat2<float>::TQuat2<float>(&Rot);
  return;
}

// `dynamic_initializer_for_'Scale'' @ 140f4b7c0

void __cdecl TestSuiteNS::_dynamic_initializer_for__Scale__(void)

{
  TScale2<float>::TScale2<float>(&Scale);
  return;
}

// `dynamic_initializer_for_'Shear'' @ 140f4b7e0

void __cdecl TestSuiteNS::_dynamic_initializer_for__Shear__(void)

{
  TShear2<float>::TShear2<float>(&Shear);
  return;
}

// `dynamic_initializer_for_'SuiteTabs'' @ 140f4b800

void __cdecl TestSuiteMenu::_dynamic_initializer_for__SuiteTabs__(void)

{
  FWorkspaceItem *this;
  FSlateIcon *pFVar1;
  FText *pFVar2;
  FText local_38;
  FSlateIcon local_28;
  
  this = TSharedRef<FWorkspaceItem,1>::operator->(&MenuRoot);
  pFVar1 = FSlateIcon::FSlateIcon(&local_28);
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"TestSuite",L"SuiteTabs",L"Test Suite Tabs");
  FWorkspaceItem::AddGroup(this,&SuiteTabs,pFVar2,pFVar1,false);
  FText::~FText(&local_38);
  atexit(_dynamic_atexit_destructor_for__SuiteTabs__);
  return;
}

// `dynamic_initializer_for_'TestSuite1TabManager'' @ 140f4b8a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__TestSuite1TabManager__(void)

{
  TSharedPtr<FTabManager,1>::TSharedPtr<FTabManager,1>(&TestSuite1TabManager,(FNullTag *)0x0);
  atexit(_dynamic_atexit_destructor_for__TestSuite1TabManager__);
  return;
}

// `dynamic_initializer_for_'TestSuite2TabManager'' @ 140f4b8d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__TestSuite2TabManager__(void)

{
  TSharedPtr<FTabManager,1>::TSharedPtr<FTabManager,1>(&TestSuite2TabManager,(FNullTag *)0x0);
  atexit(_dynamic_atexit_destructor_for__TestSuite2TabManager__);
  return;
}

// `dynamic_initializer_for_'bTestTransformCalculus'' @ 140f4b900

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__bTestTransformCalculus__(void)

{
  bTestTransformCalculus = TestTransformCalculus();
  return;
}

// TFunction<FText___cdecl(void)><`SGlobalInvalidationTest::Construct'::__l2::<lambda_1>_> @ 143040230

TFunction<FText___cdecl(void)> * __thiscall
TFunction<FText___cdecl(void)>::
TFunction<FText___cdecl(void)><_SGlobalInvalidationTest::Construct_::__l2::<lambda_1>_>
          (TFunction<FText___cdecl(void)> *this,<lambda_1> *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)&this->field_0x10 =
       &___7__TFunction_OwnedObject_P6A_AVFText__XZ_0A__0A__Function_Private_Core_UE__6B_;
  *(code **)&this->field_0x18 =
       `SGlobalInvalidationTest::Construct'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  if (&this->field_0x18 != (undefined1 *)0x0) {
    *(code **)this =
         UE::Core::Private::Function::TFunctionRefCaller<FText_(__cdecl*)(void),FText>::Call;
  }
  return this;
}

// Concatenate<float> @ 1430434b0

float __cdecl Concatenate<float>(float param_1,float param_2)

{
  return param_1 * param_2;
}

// Concatenate<float,double> @ 1430434c0

TTransform2<float> * __cdecl
Concatenate<float,double>
          (TTransform2<float> *__return_storage_ptr__,TVector2<double> *param_1,
          TTransform2<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float afVar5 [2];
  TVector2<float>_u_0 TVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = (float)(param_1->field0_0x0)._s_0.Y;
  fVar7 = (float)(param_1->field0_0x0)._s_0.X;
  fVar1 = (param_2->M).M[1][1];
  fVar2 = (param_2->M).M[1][0];
  fVar3 = (param_2->M).M[0][0];
  fVar4 = (param_2->M).M[0][1];
  afVar5 = (param_2->M).M[1];
  (__return_storage_ptr__->M).M[0] = (param_2->M).M[0];
  (__return_storage_ptr__->M).M[1] = afVar5;
  TVar6._s_0.Y = fVar8 * fVar1 + fVar7 * fVar4 + (param_2->Trans).field0_0x0._s_0.Y;
  TVar6._s_0.X = fVar8 * fVar2 + fVar7 * fVar3 + (param_2->Trans).field0_0x0._s_0.X;
  (__return_storage_ptr__->Trans).field0_0x0 = TVar6;
  return __return_storage_ptr__;
}

// Concatenate<float,double> @ 143043530

TTransform2<float> * __cdecl
Concatenate<float,double>
          (TTransform2<float> *__return_storage_ptr__,TVector2<double> *param_1,
          TMatrix2x2<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float afVar9 [2];
  
  fVar1 = param_2->M[1][0];
  fVar2 = param_2->M[0][0];
  fVar3 = param_2->M[1][1];
  dVar5 = (param_1->field0_0x0)._s_0.X;
  dVar6 = (param_1->field0_0x0)._s_0.Y;
  fVar4 = param_2->M[0][1];
  dVar7 = (param_1->field0_0x0)._s_0.Y;
  dVar8 = (param_1->field0_0x0)._s_0.X;
  afVar9 = param_2->M[1];
  (__return_storage_ptr__->M).M[0] = param_2->M[0];
  (__return_storage_ptr__->M).M[1] = afVar9;
  (__return_storage_ptr__->Trans).field0_0x0._s_0.X =
       (float)((double)fVar1 * dVar6 + (double)fVar2 * dVar5);
  (__return_storage_ptr__->Trans).field0_0x0._s_0.Y =
       (float)((double)fVar3 * dVar7 + (double)fVar4 * dVar8);
  return __return_storage_ptr__;
}

// Concatenate<float,double> @ 143043590

TTransform2<float> * __cdecl
Concatenate<float,double>
          (TTransform2<float> *__return_storage_ptr__,TVector2<double> *param_1,
          TQuat2<float> *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  
  fVar1 = (param_2->Rot).field0_0x0._s_0.Y;
  fVar2 = (param_2->Rot).field0_0x0._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar4 = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->M).M[0][1] = fVar1;
  fVar5 = (float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000);
  (__return_storage_ptr__->M).M[0][0] = fVar2;
  (__return_storage_ptr__->M).M[1][1] = fVar2;
  (__return_storage_ptr__->M).M[1][0] = fVar5;
  (__return_storage_ptr__->Trans).field0_0x0._s_0.X =
       (float)((double)fVar2 * dVar4 - (double)fVar1 * dVar3);
  (__return_storage_ptr__->Trans).field0_0x0._s_0.Y =
       (float)((double)fVar1 * dVar4 + (double)fVar2 * dVar3);
  return __return_storage_ptr__;
}

// Concatenate<float,double> @ 143043600

TTransform2<float> * __cdecl
Concatenate<float,double>
          (TTransform2<float> *__return_storage_ptr__,TVector2<double> *param_1,
          TScale2<float> *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  
  fVar1 = (param_2->Scale).field0_0x0._s_0.X;
  fVar2 = (param_2->Scale).field0_0x0._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.X;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  *(undefined8 *)((__return_storage_ptr__->M).M[0] + 1) = 0;
  (__return_storage_ptr__->M).M[0][0] = fVar1;
  (__return_storage_ptr__->M).M[1][1] = fVar2;
  (__return_storage_ptr__->Trans).field0_0x0._s_0.X = (float)((double)fVar1 * dVar3);
  (__return_storage_ptr__->Trans).field0_0x0._s_0.Y = (float)((double)fVar2 * dVar4);
  return __return_storage_ptr__;
}

// Concatenate<float,double> @ 143043650

TTransform2<float> * __cdecl
Concatenate<float,double>
          (TTransform2<float> *__return_storage_ptr__,TVector2<double> *param_1,
          TShear2<float> *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar4 = (param_1->field0_0x0)._s_0.X;
  fVar1 = (param_2->Shear).field0_0x0._s_0.X;
  fVar2 = (param_2->Shear).field0_0x0._s_0.Y;
  (__return_storage_ptr__->M).M[1][0] = fVar1;
  (__return_storage_ptr__->M).M[0][0] = 1.0;
  (__return_storage_ptr__->M).M[1][1] = 1.0;
  (__return_storage_ptr__->M).M[0][1] = fVar2;
  (__return_storage_ptr__->Trans).field0_0x0._s_0.X = (float)((double)fVar1 * dVar3 + dVar4);
  (__return_storage_ptr__->Trans).field0_0x0._s_0.Y = (float)((double)fVar2 * dVar4 + dVar3);
  return __return_storage_ptr__;
}

// Concatenate<float,double> @ 1430436b0

TTransform2<float> * __cdecl
Concatenate<float,double>
          (TTransform2<float> *__return_storage_ptr__,TTransform2<float> *param_1,
          TVector2<double> *param_2)

{
  float afVar1 [2];
  float afVar2 [2];
  TVector2<float>_u_0 TVar3;
  
  afVar1 = (param_1->M).M[0];
  afVar2 = (param_1->M).M[1];
  TVar3._s_0.Y = (float)(param_2->field0_0x0)._s_0.Y + (param_1->Trans).field0_0x0._s_0.Y;
  TVar3._s_0.X = (float)(param_2->field0_0x0)._s_0.X + (param_1->Trans).field0_0x0._s_0.X;
  (__return_storage_ptr__->Trans).field0_0x0 = TVar3;
  (__return_storage_ptr__->M).M[0] = afVar1;
  (__return_storage_ptr__->M).M[1] = afVar2;
  return __return_storage_ptr__;
}

// Concatenate<float,double> @ 143043700

TTransform2<float> * __cdecl
Concatenate<float,double>
          (TTransform2<float> *__return_storage_ptr__,TMatrix2x2<float> *param_1,
          TVector2<double> *param_2)

{
  double dVar1;
  float afVar2 [2];
  
  afVar2 = param_1->M[1];
  (__return_storage_ptr__->M).M[0] = param_1->M[0];
  (__return_storage_ptr__->M).M[1] = afVar2;
  dVar1 = (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->Trans).field0_0x0._s_0.Y = (float)(param_2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->Trans).field0_0x0._s_0.X = (float)dVar1;
  return __return_storage_ptr__;
}

// Concatenate<float,double> @ 143043730

TTransform2<float> * __cdecl
Concatenate<float,double>
          (TTransform2<float> *__return_storage_ptr__,TQuat2<float> *param_1,
          TVector2<double> *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  
  fVar1 = (param_1->Rot).field0_0x0._s_0.Y;
  fVar2 = (param_1->Rot).field0_0x0._s_0.X;
  (__return_storage_ptr__->M).M[0][1] = fVar1;
  (__return_storage_ptr__->M).M[1][0] =
       (float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000);
  (__return_storage_ptr__->M).M[0][0] = fVar2;
  (__return_storage_ptr__->M).M[1][1] = fVar2;
  dVar3 = (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->Trans).field0_0x0._s_0.Y = (float)(param_2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->Trans).field0_0x0._s_0.X = (float)dVar3;
  return __return_storage_ptr__;
}

// Concatenate<float,double> @ 143043780

TTransform2<float> * __cdecl
Concatenate<float,double>
          (TTransform2<float> *__return_storage_ptr__,TScale2<float> *param_1,
          TVector2<double> *param_2)

{
  float fVar1;
  double dVar2;
  
  fVar1 = (param_1->Scale).field0_0x0._s_0.Y;
  (__return_storage_ptr__->M).M[0][0] = (param_1->Scale).field0_0x0._s_0.X;
  *(undefined8 *)((__return_storage_ptr__->M).M[0] + 1) = 0;
  (__return_storage_ptr__->M).M[1][1] = fVar1;
  dVar2 = (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->Trans).field0_0x0._s_0.Y = (float)(param_2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->Trans).field0_0x0._s_0.X = (float)dVar2;
  return __return_storage_ptr__;
}

// Concatenate<float,double> @ 1430437c0

TTransform2<float> * __cdecl
Concatenate<float,double>
          (TTransform2<float> *__return_storage_ptr__,TShear2<float> *param_1,
          TVector2<double> *param_2)

{
  float fVar1;
  double dVar2;
  
  fVar1 = (param_1->Shear).field0_0x0._s_0.X;
  (__return_storage_ptr__->M).M[0][1] = (param_1->Shear).field0_0x0._s_0.Y;
  (__return_storage_ptr__->M).M[1][0] = fVar1;
  (__return_storage_ptr__->M).M[0][0] = 1.0;
  (__return_storage_ptr__->M).M[1][1] = 1.0;
  dVar2 = (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->Trans).field0_0x0._s_0.Y = (float)(param_2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->Trans).field0_0x0._s_0.X = (float)dVar2;
  return __return_storage_ptr__;
}

// Concatenate<float,UE::Math::TMatrix<double>_> @ 143043810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMatrix<double> * __cdecl
Concatenate<float,UE::Math::TMatrix<double>_>
          (TMatrix<double> *__return_storage_ptr__,float *param_1,TMatrix<double> *param_2)

{
  TMatrix<double> *pTVar1;
  TMatrix<double> *pTVar2;
  undefined1 auStack_148 [32];
  TMatrix<double> local_128;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  pTVar1 = TransformCast<UE::Math::TMatrix<double>,UE::Math::TMatrix<double>_>(&local_128,param_2);
  pTVar2 = TransformCast<UE::Math::TMatrix<double>,float>(&local_a8,param_1);
  VectorMatrixMultiply(__return_storage_ptr__,pTVar2,pTVar1);
  return __return_storage_ptr__;
}

// Concatenate<float,UE::Math::TQuat<double>_> @ 143043890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMatrix<double> * __cdecl
Concatenate<float,UE::Math::TQuat<double>_>
          (TMatrix<double> *__return_storage_ptr__,float *param_1,TQuat<double> *param_2)

{
  TMatrix<double> *pTVar1;
  TMatrix<double> *pTVar2;
  undefined1 auStack_148 [32];
  TMatrix<double> local_128;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  pTVar1 = TransformCast<UE::Math::TMatrix<double>,UE::Math::TQuat<double>_>(&local_128,param_2);
  pTVar2 = TransformCast<UE::Math::TMatrix<double>,float>(&local_a8,param_1);
  VectorMatrixMultiply(__return_storage_ptr__,pTVar2,pTVar1);
  return __return_storage_ptr__;
}

// Concatenate<float,UE::Math::TRotator<double>_> @ 143043910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMatrix<double> * __cdecl
Concatenate<float,UE::Math::TRotator<double>_>
          (TMatrix<double> *__return_storage_ptr__,float *param_1,TRotator<double> *param_2)

{
  TMatrix<double> *pTVar1;
  TMatrix<double> *pTVar2;
  undefined1 auStack_148 [32];
  TMatrix<double> local_128;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  pTVar1 = TransformCast<UE::Math::TMatrix<double>,UE::Math::TRotator<double>_>(&local_128,param_2);
  pTVar2 = TransformCast<UE::Math::TMatrix<double>,float>(&local_a8,param_1);
  VectorMatrixMultiply(__return_storage_ptr__,pTVar2,pTVar1);
  return __return_storage_ptr__;
}

// Concatenate<float,UE::Math::TVector<double>_> @ 143043990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMatrix<double> * __cdecl
Concatenate<float,UE::Math::TVector<double>_>
          (TMatrix<double> *__return_storage_ptr__,float *param_1,TVector<double> *param_2)

{
  TMatrix<double> *pTVar1;
  TMatrix<double> *pTVar2;
  undefined1 auStack_148 [32];
  TMatrix<double> local_128;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  pTVar1 = TransformCast<UE::Math::TMatrix<double>,UE::Math::TVector<double>_>(&local_128,param_2);
  pTVar2 = TransformCast<UE::Math::TMatrix<double>,float>(&local_a8,param_1);
  VectorMatrixMultiply(__return_storage_ptr__,pTVar2,pTVar1);
  return __return_storage_ptr__;
}

// Concatenate<float,TScale2<float>_> @ 143043a10

TScale2<float> __cdecl Concatenate<float,TScale2<float>_>(float *param_1,TScale2<float> *param_2)

{
  float fVar1;
  TScale2<float> *pTVar2;
  TScale2<float> *in_R8;
  
  pTVar2 = TransformCast<TScale2<float>,TScale2<float>_>(in_R8);
  fVar1 = (param_2->Scale).field0_0x0._s_0.X;
  *(ulonglong *)param_1 =
       CONCAT44(fVar1 * (pTVar2->Scale).field0_0x0._s_0.Y,fVar1 * (pTVar2->Scale).field0_0x0._s_0.X)
  ;
  return (TScale2<float>)(TVector2<float>)param_1;
}

// Concatenate<float,FSlateLayoutTransform> @ 143043a60

FSlateLayoutTransform * __cdecl
Concatenate<float,FSlateLayoutTransform>
          (FSlateLayoutTransform *__return_storage_ptr__,float *param_1,
          FSlateLayoutTransform *param_2)

{
  float fVar1;
  float fVar2;
  TVector2<float>_u_0_s_0 TVar3;
  TVector2<float>_u_0 TVar4;
  FSlateLayoutTransform *pFVar5;
  FSlateLayoutTransform *pFVar6;
  float local_res8;
  float fStackX_c;
  FSlateLayoutTransform local_18;
  
  pFVar5 = TransformCast<FSlateLayoutTransform,FSlateLayoutTransform>(param_2);
  pFVar6 = TransformCast<FSlateLayoutTransform,float>(&local_18,param_1);
  fVar1 = pFVar5->Scale;
  TVar3 = (pFVar6->Translation).field0_0x0._s_0;
  local_res8 = TVar3.X;
  fStackX_c = TVar3.Y;
  fVar2 = (pFVar5->Translation).field0_0x0._s_0.X;
  __return_storage_ptr__->Scale = fVar1 * pFVar6->Scale;
  TVar4._s_0.Y = fVar1 * fStackX_c + (pFVar5->Translation).field0_0x0._s_0.Y;
  TVar4._s_0.X = fVar1 * local_res8 + fVar2;
  (__return_storage_ptr__->Translation).field0_0x0 = TVar4;
  return __return_storage_ptr__;
}

// Concatenate<double> @ 143043af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TRotator<double> * __cdecl
Concatenate<double>(TRotator<double> *__return_storage_ptr__,TRotator<double> *param_1,
                   TRotator<double> *param_2)

{
  TMatrix<double> *pTVar1;
  TMatrix<double> *pTVar2;
  undefined1 auStack_1c8 [32];
  TMatrix<double> local_1a8;
  TMatrix<double> local_128;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  pTVar1 = TransformCast<UE::Math::TMatrix<double>,UE::Math::TRotator<double>_>(&local_128,param_2);
  pTVar2 = TransformCast<UE::Math::TMatrix<double>,UE::Math::TRotator<double>_>(&local_a8,param_1);
  VectorMatrixMultiply(&local_1a8,pTVar2,pTVar1);
  TransformCast<UE::Math::TRotator<double>,UE::Math::TMatrix<double>_>
            (__return_storage_ptr__,&local_1a8);
  return __return_storage_ptr__;
}

// Concatenate<double> @ 143043b80

FSlateLayoutTransform * __cdecl
Concatenate<double>(FSlateLayoutTransform *__return_storage_ptr__,TVector2<double> *param_1,
                   float param_2)

{
  TVector2<float>_u_0 TVar1;
  
  __return_storage_ptr__->Scale = param_2;
  TVar1._s_0.Y = (float)((double)param_2 * (param_1->field0_0x0)._s_0.Y);
  TVar1._s_0.X = (float)((double)param_2 * (param_1->field0_0x0)._s_0.X);
  (__return_storage_ptr__->Translation).field0_0x0 = TVar1;
  return __return_storage_ptr__;
}

// Concatenate<double> @ 143043bc0

FSlateLayoutTransform * __cdecl
Concatenate<double>(FSlateLayoutTransform *__return_storage_ptr__,float param_1,
                   TVector2<double> *param_2)

{
  TVector2<float>_u_0 TVar1;
  
  TVar1._s_0.Y = (float)(param_2->field0_0x0)._s_0.Y;
  TVar1._s_0.X = (float)(param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->Translation).field0_0x0 = TVar1;
  __return_storage_ptr__->Scale = param_1;
  return __return_storage_ptr__;
}

// Concatenate<UE::Math::TMatrix<double>,float> @ 143043d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMatrix<double> * __cdecl
Concatenate<UE::Math::TMatrix<double>,float>
          (TMatrix<double> *__return_storage_ptr__,TMatrix<double> *param_1,float *param_2)

{
  TMatrix<double> *pTVar1;
  TMatrix<double> *pTVar2;
  undefined1 auStack_148 [32];
  TMatrix<double> local_128;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  pTVar1 = TransformCast<UE::Math::TMatrix<double>,float>(&local_128,param_2);
  pTVar2 = TransformCast<UE::Math::TMatrix<double>,UE::Math::TMatrix<double>_>(&local_a8,param_1);
  VectorMatrixMultiply(__return_storage_ptr__,pTVar2,pTVar1);
  return __return_storage_ptr__;
}

// Concatenate<UE::Math::TMatrix<double>,UE::Math::TQuat<double>_> @ 143043e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMatrix<double> * __cdecl
Concatenate<UE::Math::TMatrix<double>,UE::Math::TQuat<double>_>
          (TMatrix<double> *__return_storage_ptr__,TMatrix<double> *param_1,TQuat<double> *param_2)

{
  TMatrix<double> *pTVar1;
  TMatrix<double> *pTVar2;
  undefined1 auStack_148 [32];
  TMatrix<double> local_128;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  pTVar1 = TransformCast<UE::Math::TMatrix<double>,UE::Math::TQuat<double>_>(&local_128,param_2);
  pTVar2 = TransformCast<UE::Math::TMatrix<double>,UE::Math::TMatrix<double>_>(&local_a8,param_1);
  VectorMatrixMultiply(__return_storage_ptr__,pTVar2,pTVar1);
  return __return_storage_ptr__;
}

// Concatenate<UE::Math::TMatrix<double>,UE::Math::TRotator<double>_> @ 143043e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMatrix<double> * __cdecl
Concatenate<UE::Math::TMatrix<double>,UE::Math::TRotator<double>_>
          (TMatrix<double> *__return_storage_ptr__,TMatrix<double> *param_1,
          TRotator<double> *param_2)

{
  TMatrix<double> *pTVar1;
  TMatrix<double> *pTVar2;
  undefined1 auStack_148 [32];
  TMatrix<double> local_128;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  pTVar1 = TransformCast<UE::Math::TMatrix<double>,UE::Math::TRotator<double>_>(&local_128,param_2);
  pTVar2 = TransformCast<UE::Math::TMatrix<double>,UE::Math::TMatrix<double>_>(&local_a8,param_1);
  VectorMatrixMultiply(__return_storage_ptr__,pTVar2,pTVar1);
  return __return_storage_ptr__;
}

// Concatenate<UE::Math::TMatrix<double>,UE::Math::TVector<double>_> @ 143043f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMatrix<double> * __cdecl
Concatenate<UE::Math::TMatrix<double>,UE::Math::TVector<double>_>
          (TMatrix<double> *__return_storage_ptr__,TMatrix<double> *param_1,TVector<double> *param_2
          )

{
  TMatrix<double> *pTVar1;
  TMatrix<double> *pTVar2;
  undefined1 auStack_148 [32];
  TMatrix<double> local_128;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  pTVar1 = TransformCast<UE::Math::TMatrix<double>,UE::Math::TVector<double>_>(&local_128,param_2);
  pTVar2 = TransformCast<UE::Math::TMatrix<double>,UE::Math::TMatrix<double>_>(&local_a8,param_1);
  VectorMatrixMultiply(__return_storage_ptr__,pTVar2,pTVar1);
  return __return_storage_ptr__;
}

// Concatenate<UE::Math::TQuat<double>,float> @ 143043f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMatrix<double> * __cdecl
Concatenate<UE::Math::TQuat<double>,float>
          (TMatrix<double> *__return_storage_ptr__,TQuat<double> *param_1,float *param_2)

{
  TMatrix<double> *pTVar1;
  TMatrix<double> *pTVar2;
  undefined1 auStack_148 [32];
  TMatrix<double> local_128;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  pTVar1 = TransformCast<UE::Math::TMatrix<double>,float>(&local_128,param_2);
  pTVar2 = TransformCast<UE::Math::TMatrix<double>,UE::Math::TQuat<double>_>(&local_a8,param_1);
  VectorMatrixMultiply(__return_storage_ptr__,pTVar2,pTVar1);
  return __return_storage_ptr__;
}

// Concatenate<UE::Math::TQuat<double>,UE::Math::TMatrix<double>_> @ 143044000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMatrix<double> * __cdecl
Concatenate<UE::Math::TQuat<double>,UE::Math::TMatrix<double>_>
          (TMatrix<double> *__return_storage_ptr__,TQuat<double> *param_1,TMatrix<double> *param_2)

{
  TMatrix<double> *pTVar1;
  TMatrix<double> *pTVar2;
  undefined1 auStack_148 [32];
  TMatrix<double> local_128;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  pTVar1 = TransformCast<UE::Math::TMatrix<double>,UE::Math::TMatrix<double>_>(&local_128,param_2);
  pTVar2 = TransformCast<UE::Math::TMatrix<double>,UE::Math::TQuat<double>_>(&local_a8,param_1);
  VectorMatrixMultiply(__return_storage_ptr__,pTVar2,pTVar1);
  return __return_storage_ptr__;
}

// Concatenate<UE::Math::TQuat<double>,UE::Math::TRotator<double>_> @ 143044080

TQuat<double> * __cdecl
Concatenate<UE::Math::TQuat<double>,UE::Math::TRotator<double>_>
          (TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1,TRotator<double> *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  TQuat<double> *pTVar14;
  TQuat<double> *pTVar15;
  TQuat<double> local_78 [3];
  
  pTVar14 = TransformCast<UE::Math::TQuat<double>,UE::Math::TRotator<double>_>(local_78,param_2);
  pTVar15 = TransformCast<UE::Math::TQuat<double>,UE::Math::TQuat<double>_>(param_1);
  dVar3 = pTVar14->X;
  dVar7 = pTVar14->Y;
  dVar8 = pTVar14->Z;
  dVar9 = pTVar14->W;
  dVar10 = pTVar15->X;
  dVar11 = pTVar15->Y;
  dVar12 = pTVar15->Z;
  dVar13 = pTVar15->W;
  dVar5 = dVar3 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          dVar9 * dVar12 +
          dVar7 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar8 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar6 = dVar3 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar9 * dVar13 +
          dVar7 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar8 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar2 = dVar3 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          dVar9 * dVar10 +
          dVar7 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar8 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar3 = dVar3 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar9 * dVar11 +
          dVar7 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar8 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  __return_storage_ptr__->X = dVar2;
  __return_storage_ptr__->Y = (double)auVar1._8_8_;
  auVar4._8_4_ = SUB84(dVar6,0);
  auVar4._0_8_ = dVar5;
  auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  __return_storage_ptr__->Z = dVar5;
  __return_storage_ptr__->W = (double)auVar4._8_8_;
  return __return_storage_ptr__;
}

// Concatenate<UE::Math::TQuat<double>,UE::Math::TVector<double>_> @ 1430441d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMatrix<double> * __cdecl
Concatenate<UE::Math::TQuat<double>,UE::Math::TVector<double>_>
          (TMatrix<double> *__return_storage_ptr__,TQuat<double> *param_1,TVector<double> *param_2)

{
  TMatrix<double> *pTVar1;
  TMatrix<double> *pTVar2;
  undefined1 auStack_148 [32];
  TMatrix<double> local_128;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  pTVar1 = TransformCast<UE::Math::TMatrix<double>,UE::Math::TVector<double>_>(&local_128,param_2);
  pTVar2 = TransformCast<UE::Math::TMatrix<double>,UE::Math::TQuat<double>_>(&local_a8,param_1);
  VectorMatrixMultiply(__return_storage_ptr__,pTVar2,pTVar1);
  return __return_storage_ptr__;
}

// Concatenate<UE::Math::TRotator<double>,float> @ 143044250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMatrix<double> * __cdecl
Concatenate<UE::Math::TRotator<double>,float>
          (TMatrix<double> *__return_storage_ptr__,TRotator<double> *param_1,float *param_2)

{
  TMatrix<double> *pTVar1;
  TMatrix<double> *pTVar2;
  undefined1 auStack_148 [32];
  TMatrix<double> local_128;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  pTVar1 = TransformCast<UE::Math::TMatrix<double>,float>(&local_128,param_2);
  pTVar2 = TransformCast<UE::Math::TMatrix<double>,UE::Math::TRotator<double>_>(&local_a8,param_1);
  VectorMatrixMultiply(__return_storage_ptr__,pTVar2,pTVar1);
  return __return_storage_ptr__;
}

// Concatenate<UE::Math::TRotator<double>,UE::Math::TMatrix<double>_> @ 1430442d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMatrix<double> * __cdecl
Concatenate<UE::Math::TRotator<double>,UE::Math::TMatrix<double>_>
          (TMatrix<double> *__return_storage_ptr__,TRotator<double> *param_1,
          TMatrix<double> *param_2)

{
  TMatrix<double> *pTVar1;
  TMatrix<double> *pTVar2;
  undefined1 auStack_148 [32];
  TMatrix<double> local_128;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  pTVar1 = TransformCast<UE::Math::TMatrix<double>,UE::Math::TMatrix<double>_>(&local_128,param_2);
  pTVar2 = TransformCast<UE::Math::TMatrix<double>,UE::Math::TRotator<double>_>(&local_a8,param_1);
  VectorMatrixMultiply(__return_storage_ptr__,pTVar2,pTVar1);
  return __return_storage_ptr__;
}

// Concatenate<UE::Math::TRotator<double>,UE::Math::TQuat<double>_> @ 143044350

TQuat<double> * __cdecl
Concatenate<UE::Math::TRotator<double>,UE::Math::TQuat<double>_>
          (TQuat<double> *__return_storage_ptr__,TRotator<double> *param_1,TQuat<double> *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  TQuat<double> *pTVar14;
  TQuat<double> *pTVar15;
  TQuat<double> local_78 [3];
  
  pTVar14 = TransformCast<UE::Math::TQuat<double>,UE::Math::TQuat<double>_>(param_2);
  pTVar15 = TransformCast<UE::Math::TQuat<double>,UE::Math::TRotator<double>_>(local_78,param_1);
  dVar3 = pTVar14->X;
  dVar7 = pTVar14->Y;
  dVar8 = pTVar14->Z;
  dVar9 = pTVar14->W;
  dVar10 = pTVar15->X;
  dVar11 = pTVar15->Y;
  dVar12 = pTVar15->Z;
  dVar13 = pTVar15->W;
  dVar5 = dVar3 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          dVar9 * dVar12 +
          dVar7 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar8 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar6 = dVar3 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar9 * dVar13 +
          dVar7 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar8 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar2 = dVar3 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          dVar9 * dVar10 +
          dVar7 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar8 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar3 = dVar3 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar9 * dVar11 +
          dVar7 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          dVar8 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  __return_storage_ptr__->X = dVar2;
  __return_storage_ptr__->Y = (double)auVar1._8_8_;
  auVar4._8_4_ = SUB84(dVar6,0);
  auVar4._0_8_ = dVar5;
  auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  __return_storage_ptr__->Z = dVar5;
  __return_storage_ptr__->W = (double)auVar4._8_8_;
  return __return_storage_ptr__;
}

// Concatenate<UE::Math::TRotator<double>,UE::Math::TVector<double>_> @ 1430444a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMatrix<double> * __cdecl
Concatenate<UE::Math::TRotator<double>,UE::Math::TVector<double>_>
          (TMatrix<double> *__return_storage_ptr__,TRotator<double> *param_1,
          TVector<double> *param_2)

{
  TMatrix<double> *pTVar1;
  TMatrix<double> *pTVar2;
  undefined1 auStack_148 [32];
  TMatrix<double> local_128;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  pTVar1 = TransformCast<UE::Math::TMatrix<double>,UE::Math::TVector<double>_>(&local_128,param_2);
  pTVar2 = TransformCast<UE::Math::TMatrix<double>,UE::Math::TRotator<double>_>(&local_a8,param_1);
  VectorMatrixMultiply(__return_storage_ptr__,pTVar2,pTVar1);
  return __return_storage_ptr__;
}

// Concatenate<UE::Math::TVector2<double>,FSlateLayoutTransform> @ 143044520

FSlateLayoutTransform * __cdecl
Concatenate<UE::Math::TVector2<double>,FSlateLayoutTransform>
          (FSlateLayoutTransform *__return_storage_ptr__,TVector2<double> *param_1,
          FSlateLayoutTransform *param_2)

{
  float fVar1;
  float fVar2;
  TVector2<float>_u_0_s_0 TVar3;
  TVector2<float>_u_0 TVar4;
  FSlateLayoutTransform *pFVar5;
  FSlateLayoutTransform *pFVar6;
  float local_res8;
  float fStackX_c;
  FSlateLayoutTransform local_18;
  
  pFVar5 = TransformCast<FSlateLayoutTransform,FSlateLayoutTransform>(param_2);
  pFVar6 = TransformCast<FSlateLayoutTransform,UE::Math::TVector2<double>_>(&local_18,param_1);
  fVar1 = pFVar5->Scale;
  TVar3 = (pFVar6->Translation).field0_0x0._s_0;
  local_res8 = TVar3.X;
  fStackX_c = TVar3.Y;
  fVar2 = (pFVar5->Translation).field0_0x0._s_0.X;
  __return_storage_ptr__->Scale = fVar1 * pFVar6->Scale;
  TVar4._s_0.Y = fVar1 * fStackX_c + (pFVar5->Translation).field0_0x0._s_0.Y;
  TVar4._s_0.X = fVar1 * local_res8 + fVar2;
  (__return_storage_ptr__->Translation).field0_0x0 = TVar4;
  return __return_storage_ptr__;
}

// Concatenate<UE::Math::TVector<double>,float> @ 1430445b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMatrix<double> * __cdecl
Concatenate<UE::Math::TVector<double>,float>
          (TMatrix<double> *__return_storage_ptr__,TVector<double> *param_1,float *param_2)

{
  TMatrix<double> *pTVar1;
  TMatrix<double> *pTVar2;
  undefined1 auStack_148 [32];
  TMatrix<double> local_128;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  pTVar1 = TransformCast<UE::Math::TMatrix<double>,float>(&local_128,param_2);
  pTVar2 = TransformCast<UE::Math::TMatrix<double>,UE::Math::TVector<double>_>(&local_a8,param_1);
  VectorMatrixMultiply(__return_storage_ptr__,pTVar2,pTVar1);
  return __return_storage_ptr__;
}

// Concatenate<UE::Math::TVector<double>,UE::Math::TMatrix<double>_> @ 143044630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMatrix<double> * __cdecl
Concatenate<UE::Math::TVector<double>,UE::Math::TMatrix<double>_>
          (TMatrix<double> *__return_storage_ptr__,TVector<double> *param_1,TMatrix<double> *param_2
          )

{
  TMatrix<double> *pTVar1;
  TMatrix<double> *pTVar2;
  undefined1 auStack_148 [32];
  TMatrix<double> local_128;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  pTVar1 = TransformCast<UE::Math::TMatrix<double>,UE::Math::TMatrix<double>_>(&local_128,param_2);
  pTVar2 = TransformCast<UE::Math::TMatrix<double>,UE::Math::TVector<double>_>(&local_a8,param_1);
  VectorMatrixMultiply(__return_storage_ptr__,pTVar2,pTVar1);
  return __return_storage_ptr__;
}

// Concatenate<UE::Math::TVector<double>,UE::Math::TQuat<double>_> @ 1430446b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMatrix<double> * __cdecl
Concatenate<UE::Math::TVector<double>,UE::Math::TQuat<double>_>
          (TMatrix<double> *__return_storage_ptr__,TVector<double> *param_1,TQuat<double> *param_2)

{
  TMatrix<double> *pTVar1;
  TMatrix<double> *pTVar2;
  undefined1 auStack_148 [32];
  TMatrix<double> local_128;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  pTVar1 = TransformCast<UE::Math::TMatrix<double>,UE::Math::TQuat<double>_>(&local_128,param_2);
  pTVar2 = TransformCast<UE::Math::TMatrix<double>,UE::Math::TVector<double>_>(&local_a8,param_1);
  VectorMatrixMultiply(__return_storage_ptr__,pTVar2,pTVar1);
  return __return_storage_ptr__;
}

// Concatenate<UE::Math::TVector<double>,UE::Math::TRotator<double>_> @ 143044730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TMatrix<double> * __cdecl
Concatenate<UE::Math::TVector<double>,UE::Math::TRotator<double>_>
          (TMatrix<double> *__return_storage_ptr__,TVector<double> *param_1,
          TRotator<double> *param_2)

{
  TMatrix<double> *pTVar1;
  TMatrix<double> *pTVar2;
  undefined1 auStack_148 [32];
  TMatrix<double> local_128;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  pTVar1 = TransformCast<UE::Math::TMatrix<double>,UE::Math::TRotator<double>_>(&local_128,param_2);
  pTVar2 = TransformCast<UE::Math::TMatrix<double>,UE::Math::TVector<double>_>(&local_a8,param_1);
  VectorMatrixMultiply(__return_storage_ptr__,pTVar2,pTVar1);
  return __return_storage_ptr__;
}

// Concatenate<TMatrix2x2<float>_> @ 1430447b0

TMatrix2x2<float> * __cdecl
Concatenate<TMatrix2x2<float>_>
          (TMatrix2x2<float> *__return_storage_ptr__,TMatrix2x2<float> *param_1,
          TMatrix2x2<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = param_2->M[1][0];
  fVar2 = param_2->M[0][0];
  fVar3 = param_1->M[1][0];
  fVar4 = param_1->M[1][1];
  fVar5 = param_2->M[1][1];
  fVar6 = param_2->M[0][1];
  fVar7 = param_1->M[1][1];
  fVar8 = param_1->M[1][0];
  fVar9 = param_1->M[0][0];
  fVar10 = param_1->M[0][1];
  __return_storage_ptr__->M[0][0] = fVar1 * param_1->M[0][1] + fVar2 * param_1->M[0][0];
  __return_storage_ptr__->M[1][1] = fVar5 * fVar7 + fVar6 * fVar8;
  __return_storage_ptr__->M[1][0] = fVar1 * fVar4 + fVar2 * fVar3;
  __return_storage_ptr__->M[0][1] = fVar5 * fVar10 + fVar6 * fVar9;
  return __return_storage_ptr__;
}

// Concatenate<TMatrix2x2<float>,TQuat2<float>_> @ 143044860

TMatrix2x2<float> * __cdecl
Concatenate<TMatrix2x2<float>,TQuat2<float>_>
          (TMatrix2x2<float> *__return_storage_ptr__,TMatrix2x2<float> *param_1,
          TQuat2<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  TMatrix2x2<float> *pTVar7;
  float fVar8;
  
  fVar1 = (param_2->Rot).field0_0x0._s_0.Y;
  fVar8 = (float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000);
  fVar2 = (param_2->Rot).field0_0x0._s_0.X;
  pTVar7 = TransformCast<TMatrix2x2<float>,TMatrix2x2<float>_>(param_1);
  fVar3 = pTVar7->M[0][0];
  fVar4 = pTVar7->M[0][1];
  fVar5 = pTVar7->M[1][0];
  fVar6 = pTVar7->M[1][1];
  __return_storage_ptr__->M[0][0] = fVar4 * fVar8 + fVar3 * fVar2;
  __return_storage_ptr__->M[0][1] = fVar3 * fVar1 + fVar4 * fVar2;
  __return_storage_ptr__->M[1][0] = fVar6 * fVar8 + fVar5 * fVar2;
  __return_storage_ptr__->M[1][1] = fVar5 * fVar1 + fVar6 * fVar2;
  return __return_storage_ptr__;
}

// Concatenate<TMatrix2x2<float>,TScale2<float>_> @ 143044920

TMatrix2x2<float> * __cdecl
Concatenate<TMatrix2x2<float>,TScale2<float>_>
          (TMatrix2x2<float> *__return_storage_ptr__,TMatrix2x2<float> *param_1,
          TScale2<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  TMatrix2x2<float> *pTVar6;
  
  fVar1 = (param_2->Scale).field0_0x0._s_0.X;
  fVar2 = (param_2->Scale).field0_0x0._s_0.Y;
  pTVar6 = TransformCast<TMatrix2x2<float>,TMatrix2x2<float>_>(param_1);
  fVar3 = pTVar6->M[1][0];
  fVar4 = pTVar6->M[1][1];
  fVar5 = pTVar6->M[0][0];
  __return_storage_ptr__->M[0][1] = pTVar6->M[0][1] * fVar2;
  __return_storage_ptr__->M[1][0] = fVar3 * fVar1;
  __return_storage_ptr__->M[1][1] = fVar4 * fVar2;
  __return_storage_ptr__->M[0][0] = fVar1 * fVar5;
  return __return_storage_ptr__;
}

// Concatenate<TMatrix2x2<float>,TShear2<float>_> @ 1430449a0

TMatrix2x2<float> * __cdecl
Concatenate<TMatrix2x2<float>,TShear2<float>_>
          (TMatrix2x2<float> *__return_storage_ptr__,TMatrix2x2<float> *param_1,
          TShear2<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  TMatrix2x2<float> *pTVar7;
  
  fVar1 = (param_2->Shear).field0_0x0._s_0.X;
  fVar2 = (param_2->Shear).field0_0x0._s_0.Y;
  pTVar7 = TransformCast<TMatrix2x2<float>,TMatrix2x2<float>_>(param_1);
  fVar3 = pTVar7->M[0][1];
  fVar4 = pTVar7->M[0][0];
  fVar5 = pTVar7->M[1][0];
  fVar6 = pTVar7->M[1][1];
  __return_storage_ptr__->M[0][0] = fVar3 * fVar1 + fVar4;
  __return_storage_ptr__->M[0][1] = fVar4 * fVar2 + fVar3;
  __return_storage_ptr__->M[1][0] = fVar6 * fVar1 + fVar5;
  __return_storage_ptr__->M[1][1] = fVar5 * fVar2 + fVar6;
  return __return_storage_ptr__;
}

// Concatenate<TMatrix2x2<float>,TTransform2<float>_> @ 143044a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform2<float> * __cdecl
Concatenate<TMatrix2x2<float>,TTransform2<float>_>
          (TTransform2<float> *__return_storage_ptr__,TMatrix2x2<float> *param_1,
          TTransform2<float> *param_2)

{
  TTransform2<float> *pTVar1;
  undefined1 auStack_48 [32];
  TTransform2<float> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  pTVar1 = TransformCast<TTransform2<float>,TMatrix2x2<float>_>(&local_28,param_1);
  Concatenate<TTransform2<float>_>(__return_storage_ptr__,pTVar1,param_2);
  return __return_storage_ptr__;
}

// Concatenate<TMatrix2x2<float>,FSlateLayoutTransform> @ 143044a90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform2<float> * __cdecl
Concatenate<TMatrix2x2<float>,FSlateLayoutTransform>
          (TTransform2<float> *__return_storage_ptr__,TMatrix2x2<float> *param_1,
          FSlateLayoutTransform *param_2)

{
  TTransform2<float> *pTVar1;
  undefined1 auStack_68 [32];
  TTransform2<float> local_48;
  TTransform2<float> local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48.M.M[0][0] = param_2->Scale;
  local_48.Trans.field0_0x0 = (param_2->Translation).field0_0x0;
  local_48.M.M[0][1] = 0.0;
  local_48.M.M[1][0] = 0.0;
  local_48.M.M[1][1] = local_48.M.M[0][0];
  pTVar1 = TransformCast<TTransform2<float>,TMatrix2x2<float>_>(&local_30,param_1);
  Concatenate<TTransform2<float>_>(__return_storage_ptr__,pTVar1,&local_48);
  return __return_storage_ptr__;
}

// Concatenate<TQuat2<float>_> @ 143044b10

TQuat2<float> __cdecl Concatenate<TQuat2<float>_>(TQuat2<float> *param_1,TQuat2<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_R8;
  
  fVar1 = (param_2->Rot).field0_0x0._s_0.Y;
  fVar2 = (param_2->Rot).field0_0x0._s_0.X;
  fVar3 = *in_R8;
  fVar4 = in_R8[1];
  (param_1->Rot).field0_0x0._s_0.X = fVar2 * fVar3 - fVar1 * fVar4;
  (param_1->Rot).field0_0x0._s_0.Y = fVar2 * fVar4 + fVar1 * fVar3;
  return (TQuat2<float>)(TVector2<float>)param_1;
}

// Concatenate<TQuat2<float>,TMatrix2x2<float>_> @ 143044b70

TMatrix2x2<float> * __cdecl
Concatenate<TQuat2<float>,TMatrix2x2<float>_>
          (TMatrix2x2<float> *__return_storage_ptr__,TQuat2<float> *param_1,
          TMatrix2x2<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  TMatrix2x2<float> *pTVar7;
  float fVar8;
  
  pTVar7 = TransformCast<TMatrix2x2<float>,TMatrix2x2<float>_>(param_2);
  fVar1 = (param_1->Rot).field0_0x0._s_0.X;
  fVar2 = (param_1->Rot).field0_0x0._s_0.Y;
  fVar3 = pTVar7->M[0][1];
  fVar4 = pTVar7->M[1][1];
  fVar5 = pTVar7->M[0][0];
  fVar6 = pTVar7->M[1][0];
  fVar8 = (float)((uint)fVar2 ^ __xmm_80000000800000008000000080000000);
  __return_storage_ptr__->M[0][0] = fVar6 * fVar2 + fVar5 * fVar1;
  __return_storage_ptr__->M[1][0] = fVar5 * fVar8 + fVar6 * fVar1;
  __return_storage_ptr__->M[1][1] = fVar3 * fVar8 + fVar4 * fVar1;
  __return_storage_ptr__->M[0][1] = fVar4 * fVar2 + fVar3 * fVar1;
  return __return_storage_ptr__;
}

// Concatenate<TQuat2<float>,TScale2<float>_> @ 143044c50

TMatrix2x2<float> * __cdecl
Concatenate<TQuat2<float>,TScale2<float>_>
          (TMatrix2x2<float> *__return_storage_ptr__,TQuat2<float> *param_1,TScale2<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (param_1->Rot).field0_0x0._s_0.Y;
  fVar2 = (param_2->Scale).field0_0x0._s_0.X;
  fVar3 = (param_1->Rot).field0_0x0._s_0.X;
  fVar4 = (param_2->Scale).field0_0x0._s_0.Y;
  __return_storage_ptr__->M[1][0] =
       (float)((uint)(fVar1 * fVar2) ^ __xmm_80000000800000008000000080000000);
  __return_storage_ptr__->M[0][0] = fVar3 * fVar2;
  __return_storage_ptr__->M[0][1] = fVar1 * fVar4;
  __return_storage_ptr__->M[1][1] = fVar3 * fVar4;
  return __return_storage_ptr__;
}

// Concatenate<TQuat2<float>,TShear2<float>_> @ 143044ca0

TMatrix2x2<float> * __cdecl
Concatenate<TQuat2<float>,TShear2<float>_>
          (TMatrix2x2<float> *__return_storage_ptr__,TQuat2<float> *param_1,TShear2<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = (param_1->Rot).field0_0x0._s_0.Y;
  fVar2 = (param_2->Shear).field0_0x0._s_0.X;
  fVar3 = (param_2->Shear).field0_0x0._s_0.Y;
  fVar5 = (float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000);
  fVar4 = (param_1->Rot).field0_0x0._s_0.X;
  __return_storage_ptr__->M[0][0] = fVar1 * fVar2 + fVar4;
  __return_storage_ptr__->M[0][1] = fVar4 * fVar3 + fVar1;
  __return_storage_ptr__->M[1][0] = fVar4 * fVar2 + fVar5;
  __return_storage_ptr__->M[1][1] = fVar5 * fVar3 + fVar4;
  return __return_storage_ptr__;
}

// Concatenate<TQuat2<float>,TTransform2<float>_> @ 143044d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform2<float> * __cdecl
Concatenate<TQuat2<float>,TTransform2<float>_>
          (TTransform2<float> *__return_storage_ptr__,TQuat2<float> *param_1,
          TTransform2<float> *param_2)

{
  TTransform2<float> *pTVar1;
  undefined1 auStack_48 [32];
  TTransform2<float> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  pTVar1 = TransformCast<TTransform2<float>,TQuat2<float>_>(&local_28,param_1);
  Concatenate<TTransform2<float>_>(__return_storage_ptr__,pTVar1,param_2);
  return __return_storage_ptr__;
}

// Concatenate<TQuat2<float>,FSlateLayoutTransform> @ 143044d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform2<float> * __cdecl
Concatenate<TQuat2<float>,FSlateLayoutTransform>
          (TTransform2<float> *__return_storage_ptr__,TQuat2<float> *param_1,
          FSlateLayoutTransform *param_2)

{
  TTransform2<float> *pTVar1;
  undefined1 auStack_68 [32];
  TTransform2<float> local_48;
  TTransform2<float> local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48.M.M[0][0] = param_2->Scale;
  local_48.Trans.field0_0x0 = (param_2->Translation).field0_0x0;
  local_48.M.M[0][1] = 0.0;
  local_48.M.M[1][0] = 0.0;
  local_48.M.M[1][1] = local_48.M.M[0][0];
  pTVar1 = TransformCast<TTransform2<float>,TQuat2<float>_>(&local_30,param_1);
  Concatenate<TTransform2<float>_>(__return_storage_ptr__,pTVar1,&local_48);
  return __return_storage_ptr__;
}

// Concatenate<TScale2<float>_> @ 143044e00

TScale2<float> __cdecl Concatenate<TScale2<float>_>(TScale2<float> *param_1,TScale2<float> *param_2)

{
  TVector2<float>_u_0 TVar1;
  float *in_R8;
  
  TVar1._s_0.Y = (param_2->Scale).field0_0x0._s_0.Y * in_R8[1];
  TVar1._s_0.X = (param_2->Scale).field0_0x0._s_0.X * *in_R8;
  (param_1->Scale).field0_0x0 = TVar1;
  return (TScale2<float>)(TVector2<float>)param_1;
}

// Concatenate<TScale2<float>,float> @ 143044e40

TScale2<float> __cdecl Concatenate<TScale2<float>,float>(TScale2<float> *param_1,float *param_2)

{
  float fVar1;
  TVector2<float>_u_0 TVar2;
  TScale2<float> *pTVar3;
  float *in_R8;
  
  fVar1 = *in_R8;
  pTVar3 = TransformCast<TScale2<float>,TScale2<float>_>((TScale2<float> *)param_2);
  TVar2._s_0.Y = fVar1 * (pTVar3->Scale).field0_0x0._s_0.Y;
  TVar2._s_0.X = fVar1 * (pTVar3->Scale).field0_0x0._s_0.X;
  (param_1->Scale).field0_0x0 = TVar2;
  return (TScale2<float>)(TVector2<float>)param_1;
}

// Concatenate<TScale2<float>,TMatrix2x2<float>_> @ 143044e90

TMatrix2x2<float> * __cdecl
Concatenate<TScale2<float>,TMatrix2x2<float>_>
          (TMatrix2x2<float> *__return_storage_ptr__,TScale2<float> *param_1,
          TMatrix2x2<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  TMatrix2x2<float> *pTVar6;
  
  pTVar6 = TransformCast<TMatrix2x2<float>,TMatrix2x2<float>_>(param_2);
  fVar1 = (param_1->Scale).field0_0x0._s_0.X;
  fVar2 = (param_1->Scale).field0_0x0._s_0.Y;
  fVar3 = pTVar6->M[1][0];
  fVar4 = pTVar6->M[1][1];
  fVar5 = pTVar6->M[0][0];
  __return_storage_ptr__->M[0][1] = pTVar6->M[0][1] * fVar1;
  __return_storage_ptr__->M[1][0] = fVar3 * fVar2;
  __return_storage_ptr__->M[1][1] = fVar4 * fVar2;
  __return_storage_ptr__->M[0][0] = fVar1 * fVar5;
  return __return_storage_ptr__;
}

// Concatenate<TScale2<float>,TQuat2<float>_> @ 143044f00

TMatrix2x2<float> * __cdecl
Concatenate<TScale2<float>,TQuat2<float>_>
          (TMatrix2x2<float> *__return_storage_ptr__,TScale2<float> *param_1,TQuat2<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (param_1->Scale).field0_0x0._s_0.X;
  fVar2 = (param_2->Rot).field0_0x0._s_0.X;
  fVar3 = (param_2->Rot).field0_0x0._s_0.Y;
  fVar4 = (param_1->Scale).field0_0x0._s_0.Y;
  __return_storage_ptr__->M[0][0] = fVar1 * fVar2;
  __return_storage_ptr__->M[1][0] =
       (float)((uint)(fVar4 * fVar3) ^ __xmm_80000000800000008000000080000000);
  __return_storage_ptr__->M[0][1] = fVar1 * fVar3;
  __return_storage_ptr__->M[1][1] = fVar4 * fVar2;
  return __return_storage_ptr__;
}

// Concatenate<TScale2<float>,TShear2<float>_> @ 143044f50

TMatrix2x2<float> * __cdecl
Concatenate<TScale2<float>,TShear2<float>_>
          (TMatrix2x2<float> *__return_storage_ptr__,TScale2<float> *param_1,TShear2<float> *param_2
          )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (param_1->Scale).field0_0x0._s_0.X;
  fVar2 = (param_2->Shear).field0_0x0._s_0.Y;
  fVar3 = (param_2->Shear).field0_0x0._s_0.X;
  fVar4 = (param_1->Scale).field0_0x0._s_0.Y;
  __return_storage_ptr__->M[0][0] = fVar1;
  __return_storage_ptr__->M[1][1] = fVar4;
  __return_storage_ptr__->M[0][1] = fVar1 * fVar2;
  __return_storage_ptr__->M[1][0] = fVar4 * fVar3;
  return __return_storage_ptr__;
}

// Concatenate<TScale2<float>,TTransform2<float>_> @ 143044f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform2<float> * __cdecl
Concatenate<TScale2<float>,TTransform2<float>_>
          (TTransform2<float> *__return_storage_ptr__,TScale2<float> *param_1,
          TTransform2<float> *param_2)

{
  TTransform2<float> *pTVar1;
  undefined1 auStack_48 [32];
  TTransform2<float> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  pTVar1 = TransformCast<TTransform2<float>,TScale2<float>_>(&local_28,param_1);
  Concatenate<TTransform2<float>_>(__return_storage_ptr__,pTVar1,param_2);
  return __return_storage_ptr__;
}

// Concatenate<TScale2<float>,FSlateLayoutTransform> @ 143044ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform2<float> * __cdecl
Concatenate<TScale2<float>,FSlateLayoutTransform>
          (TTransform2<float> *__return_storage_ptr__,TScale2<float> *param_1,
          FSlateLayoutTransform *param_2)

{
  TTransform2<float> *pTVar1;
  undefined1 auStack_68 [32];
  TTransform2<float> local_48;
  TTransform2<float> local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48.M.M[0][0] = param_2->Scale;
  local_48.Trans.field0_0x0 = (param_2->Translation).field0_0x0;
  local_48.M.M[0][1] = 0.0;
  local_48.M.M[1][0] = 0.0;
  local_48.M.M[1][1] = local_48.M.M[0][0];
  pTVar1 = TransformCast<TTransform2<float>,TScale2<float>_>(&local_30,param_1);
  Concatenate<TTransform2<float>_>(__return_storage_ptr__,pTVar1,&local_48);
  return __return_storage_ptr__;
}

// Concatenate<TShear2<float>_> @ 143045070

TMatrix2x2<float> * __cdecl
Concatenate<TShear2<float>_>
          (TMatrix2x2<float> *__return_storage_ptr__,TShear2<float> *param_1,TShear2<float> *param_2
          )

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (param_2->Shear).field0_0x0._s_0.X;
  fVar3 = (param_1->Shear).field0_0x0._s_0.Y;
  fVar2 = fVar1 * fVar3 + __real_3f800000;
  __return_storage_ptr__->M[0][1] = fVar3 * (param_2->Shear).field0_0x0._s_0.Y;
  __return_storage_ptr__->M[0][0] = fVar2;
  fVar3 = fVar1 * (param_1->Shear).field0_0x0._s_0.X + __real_3f800000;
  __return_storage_ptr__->M[1][0] = fVar1 + (param_1->Shear).field0_0x0._s_0.X;
  __return_storage_ptr__->M[1][1] = fVar3;
  return __return_storage_ptr__;
}

// Concatenate<TShear2<float>,TMatrix2x2<float>_> @ 1430450c0

TMatrix2x2<float> * __cdecl
Concatenate<TShear2<float>,TMatrix2x2<float>_>
          (TMatrix2x2<float> *__return_storage_ptr__,TShear2<float> *param_1,
          TMatrix2x2<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  TMatrix2x2<float> *pTVar7;
  
  pTVar7 = TransformCast<TMatrix2x2<float>,TMatrix2x2<float>_>(param_2);
  fVar1 = (param_1->Shear).field0_0x0._s_0.X;
  fVar2 = (param_1->Shear).field0_0x0._s_0.Y;
  fVar3 = pTVar7->M[0][1];
  fVar4 = pTVar7->M[1][1];
  fVar5 = pTVar7->M[1][0];
  fVar6 = pTVar7->M[0][0];
  __return_storage_ptr__->M[0][1] = fVar4 * fVar2 + fVar3;
  __return_storage_ptr__->M[0][0] = fVar5 * fVar2 + fVar6;
  __return_storage_ptr__->M[1][1] = fVar3 * fVar1 + fVar4;
  __return_storage_ptr__->M[1][0] = fVar6 * fVar1 + fVar5;
  return __return_storage_ptr__;
}

// Concatenate<TShear2<float>,TQuat2<float>_> @ 143045160

TMatrix2x2<float> * __cdecl
Concatenate<TShear2<float>,TQuat2<float>_>
          (TMatrix2x2<float> *__return_storage_ptr__,TShear2<float> *param_1,TQuat2<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = (param_2->Rot).field0_0x0._s_0.X;
  fVar2 = (param_2->Rot).field0_0x0._s_0.Y;
  fVar3 = (param_1->Shear).field0_0x0._s_0.Y;
  fVar4 = (param_1->Shear).field0_0x0._s_0.X;
  fVar5 = (float)((uint)fVar2 ^ __xmm_80000000800000008000000080000000);
  __return_storage_ptr__->M[0][0] = fVar5 * fVar3 + fVar1;
  __return_storage_ptr__->M[0][1] = fVar3 * fVar1 + fVar2;
  __return_storage_ptr__->M[1][0] = fVar4 * fVar1 + fVar5;
  __return_storage_ptr__->M[1][1] = fVar4 * fVar2 + fVar1;
  return __return_storage_ptr__;
}

// Concatenate<TShear2<float>,TScale2<float>_> @ 1430451d0

TMatrix2x2<float> * __cdecl
Concatenate<TShear2<float>,TScale2<float>_>
          (TMatrix2x2<float> *__return_storage_ptr__,TShear2<float> *param_1,TScale2<float> *param_2
          )

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (param_2->Scale).field0_0x0._s_0.X;
  fVar2 = (param_2->Scale).field0_0x0._s_0.Y;
  fVar3 = (param_1->Shear).field0_0x0._s_0.X;
  __return_storage_ptr__->M[0][1] = (param_1->Shear).field0_0x0._s_0.Y * fVar2;
  __return_storage_ptr__->M[0][0] = fVar1;
  __return_storage_ptr__->M[1][0] = fVar3 * fVar1;
  __return_storage_ptr__->M[1][1] = fVar2;
  return __return_storage_ptr__;
}

// Concatenate<TShear2<float>,TTransform2<float>_> @ 143045210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform2<float> * __cdecl
Concatenate<TShear2<float>,TTransform2<float>_>
          (TTransform2<float> *__return_storage_ptr__,TShear2<float> *param_1,
          TTransform2<float> *param_2)

{
  TTransform2<float> *pTVar1;
  undefined1 auStack_48 [32];
  TTransform2<float> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  pTVar1 = TransformCast<TTransform2<float>,TShear2<float>_>(&local_28,param_1);
  Concatenate<TTransform2<float>_>(__return_storage_ptr__,pTVar1,param_2);
  return __return_storage_ptr__;
}

// Concatenate<TShear2<float>,FSlateLayoutTransform> @ 143045270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform2<float> * __cdecl
Concatenate<TShear2<float>,FSlateLayoutTransform>
          (TTransform2<float> *__return_storage_ptr__,TShear2<float> *param_1,
          FSlateLayoutTransform *param_2)

{
  TTransform2<float> *pTVar1;
  undefined1 auStack_68 [32];
  TTransform2<float> local_48;
  TTransform2<float> local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48.M.M[0][0] = param_2->Scale;
  local_48.Trans.field0_0x0 = (param_2->Translation).field0_0x0;
  local_48.M.M[0][1] = 0.0;
  local_48.M.M[1][0] = 0.0;
  local_48.M.M[1][1] = local_48.M.M[0][0];
  pTVar1 = TransformCast<TTransform2<float>,TShear2<float>_>(&local_30,param_1);
  Concatenate<TTransform2<float>_>(__return_storage_ptr__,pTVar1,&local_48);
  return __return_storage_ptr__;
}

// Concatenate<TTransform2<float>,TMatrix2x2<float>_> @ 1430452f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform2<float> * __cdecl
Concatenate<TTransform2<float>,TMatrix2x2<float>_>
          (TTransform2<float> *__return_storage_ptr__,TTransform2<float> *param_1,
          TMatrix2x2<float> *param_2)

{
  TTransform2<float> *pTVar1;
  undefined1 auStack_48 [32];
  TTransform2<float> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  pTVar1 = TransformCast<TTransform2<float>,TMatrix2x2<float>_>(&local_28,param_2);
  Concatenate<TTransform2<float>_>(__return_storage_ptr__,param_1,pTVar1);
  return __return_storage_ptr__;
}

// Concatenate<TTransform2<float>,TQuat2<float>_> @ 143045350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform2<float> * __cdecl
Concatenate<TTransform2<float>,TQuat2<float>_>
          (TTransform2<float> *__return_storage_ptr__,TTransform2<float> *param_1,
          TQuat2<float> *param_2)

{
  TTransform2<float> *pTVar1;
  undefined1 auStack_48 [32];
  TTransform2<float> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  pTVar1 = TransformCast<TTransform2<float>,TQuat2<float>_>(&local_28,param_2);
  Concatenate<TTransform2<float>_>(__return_storage_ptr__,param_1,pTVar1);
  return __return_storage_ptr__;
}

// Concatenate<TTransform2<float>,TScale2<float>_> @ 1430453b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform2<float> * __cdecl
Concatenate<TTransform2<float>,TScale2<float>_>
          (TTransform2<float> *__return_storage_ptr__,TTransform2<float> *param_1,
          TScale2<float> *param_2)

{
  TTransform2<float> *pTVar1;
  undefined1 auStack_48 [32];
  TTransform2<float> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  pTVar1 = TransformCast<TTransform2<float>,TScale2<float>_>(&local_28,param_2);
  Concatenate<TTransform2<float>_>(__return_storage_ptr__,param_1,pTVar1);
  return __return_storage_ptr__;
}

// Concatenate<TTransform2<float>,TShear2<float>_> @ 143045410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform2<float> * __cdecl
Concatenate<TTransform2<float>,TShear2<float>_>
          (TTransform2<float> *__return_storage_ptr__,TTransform2<float> *param_1,
          TShear2<float> *param_2)

{
  TTransform2<float> *pTVar1;
  undefined1 auStack_48 [32];
  TTransform2<float> local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  pTVar1 = TransformCast<TTransform2<float>,TShear2<float>_>(&local_28,param_2);
  Concatenate<TTransform2<float>_>(__return_storage_ptr__,param_1,pTVar1);
  return __return_storage_ptr__;
}

// Concatenate<TTransform2<float>,FSlateLayoutTransform> @ 143045470

TTransform2<float> * __cdecl
Concatenate<TTransform2<float>,FSlateLayoutTransform>
          (TTransform2<float> *__return_storage_ptr__,TTransform2<float> *param_1,
          FSlateLayoutTransform *param_2)

{
  TTransform2<float> local_28;
  
  local_28.M.M[0][0] = param_2->Scale;
  local_28.Trans.field0_0x0 = (param_2->Translation).field0_0x0;
  local_28.M.M[0][1] = 0.0;
  local_28.M.M[1][0] = 0.0;
  local_28.M.M[1][1] = local_28.M.M[0][0];
  Concatenate<TTransform2<float>_>(__return_storage_ptr__,param_1,&local_28);
  return __return_storage_ptr__;
}

// Concatenate<FSlateLayoutTransform> @ 1430454c0

FSlateLayoutTransform * __cdecl
Concatenate<FSlateLayoutTransform>
          (FSlateLayoutTransform *__return_storage_ptr__,FSlateLayoutTransform *param_1,
          FSlateLayoutTransform *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  TVector2<float>_u_0_s_0 TVar4;
  TVector2<float>_u_0 TVar5;
  float local_res8;
  float fStackX_c;
  
  fVar1 = param_2->Scale;
  TVar4 = (param_1->Translation).field0_0x0._s_0;
  local_res8 = TVar4.X;
  fStackX_c = TVar4.Y;
  fVar2 = (param_2->Translation).field0_0x0._s_0.X;
  fVar3 = (param_2->Translation).field0_0x0._s_0.Y;
  __return_storage_ptr__->Scale = fVar1 * param_1->Scale;
  TVar5._s_0.Y = fVar1 * fStackX_c + fVar3;
  TVar5._s_0.X = fVar1 * local_res8 + fVar2;
  (__return_storage_ptr__->Translation).field0_0x0 = TVar5;
  return __return_storage_ptr__;
}

// Concatenate<FSlateLayoutTransform,float> @ 143045520

FSlateLayoutTransform * __cdecl
Concatenate<FSlateLayoutTransform,float>
          (FSlateLayoutTransform *__return_storage_ptr__,FSlateLayoutTransform *param_1,
          float *param_2)

{
  float fVar1;
  float fVar2;
  TVector2<float>_u_0_s_0 TVar3;
  TVector2<float>_u_0 TVar4;
  FSlateLayoutTransform *pFVar5;
  FSlateLayoutTransform *pFVar6;
  float local_res8;
  float fStackX_c;
  FSlateLayoutTransform local_18;
  
  pFVar5 = TransformCast<FSlateLayoutTransform,float>(&local_18,param_2);
  pFVar6 = TransformCast<FSlateLayoutTransform,FSlateLayoutTransform>(param_1);
  fVar1 = pFVar5->Scale;
  TVar3 = (pFVar6->Translation).field0_0x0._s_0;
  local_res8 = TVar3.X;
  fStackX_c = TVar3.Y;
  fVar2 = (pFVar5->Translation).field0_0x0._s_0.X;
  __return_storage_ptr__->Scale = fVar1 * pFVar6->Scale;
  TVar4._s_0.Y = fVar1 * fStackX_c + (pFVar5->Translation).field0_0x0._s_0.Y;
  TVar4._s_0.X = fVar1 * local_res8 + fVar2;
  (__return_storage_ptr__->Translation).field0_0x0 = TVar4;
  return __return_storage_ptr__;
}

// Concatenate<FSlateLayoutTransform,UE::Math::TVector2<double>_> @ 1430455b0

FSlateLayoutTransform * __cdecl
Concatenate<FSlateLayoutTransform,UE::Math::TVector2<double>_>
          (FSlateLayoutTransform *__return_storage_ptr__,FSlateLayoutTransform *param_1,
          TVector2<double> *param_2)

{
  float fVar1;
  float fVar2;
  TVector2<float>_u_0_s_0 TVar3;
  TVector2<float>_u_0 TVar4;
  FSlateLayoutTransform *pFVar5;
  FSlateLayoutTransform *pFVar6;
  float local_res8;
  float fStackX_c;
  FSlateLayoutTransform local_18;
  
  pFVar5 = TransformCast<FSlateLayoutTransform,UE::Math::TVector2<double>_>(&local_18,param_2);
  pFVar6 = TransformCast<FSlateLayoutTransform,FSlateLayoutTransform>(param_1);
  fVar1 = pFVar5->Scale;
  TVar3 = (pFVar6->Translation).field0_0x0._s_0;
  local_res8 = TVar3.X;
  fStackX_c = TVar3.Y;
  fVar2 = (pFVar5->Translation).field0_0x0._s_0.X;
  __return_storage_ptr__->Scale = fVar1 * pFVar6->Scale;
  TVar4._s_0.Y = fVar1 * fStackX_c + (pFVar5->Translation).field0_0x0._s_0.Y;
  TVar4._s_0.X = fVar1 * local_res8 + fVar2;
  (__return_storage_ptr__->Translation).field0_0x0 = TVar4;
  return __return_storage_ptr__;
}

// Concatenate<FSlateLayoutTransform,TMatrix2x2<float>_> @ 143045640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform2<float> * __cdecl
Concatenate<FSlateLayoutTransform,TMatrix2x2<float>_>
          (TTransform2<float> *__return_storage_ptr__,FSlateLayoutTransform *param_1,
          TMatrix2x2<float> *param_2)

{
  TTransform2<float> *pTVar1;
  undefined1 auStack_68 [32];
  TTransform2<float> local_48;
  TTransform2<float> local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  pTVar1 = TransformCast<TTransform2<float>,TMatrix2x2<float>_>(&local_30,param_2);
  local_48.Trans.field0_0x0 = (param_1->Translation).field0_0x0;
  local_48.M.M[0][0] = param_1->Scale;
  local_48.M.M[0][1] = 0.0;
  local_48.M.M[1][0] = 0.0;
  local_48.M.M[1][1] = local_48.M.M[0][0];
  Concatenate<TTransform2<float>_>(__return_storage_ptr__,&local_48,pTVar1);
  return __return_storage_ptr__;
}

// Concatenate<FSlateLayoutTransform,TQuat2<float>_> @ 1430456c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform2<float> * __cdecl
Concatenate<FSlateLayoutTransform,TQuat2<float>_>
          (TTransform2<float> *__return_storage_ptr__,FSlateLayoutTransform *param_1,
          TQuat2<float> *param_2)

{
  TTransform2<float> *pTVar1;
  undefined1 auStack_68 [32];
  TTransform2<float> local_48;
  TTransform2<float> local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  pTVar1 = TransformCast<TTransform2<float>,TQuat2<float>_>(&local_30,param_2);
  local_48.Trans.field0_0x0 = (param_1->Translation).field0_0x0;
  local_48.M.M[0][0] = param_1->Scale;
  local_48.M.M[0][1] = 0.0;
  local_48.M.M[1][0] = 0.0;
  local_48.M.M[1][1] = local_48.M.M[0][0];
  Concatenate<TTransform2<float>_>(__return_storage_ptr__,&local_48,pTVar1);
  return __return_storage_ptr__;
}

// Concatenate<FSlateLayoutTransform,TScale2<float>_> @ 143045740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform2<float> * __cdecl
Concatenate<FSlateLayoutTransform,TScale2<float>_>
          (TTransform2<float> *__return_storage_ptr__,FSlateLayoutTransform *param_1,
          TScale2<float> *param_2)

{
  TTransform2<float> *pTVar1;
  undefined1 auStack_68 [32];
  TTransform2<float> local_48;
  TTransform2<float> local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  pTVar1 = TransformCast<TTransform2<float>,TScale2<float>_>(&local_30,param_2);
  local_48.Trans.field0_0x0 = (param_1->Translation).field0_0x0;
  local_48.M.M[0][0] = param_1->Scale;
  local_48.M.M[0][1] = 0.0;
  local_48.M.M[1][0] = 0.0;
  local_48.M.M[1][1] = local_48.M.M[0][0];
  Concatenate<TTransform2<float>_>(__return_storage_ptr__,&local_48,pTVar1);
  return __return_storage_ptr__;
}

// Concatenate<FSlateLayoutTransform,TShear2<float>_> @ 1430457c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform2<float> * __cdecl
Concatenate<FSlateLayoutTransform,TShear2<float>_>
          (TTransform2<float> *__return_storage_ptr__,FSlateLayoutTransform *param_1,
          TShear2<float> *param_2)

{
  TTransform2<float> *pTVar1;
  undefined1 auStack_68 [32];
  TTransform2<float> local_48;
  TTransform2<float> local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  pTVar1 = TransformCast<TTransform2<float>,TShear2<float>_>(&local_30,param_2);
  local_48.Trans.field0_0x0 = (param_1->Translation).field0_0x0;
  local_48.M.M[0][0] = param_1->Scale;
  local_48.M.M[0][1] = 0.0;
  local_48.M.M[1][0] = 0.0;
  local_48.M.M[1][1] = local_48.M.M[0][0];
  Concatenate<TTransform2<float>_>(__return_storage_ptr__,&local_48,pTVar1);
  return __return_storage_ptr__;
}

// Concatenate<FSlateLayoutTransform,TTransform2<float>_> @ 143045840

TTransform2<float> * __cdecl
Concatenate<FSlateLayoutTransform,TTransform2<float>_>
          (TTransform2<float> *__return_storage_ptr__,FSlateLayoutTransform *param_1,
          TTransform2<float> *param_2)

{
  TTransform2<float> local_28;
  
  local_28.M.M[0][0] = param_1->Scale;
  local_28.Trans.field0_0x0 = (param_1->Translation).field0_0x0;
  local_28.M.M[0][1] = 0.0;
  local_28.M.M[1][0] = 0.0;
  local_28.M.M[1][1] = local_28.M.M[0][0];
  Concatenate<TTransform2<float>_>(__return_storage_ptr__,&local_28,param_2);
  return __return_storage_ptr__;
}

// ConstructItems<TSharedPtr<FTextStyles::FFontFamily,1>,TSharedPtr<FTextStyles::FFontFamily,1>,int> @ 143045890

void __cdecl
ConstructItems<TSharedPtr<FTextStyles::FFontFamily,1>,TSharedPtr<FTextStyles::FFontFamily,1>,int>
          (void *param_1,TSharedPtr<FTextStyles::FFontFamily,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FFontFamily **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSharedRef<SDocumentsTest::FDocumentInfo,1>,int> @ 1430458d0

void __cdecl
ConstructItems<TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSharedRef<SDocumentsTest::FDocumentInfo,1>,int>
          (void *param_1,TSharedRef<SDocumentsTest::FDocumentInfo,1> *param_2,int param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      *(FDocumentInfo **)(lVar2 + (longlong)param_2) = param_2->Object;
      pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)param_2) = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// Convert<float> @ 143045a50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMatrix<double> * __cdecl
TransformConverter<UE::Math::TMatrix<double>_>::Convert<float>
          (TMatrix<double> *__return_storage_ptr__,float *param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = _UNK_15068964c;
  fVar7 = _UNK_150689648;
  fVar6 = _UNK_150689644;
  fVar5 = ___xmm_3f800000000000000000000000000000;
  fVar1 = *param_1;
  __return_storage_ptr__->M[0][0] = (double)fVar1;
  __return_storage_ptr__->M[0][1] = 0.0;
  *(undefined1 (*) [16])(__return_storage_ptr__->M[0] + 2) = ZEXT816(0) << 0x40;
  *(undefined1 (*) [16])(__return_storage_ptr__->M[1] + 2) = ZEXT816(0) << 0x40;
  __return_storage_ptr__->M[1][0] = 0.0;
  __return_storage_ptr__->M[1][1] = (double)fVar1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (double)fVar1;
  *(undefined1 (*) [16])(__return_storage_ptr__->M[2] + 2) = auVar2;
  __return_storage_ptr__->M[2][0] = 0.0;
  __return_storage_ptr__->M[2][1] = 0.0;
  auVar4._8_4_ = SUB84((double)fVar6,0);
  auVar4._0_8_ = (double)fVar5;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__->M[3] = auVar4;
  auVar3._8_4_ = SUB84((double)fVar8,0);
  auVar3._0_8_ = (double)fVar7;
  auVar3._12_4_ = (int)((ulonglong)(double)fVar8 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->M[3] + 2) = auVar3;
  return __return_storage_ptr__;
}

// Convert<float> @ 143045b10

TTransform2<float> * __cdecl
TransformConverter<TTransform2<float>_>::Convert<float>
          (TTransform2<float> *__return_storage_ptr__,float *param_1)

{
  float fVar1;
  
  fVar1 = *param_1;
  *(undefined8 *)((__return_storage_ptr__->M).M[0] + 1) = 0;
  (__return_storage_ptr__->M).M[0][0] = fVar1;
  (__return_storage_ptr__->M).M[1][1] = fVar1;
  (__return_storage_ptr__->Trans).field0_0x0 = (TVector2<float>_u_0)0x0;
  return __return_storage_ptr__;
}

// Convert<float> @ 143045b40

FSlateLayoutTransform * __cdecl
TransformConverter<FSlateLayoutTransform>::Convert<float>
          (FSlateLayoutTransform *__return_storage_ptr__,float *param_1)

{
  __return_storage_ptr__->Scale = *param_1;
  (__return_storage_ptr__->Translation).field0_0x0 = (TVector2<float>_u_0)0x0;
  return __return_storage_ptr__;
}

// Convert<UE::Math::TMatrix<double>_> @ 143045b60

TMatrix<double> * __cdecl
TransformConverter<UE::Math::TMatrix<double>_>::Convert<UE::Math::TMatrix<double>_>
          (TMatrix<double> *__return_storage_ptr__,TMatrix<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = param_1->M[0][1];
  dVar2 = param_1->M[0][2];
  dVar3 = param_1->M[0][3];
  __return_storage_ptr__->M[0][0] = param_1->M[0][0];
  __return_storage_ptr__->M[0][1] = dVar1;
  dVar1 = param_1->M[1][0];
  dVar4 = param_1->M[1][1];
  __return_storage_ptr__->M[0][2] = dVar2;
  __return_storage_ptr__->M[0][3] = dVar3;
  dVar2 = param_1->M[1][2];
  dVar3 = param_1->M[1][3];
  __return_storage_ptr__->M[1][0] = dVar1;
  __return_storage_ptr__->M[1][1] = dVar4;
  dVar1 = param_1->M[2][0];
  dVar4 = param_1->M[2][1];
  __return_storage_ptr__->M[1][2] = dVar2;
  __return_storage_ptr__->M[1][3] = dVar3;
  dVar2 = param_1->M[2][2];
  dVar3 = param_1->M[2][3];
  __return_storage_ptr__->M[2][0] = dVar1;
  __return_storage_ptr__->M[2][1] = dVar4;
  dVar1 = param_1->M[3][0];
  dVar4 = param_1->M[3][1];
  __return_storage_ptr__->M[2][2] = dVar2;
  __return_storage_ptr__->M[2][3] = dVar3;
  dVar2 = param_1->M[3][2];
  dVar3 = param_1->M[3][3];
  __return_storage_ptr__->M[3][0] = dVar1;
  __return_storage_ptr__->M[3][1] = dVar4;
  __return_storage_ptr__->M[3][2] = dVar2;
  __return_storage_ptr__->M[3][3] = dVar3;
  return __return_storage_ptr__;
}

// Convert<UE::Math::TMatrix<double>_> @ 143045bb0

TRotator<double> * __cdecl
TransformConverter<UE::Math::TRotator<double>_>::Convert<UE::Math::TMatrix<double>_>
          (TRotator<double> *__return_storage_ptr__,TMatrix<double> *param_1)

{
  UE::Math::TMatrix<double>::Rotator(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Convert<UE::Math::TQuat<double>_> @ 143045be0

TMatrix<double> * __cdecl
TransformConverter<UE::Math::TMatrix<double>_>::Convert<UE::Math::TQuat<double>_>
          (TMatrix<double> *__return_storage_ptr__,TQuat<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar8 = __real_3ff0000000000000;
  dVar5 = param_1->X;
  dVar6 = param_1->Y;
  dVar7 = param_1->W;
  dVar1 = param_1->Z * __real_4000000000000000;
  dVar3 = dVar6 * __real_4000000000000000;
  dVar12 = dVar1 * param_1->Z;
  dVar2 = dVar5 * __real_4000000000000000 * dVar5;
  dVar4 = dVar5 * __real_4000000000000000 * dVar7;
  __return_storage_ptr__->M[0][0] = __real_3ff0000000000000 - (dVar12 + dVar3 * dVar6);
  __return_storage_ptr__->M[0][1] = dVar1 * dVar7 + dVar3 * dVar5;
  __return_storage_ptr__->M[0][2] = dVar1 * dVar5 - dVar3 * dVar7;
  __return_storage_ptr__->M[0][3] = 0.0;
  __return_storage_ptr__->M[1][0] = dVar3 * dVar5 - dVar1 * dVar7;
  __return_storage_ptr__->M[1][1] = dVar8 - (dVar12 + dVar2);
  __return_storage_ptr__->M[1][2] = dVar4 + dVar1 * dVar6;
  __return_storage_ptr__->M[1][3] = 0.0;
  __return_storage_ptr__->M[2][0] = dVar3 * dVar7 + dVar1 * dVar5;
  __return_storage_ptr__->M[2][1] = dVar1 * dVar6 - dVar4;
  __return_storage_ptr__->M[2][2] = dVar8 - (dVar3 * dVar6 + dVar2);
  __return_storage_ptr__->M[2][3] = 0.0;
  __return_storage_ptr__->M[3][0] = (double)uVar9;
  __return_storage_ptr__->M[3][1] = (double)uVar10;
  __return_storage_ptr__->M[3][2] = (double)uVar11;
  __return_storage_ptr__->M[3][3] = 1.0;
  return __return_storage_ptr__;
}

// Convert<UE::Math::TQuat<double>_> @ 143045d90

TRotator<double> * __cdecl
TransformConverter<UE::Math::TRotator<double>_>::Convert<UE::Math::TQuat<double>_>
          (TRotator<double> *__return_storage_ptr__,TQuat<double> *param_1)

{
  UE::Math::TRotator<double>::TRotator<double>(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// Convert<UE::Math::TRotator<double>_> @ 143045db0

TMatrix<double> * __cdecl
TransformConverter<UE::Math::TMatrix<double>_>::Convert<UE::Math::TRotator<double>_>
          (TMatrix<double> *__return_storage_ptr__,TRotator<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  TRotationMatrix<double> *pTVar5;
  TRotator<double> local_a8;
  TRotationMatrix<double> local_88;
  
  local_a8.Pitch = param_1->Pitch;
  local_a8.Yaw = param_1->Yaw;
  local_a8.Roll = param_1->Roll;
  pTVar5 = UE::Math::TRotationMatrix<double>::TRotationMatrix<double>(&local_88,&local_a8);
  dVar1 = *(double *)&pTVar5->field_0x8;
  dVar2 = *(double *)&pTVar5->field_0x10;
  dVar3 = *(double *)&pTVar5->field_0x18;
  __return_storage_ptr__->M[0][0] = *(double *)pTVar5;
  __return_storage_ptr__->M[0][1] = dVar1;
  dVar1 = *(double *)&pTVar5->field_0x20;
  dVar4 = *(double *)&pTVar5->field_0x28;
  __return_storage_ptr__->M[0][2] = dVar2;
  __return_storage_ptr__->M[0][3] = dVar3;
  dVar2 = *(double *)&pTVar5->field_0x30;
  dVar3 = *(double *)&pTVar5->field_0x38;
  __return_storage_ptr__->M[1][0] = dVar1;
  __return_storage_ptr__->M[1][1] = dVar4;
  dVar1 = *(double *)&pTVar5->field_0x40;
  dVar4 = *(double *)&pTVar5->field_0x48;
  __return_storage_ptr__->M[1][2] = dVar2;
  __return_storage_ptr__->M[1][3] = dVar3;
  dVar2 = *(double *)&pTVar5->field_0x50;
  dVar3 = *(double *)&pTVar5->field_0x58;
  __return_storage_ptr__->M[2][0] = dVar1;
  __return_storage_ptr__->M[2][1] = dVar4;
  dVar1 = *(double *)&pTVar5->field_0x60;
  dVar4 = *(double *)&pTVar5->field_0x68;
  __return_storage_ptr__->M[2][2] = dVar2;
  __return_storage_ptr__->M[2][3] = dVar3;
  dVar2 = *(double *)&pTVar5->field_0x70;
  dVar3 = *(double *)&pTVar5->field_0x78;
  __return_storage_ptr__->M[3][0] = dVar1;
  __return_storage_ptr__->M[3][1] = dVar4;
  __return_storage_ptr__->M[3][2] = dVar2;
  __return_storage_ptr__->M[3][3] = dVar3;
  return __return_storage_ptr__;
}

// Convert<UE::Math::TRotator<double>_> @ 143045e30

TQuat<double> * __cdecl
TransformConverter<UE::Math::TQuat<double>_>::Convert<UE::Math::TRotator<double>_>
          (TQuat<double> *__return_storage_ptr__,TRotator<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TQuat<double> *pTVar4;
  TQuat<double> local_28;
  
  pTVar4 = UE::Math::TRotator<double>::Quaternion(param_1,&local_28);
  dVar1 = pTVar4->Y;
  dVar2 = pTVar4->Z;
  dVar3 = pTVar4->W;
  __return_storage_ptr__->X = pTVar4->X;
  __return_storage_ptr__->Y = dVar1;
  __return_storage_ptr__->Z = dVar2;
  __return_storage_ptr__->W = dVar3;
  return __return_storage_ptr__;
}

// Convert<UE::Math::TVector2<double>_> @ 143045e70

TTransform2<float> * __cdecl
TransformConverter<TTransform2<float>_>::Convert<UE::Math::TVector2<double>_>
          (TTransform2<float> *__return_storage_ptr__,TVector2<double> *param_1)

{
  double dVar1;
  
  (__return_storage_ptr__->M).M[0] = (float  [2])0x3f800000;
  (__return_storage_ptr__->M).M[1][0] = 0.0;
  (__return_storage_ptr__->M).M[1][1] = 1.0;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->Trans).field0_0x0._s_0.Y = (float)(param_1->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->Trans).field0_0x0._s_0.X = (float)dVar1;
  return __return_storage_ptr__;
}

// Convert<UE::Math::TVector2<double>_> @ 143045eb0

FSlateLayoutTransform * __cdecl
TransformConverter<FSlateLayoutTransform>::Convert<UE::Math::TVector2<double>_>
          (FSlateLayoutTransform *__return_storage_ptr__,TVector2<double> *param_1)

{
  double dVar1;
  double dVar2;
  TVector2<float>_u_0 TVar3;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  __return_storage_ptr__->Scale = 1.0;
  TVar3._s_0.Y = (float)dVar2;
  TVar3._s_0.X = (float)dVar1;
  (__return_storage_ptr__->Translation).field0_0x0 = TVar3;
  return __return_storage_ptr__;
}

// Convert<UE::Math::TVector<double>_> @ 143045ef0

TMatrix<double> * __cdecl
TransformConverter<UE::Math::TMatrix<double>_>::Convert<UE::Math::TVector<double>_>
          (TMatrix<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  __return_storage_ptr__->M[0][0] = 1.0;
  __return_storage_ptr__->M[0][1] = 0.0;
  __return_storage_ptr__->M[0][2] = 0.0;
  __return_storage_ptr__->M[0][3] = 0.0;
  __return_storage_ptr__->M[1][0] = 0.0;
  __return_storage_ptr__->M[1][1] = 1.0;
  __return_storage_ptr__->M[1][2] = 0.0;
  __return_storage_ptr__->M[1][3] = 0.0;
  __return_storage_ptr__->M[2][0] = 0.0;
  __return_storage_ptr__->M[2][1] = 0.0;
  __return_storage_ptr__->M[2][2] = 1.0;
  __return_storage_ptr__->M[2][3] = 0.0;
  __return_storage_ptr__->M[3][0] = dVar2;
  __return_storage_ptr__->M[3][1] = dVar3;
  __return_storage_ptr__->M[3][2] = dVar1;
  __return_storage_ptr__->M[3][3] = 1.0;
  return __return_storage_ptr__;
}

// Convert<TMatrix2x2<float>_> @ 143045f70

TTransform2<float> * __cdecl
TransformConverter<TTransform2<float>_>::Convert<TMatrix2x2<float>_>
          (TTransform2<float> *__return_storage_ptr__,TMatrix2x2<float> *param_1)

{
  float afVar1 [2];
  float afVar2 [2];
  
  afVar1 = param_1->M[0];
  afVar2 = param_1->M[1];
  (__return_storage_ptr__->Trans).field0_0x0 = (TVector2<float>_u_0)0x0;
  (__return_storage_ptr__->M).M[0] = afVar1;
  (__return_storage_ptr__->M).M[1] = afVar2;
  return __return_storage_ptr__;
}

// Convert<TQuat2<float>_> @ 143045fa0

TTransform2<float> * __cdecl
TransformConverter<TTransform2<float>_>::Convert<TQuat2<float>_>
          (TTransform2<float> *__return_storage_ptr__,TQuat2<float> *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (param_1->Rot).field0_0x0._s_0.Y;
  fVar2 = (param_1->Rot).field0_0x0._s_0.X;
  (__return_storage_ptr__->M).M[0][1] = fVar1;
  (__return_storage_ptr__->M).M[1][0] =
       (float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000);
  (__return_storage_ptr__->M).M[0][0] = fVar2;
  (__return_storage_ptr__->M).M[1][1] = fVar2;
  (__return_storage_ptr__->Trans).field0_0x0 = (TVector2<float>_u_0)0x0;
  return __return_storage_ptr__;
}

// Convert<TScale2<float>_> @ 143045fe0

TTransform2<float> * __cdecl
TransformConverter<TTransform2<float>_>::Convert<TScale2<float>_>
          (TTransform2<float> *__return_storage_ptr__,TScale2<float> *param_1)

{
  float fVar1;
  
  fVar1 = (param_1->Scale).field0_0x0._s_0.Y;
  (__return_storage_ptr__->M).M[0][0] = (param_1->Scale).field0_0x0._s_0.X;
  *(undefined8 *)((__return_storage_ptr__->M).M[0] + 1) = 0;
  (__return_storage_ptr__->M).M[1][1] = fVar1;
  (__return_storage_ptr__->Trans).field0_0x0 = (TVector2<float>_u_0)0x0;
  return __return_storage_ptr__;
}

// Convert<TShear2<float>_> @ 143046010

TTransform2<float> * __cdecl
TransformConverter<TTransform2<float>_>::Convert<TShear2<float>_>
          (TTransform2<float> *__return_storage_ptr__,TShear2<float> *param_1)

{
  float fVar1;
  
  fVar1 = (param_1->Shear).field0_0x0._s_0.X;
  (__return_storage_ptr__->M).M[0][1] = (param_1->Shear).field0_0x0._s_0.Y;
  (__return_storage_ptr__->M).M[1][0] = fVar1;
  (__return_storage_ptr__->M).M[0][0] = 1.0;
  (__return_storage_ptr__->M).M[1][1] = 1.0;
  (__return_storage_ptr__->Trans).field0_0x0 = (TVector2<float>_u_0)0x0;
  return __return_storage_ptr__;
}

// DestructItems<SResponsiveGridPanel::FSlot::FSlotArguments,int> @ 143047250

void __cdecl
DestructItems<SResponsiveGridPanel::FSlot::FSlotArguments,int>(FSlotArguments *param_1,int param_2)

{
  undefined8 *puVar1;
  TDelegateBase<FNotThreadSafeDelegateMode> *this;
  
  if (param_2 != 0) {
    this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->_padding_;
    do {
      if (*(void **)&this[1].field_0x10 != (void *)0x0) {
        FMemory::Free(*(void **)&this[1].field_0x10);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind(this);
      if (*(void **)&this->field_0x8 != (void *)0x0) {
        FMemory::Free(*(void **)&this->field_0x8);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)&this[-2].field_0x10);
      puVar1 = *(undefined8 **)(this + -2);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      this = (TDelegateBase<FNotThreadSafeDelegateMode> *)&this[4].field_0x8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FTextStyles::FFontFamily,1>,int> @ 1430472d0

void __cdecl
DestructItems<TSharedPtr<FTextStyles::FFontFamily,1>,int>
          (TSharedPtr<FTextStyles::FFontFamily,1> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TSharedPtr<FTextStyles::FFontFamily,1>::~TSharedPtr<FTextStyles::FFontFamily,1>(param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedRef<SDocumentsTest::FDocumentInfo,1>,int> @ 143047310

void __cdecl
DestructItems<TSharedRef<SDocumentsTest::FDocumentInfo,1>,int>
          (TSharedRef<SDocumentsTest::FDocumentInfo,1> *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TSharedRef<SDocumentsTest::FDocumentInfo,1>::~TSharedRef<SDocumentsTest::FDocumentInfo,1>
              (param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// FindByPredicate<`FTextStyles::FindFontFamily'::__l2::<lambda_1>_> @ 143048620

TSharedPtr<FTextStyles::FFontFamily,1> * __thiscall
TArray<TSharedPtr<FTextStyles::FFontFamily,1>,TSizedDefaultAllocator<32>_>::
FindByPredicate<_FTextStyles::FindFontFamily_::__l2::<lambda_1>_>
          (TArray<TSharedPtr<FTextStyles::FFontFamily,1>,TSizedDefaultAllocator<32>_> *this,
          <lambda_1> param_1)

{
  bool bVar1;
  TSharedPtr<FTextStyles::FFontFamily,1> *pTVar2;
  TSharedPtr<FTextStyles::FFontFamily,1> *pTVar3;
  FName local_res10 [3];
  
  pTVar2 = (TSharedPtr<FTextStyles::FFontFamily,1> *)(this->AllocatorInstance).Data;
  pTVar3 = pTVar2 + this->ArrayNum;
  local_res10[0] = param_1.InFamilyName;
  while( true ) {
    if (pTVar2 == pTVar3) {
      return (TSharedPtr<FTextStyles::FFontFamily,1> *)0x0;
    }
    bVar1 = `FTextStyles::FindFontFamily'::__l2::<lambda_1>::operator()(local_res10,pTVar2);
    if (bVar1) break;
    pTVar2 = pTVar2 + 1;
  }
  return pTVar2;
}

// GetTypeHash<SDocumentsTest::FDocumentInfo_const_,1> @ 143048a00

uint __cdecl
GetTypeHash<SDocumentsTest::FDocumentInfo_const_,1>
          (TSharedRef<SDocumentsTest::FDocumentInfo_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeHash<FTextStyles::FFontFamily_const_,1> @ 143048a30

uint __cdecl
GetTypeHash<FTextStyles::FFontFamily_const_,1>
          (TSharedPtr<FTextStyles::FFontFamily_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// Inverse<double> @ 1430490f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __cdecl
Inverse<double>(TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = __xmm_80000000000000008000000000000000._4_4_;
  uVar2 = (uint)__xmm_80000000000000008000000000000000;
  uVar4 = *(uint *)((longlong)&param_1->field0_0x0 + 4) ^
          __xmm_80000000000000008000000000000000._4_4_;
  uVar5 = *(uint *)((longlong)&param_1->field0_0x0 + 8) ^ _UNK_15066df78;
  uVar6 = *(uint *)((longlong)&param_1->field0_0x0 + 0xc) ^ _UNK_15066df7c;
  *(uint *)&__return_storage_ptr__->field0_0x0 =
       *(uint *)&param_1->field0_0x0 ^ (uint)__xmm_80000000000000008000000000000000;
  *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar4;
  *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar5;
  *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar6;
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar3,(uint)uVar1 ^ uVar2);
  return __return_storage_ptr__;
}

// Inverse<FSlateLayoutTransform> @ 143049120

FSlateLayoutTransform * __cdecl
Inverse<FSlateLayoutTransform>
          (FSlateLayoutTransform *__return_storage_ptr__,FSlateLayoutTransform *param_1)

{
  TVector2<float>_u_0 TVar1;
  float fVar2;
  
  fVar2 = __real_3f800000 / param_1->Scale;
  __return_storage_ptr__->Scale = fVar2;
  TVar1._s_0.Y = (float)((uint)(fVar2 * (param_1->Translation).field0_0x0._s_0.Y) ^
                        __xmm_80000000800000008000000080000000);
  TVar1._s_0.X = (float)((uint)(fVar2 * (param_1->Translation).field0_0x0._s_0.X) ^
                        __xmm_80000000800000008000000080000000);
  (__return_storage_ptr__->Translation).field0_0x0 = TVar1;
  return __return_storage_ptr__;
}

// MakeRequiredArgs<FTabManager_*_&> @ 143049ea0

/* WARNING: Enum "Type": Some values do not have unique names */

T1RequiredArgs<FTabManager_*_&> __cdecl
RequiredArgs::MakeRequiredArgs<FTabManager_*_&>(FTabManager **param_1)

{
  FTabManager *in_RDX;
  
  *param_1 = in_RDX;
  return (T1RequiredArgs<FTabManager_*_&>)param_1;
}

// MakeRequiredArgs<int> @ 143049eb0

T1RequiredArgs<int_&&> __cdecl RequiredArgs::MakeRequiredArgs<int>(int *param_1)

{
  undefined8 in_RDX;
  
  *(undefined8 *)param_1 = in_RDX;
  return (T1RequiredArgs<int_&&>)param_1;
}

// MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_> @ 143049ec0

T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_>
          (TSharedRef<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *param_1)

{
  SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_&&>)
         param_1;
}

// MakeRequiredArgs<TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_> @ 143049ed0

T1RequiredArgs<TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_&&> __cdecl
RequiredArgs::
MakeRequiredArgs<TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_>
          (TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *param_1)

{
  SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_&&>)
         param_1;
}

// MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_> @ 143049ee0

T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_&&> __cdecl
RequiredArgs::MakeRequiredArgs<TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_>
          (TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *param_1)

{
  STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_&&>)
         param_1;
}

// MakeRequiredArgs<TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_> @ 143049ef0

T1RequiredArgs<TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_&&> __cdecl
RequiredArgs::
MakeRequiredArgs<TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_>
          (TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *param_1)

{
  STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *in_RDX;
  
  param_1->Object = in_RDX;
  return (T1RequiredArgs<TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_&&>)
         param_1;
}

// MakeShareable<SDocumentsTest::FDocumentInfo> @ 143049f00

TRawPtrProxy<SDocumentsTest::FDocumentInfo> __cdecl
MakeShareable<SDocumentsTest::FDocumentInfo>(FDocumentInfo *param_1)

{
  ITextData *in_RDX;
  
  (param_1->DisplayName).TextData.Reference = in_RDX;
  return (TRawPtrProxy<SDocumentsTest::FDocumentInfo>)param_1;
}

// MakeShareable<FTextStyles::FFontFamily> @ 143049f10

TRawPtrProxy<FTextStyles::FFontFamily> __cdecl
MakeShareable<FTextStyles::FFontFamily>(FFontFamily *param_1)

{
  ITextData *in_RDX;
  
  (param_1->DisplayName).TextData.Reference = in_RDX;
  return (TRawPtrProxy<FTextStyles::FFontFamily>)param_1;
}

// MakeShareable<FSlateDynamicImageBrush> @ 143049f20

TRawPtrProxy<FSlateDynamicImageBrush> __cdecl
MakeShareable<FSlateDynamicImageBrush>(FSlateDynamicImageBrush *param_1)

{
  code *pcVar1;
  bool bVar2;
  TRawPtrProxy<FSlateDynamicImageBrush> TVar3;
  longlong in_RDX;
  
  if ((((in_RDX != 0) && (*(longlong *)(in_RDX + 0xb0) != 0)) && (*(longlong *)(in_RDX + 0xb8) != 0)
      ) && (0 < *(int *)(*(longlong *)(in_RDX + 0xb8) + 8))) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!InObject || !InObject->DoesSharedInstanceExist()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x7a5,L"Trying to share an already-shared object");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Object = (FSlateDynamicImageBrush *)(*pcVar1)();
      return (TRawPtrProxy<FSlateDynamicImageBrush>)TVar3.Object;
    }
  }
  *(longlong *)param_1 = in_RDX;
  return (TRawPtrProxy<FSlateDynamicImageBrush>)param_1;
}

// MakeShareable<FTextStyleDecoratorTest> @ 143049f90

TRawPtrProxy<FTextStyleDecoratorTest> __cdecl
MakeShareable<FTextStyleDecoratorTest>(FTextStyleDecoratorTest *param_1)

{
  longlong in_RDX;
  
  param_1->_padding_ = in_RDX;
  return (TRawPtrProxy<FTextStyleDecoratorTest>)param_1;
}

// MakeShareable<SRenderTransformManipulatorWidgetImpl> @ 143049fa0

TRawPtrProxy<SRenderTransformManipulatorWidgetImpl> __cdecl
MakeShareable<SRenderTransformManipulatorWidgetImpl>(SRenderTransformManipulatorWidgetImpl *param_1)

{
  code *pcVar1;
  bool bVar2;
  TRawPtrProxy<SRenderTransformManipulatorWidgetImpl> TVar3;
  longlong in_RDX;
  
  if ((((in_RDX != 0) && (*(longlong *)(in_RDX + 8) != 0)) && (*(longlong *)(in_RDX + 0x10) != 0))
     && (0 < *(int *)(*(longlong *)(in_RDX + 0x10) + 8))) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!InObject || !InObject->DoesSharedInstanceExist()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x7a5,L"Trying to share an already-shared object");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Object = (SRenderTransformManipulatorWidgetImpl *)(*pcVar1)();
      return (TRawPtrProxy<SRenderTransformManipulatorWidgetImpl>)TVar3.Object;
    }
  }
  param_1->_padding_ = in_RDX;
  return (TRawPtrProxy<SRenderTransformManipulatorWidgetImpl>)param_1;
}

// MakeShareable<SResponsiveGridPanelTestWidgetImpl> @ 14304a010

TRawPtrProxy<SResponsiveGridPanelTestWidgetImpl> __cdecl
MakeShareable<SResponsiveGridPanelTestWidgetImpl>(SResponsiveGridPanelTestWidgetImpl *param_1)

{
  code *pcVar1;
  bool bVar2;
  TRawPtrProxy<SResponsiveGridPanelTestWidgetImpl> TVar3;
  longlong in_RDX;
  
  if ((((in_RDX != 0) && (*(longlong *)(in_RDX + 8) != 0)) && (*(longlong *)(in_RDX + 0x10) != 0))
     && (0 < *(int *)(*(longlong *)(in_RDX + 0x10) + 8))) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("!InObject || !InObject->DoesSharedInstanceExist()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x7a5,L"Trying to share an already-shared object");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Object = (SResponsiveGridPanelTestWidgetImpl *)(*pcVar1)();
      return (TRawPtrProxy<SResponsiveGridPanelTestWidgetImpl>)TVar3.Object;
    }
  }
  *(longlong *)param_1 = in_RDX;
  return (TRawPtrProxy<SResponsiveGridPanelTestWidgetImpl>)param_1;
}

// MakeShared<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> @ 14304a080

TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> * __cdecl
MakeShared<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>
          (TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>
           *__return_storage_ptr__)

{
  undefined1 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pTVar2 = operator_new(0x408);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedRef_UFDocumentInfo_SDocumentsTest___00_____00_SharedPointerInternals__6B_
    ;
    pTVar2[1]._padding_ = (longlong)&___7ITableRow__6B_;
    SBorder::SBorder((SBorder *)&pTVar2[1].SharedReferenceCount);
    pTVar2[1]._padding_ =
         (longlong)
         &STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar2[1].SharedReferenceCount =
         &STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::_vftable__for__SBorder__;
    puVar1 = &pTVar2[4].SharedReferenceCount.field_0x2;
    *puVar1 = *puVar1 | 4;
    pTVar2[0x2f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x2f].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x30]._padding_ = 0;
    pTVar2[0x30].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar2[0x31]._padding_ = 0;
    pTVar2[0x32].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x32].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x33]._padding_ = 0;
    pTVar2[0x33].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x33].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x34]._padding_ = 0;
    pTVar2[0x34].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x35]._padding_ = 0;
    pTVar2[0x35].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x35].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar2[0x36]._padding_ = 0;
    pTVar2[0x36].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x36].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x37]._padding_ = 0;
    pTVar2[0x37].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)((longlong)&pTVar2[0x38]._padding_ + 4) = 0;
    pTVar2[0x38].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x38].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x39]._padding_ = 0;
    pTVar2[0x39].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3a]._padding_ = 0;
    pTVar2[0x3a].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3a].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar2[0x3b]._padding_ = 0;
    pTVar2[0x3b].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3b].WeakReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3c]._padding_ = 0;
    pTVar2[0x3c].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3d]._padding_ = 0;
    pTVar2[0x3d].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3d].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar2[0x3e]._padding_ = 0;
    pTVar2[0x3f]._padding_ = 0;
    pTVar2[0x3f].SharedReferenceCount = (atomic<int>)0x0;
    pTVar2[0x3f].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar2[0x30].WeakReferenceCount = 1;
    pTVar2[4].SharedReferenceCount.field_0x3 = 2;
  }
  TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>::
  TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>
            (__return_storage_ptr__,
             (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)(pTVar2 + 1),pTVar2);
  return __return_storage_ptr__;
}

// MakeTDecl<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs> @ 14304a1f0

TSlateDecl<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs> *
__cdecl MakeTDecl<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>
                  (TSlateDecl<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>
                   *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                  T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> @ 14304a2a0

TSlateDecl<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
* __cdecl MakeTDecl<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                    (TSlateDecl<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_58;
  FMemScope local_50;
  undefined1 local_48 [24];
  TReferenceControllerBase<1> *pTStack_30;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_58 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_50,&local_58,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object =
       (SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__SComboRow_V__TSharedPtr_UFFontFamily_FTextStyles___00_____00_SharedPointerInternals__6B_
    ;
    memset(pTVar3 + 1,0,0x3f8);
    STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>::
    STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>
              ((STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *)(pTVar3 + 1));
    pTVar3[1]._padding_ =
         (longlong)&SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>::_vftable__for__ITableRow__;
    *(undefined ***)&pTVar3[1].SharedReferenceCount =
         &SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>::_vftable__for__SBorder__;
  }
  TSharedRef<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::
  TSharedRef<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>
            ((TSharedRef<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *)(local_48 + 0x10),
             (SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *)(pTVar3 + 1),pTVar3);
  local_48._0_8_ = local_48._16_8_;
  local_48._8_8_ = pTStack_30;
  if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
       *)local_48) {
    (__return_storage_ptr__->_Widget).Object =
         (SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *)local_48._16_8_;
    local_48._0_8_ = (SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_48 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  if ((__return_storage_ptr__->_Widget).Object ==
      (SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->field_0x8,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs> @ 14304a470

TSlateDecl<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs> *
__cdecl MakeTDecl<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>
                  (TSlateDecl<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>
                   *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                  T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T0RequiredArgs> @ 14304a520

TSlateDecl<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T0RequiredArgs> *
__cdecl MakeTDecl<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T0RequiredArgs>
                  (TSlateDecl<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T0RequiredArgs>
                   *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                  T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SNumericEntryBox<unsigned_short>,RequiredArgs::T0RequiredArgs> @ 14304a5d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSlateDecl<SNumericEntryBox<unsigned_short>,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SNumericEntryBox<unsigned_short>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SNumericEntryBox<unsigned_short>,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SNumericEntryBox<unsigned_short>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SNumericEntryBox<unsigned_short>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SSpinBox<unsigned_short>,RequiredArgs::T0RequiredArgs> @ 14304a680

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SSpinBox<unsigned_short>,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SSpinBox<unsigned_short>,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSpinBox<unsigned_short>,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__
          ,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SSpinBox<unsigned_short>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSpinBox<unsigned_short>,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_&&>_> @ 14304a730

TSlateDecl<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_&&>_>
* __cdecl MakeTDecl<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_&&>_>
                    (TSlateDecl<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_&&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSlateDecl<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_&&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [24];
  TReferenceControllerBase<1> *pTStack_20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object =
       (STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = operator_new(0x408);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__STableRow_V__TSharedPtr_UFFontFamily_FTextStyles___00_____00_SharedPointerInternals__6B_
    ;
    STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>::
    STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>
              ((STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *)(pTVar3 + 1));
  }
  TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::
  TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>
            ((TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *)(local_38 + 0x10),
             (STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *)(pTVar3 + 1),pTVar3);
  local_38._0_8_ = local_38._16_8_;
  local_38._8_8_ = pTStack_20;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_&&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *)local_38._16_8_;
    local_38._0_8_ = (STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_38._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  if ((__return_storage_ptr__->_Widget).Object ==
      (STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_&&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_&&>_> @ 14304a8e0

TSlateDecl<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_&&>_>
* __cdecl MakeTDecl<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_&&>_>
                    (TSlateDecl<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_&&>
                    *param_4)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *pTVar3;
  TSlateDecl<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_&&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [32];
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object =
       (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = MakeShared<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>
                     ((TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *)
                      (local_38 + 0x10));
  local_38._0_8_ = pTVar3->Object;
  local_38._8_8_ = (pTVar3->SharedReferenceCount).ReferenceController;
  if ((TReferenceControllerBase<1> *)local_38._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_&&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)local_38._0_8_;
    local_38._0_8_ = (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>::
  ~TSharedPtr<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>
            ((TSharedPtr<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *)local_38);
  TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>::
  ~TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>
            ((TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *)
             (local_38 + 0x10));
  if ((__return_storage_ptr__->_Widget).Object ==
      (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_&&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_> @ 14304aa40

TSlateDecl<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
* __cdecl MakeTDecl<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                    (TSlateDecl<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *pTVar3;
  TSlateDecl<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [32];
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object =
       (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = MakeShared<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>
                     ((TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *)
                      (local_38 + 0x10));
  local_38._0_8_ = pTVar3->Object;
  local_38._8_8_ = (pTVar3->SharedReferenceCount).ReferenceController;
  if ((TReferenceControllerBase<1> *)local_38._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
       *)local_38) {
    (__return_storage_ptr__->_Widget).Object =
         (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)local_38._0_8_;
    local_38._0_8_ = (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>::
  ~TSharedPtr<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>
            ((TSharedPtr<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *)local_38);
  TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>::
  ~TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>
            ((TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *)
             (local_38 + 0x10));
  if ((__return_storage_ptr__->_Widget).Object ==
      (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                *)(*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)&((__return_storage_ptr__->_Widget).Object)->_padding_,param_1,param_2,
             param_3,0x3f8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SAnimTest,RequiredArgs::T0RequiredArgs> @ 14304aba0

TSlateDecl<SAnimTest,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SAnimTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SAnimTest,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SAnimTest,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SAnimTest,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SColorPickerTest,RequiredArgs::T0RequiredArgs> @ 14304ac50

TSlateDecl<SColorPickerTest,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SColorPickerTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SColorPickerTest,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SColorPickerTest,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SColorPickerTest,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs> @ 14304ad00

TSlateDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SCustomPaintWidget,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SDPIScaler,RequiredArgs::T0RequiredArgs> @ 14304adb0

TSlateDecl<SDPIScaler,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SDPIScaler,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SDPIScaler,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1
          ,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SDPIScaler,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDPIScaler,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SDPIScalingTest,RequiredArgs::T0RequiredArgs> @ 14304ae60

TSlateDecl<SDPIScalingTest,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SDPIScalingTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SDPIScalingTest,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SDPIScalingTest,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDPIScalingTest,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SDocumentsTest,RequiredArgs::T1RequiredArgs<FTabManager_*_&>_> @ 14304af10

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SDocumentsTest,RequiredArgs::T1RequiredArgs<FTabManager_*_&>_> * __cdecl
MakeTDecl<SDocumentsTest,RequiredArgs::T1RequiredArgs<FTabManager_*_&>_>
          (TSlateDecl<SDocumentsTest,RequiredArgs::T1RequiredArgs<FTabManager_*_&>_>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<FTabManager_*_&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SDocumentsTest,RequiredArgs::T1RequiredArgs<FTabManager_*_&>_>::
  TSlateDecl<SDocumentsTest,RequiredArgs::T1RequiredArgs<FTabManager_*_&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SDynamicBrushTest,RequiredArgs::T0RequiredArgs> @ 14304afc0

TSlateDecl<SDynamicBrushTest,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SDynamicBrushTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SDynamicBrushTest,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SDynamicBrushTest,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SDynamicBrushTest,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SElementTesting,RequiredArgs::T0RequiredArgs> @ 14304b070

TSlateDecl<SElementTesting,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SElementTesting,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SElementTesting,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SElementTesting,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SElementTesting,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_&&>_> @ 14304b120

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_&&>_> @ 14304b1d0

TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_&&>_>
* __cdecl MakeTDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_&&>_>
                    (TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_&&>_>
                     *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
                    T1RequiredArgs<TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_&&>
                    *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_&&>_>
  ::
  TSlateDecl<SExpanderArrow,RequiredArgs::T1RequiredArgs<TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SFxTest,RequiredArgs::T0RequiredArgs> @ 14304b280

TSlateDecl<SFxTest,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SFxTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SFxTest,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1,
          char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SFxTest,RequiredArgs::T0RequiredArgs>::TSlateDecl<SFxTest,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SGammaTest,RequiredArgs::T0RequiredArgs> @ 14304b330

TSlateDecl<SGammaTest,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SGammaTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SGammaTest,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,char *param_1
          ,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SGammaTest,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SGammaTest,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SGlobalInvalidationTest,RequiredArgs::T0RequiredArgs> @ 14304b3e0

TSlateDecl<SGlobalInvalidationTest,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SGlobalInvalidationTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SGlobalInvalidationTest,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SGlobalInvalidationTest,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SGlobalInvalidationTest,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SGridPanelTest,RequiredArgs::T0RequiredArgs> @ 14304b490

TSlateDecl<SGridPanelTest,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SGridPanelTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SGridPanelTest,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SGridPanelTest,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SGridPanelTest,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs> @ 14304b540

TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SInvalidationPanel,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SInvalidationTest,RequiredArgs::T0RequiredArgs> @ 14304b5f0

TSlateDecl<SInvalidationTest,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SInvalidationTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SInvalidationTest,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SInvalidationTest,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SInvalidationTest,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SLayoutRoundingTest,RequiredArgs::T0RequiredArgs> @ 14304b6a0

TSlateDecl<SLayoutRoundingTest,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SLayoutRoundingTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SLayoutRoundingTest,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SLayoutRoundingTest,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SLayoutRoundingTest,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SMultiBoxTest,RequiredArgs::T0RequiredArgs> @ 14304b750

TSlateDecl<SMultiBoxTest,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SMultiBoxTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SMultiBoxTest,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SMultiBoxTest,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SMultiBoxTest,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SMultiLineEditingTest,RequiredArgs::T0RequiredArgs> @ 14304b800

TSlateDecl<SMultiLineEditingTest,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SMultiLineEditingTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SMultiLineEditingTest,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SMultiLineEditingTest,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SMultiLineEditingTest,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SNotificationListTest,RequiredArgs::T0RequiredArgs> @ 14304b8b0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SNotificationListTest,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SNotificationListTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SNotificationListTest,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SNotificationListTest,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SNotificationListTest,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SRenderTransformManipulatorWidget,RequiredArgs::T0RequiredArgs> @ 14304b960

TSlateDecl<SRenderTransformManipulatorWidget,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SRenderTransformManipulatorWidget,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SRenderTransformManipulatorWidget,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<SRenderTransformManipulatorWidget,1> *pTVar3;
  TSlateDecl<SRenderTransformManipulatorWidget,RequiredArgs::T0RequiredArgs> *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [32];
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SRenderTransformManipulatorWidget *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = SRenderTransformManipulatorWidget::New
                     ((TSharedRef<SRenderTransformManipulatorWidget,1> *)(local_38 + 0x10));
  local_38._0_8_ = pTVar3->Object;
  local_38._8_8_ = (pTVar3->SharedReferenceCount).ReferenceController;
  if ((TReferenceControllerBase<1> *)local_38._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SRenderTransformManipulatorWidget,RequiredArgs::T0RequiredArgs> *)local_38) {
    (__return_storage_ptr__->_Widget).Object = (SRenderTransformManipulatorWidget *)local_38._0_8_;
    local_38._0_8_ = (SRenderTransformManipulatorWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SRenderTransformManipulatorWidget,1>::~TSharedPtr<SRenderTransformManipulatorWidget,1>
            ((TSharedPtr<SRenderTransformManipulatorWidget,1> *)local_38);
  TSharedRef<SRenderTransformManipulatorWidget,1>::~TSharedRef<SRenderTransformManipulatorWidget,1>
            ((TSharedRef<SRenderTransformManipulatorWidget,1> *)(local_38 + 0x10));
  if ((__return_storage_ptr__->_Widget).Object == (SRenderTransformManipulatorWidget *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<SRenderTransformManipulatorWidget,RequiredArgs::T0RequiredArgs> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)(__return_storage_ptr__->_Widget).Object,param_1,param_2,param_3,0x2a8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_> @ 14304bac0

TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_> * __cdecl
MakeTDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>
          (TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,
          T1RequiredArgs<int_&&> *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>::
  TSlateDecl<SResponsiveGridPanel,RequiredArgs::T1RequiredArgs<int_&&>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SResponsiveGridPanelTestWidget,RequiredArgs::T0RequiredArgs> @ 14304bb70

TSlateDecl<SResponsiveGridPanelTestWidget,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SResponsiveGridPanelTestWidget,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SResponsiveGridPanelTestWidget,RequiredArgs::T0RequiredArgs>
           *__return_storage_ptr__,char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<SResponsiveGridPanelTestWidget,1> *pTVar3;
  TSlateDecl<SResponsiveGridPanelTestWidget,RequiredArgs::T0RequiredArgs> *pTVar4;
  FLLMScope local_res8 [2];
  FName local_48;
  FMemScope local_40;
  undefined1 local_38 [32];
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_48 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_40,&local_48,true);
  __return_storage_ptr__->_RequiredArgs = param_4;
  (__return_storage_ptr__->_Widget).Object = (SResponsiveGridPanelTestWidget *)0x0;
  (__return_storage_ptr__->_Widget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar3 = SResponsiveGridPanelTestWidget::New
                     ((TSharedRef<SResponsiveGridPanelTestWidget,1> *)(local_38 + 0x10));
  local_38._0_8_ = pTVar3->Object;
  local_38._8_8_ = (pTVar3->SharedReferenceCount).ReferenceController;
  if ((TReferenceControllerBase<1> *)local_38._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_38._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__ !=
      (TSlateDecl<SResponsiveGridPanelTestWidget,RequiredArgs::T0RequiredArgs> *)local_38) {
    (__return_storage_ptr__->_Widget).Object = (SResponsiveGridPanelTestWidget *)local_38._0_8_;
    local_38._0_8_ = (SResponsiveGridPanelTestWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(__return_storage_ptr__->_Widget).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_38 + 8));
  }
  TSharedPtr<SResponsiveGridPanelTestWidget,1>::~TSharedPtr<SResponsiveGridPanelTestWidget,1>
            ((TSharedPtr<SResponsiveGridPanelTestWidget,1> *)local_38);
  TSharedRef<SResponsiveGridPanelTestWidget,1>::~TSharedRef<SResponsiveGridPanelTestWidget,1>
            ((TSharedRef<SResponsiveGridPanelTestWidget,1> *)(local_38 + 0x10));
  if ((__return_storage_ptr__->_Widget).Object == (SResponsiveGridPanelTestWidget *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSlateDecl<SResponsiveGridPanelTestWidget,RequiredArgs::T0RequiredArgs> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  SWidget::SetDebugInfo
            ((SWidget *)(__return_storage_ptr__->_Widget).Object,param_1,param_2,param_3,0x2a8);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SRichTextEditTest,RequiredArgs::T0RequiredArgs> @ 14304bcd0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SRichTextEditTest,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SRichTextEditTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SRichTextEditTest,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SRichTextEditTest,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SRichTextEditTest,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SRichTextTest,RequiredArgs::T0RequiredArgs> @ 14304bd80

TSlateDecl<SRichTextTest,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SRichTextTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SRichTextTest,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SRichTextTest,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SRichTextTest,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SSplineTest,RequiredArgs::T0RequiredArgs> @ 14304be30

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SSplineTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SSplineWithHandles,RequiredArgs::T0RequiredArgs> @ 14304bee0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<SSplineWithHandles,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SSplineWithHandles,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSplineWithHandles,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SSplineWithHandles,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSplineWithHandles,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<SSplitterTest,RequiredArgs::T0RequiredArgs> @ 14304bf90

TSlateDecl<SSplitterTest,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<SSplitterTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<SSplitterTest,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<SSplitterTest,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSplitterTest,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STestNotificationWidget,RequiredArgs::T0RequiredArgs> @ 14304c040

TSlateDecl<STestNotificationWidget,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<STestNotificationWidget,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STestNotificationWidget,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<STestNotificationWidget,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STestNotificationWidget,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// MakeTDecl<STextEditTest,RequiredArgs::T0RequiredArgs> @ 14304c0f0

/* WARNING: Enum "Type": Some values do not have unique names */

TSlateDecl<STextEditTest,RequiredArgs::T0RequiredArgs> * __cdecl
MakeTDecl<STextEditTest,RequiredArgs::T0RequiredArgs>
          (TSlateDecl<STextEditTest,RequiredArgs::T0RequiredArgs> *__return_storage_ptr__,
          char *param_1,char *param_2,int param_3,T0RequiredArgs *param_4)

{
  FLLMScope local_res8 [2];
  FName local_18;
  FMemScope local_10;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_10,&local_18,true);
  TSlateDecl<STextEditTest,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextEditTest,RequiredArgs::T0RequiredArgs>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4);
  FMemScope::~FMemScope(&local_10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// NewIntrusiveReferenceController<1,SNumericEntryBox<unsigned_short>_> @ 14304c2e0

TIntrusiveReferenceController<SNumericEntryBox<unsigned_short>,1> * __cdecl
SharedPointerInternals::NewIntrusiveReferenceController<1,SNumericEntryBox<unsigned_short>_>(void)

{
  TIntrusiveReferenceController<SNumericEntryBox<unsigned_short>,1> *pTVar1;
  
  pTVar1 = ::operator_new(0x498);
  if (pTVar1 != (TIntrusiveReferenceController<SNumericEntryBox<unsigned_short>,1> *)0x0) {
    *(undefined4 *)&pTVar1->_padding_ = 1;
    *(undefined4 *)((longlong)&pTVar1->_padding_ + 4) = 1;
    pTVar1->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_V__SNumericEntryBox_G___00_SharedPointerInternals__6B_
    ;
    SCompoundWidget::SCompoundWidget((SCompoundWidget *)&pTVar1->ObjectStorage);
    *(undefined ***)(pTVar1->ObjectStorage).Pad = &___7__SNumericEntryBox_G__6B_;
    (pTVar1->ObjectStorage).Pad[0x2a8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2a9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2aa] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ab] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ac] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ad] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ae] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2af] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2b4] = 0xff;
    (pTVar1->ObjectStorage).Pad[0x2b5] = 0xff;
    (pTVar1->ObjectStorage).Pad[0x2b6] = 0xff;
    (pTVar1->ObjectStorage).Pad[0x2b7] = 0xff;
    (pTVar1->ObjectStorage).Pad[0x2b8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2d7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2c9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ca] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2cb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2cc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2cd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ce] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2cf] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2da] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2dc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2e0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2e1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2e2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2e3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2e4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2e5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2e6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2e7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2e8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2e9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ea] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2eb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ec] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ed] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ee] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ef] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2f9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2fa] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2fb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2fc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2fd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2fe] = '\0';
    (pTVar1->ObjectStorage).Pad[0x2ff] = '\0';
    (pTVar1->ObjectStorage).Pad[0x300] = '\0';
    (pTVar1->ObjectStorage).Pad[0x301] = '\0';
    (pTVar1->ObjectStorage).Pad[0x302] = '\0';
    (pTVar1->ObjectStorage).Pad[0x303] = '\0';
    (pTVar1->ObjectStorage).Pad[0x304] = '\0';
    (pTVar1->ObjectStorage).Pad[0x305] = '\0';
    (pTVar1->ObjectStorage).Pad[0x306] = '\0';
    (pTVar1->ObjectStorage).Pad[0x307] = '\0';
    (pTVar1->ObjectStorage).Pad[0x308] = '\0';
    (pTVar1->ObjectStorage).Pad[0x309] = '\0';
    (pTVar1->ObjectStorage).Pad[0x30a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x30b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x30c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x30d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x30e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x30f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x310] = '\0';
    (pTVar1->ObjectStorage).Pad[0x311] = '\0';
    (pTVar1->ObjectStorage).Pad[0x312] = '\0';
    (pTVar1->ObjectStorage).Pad[0x313] = '\0';
    (pTVar1->ObjectStorage).Pad[0x314] = '\0';
    (pTVar1->ObjectStorage).Pad[0x315] = '\0';
    (pTVar1->ObjectStorage).Pad[0x316] = '\0';
    (pTVar1->ObjectStorage).Pad[0x317] = '\0';
    (pTVar1->ObjectStorage).Pad[0x318] = '\0';
    (pTVar1->ObjectStorage).Pad[0x319] = '\0';
    (pTVar1->ObjectStorage).Pad[0x31a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x31b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x31c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x31d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x31e] = '\0';
    (pTVar1->ObjectStorage).Pad[799] = '\0';
    (pTVar1->ObjectStorage).Pad[800] = '\0';
    (pTVar1->ObjectStorage).Pad[0x321] = '\0';
    (pTVar1->ObjectStorage).Pad[0x322] = '\0';
    (pTVar1->ObjectStorage).Pad[0x323] = '\0';
    (pTVar1->ObjectStorage).Pad[0x324] = '\0';
    (pTVar1->ObjectStorage).Pad[0x325] = '\0';
    (pTVar1->ObjectStorage).Pad[0x326] = '\0';
    (pTVar1->ObjectStorage).Pad[0x327] = '\0';
    (pTVar1->ObjectStorage).Pad[0x328] = '\0';
    (pTVar1->ObjectStorage).Pad[0x329] = '\0';
    (pTVar1->ObjectStorage).Pad[0x32a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x32b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x32c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x32d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x32e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x32f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x330] = '\0';
    (pTVar1->ObjectStorage).Pad[0x331] = '\0';
    (pTVar1->ObjectStorage).Pad[0x332] = '\0';
    (pTVar1->ObjectStorage).Pad[0x333] = '\0';
    (pTVar1->ObjectStorage).Pad[0x334] = '\0';
    (pTVar1->ObjectStorage).Pad[0x335] = '\0';
    (pTVar1->ObjectStorage).Pad[0x336] = '\0';
    (pTVar1->ObjectStorage).Pad[0x337] = '\0';
    (pTVar1->ObjectStorage).Pad[0x338] = '\0';
    (pTVar1->ObjectStorage).Pad[0x339] = '\0';
    (pTVar1->ObjectStorage).Pad[0x33a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x33b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x340] = '\0';
    (pTVar1->ObjectStorage).Pad[0x341] = '\0';
    (pTVar1->ObjectStorage).Pad[0x342] = '\0';
    (pTVar1->ObjectStorage).Pad[0x343] = '\0';
    (pTVar1->ObjectStorage).Pad[0x344] = '\0';
    (pTVar1->ObjectStorage).Pad[0x345] = '\0';
    (pTVar1->ObjectStorage).Pad[0x346] = '\0';
    (pTVar1->ObjectStorage).Pad[0x347] = '\0';
    (pTVar1->ObjectStorage).Pad[0x348] = '\0';
    (pTVar1->ObjectStorage).Pad[0x349] = '\0';
    (pTVar1->ObjectStorage).Pad[0x34a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x34b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x34c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x34d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x34e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x34f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x350] = '\0';
    (pTVar1->ObjectStorage).Pad[0x351] = '\0';
    (pTVar1->ObjectStorage).Pad[0x352] = '\0';
    (pTVar1->ObjectStorage).Pad[0x353] = '\0';
    (pTVar1->ObjectStorage).Pad[0x358] = '\0';
    (pTVar1->ObjectStorage).Pad[0x359] = '\0';
    (pTVar1->ObjectStorage).Pad[0x35a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x35b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x35c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x35d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x35e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x35f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x360] = '\0';
    (pTVar1->ObjectStorage).Pad[0x361] = '\0';
    (pTVar1->ObjectStorage).Pad[0x362] = '\0';
    (pTVar1->ObjectStorage).Pad[0x363] = '\0';
    (pTVar1->ObjectStorage).Pad[0x364] = '\0';
    (pTVar1->ObjectStorage).Pad[0x365] = '\0';
    (pTVar1->ObjectStorage).Pad[0x366] = '\0';
    (pTVar1->ObjectStorage).Pad[0x367] = '\0';
    (pTVar1->ObjectStorage).Pad[0x368] = '\0';
    (pTVar1->ObjectStorage).Pad[0x369] = '\0';
    (pTVar1->ObjectStorage).Pad[0x36a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x36b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x370] = '\0';
    (pTVar1->ObjectStorage).Pad[0x371] = '\0';
    (pTVar1->ObjectStorage).Pad[0x372] = '\0';
    (pTVar1->ObjectStorage).Pad[0x373] = '\0';
    (pTVar1->ObjectStorage).Pad[0x374] = '\0';
    (pTVar1->ObjectStorage).Pad[0x375] = '\0';
    (pTVar1->ObjectStorage).Pad[0x376] = '\0';
    (pTVar1->ObjectStorage).Pad[0x377] = '\0';
    (pTVar1->ObjectStorage).Pad[0x378] = '\0';
    (pTVar1->ObjectStorage).Pad[0x379] = '\0';
    (pTVar1->ObjectStorage).Pad[0x37a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x37b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x37c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x37d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x37e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x37f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x380] = '\0';
    (pTVar1->ObjectStorage).Pad[0x381] = '\0';
    (pTVar1->ObjectStorage).Pad[0x382] = '\0';
    (pTVar1->ObjectStorage).Pad[899] = '\0';
    FText::FText((FText *)((pTVar1->ObjectStorage).Pad + 0x388));
    (pTVar1->ObjectStorage).Pad[0x3b0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3b1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3b2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3b3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3b4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ca] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3cb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3cc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3cd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ce] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3cf] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3b8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3b9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ba] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3bb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3bc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3bd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3be] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3bf] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3c7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d8] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3d9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3da] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3db] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3dc] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3dd] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3de] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3df] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e2] = '\0';
    (pTVar1->ObjectStorage).Pad[1000] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3e9] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ea] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3eb] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ec] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ed] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ee] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3ef] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f0] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f1] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f2] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f3] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f4] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f5] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f6] = '\0';
    (pTVar1->ObjectStorage).Pad[0x3f7] = '\0';
    (pTVar1->ObjectStorage).Pad[0x404] = '\0';
    (pTVar1->ObjectStorage).Pad[0x408] = '\0';
    (pTVar1->ObjectStorage).Pad[0x420] = '\0';
    (pTVar1->ObjectStorage).Pad[0x421] = '\0';
    (pTVar1->ObjectStorage).Pad[0x422] = '\0';
    (pTVar1->ObjectStorage).Pad[0x423] = '\0';
    (pTVar1->ObjectStorage).Pad[0x424] = '\0';
    (pTVar1->ObjectStorage).Pad[0x425] = '\0';
    (pTVar1->ObjectStorage).Pad[0x426] = '\0';
    (pTVar1->ObjectStorage).Pad[0x427] = '\0';
    (pTVar1->ObjectStorage).Pad[0x410] = '\0';
    (pTVar1->ObjectStorage).Pad[0x411] = '\0';
    (pTVar1->ObjectStorage).Pad[0x412] = '\0';
    (pTVar1->ObjectStorage).Pad[0x413] = '\0';
    (pTVar1->ObjectStorage).Pad[0x414] = '\0';
    (pTVar1->ObjectStorage).Pad[0x415] = '\0';
    (pTVar1->ObjectStorage).Pad[0x416] = '\0';
    (pTVar1->ObjectStorage).Pad[0x417] = '\0';
    (pTVar1->ObjectStorage).Pad[0x418] = '\0';
    (pTVar1->ObjectStorage).Pad[0x419] = '\0';
    (pTVar1->ObjectStorage).Pad[0x41a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x41b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x41c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x41d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x41e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x41f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x42c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x430] = '\0';
    (pTVar1->ObjectStorage).Pad[0x448] = '\0';
    (pTVar1->ObjectStorage).Pad[0x449] = '\0';
    (pTVar1->ObjectStorage).Pad[0x44a] = '\0';
    (pTVar1->ObjectStorage).Pad[1099] = '\0';
    (pTVar1->ObjectStorage).Pad[0x44c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x44d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x44e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x44f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x438] = '\0';
    (pTVar1->ObjectStorage).Pad[0x439] = '\0';
    (pTVar1->ObjectStorage).Pad[0x43a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x43b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x43c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x43d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x43e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x43f] = '\0';
    (pTVar1->ObjectStorage).Pad[0x440] = '\0';
    (pTVar1->ObjectStorage).Pad[0x441] = '\0';
    (pTVar1->ObjectStorage).Pad[0x442] = '\0';
    (pTVar1->ObjectStorage).Pad[0x443] = '\0';
    (pTVar1->ObjectStorage).Pad[0x444] = '\0';
    (pTVar1->ObjectStorage).Pad[0x445] = '\0';
    (pTVar1->ObjectStorage).Pad[0x446] = '\0';
    (pTVar1->ObjectStorage).Pad[0x447] = '\0';
    (pTVar1->ObjectStorage).Pad[0x460] = '\0';
    (pTVar1->ObjectStorage).Pad[0x468] = '\0';
    (pTVar1->ObjectStorage).Pad[0x480] = '\0';
    (pTVar1->ObjectStorage).Pad[0x481] = '\0';
    (pTVar1->ObjectStorage).Pad[0x482] = '\0';
    (pTVar1->ObjectStorage).Pad[0x483] = '\0';
    (pTVar1->ObjectStorage).Pad[0x484] = '\0';
    (pTVar1->ObjectStorage).Pad[0x485] = '\0';
    (pTVar1->ObjectStorage).Pad[0x486] = '\0';
    (pTVar1->ObjectStorage).Pad[0x487] = '\0';
    (pTVar1->ObjectStorage).Pad[0x470] = '\0';
    (pTVar1->ObjectStorage).Pad[0x471] = '\0';
    (pTVar1->ObjectStorage).Pad[0x472] = '\0';
    (pTVar1->ObjectStorage).Pad[0x473] = '\0';
    (pTVar1->ObjectStorage).Pad[0x474] = '\0';
    (pTVar1->ObjectStorage).Pad[0x475] = '\0';
    (pTVar1->ObjectStorage).Pad[0x476] = '\0';
    (pTVar1->ObjectStorage).Pad[0x477] = '\0';
    (pTVar1->ObjectStorage).Pad[0x478] = '\0';
    (pTVar1->ObjectStorage).Pad[0x479] = '\0';
    (pTVar1->ObjectStorage).Pad[0x47a] = '\0';
    (pTVar1->ObjectStorage).Pad[0x47b] = '\0';
    (pTVar1->ObjectStorage).Pad[0x47c] = '\0';
    (pTVar1->ObjectStorage).Pad[0x47d] = '\0';
    (pTVar1->ObjectStorage).Pad[0x47e] = '\0';
    (pTVar1->ObjectStorage).Pad[0x47f] = '\0';
    return pTVar1;
  }
  return (TIntrusiveReferenceController<SNumericEntryBox<unsigned_short>,1> *)0x0;
}

// OnClicked_Lambda<`SInvalidationTest::Construct'::__l2::<lambda_1>_> @ 14304deb0

FArguments * __thiscall
SButton::FArguments::OnClicked_Lambda<_SInvalidationTest::Construct_::__l2::<lambda_1>_>
          (FArguments *this,<lambda_1> *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnClicked).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Construct_SInvalidationTest__QEAAXAEBUFArguments_5__Z___V__6B_
    ;
    puVar1[3] = param_1->__this;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// OnClicked_Lambda<`SSplineTest::Construct'::__l2::<lambda_1>_> @ 14304df50

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SButton::FArguments::OnClicked_Lambda<_SSplineTest::Construct_::__l2::<lambda_1>_>
          (FArguments *this,<lambda_1> *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnClicked).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Construct_SSplineTest__QEAAXAEBUFArguments_5__Z___V__6B_
    ;
    puVar1[3] = param_1->__this;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// OnClicked_Lambda<`SGlobalInvalidationTest::Construct'::__l2::<lambda_2>_> @ 14304dff0

FArguments * __thiscall
SButton::FArguments::OnClicked_Lambda<_SGlobalInvalidationTest::Construct_::__l2::<lambda_2>_>
          (FArguments *this,<lambda_2> *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnClicked).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_2>__1__Construct_SGlobalInvalidationTest__QEAAXAEBUFArguments_5__Z___V__6B_
    ;
    puVar1[3] = param_1->__this;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// OnClicked_Lambda<`SSplineTest::Construct'::__l2::<lambda_2>_> @ 14304e090

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SButton::FArguments::OnClicked_Lambda<_SSplineTest::Construct_::__l2::<lambda_2>_>
          (FArguments *this,<lambda_2> *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnClicked).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_2>__1__Construct_SSplineTest__QEAAXAEBUFArguments_5__Z___V__6B_
    ;
    puVar1[3] = param_1->__this;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// OnClicked_Lambda<`SSplineTest::Construct'::__l2::<lambda_3>_> @ 14304e130

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SButton::FArguments::OnClicked_Lambda<_SSplineTest::Construct_::__l2::<lambda_3>_>
          (FArguments *this,<lambda_3> *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnClicked).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_3>__1__Construct_SSplineTest__QEAAXAEBUFArguments_5__Z___V__6B_
    ;
    puVar1[3] = param_1->__this;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// OnClicked_Lambda<`SSplineTest::Construct'::__l2::<lambda_4>_> @ 14304e1d0

/* WARNING: Enum "Type": Some values do not have unique names */

FArguments * __thiscall
SButton::FArguments::OnClicked_Lambda<_SSplineTest::Construct_::__l2::<lambda_4>_>
          (FArguments *this,<lambda_4> *param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnClicked,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnClicked).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFReply__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseFunctorDelegateInstance___A6A_AVFReply__XZUFDefaultDelegateUserPolicy__V<lambda_4>__1__Construct_SSplineTest__QEAAXAEBUFArguments_5__Z___V__6B_
    ;
    puVar1[3] = param_1->__this;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// OnValueChanged_Static<`SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_11>_> @ 1430501b0

FArguments * __thiscall
SSpinBox<float>::FArguments::
OnValueChanged_Static<_SRenderTransformManipulatorWidgetImpl::Construct_::__l2::<lambda_11>_>
          (FArguments *this,<lambda_11> param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChanged,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnValueChanged).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = `SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_11>::
                <lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// OnValueChanged_Static<`SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_13>_> @ 143050240

FArguments * __thiscall
SSpinBox<float>::FArguments::
OnValueChanged_Static<_SRenderTransformManipulatorWidgetImpl::Construct_::__l2::<lambda_13>_>
          (FArguments *this,<lambda_13> param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChanged,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnValueChanged).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = `SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_13>::
                <lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// OnValueChanged_Static<`SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_1>_> @ 1430502d0

FArguments * __thiscall
SSpinBox<float>::FArguments::
OnValueChanged_Static<_SRenderTransformManipulatorWidgetImpl::Construct_::__l2::<lambda_1>_>
          (FArguments *this,<lambda_1> param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChanged,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnValueChanged).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = `SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_1>::
                <lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// OnValueChanged_Static<`SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_3>_> @ 143050360

FArguments * __thiscall
SSpinBox<float>::FArguments::
OnValueChanged_Static<_SRenderTransformManipulatorWidgetImpl::Construct_::__l2::<lambda_3>_>
          (FArguments *this,<lambda_3> param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChanged,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnValueChanged).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = `SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_3>::
                <lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// OnValueChanged_Static<`SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_5>_> @ 1430503f0

FArguments * __thiscall
SSpinBox<float>::FArguments::
OnValueChanged_Static<_SRenderTransformManipulatorWidgetImpl::Construct_::__l2::<lambda_5>_>
          (FArguments *this,<lambda_5> param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChanged,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnValueChanged).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = `SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_5>::
                <lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// OnValueChanged_Static<`SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_7>_> @ 143050480

FArguments * __thiscall
SSpinBox<float>::FArguments::
OnValueChanged_Static<_SRenderTransformManipulatorWidgetImpl::Construct_::__l2::<lambda_7>_>
          (FArguments *this,<lambda_7> param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChanged,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnValueChanged).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = `SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_7>::
                <lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// OnValueChanged_Static<`SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_9>_> @ 143050510

FArguments * __thiscall
SSpinBox<float>::FArguments::
OnValueChanged_Static<_SRenderTransformManipulatorWidgetImpl::Construct_::__l2::<lambda_9>_>
          (FArguments *this,<lambda_9> param_1)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_OnValueChanged,
             (FWriteAccessScope *)&local_28);
  local_10 = &(this->_OnValueChanged).field_0x8;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = `SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_9>::
                <lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return this;
}

// TransformCast<UE::Math::TMatrix<double>,float> @ 1430531d0

TMatrix<double> * __cdecl
TransformCast<UE::Math::TMatrix<double>,float>
          (TMatrix<double> *__return_storage_ptr__,float *param_1)

{
  TransformConverter<UE::Math::TMatrix<double>_>::Convert<float>(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// TransformCast<UE::Math::TMatrix<double>,UE::Math::TMatrix<double>_> @ 143053200

TMatrix<double> * __cdecl
TransformCast<UE::Math::TMatrix<double>,UE::Math::TMatrix<double>_>
          (TMatrix<double> *__return_storage_ptr__,TMatrix<double> *param_1)

{
  TransformConverter<UE::Math::TMatrix<double>_>::Convert<UE::Math::TMatrix<double>_>
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// TransformCast<UE::Math::TMatrix<double>,UE::Math::TQuat<double>_> @ 143053230

TMatrix<double> * __cdecl
TransformCast<UE::Math::TMatrix<double>,UE::Math::TQuat<double>_>
          (TMatrix<double> *__return_storage_ptr__,TQuat<double> *param_1)

{
  TransformConverter<UE::Math::TMatrix<double>_>::Convert<UE::Math::TQuat<double>_>
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// TransformCast<UE::Math::TMatrix<double>,UE::Math::TRotator<double>_> @ 143053260

TMatrix<double> * __cdecl
TransformCast<UE::Math::TMatrix<double>,UE::Math::TRotator<double>_>
          (TMatrix<double> *__return_storage_ptr__,TRotator<double> *param_1)

{
  TransformConverter<UE::Math::TMatrix<double>_>::Convert<UE::Math::TRotator<double>_>
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// TransformCast<UE::Math::TMatrix<double>,UE::Math::TVector<double>_> @ 143053290

TMatrix<double> * __cdecl
TransformCast<UE::Math::TMatrix<double>,UE::Math::TVector<double>_>
          (TMatrix<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  TransformConverter<UE::Math::TMatrix<double>_>::Convert<UE::Math::TVector<double>_>
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// TransformCast<UE::Math::TQuat<double>,UE::Math::TQuat<double>_> @ 1430532c0

TQuat<double> * __cdecl
TransformCast<UE::Math::TQuat<double>,UE::Math::TQuat<double>_>(TQuat<double> *param_1)

{
  TQuat<double> *pTVar1;
  
  pTVar1 = TransformConverter<UE::Math::TQuat<double>_>::Convert(param_1);
  return pTVar1;
}

// TransformCast<UE::Math::TQuat<double>,UE::Math::TRotator<double>_> @ 1430532e0

TQuat<double> * __cdecl
TransformCast<UE::Math::TQuat<double>,UE::Math::TRotator<double>_>
          (TQuat<double> *__return_storage_ptr__,TRotator<double> *param_1)

{
  TransformConverter<UE::Math::TQuat<double>_>::Convert<UE::Math::TRotator<double>_>
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// TransformCast<UE::Math::TRotator<double>,UE::Math::TMatrix<double>_> @ 143053310

TRotator<double> * __cdecl
TransformCast<UE::Math::TRotator<double>,UE::Math::TMatrix<double>_>
          (TRotator<double> *__return_storage_ptr__,TMatrix<double> *param_1)

{
  TransformConverter<UE::Math::TRotator<double>_>::Convert<UE::Math::TMatrix<double>_>
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// TransformCast<TMatrix2x2<float>,TMatrix2x2<float>_> @ 143053340

TMatrix2x2<float> * __cdecl
TransformCast<TMatrix2x2<float>,TMatrix2x2<float>_>(TMatrix2x2<float> *param_1)

{
  TMatrix2x2<float> *pTVar1;
  
  pTVar1 = TransformConverter<TMatrix2x2<float>_>::Convert(param_1);
  return pTVar1;
}

// TransformCast<TScale2<float>,TScale2<float>_> @ 143053360

TScale2<float> * __cdecl TransformCast<TScale2<float>,TScale2<float>_>(TScale2<float> *param_1)

{
  TScale2<float> *pTVar1;
  
  pTVar1 = TransformConverter<TScale2<float>_>::Convert(param_1);
  return pTVar1;
}

// TransformCast<TTransform2<float>,TTransform2<float>_> @ 143053380

TTransform2<float> * __cdecl
TransformCast<TTransform2<float>,TTransform2<float>_>(TTransform2<float> *param_1)

{
  return param_1;
}

// TransformCast<TTransform2<float>,TMatrix2x2<float>_> @ 143053390

TTransform2<float> * __cdecl
TransformCast<TTransform2<float>,TMatrix2x2<float>_>
          (TTransform2<float> *__return_storage_ptr__,TMatrix2x2<float> *param_1)

{
  TransformConverter<TTransform2<float>_>::Convert<TMatrix2x2<float>_>
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// TransformCast<TTransform2<float>,TQuat2<float>_> @ 1430533c0

TTransform2<float> * __cdecl
TransformCast<TTransform2<float>,TQuat2<float>_>
          (TTransform2<float> *__return_storage_ptr__,TQuat2<float> *param_1)

{
  TransformConverter<TTransform2<float>_>::Convert<TQuat2<float>_>(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// TransformCast<TTransform2<float>,TScale2<float>_> @ 1430533f0

TTransform2<float> * __cdecl
TransformCast<TTransform2<float>,TScale2<float>_>
          (TTransform2<float> *__return_storage_ptr__,TScale2<float> *param_1)

{
  TransformConverter<TTransform2<float>_>::Convert<TScale2<float>_>(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// TransformCast<TTransform2<float>,TShear2<float>_> @ 143053420

TTransform2<float> * __cdecl
TransformCast<TTransform2<float>,TShear2<float>_>
          (TTransform2<float> *__return_storage_ptr__,TShear2<float> *param_1)

{
  TransformConverter<TTransform2<float>_>::Convert<TShear2<float>_>(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// TransformCast<TTransform2<float>,FSlateLayoutTransform> @ 143053450

TTransform2<float> * __cdecl
TransformCast<TTransform2<float>,FSlateLayoutTransform>
          (TTransform2<float> *__return_storage_ptr__,FSlateLayoutTransform *param_1)

{
  float fVar1;
  TVector2<float>_u_0 TVar2;
  
  TVar2 = (param_1->Translation).field0_0x0;
  fVar1 = param_1->Scale;
  *(undefined8 *)((__return_storage_ptr__->M).M[0] + 1) = 0;
  (__return_storage_ptr__->M).M[0][0] = fVar1;
  (__return_storage_ptr__->M).M[1][1] = fVar1;
  (__return_storage_ptr__->Trans).field0_0x0 = TVar2;
  return __return_storage_ptr__;
}

// TransformCast<FSlateLayoutTransform,float> @ 143053480

FSlateLayoutTransform * __cdecl
TransformCast<FSlateLayoutTransform,float>
          (FSlateLayoutTransform *__return_storage_ptr__,float *param_1)

{
  TransformConverter<FSlateLayoutTransform>::Convert<float>(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// TransformCast<FSlateLayoutTransform,UE::Math::TVector2<double>_> @ 1430534b0

FSlateLayoutTransform * __cdecl
TransformCast<FSlateLayoutTransform,UE::Math::TVector2<double>_>
          (FSlateLayoutTransform *__return_storage_ptr__,TVector2<double> *param_1)

{
  TransformConverter<FSlateLayoutTransform>::Convert<UE::Math::TVector2<double>_>
            (__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// TransformCast<FSlateLayoutTransform,FSlateLayoutTransform> @ 1430534e0

FSlateLayoutTransform * __cdecl
TransformCast<FSlateLayoutTransform,FSlateLayoutTransform>(FSlateLayoutTransform *param_1)

{
  FSlateLayoutTransform *pFVar1;
  
  pFVar1 = TransformConverter<FSlateLayoutTransform>::Convert(param_1);
  return pFVar1;
}

// TransformPoint<double> @ 143053500

TVector<double> * __cdecl
TransformPoint<double>
          (TVector<double> *__return_storage_ptr__,TMatrix<double> *param_1,TVector<double> *param_2
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar11 = __real_3ff0000000000000;
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  dVar4 = param_1->M[1][1];
  dVar5 = param_1->M[0][2];
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  dVar6 = param_1->M[0][1];
  dVar7 = param_1->M[2][1];
  dVar12 = __real_3ff0000000000000 * param_1->M[3][1];
  dVar8 = param_1->M[1][2];
  dVar9 = param_1->M[2][2];
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       dVar3 * param_1->M[1][0] + dVar2 * param_1->M[0][0] + dVar1 * param_1->M[2][0] +
       __real_3ff0000000000000 * param_1->M[3][0];
  dVar10 = param_1->M[3][2];
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       dVar3 * dVar4 + dVar2 * dVar6 + dVar1 * dVar7 + dVar12;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       dVar5 * dVar2 + dVar8 * dVar3 + dVar9 * dVar1 + dVar10 * dVar11;
  return __return_storage_ptr__;
}

// TransformPoint<double> @ 1430535d0

TVector<double> * __cdecl
TransformPoint<double>
          (TVector<double> *__return_storage_ptr__,TQuat<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar9 = (param_2->field0_0x0)._s_0.X;
  dVar10 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = param_1->Z;
  dVar2 = param_1->W;
  dVar3 = param_1->X;
  dVar4 = param_1->Y;
  dVar5 = (param_2->field0_0x0)._s_0.Z;
  dVar8 = dVar4 * dVar5 - dVar1 * dVar10;
  dVar8 = dVar8 + dVar8;
  dVar7 = dVar1 * dVar9 - dVar3 * dVar5;
  dVar7 = dVar7 + dVar7;
  dVar6 = dVar3 * dVar10 - dVar4 * dVar9;
  dVar6 = dVar6 + dVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (dVar6 * dVar4 - dVar7 * dVar1) + dVar8 * dVar2 + dVar9;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (dVar7 * dVar3 - dVar8 * dVar4) + dVar6 * dVar2 + dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (dVar8 * dVar1 - dVar6 * dVar3) + dVar7 * dVar2 + dVar10;
  return __return_storage_ptr__;
}

// TransformPoint<TTransform2<float>,UE::Math::TVector2<float>_> @ 143053720

TVector2<float> __cdecl
TransformPoint<TTransform2<float>,UE::Math::TVector2<float>_>
          (TTransform2<float> *param_1,TVector2<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 *in_R8;
  float local_res8;
  float fStackX_c;
  
  fStackX_c = (float)((ulonglong)*in_R8 >> 0x20);
  local_res8 = (float)*in_R8;
  fVar1 = (param_2->field0_0x0)._s_0.Y;
  fVar2 = param_2[1].field0_0x0._s_0.Y;
  fVar3 = param_2[2].field0_0x0._s_0.Y;
  (param_1->M).M[0][0] =
       fStackX_c * param_2[1].field0_0x0._s_0.X + local_res8 * (param_2->field0_0x0)._s_0.X +
       param_2[2].field0_0x0._s_0.X;
  (param_1->M).M[0][1] = local_res8 * fVar1 + fStackX_c * fVar2 + fVar3;
  return (TVector2<float>)(TVector2<float>_u_0)param_1;
}

// TransformPoint<FSlateLayoutTransform,UE::Math::TVector2<double>_> @ 143053780

TVector2<double> * __cdecl
TransformPoint<FSlateLayoutTransform,UE::Math::TVector2<double>_>
          (TVector2<double> *__return_storage_ptr__,FSlateLayoutTransform *param_1,
          TVector2<double> *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  fVar1 = param_1->Scale;
  fVar2 = (param_1->Translation).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)((float)(param_2->field0_0x0)._s_0.X * param_1->Scale +
               (param_1->Translation).field0_0x0._s_0.X);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)((float)dVar3 * fVar1 + fVar2);
  return __return_storage_ptr__;
}

// operator[] @ 143063350

FArguments * __thiscall
NamedSlotProperty<SDockTab::FArguments>::operator[]
          (NamedSlotProperty<SDockTab::FArguments> *this,TSharedRef<SWidget,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TAlwaysValidWidget *pTVar2;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pTVar2 = this->SlotContent;
  pSVar3 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pTVar2->Widget).SharedReferenceCount.ReferenceController;
  (pTVar2->Widget).Object = pSVar3;
  (pTVar2->Widget).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return this->OwnerDeclaration;
}

// operator* @ 143063cd0

FDeprecateSlateVector2D __cdecl operator*(FDeprecateSlateVector2D *param_1,float param_2)

{
  FDeprecateSlateVector2D FVar1;
  float *in_RDX;
  float in_XMM2_Da;
  
  FVar1._4_4_ = in_XMM2_Da * in_RDX[1];
  FVar1._0_4_ = in_XMM2_Da * *in_RDX;
  *param_1 = FVar1;
  return (FDeprecateSlateVector2D)param_1;
}

// operator+ @ 143063d90

FDeprecateSlateVector2D __cdecl
operator+(TVector2<double> *param_1,FDeprecateSlateVector2D *param_2)

{
  float *in_R8;
  
  (param_1->field0_0x0)._s_0.X =
       (double)CONCAT44((float)(double)param_2[1] + in_R8[1],(float)(double)*param_2 + *in_R8);
  return (FDeprecateSlateVector2D)param_1;
}

// operator| @ 1430659d0

ESlateDrawEffect __cdecl operator|(ESlateDrawEffect param_1,ESlateDrawEffect param_2)

{
  return param_1 | param_2;
}

// `vcall'{152,{flat}}'_}' @ 143069744

/* [thunk]: __cdecl STableRow<class TSharedPtr<struct FTextStyles::FFontFamily,1>
   >::`vcall'{152,{flat}}' }' */

void __thiscall
STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>::_vcall__152__flat______
          (STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143069747. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))();
  return;
}

// `vcall'{152,{flat}}'_}' @ 143069754

/* [thunk]: __cdecl STableRow<class TSharedRef<struct SDocumentsTest::FDocumentInfo,1>
   >::`vcall'{152,{flat}}' }' */

void __thiscall
STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::_vcall__152__flat______
          (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143069757. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))();
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 143069764

/* [thunk]:public: virtual void * __ptr64 __cdecl SComboRow<class TSharedPtr<struct
   FTextStyles::FFontFamily,1> >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64
    */

void * __thiscall
SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>::_vector_deleting_destructor__adjustor_8__
          (SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *)&this[-1].field_0x3f0,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 143069774

/* [thunk]:public: virtual void * __ptr64 __cdecl SListView<class TSharedPtr<struct
   FTextStyles::FFontFamily,1> >::`vector deleting destructor'`adjustor{680}' (unsigned int) __ptr64
    */

void * __thiscall
SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>::_vector_deleting_destructor__adjustor_680__
          (SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *)
                      &this[-1].OnGenerateRow.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{680}' @ 143069788

/* [thunk]:public: virtual void * __ptr64 __cdecl SListView<class TSharedRef<struct
   SDocumentsTest::FDocumentInfo,1> >::`vector deleting destructor'`adjustor{680}' (unsigned int)
   __ptr64 */

void * __thiscall
SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::_vector_deleting_destructor__adjustor_680__
          (SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)
                      &this[-1].OnGenerateRow.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14306979c

/* [thunk]:public: virtual void * __ptr64 __cdecl STableRow<class TSharedPtr<struct
   FTextStyles::FFontFamily,1> >::`vector deleting destructor'`adjustor{8}' (unsigned int) __ptr64
    */

void * __thiscall
STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>::_vector_deleting_destructor__adjustor_8__
          (STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *)
                      &this[-1].bChangedSelectionOnMouseDown,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 1430697ac

/* [thunk]:public: virtual void * __ptr64 __cdecl STableRow<class TSharedRef<struct
   SDocumentsTest::FDocumentInfo,1> >::`vector deleting destructor'`adjustor{8}' (unsigned int)
   __ptr64 */

void * __thiscall
STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::_vector_deleting_destructor__adjustor_8__
          (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)
                      &this[-1].bChangedSelectionOnMouseDown,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1430697c0

void * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedPtr<FTextStyles::FFontFamily,1>_>::
_scalar_deleting_destructor_
          (FArrayPointer<TSharedPtr<FTextStyles::FFontFamily,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1430697f0

void * __thiscall
UE::Slate::ItemsSource::FArrayPointer<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::
_scalar_deleting_destructor_
          (FArrayPointer<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143069820

void * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FTextStyles::FFontFamily,1>_>::
_scalar_deleting_destructor_
          (FObservableArrayPointer<TSharedPtr<FTextStyles::FFontFamily,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDelegateHandle FVar4;
  code *pcVar5;
  bool bVar6;
  void *pvVar7;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FObservableArrayPointer_V__TSharedPtr_UFFontFamily_FTextStyles___00___ItemsSource_Slate_UE__6B_
  ;
  if ((((this->ListViewOwner).Object == (STableViewBase *)0x0) ||
      (pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListViewOwner.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\IItemsSource.h"
                       ,0xa6,
                       L"The View widget has a source needed to be released to prevent bad memory access."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar5)();
      return pvVar7;
    }
  }
  FVar4.ID = (this->ArrayChangedHandle).ID;
  if (FVar4.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->ItemsSource->ArrayChangedDelegate,FVar4);
  }
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1430698e0

void * __thiscall
UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::
_scalar_deleting_destructor_
          (FObservableArrayPointer<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDelegateHandle FVar4;
  code *pcVar5;
  bool bVar6;
  void *pvVar7;
  
  this->_padding_ =
       (longlong)
       &
       ___7__FObservableArrayPointer_V__TSharedRef_UFDocumentInfo_SDocumentsTest___00___ItemsSource_Slate_UE__6B_
  ;
  if ((((this->ListViewOwner).Object == (STableViewBase *)0x0) ||
      (pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController,
      pTVar3 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar3->SharedReferenceCount < 1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ListViewOwner.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets\\Views\\IItemsSource.h"
                       ,0xa6,
                       L"The View widget has a source needed to be released to prevent bad memory access."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar5)();
      return pvVar7;
    }
  }
  FVar4.ID = (this->ArrayChangedHandle).ID;
  if (FVar4.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &this->ItemsSource->ArrayChangedDelegate,FVar4);
  }
  pTVar3 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1430699a0

void * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>::
_scalar_deleting_destructor_
          (FSharedObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDelegateHandle FVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FVar3.ID = (this->ArrayChangedHandle).ID;
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedPtr_UFFontFamily_FTextStyles___00___ItemsSource_Slate_UE__6B_
  ;
  if (FVar3.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ItemsSource).Object)->ArrayChangedDelegate,FVar3);
  }
  pTVar4 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemsSource).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143069a30

void * __thiscall
UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::
_scalar_deleting_destructor_
          (FSharedObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FDelegateHandle FVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  FVar3.ID = (this->ArrayChangedHandle).ID;
  this->_padding_ =
       (longlong)
       &
       ___7__FSharedObservableArray_V__TSharedRef_UFDocumentInfo_SDocumentsTest___00___ItemsSource_Slate_UE__6B_
  ;
  if (FVar3.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &((this->ItemsSource).Object)->ArrayChangedDelegate,FVar3);
  }
  pTVar4 = (this->ListViewOwner).WeakReferenceCount.ReferenceController;
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ItemsSource).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143069ac0

void * __thiscall
IBaseDelegateInstance<FSlateWidgetRun::FWidgetRunInfo___cdecl(FTextRunInfo_const_&,ISlateStyle_const_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<FSlateWidgetRun::FWidgetRunInfo___cdecl(FTextRunInfo_const_&,ISlateStyle_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143069af0

void * __thiscall
IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143069b20

void * __thiscall
IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<ITableRow,1>___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143069b50

void * __thiscall
IBaseDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143069b80

void * __thiscall
IBaseDelegateInstance<FString___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<FString___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143069bb0

void * __thiscall
IBaseDelegateInstance<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143069be0

void * __thiscall
IBaseDelegateInstance<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143069c10

void * __thiscall
IBaseDelegateInstance<void___cdecl(FTextLocation_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FTextLocation_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143069c40

void * __thiscall
IBaseDelegateInstance<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143069c70

void * __thiscall
IBaseDelegateInstance<void___cdecl(unsigned_short,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143069ca0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTextStyles::FFontFamily,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTextStyles::FFontFamily,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143069cd0

void * __thiscall
IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143069d00

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143069d30

void * __thiscall
UE::Slate::ItemsSource::IItemsSource<TSharedPtr<FTextStyles::FFontFamily,1>_>::
_scalar_deleting_destructor_
          (IItemsSource<TSharedPtr<FTextStyles::FFontFamily,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143069d60

void * __thiscall
UE::Slate::ItemsSource::IItemsSource<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::
_scalar_deleting_destructor_
          (IItemsSource<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143069d90

void * __thiscall
SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::_scalar_deleting_destructor_
          (SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_> *this,uint param_1)

{
  ~SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x4d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143069df0

void * __thiscall
SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>::_scalar_deleting_destructor_
          (SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *this,uint param_1)

{
  STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>::
  ~STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>
            ((STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143069e50

void * __thiscall
SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>::_scalar_deleting_destructor_
          (SListView<TSharedPtr<FTextStyles::FFontFamily,1>_> *this,uint param_1)

{
  ~SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143069eb0

void * __thiscall
SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::_scalar_deleting_destructor_
          (SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *this,uint param_1)

{
  ~SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa00);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143069f10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
SNumericEntryBox<unsigned_short>::_scalar_deleting_destructor_
          (SNumericEntryBox<unsigned_short> *this,uint param_1)

{
  ~SNumericEntryBox<unsigned_short>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x488);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143069f70

void * __thiscall
STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>::_scalar_deleting_destructor_
          (STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_> *this,uint param_1)

{
  ~STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143069fd0

void * __thiscall
STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::_scalar_deleting_destructor_
          (STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *this,uint param_1)

{
  ~STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306a030

void * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SInvalidationTest::Construct'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306a060

void * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306a090

void * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SGlobalInvalidationTest::Construct'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306a0c0

void * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306a0f0

void * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306a120

void * __thiscall
TBaseFunctorDelegateInstance<FReply___cdecl(void),FDefaultDelegateUserPolicy,`SSplineTest::Construct'::__l2::<lambda_4>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306a150

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FTextStyles::FFontFamily,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTextStyles::FFontFamily,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<FTextStyles::FFontFamily,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTextStyles::FFontFamily,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306a180

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306a1b0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTextStyles::FFontFamily,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<FTextStyles::FFontFamily,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTextStyles::FFontFamily,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306a1e0

void * __thiscall
TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,UE::Slate::ItemsSource::FSharedObservableArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306a210

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSplitterTest::FVisibilityCycler_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSplitterTest::FVisibilityCycler_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306a270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNumericEntryBox<unsigned_short>_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SNumericEntryBox<unsigned_short>_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306a2d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNumericEntryBox<unsigned_short>_const_,1,unsigned_short___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SNumericEntryBox<unsigned_short>_const_,1,unsigned_short___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306a330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNumericEntryBox<unsigned_short>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SNumericEntryBox<unsigned_short>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306a390

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNumericEntryBox<unsigned_short>_const_,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy,TDelegate<void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x30);
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
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 8));
  if (*(void **)((longlong)this + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x10));
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)((longlong)this + 8));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306a420

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306a480

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306a4e0

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306a540

void * __thiscall
TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306a5a0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SAnimTest_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SAnimTest_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306a600

void * __thiscall
TBaseSPMethodDelegateInstance<1,SAnimTest_const_,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SAnimTest_const_,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306a660

void * __thiscall
TBaseSPMethodDelegateInstance<1,SAnimTest_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SAnimTest_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306a6c0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SAnimTest_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SAnimTest_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306a720

void * __thiscall
TBaseSPMethodDelegateInstance<1,SColorPickerTest_const_,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SColorPickerTest_const_,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306a780

void * __thiscall
TBaseSPMethodDelegateInstance<1,SDPIScalingTest_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306a7e0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SDPIScalingTest_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SDPIScalingTest_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306a840

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SDocumentsTest_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SDocumentsTest_const_,1,EVisibility___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306a8a0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SDynamicBrushTest_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SDynamicBrushTest_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306a900

void * __thiscall
TBaseSPMethodDelegateInstance<1,SDynamicBrushTest_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SDynamicBrushTest_const_,1,FSlateBrush_const_*___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306a960

void * __thiscall
TBaseSPMethodDelegateInstance<1,SElementTesting_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SElementTesting_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306a9c0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SFxTest_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SFxTest_const_,1,UE::Math::TVector2<double>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306aa20

void * __thiscall
TBaseSPMethodDelegateInstance<1,SFxTest_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306aa80

void * __thiscall
TBaseSPMethodDelegateInstance<1,SFxTest_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SFxTest_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306aae0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SFxTest_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SFxTest_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306ab40

void * __thiscall
TBaseSPMethodDelegateInstance<1,SMultiLineEditingTest_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SMultiLineEditingTest_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306aba0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SMultiLineEditingTest_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306ac00

void * __thiscall
TBaseSPMethodDelegateInstance<1,SMultiLineEditingTest_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SMultiLineEditingTest_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306ac60

void * __thiscall
TBaseSPMethodDelegateInstance<1,SNotificationListTest_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306acc0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SRichTextEditTest_const_,1,TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SRichTextEditTest_const_,1,TOptional<unsigned_short>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306ad20

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SRichTextEditTest_const_,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SRichTextEditTest_const_,1,FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306ad80

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SRichTextEditTest_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SRichTextEditTest_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306ade0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SRichTextEditTest_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306ae40

void * __thiscall
TBaseSPMethodDelegateInstance<1,SRichTextTest_const_,1,FMargin___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SRichTextTest_const_,1,FMargin___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306aea0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SRichTextTest_const_,1,FSlateWidgetRun::FWidgetRunInfo___cdecl(FTextRunInfo_const_&,ISlateStyle_const_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SRichTextTest_const_,1,FSlateWidgetRun::FWidgetRunInfo___cdecl(FTextRunInfo_const_&,ISlateStyle_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306af00

void * __thiscall
TBaseSPMethodDelegateInstance<1,SRichTextTest_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SRichTextTest_const_,1,FText___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306af60

void * __thiscall
TBaseSPMethodDelegateInstance<1,SRichTextTest_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306afc0

void * __thiscall
TBaseSPMethodDelegateInstance<1,SRichTextTest_const_,1,enum_ETextJustify::Type___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306b020

void * __thiscall
TBaseSPMethodDelegateInstance<1,SRichTextTest_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SRichTextTest_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306b080

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,SSplineTest_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,SSplineTest_const_,1,float___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306b0e0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,STextEditTest_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STextEditTest_const_,1,FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306b140

void * __thiscall
TBaseSPMethodDelegateInstance<1,STextEditTest_const_,1,enum_ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306b1a0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<1,STextEditTest_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<1,STextEditTest_const_,1,bool___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306b200

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSplitterTest::FVisibilityCycler,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSplitterTest::FVisibilityCycler,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306b260

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1,TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306b2c0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1,FReply___cdecl(FGeometry_const_&,FKeyEvent_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306b320

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1,void___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306b380

void * __thiscall
TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1,void___cdecl(bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306b3e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SNumericEntryBox<unsigned_short>,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SNumericEntryBox<unsigned_short>,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306b440

void * __thiscall
TBaseSPMethodDelegateInstance<0,SNumericEntryBox<unsigned_short>,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306b4a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SNumericEntryBox<unsigned_short>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SNumericEntryBox<unsigned_short>,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306b500

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,FTabManager,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TSharedRef<FWorkspaceItem,1>_>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,FTabManager,1,void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TSharedRef<FWorkspaceItem,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306b570

void * __thiscall
TBaseSPMethodDelegateInstance<0,SAnimTest,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SAnimTest,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306b5d0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SAnimTest,1,void___cdecl(float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SAnimTest,1,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306b630

void * __thiscall
TBaseSPMethodDelegateInstance<0,SColorPickerTest,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SColorPickerTest,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306b690

void * __thiscall
TBaseSPMethodDelegateInstance<0,SColorPickerTest,1,void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SColorPickerTest,1,void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306b6f0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SDPIScalingTest,1,void___cdecl(float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SDPIScalingTest,1,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306b750

void * __thiscall
TBaseSPMethodDelegateInstance<0,SDPIScalingTest,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306b7b0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SDocumentsTest,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SDocumentsTest,1,TSharedRef<ITableRow,1>___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306b810

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SDocumentsTest,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SDocumentsTest,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306b870

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SDocumentsTest,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<SDocumentsTest::FDocumentInfo,1>_>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SDocumentsTest,1,FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<SDocumentsTest::FDocumentInfo,1>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  TSharedRef<SDocumentsTest::FDocumentInfo,1>::~TSharedRef<SDocumentsTest::FDocumentInfo,1>
            ((TSharedRef<SDocumentsTest::FDocumentInfo,1> *)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306b8e0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SDynamicBrushTest,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SDynamicBrushTest,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306b940

void * __thiscall
TBaseSPMethodDelegateInstance<0,SDynamicBrushTest,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306b9a0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SElementTesting,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SElementTesting,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306ba00

void * __thiscall
TBaseSPMethodDelegateInstance<0,SElementTesting,1,int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SElementTesting,1,int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306ba60

void * __thiscall
TBaseSPMethodDelegateInstance<0,SElementTesting,1,void___cdecl(float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SElementTesting,1,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306bac0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SFxTest,1,void___cdecl(float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SFxTest,1,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306bb20

void * __thiscall
TBaseSPMethodDelegateInstance<0,SFxTest,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306bb80

void * __thiscall
TBaseSPMethodDelegateInstance<0,SInvalidationTest,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SInvalidationTest,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306bbe0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMultiLineEditingTest,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306bc40

void * __thiscall
TBaseSPMethodDelegateInstance<0,SMultiLineEditingTest,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306bca0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SNotificationListTest,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SNotificationListTest,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306bd00

void * __thiscall
TBaseSPMethodDelegateInstance<0,SNotificationListTest,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306bd60

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SRichTextEditTest,1,TSharedRef<SWidget,1>___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SRichTextEditTest,1,TSharedRef<SWidget,1>___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306bdc0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SRichTextEditTest,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SRichTextEditTest,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306be20

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SRichTextEditTest,1,void___cdecl(FTextLocation_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SRichTextEditTest,1,void___cdecl(FTextLocation_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306be80

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SRichTextEditTest,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SRichTextEditTest,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306bee0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SRichTextEditTest,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306bf40

void * __thiscall
TBaseSPMethodDelegateInstance<0,SRichTextEditTest,1,void___cdecl(unsigned_short,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306bfa0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SRichTextEditTest,1,void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SRichTextEditTest,1,void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c000

void * __thiscall
TBaseSPMethodDelegateInstance<0,SRichTextEditTest,1,void___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c060

void * __thiscall
TBaseSPMethodDelegateInstance<0,SRichTextEditTest,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c0c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SRichTextEditTest,1,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SRichTextEditTest,1,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c120

void * __thiscall
TBaseSPMethodDelegateInstance<0,SRichTextTest,1,TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SRichTextTest,1,TSharedRef<SWidget,1>___cdecl(TSharedPtr<FString,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c180

void * __thiscall
TBaseSPMethodDelegateInstance<0,SRichTextTest,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SRichTextTest,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c1e0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SRichTextTest,1,void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SRichTextTest,1,void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c240

void * __thiscall
TBaseSPMethodDelegateInstance<0,SRichTextTest,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SRichTextTest,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c2a0

void * __thiscall
TBaseSPMethodDelegateInstance<0,SRichTextTest,1,void___cdecl(float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SRichTextTest,1,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c300

void * __thiscall
TBaseSPMethodDelegateInstance<0,SRichTextTest,1,void___cdecl(TSharedPtr<FString,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c360

void * __thiscall
TBaseSPMethodDelegateInstance<0,SRichTextTest,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c3c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSplineTest,1,void___cdecl(int),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSplineTest,1,void___cdecl(int),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c420

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSplineTest,1,void___cdecl(float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSplineTest,1,void___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c480

void * __thiscall
TBaseSPMethodDelegateInstance<0,SSplitterTest,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,SSplitterTest,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c4e0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,STextEditTest,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,STextEditTest,1,TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c540

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,STextEditTest,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,STextEditTest,1,FReply___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c5a0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,STextEditTest,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,STextEditTest,1,void___cdecl(FText_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c600

void * __thiscall
TBaseSPMethodDelegateInstance<0,STextEditTest,1,void___cdecl(FText_const_&,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c660

void * __thiscall
TBaseSPMethodDelegateInstance<0,STextEditTest,1,void___cdecl(enum_ECheckBoxState),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c6c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c6f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,FName>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,FName>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c720

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c750

void * __thiscall
TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c780

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy,TSharedRef<SWidget,1>_>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy,TSharedRef<SWidget,1>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c7c0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(float),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c7f0

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,int> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c820

void * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,int>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<bool___cdecl(void),FDefaultDelegateUserPolicy,int> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c850

void * __thiscall
TCommands<FMultiBoxTestCommandList>::_scalar_deleting_destructor_
          (TCommands<FMultiBoxTestCommandList> *this,uint param_1)

{
  *(undefined ***)this = &___7__TCommands_VFMultiBoxTestCommandList____6B_;
  FBindingContext::~FBindingContext((FBindingContext *)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c8a0

void * __thiscall
TCommonDelegateInstanceState<FSlateWidgetRun::FWidgetRunInfo___cdecl(FTextRunInfo_const_&,ISlateStyle_const_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FSlateWidgetRun::FWidgetRunInfo___cdecl(FTextRunInfo_const_&,ISlateStyle_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c8d0

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c900

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<ITableRow,1>___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSharedRef<STableViewBase,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c930

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,FName>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy,FName>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c960

void * __thiscall
TCommonDelegateInstanceState<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<TSharedRef<SWidget,1>___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c990

void * __thiscall
TCommonDelegateInstanceState<FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<SDocumentsTest::FDocumentInfo,1>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FReply___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<SDocumentsTest::FDocumentInfo,1>_>
           *this,uint param_1)

{
  TSharedRef<SDocumentsTest::FDocumentInfo,1>::~TSharedRef<SDocumentsTest::FDocumentInfo,1>
            ((TSharedRef<SDocumentsTest::FDocumentInfo,1> *)&this->Payload);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306c9d0

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FString___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306ca00

void * __thiscall
TCommonDelegateInstanceState<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FString___cdecl(TSharedRef<SDocumentsTest::FDocumentInfo,1>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306ca30

void * __thiscall
TCommonDelegateInstanceState<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306ca60

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TSharedRef<FWorkspaceItem,1>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy,TSharedRef<FWorkspaceItem,1>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306caa0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FTextLocation_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FTextLocation_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306cad0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306cb00

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy,TSharedRef<SWidget,1>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>_const_&),FDefaultDelegateUserPolicy,TSharedRef<SWidget,1>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306cb40

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(unsigned_short,enum_ETextCommit::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306cb70

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTextStyles::FFontFamily,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<FTextStyles::FFontFamily,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306cba0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306cbd0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FTextStyles::FFontFamily,1>,enum_ESelectInfo::Type),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306cc00

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<FText_(__cdecl*)(void),0,0>::
_scalar_deleting_destructor_(TFunction_OwnedObject<FText_(__cdecl*)(void),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6A_AVFText__XZ_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306cc40

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *this
          ,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306cc80

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SComboRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *this
          ,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306ccc0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *this
          ,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306cd00

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306cd40

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNumericEntryBox<unsigned_short>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SNumericEntryBox<unsigned_short>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x498);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306cd80

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSpinBox<unsigned_short>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SSpinBox<unsigned_short>,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x6e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306cdc0

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>,1> *this
          ,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306ce00

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306ce40

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TTableViewMetadata<TSharedPtr<FTextStyles::FFontFamily,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306ce80

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TTableViewMetadata<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TTableViewMetadata<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306cec0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SAnimTest,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SAnimTest,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x350);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306cf00

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SColorPickerTest,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SColorPickerTest,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306cf40

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SCustomPaintWidget,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SCustomPaintWidget,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306cf80

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDPIScaler,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SDPIScaler,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x288);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306cfc0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDPIScalingTest,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SDPIScalingTest,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d000

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDocumentsTest,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SDocumentsTest,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d040

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SDynamicBrushTest,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SDynamicBrushTest,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d080

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SElementTesting,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SElementTesting,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d0c0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SFxTest,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SFxTest,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d100

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SGammaTest,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SGammaTest,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d140

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SGlobalInvalidationTest,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SGlobalInvalidationTest,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d180

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SGridPanelTest,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SGridPanelTest,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d1c0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SInvalidationPanel,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SInvalidationPanel,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x460);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d200

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SInvalidationTest,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SInvalidationTest,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d240

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SLayoutRoundingTest,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SLayoutRoundingTest,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d280

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SMultiBoxTest,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SMultiBoxTest,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d2c0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SMultiLineEditingTest,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SMultiLineEditingTest,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d300

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNotificationListTest,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SNotificationListTest,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d340

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SResponsiveGridPanel,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SResponsiveGridPanel,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x290);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d380

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SRichTextEditTest,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SRichTextEditTest,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x368);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d3c0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SRichTextTest,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SRichTextTest,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x300);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d400

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSplineTest,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SSplineTest,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d440

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSplineWithHandles,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<SSplineWithHandles,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d480

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SSplitterTest,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<SSplitterTest,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x348);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d4c0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STestNotificationWidget,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STestNotificationWidget,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d500

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<STextEditTest,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<STextEditTest,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x3c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d540

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TDefaultNumericTypeInterface<unsigned_short>,SharedPointerInternals::DefaultDeleter<TDefaultNumericTypeInterface<unsigned_short>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TDefaultNumericTypeInterface<unsigned_short>,SharedPointerInternals::DefaultDeleter<TDefaultNumericTypeInterface<unsigned_short>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d580

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<SDocumentsTest::FDocumentInfo,SharedPointerInternals::DefaultDeleter<SDocumentsTest::FDocumentInfo>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<SDocumentsTest::FDocumentInfo,SharedPointerInternals::DefaultDeleter<SDocumentsTest::FDocumentInfo>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d5c0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTextStyles::FFontFamily,SharedPointerInternals::DefaultDeleter<FTextStyles::FFontFamily>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FTextStyles::FFontFamily,SharedPointerInternals::DefaultDeleter<FTextStyles::FFontFamily>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d600

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<SSplitterTest::FVisibilityCycler,SharedPointerInternals::DefaultDeleter<SSplitterTest::FVisibilityCycler>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<SSplitterTest::FVisibilityCycler,SharedPointerInternals::DefaultDeleter<SSplitterTest::FVisibilityCycler>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d640

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMultiBoxTestCommandList,SharedPointerInternals::DefaultDeleter<FMultiBoxTestCommandList>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMultiBoxTestCommandList,SharedPointerInternals::DefaultDeleter<FMultiBoxTestCommandList>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d680

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTextStyleDecoratorTest,SharedPointerInternals::DefaultDeleter<FTextStyleDecoratorTest>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FTextStyleDecoratorTest,SharedPointerInternals::DefaultDeleter<FTextStyleDecoratorTest>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d6c0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<SRenderTransformManipulatorWidgetImpl,SharedPointerInternals::DefaultDeleter<SRenderTransformManipulatorWidgetImpl>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<SRenderTransformManipulatorWidgetImpl,SharedPointerInternals::DefaultDeleter<SRenderTransformManipulatorWidgetImpl>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d700

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<SResponsiveGridPanelTestWidgetImpl,SharedPointerInternals::DefaultDeleter<SResponsiveGridPanelTestWidgetImpl>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<SResponsiveGridPanelTestWidgetImpl,SharedPointerInternals::DefaultDeleter<SResponsiveGridPanelTestWidgetImpl>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d740

void * __thiscall
TTableViewMetadata<TSharedPtr<FTextStyles::FFontFamily,1>_>::_scalar_deleting_destructor_
          (TTableViewMetadata<TSharedPtr<FTextStyles::FFontFamily,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->OwnerTableView).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d7b0

void * __thiscall
TTableViewMetadata<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::_scalar_deleting_destructor_
          (TTableViewMetadata<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->OwnerTableView).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7ISlateMetaData__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d820

void * __thiscall
FMultiBoxTestCommandList::_scalar_deleting_destructor_(FMultiBoxTestCommandList *this,uint param_1)

{
  ~FMultiBoxTestCommandList(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d870

void * __thiscall
SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::FSlateAccessibleComboBox::
_scalar_deleting_destructor_(FSlateAccessibleComboBox *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d8b0

void * __thiscall
SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>::FSlateAccessibleListView::
_scalar_deleting_destructor_(FSlateAccessibleListView *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d8f0

void * __thiscall
SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::FSlateAccessibleListView::
_scalar_deleting_destructor_(FSlateAccessibleListView *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d930

void * __thiscall
STableRow<TSharedPtr<FTextStyles::FFontFamily,1>_>::FSlateAccessibleTableRow::
_scalar_deleting_destructor_(FSlateAccessibleTableRow *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d970

void * __thiscall
STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::FSlateAccessibleTableRow::
_scalar_deleting_destructor_(FSlateAccessibleTableRow *this,uint param_1)

{
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306d9b0

void * __thiscall
FTextStyleDecoratorTest::_scalar_deleting_destructor_(FTextStyleDecoratorTest *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FTextStyleDecoratorTest__6B_;
  ITextDecorator::~ITextDecorator((ITextDecorator *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306da10

void * __thiscall SAnimTest::_scalar_deleting_destructor_(SAnimTest *this,uint param_1)

{
  FCurveSequence::~FCurveSequence(&this->SpawnAnimation);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x340);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306da80

void * __thiscall
SColorPickerTest::_scalar_deleting_destructor_(SColorPickerTest *this,uint param_1)

{
  void *pvVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OutputTextBlock).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Color).Getter);
  pvVar1 = *(void **)&(this->Color).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Color).Getter);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2e8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306db20

void * __thiscall
SCustomPaintWidget::_scalar_deleting_destructor_(SCustomPaintWidget *this,uint param_1)

{
  TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<int___cdecl(FOnPaintHandlerParams_const_&),FDefaultDelegateUserPolicy>
            (&this->OnPaintHandler);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306db90

void * __thiscall SDPIScalingTest::_scalar_deleting_destructor_(SDPIScalingTest *this,uint param_1)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306dbf0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall SDocumentsTest::_scalar_deleting_destructor_(SDocumentsTest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TSharedRef<SDocumentsTest::FDocumentInfo,1>,int>
            ((TSharedRef<SDocumentsTest::FDocumentInfo,1> *)(this->Documents).AllocatorInstance.Data
             ,(this->Documents).ArrayNum);
  pFVar1 = (this->Documents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306dc70

void * __thiscall
SDynamicBrushTest::_scalar_deleting_destructor_(SDynamicBrushTest *this,uint param_1)

{
  ~SDynamicBrushTest(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FSlateControlledConstruction::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x2c8);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306dcd0

void * __thiscall SElementTesting::_scalar_deleting_destructor_(SElementTesting *this,uint param_1)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->VerticalBox).SharedReferenceCount);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FSlateControlledConstruction::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x2c8);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306dd40

void * __thiscall SFxTest::_scalar_deleting_destructor_(SFxTest *this,uint param_1)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306dda0

void * __thiscall SGammaTest::_scalar_deleting_destructor_(SGammaTest *this,uint param_1)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306de00

void * __thiscall
SGlobalInvalidationTest::_scalar_deleting_destructor_(SGlobalInvalidationTest *this,uint param_1)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306de60

void * __thiscall SGridPanelTest::_scalar_deleting_destructor_(SGridPanelTest *this,uint param_1)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306dec0

void * __thiscall
SInvalidationTest::_scalar_deleting_destructor_(SInvalidationTest *this,uint param_1)

{
  TSharedPtr<SInvalidationPanel,1>::~TSharedPtr<SInvalidationPanel,1>(&this->CachePanel1);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306df30

void * __thiscall
SLayoutRoundingTest::_scalar_deleting_destructor_(SLayoutRoundingTest *this,uint param_1)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306df90

void * __thiscall SMultiBoxTest::_scalar_deleting_destructor_(SMultiBoxTest *this,uint param_1)

{
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&(this->CommandList).SharedReferenceCount);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FSlateControlledConstruction::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x2b8);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306e000

void * __thiscall
SMultiLineEditingTest::_scalar_deleting_destructor_(SMultiLineEditingTest *this,uint param_1)

{
  ITextData *pIVar1;
  
  pIVar1 = (this->MultilineEditableText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306e070

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SNotificationListTest::_scalar_deleting_destructor_(SNotificationListTest *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->PendingProgressPtr).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  TSharedPtr<SNotificationList,1>::~TSharedPtr<SNotificationList,1>(&this->NotificationListPtr);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2d8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306e100

void * __thiscall
SRenderTransformManipulatorWidget::_scalar_deleting_destructor_
          (SRenderTransformManipulatorWidget *this,uint param_1)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      SUserWidget::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x2a8);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306e160

void * __thiscall
SRenderTransformManipulatorWidgetImpl::_scalar_deleting_destructor_
          (SRenderTransformManipulatorWidgetImpl *this,uint param_1)

{
  TSharedPtr<SImage,1>::~TSharedPtr<SImage,1>(&this->ImageWidget);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      SUserWidget::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x2b8);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306e1d0

void * __thiscall
SResponsiveGridPanelTestWidget::_scalar_deleting_destructor_
          (SResponsiveGridPanelTestWidget *this,uint param_1)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      SUserWidget::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x2a8);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306e230

void * __thiscall
SResponsiveGridPanelTestWidgetImpl::_scalar_deleting_destructor_
          (SResponsiveGridPanelTestWidgetImpl *this,uint param_1)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      SUserWidget::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x2a8);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306e290

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SRichTextEditTest::_scalar_deleting_destructor_(SRichTextEditTest *this,uint param_1)

{
  ~SRichTextEditTest(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x358);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306e2f0

void * __thiscall SRichTextTest::_scalar_deleting_destructor_(SRichTextTest *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  TSharedPtr<SRichTextBlock,1>::~TSharedPtr<SRichTextBlock,1>(&this->InteractiveRichText);
  DestructItems<TSharedPtr<FString,1>,int>
            ((TSharedPtr<FString,1> *)(this->JustificationTypeOptions).AllocatorInstance.Data,
             (this->JustificationTypeOptions).ArrayNum);
  pFVar1 = (this->JustificationTypeOptions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306e380

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall SSplineTest::_scalar_deleting_destructor_(SSplineTest *this,uint param_1)

{
  TSharedPtr<SSplineWithHandles,1>::~TSharedPtr<SSplineWithHandles,1>(&this->SplineWidget);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306e3f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SSplineWithHandles::_scalar_deleting_destructor_(SSplineWithHandles *this,uint param_1)

{
  ~SSplineWithHandles(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3d0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306e450

void * __thiscall SSplitterTest::_scalar_deleting_destructor_(SSplitterTest *this,uint param_1)

{
  ~SSplitterTest(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FSlateControlledConstruction::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x338);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306e4b0

void * __thiscall
STestNotificationWidget::_scalar_deleting_destructor_(STestNotificationWidget *this,uint param_1)

{
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x2b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14306e510

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall STextEditTest::_scalar_deleting_destructor_(STextEditTest *this,uint param_1)

{
  ~STextEditTest(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x3b0);
  }
  return this;
}

// Convert @ 1430a6b90

float * __cdecl TransformConverter<float>::Convert(float *param_1)

{
  return param_1;
}

// Convert @ 1430a6ba0

TQuat<double> * __cdecl
TransformConverter<UE::Math::TQuat<double>_>::Convert(TQuat<double> *param_1)

{
  return param_1;
}

// Convert @ 1430a6bb0

TRotator<double> * __cdecl
TransformConverter<UE::Math::TRotator<double>_>::Convert(TRotator<double> *param_1)

{
  return param_1;
}

// Convert @ 1430a6bc0

TVector2<double> * __cdecl
TransformConverter<UE::Math::TVector2<double>_>::Convert(TVector2<double> *param_1)

{
  return param_1;
}

// Convert @ 1430a6bd0

TVector<double> * __cdecl
TransformConverter<UE::Math::TVector<double>_>::Convert(TVector<double> *param_1)

{
  return param_1;
}

// Convert @ 1430a6be0

TMatrix2x2<float> * __cdecl
TransformConverter<TMatrix2x2<float>_>::Convert(TMatrix2x2<float> *param_1)

{
  return param_1;
}

// Convert @ 1430a6bf0

TQuat2<float> * __cdecl TransformConverter<TQuat2<float>_>::Convert(TQuat2<float> *param_1)

{
  return param_1;
}

// Convert @ 1430a6c00

TScale2<float> * __cdecl TransformConverter<TScale2<float>_>::Convert(TScale2<float> *param_1)

{
  return param_1;
}

// Convert @ 1430a6c10

TShear2<float> * __cdecl TransformConverter<TShear2<float>_>::Convert(TShear2<float> *param_1)

{
  return param_1;
}

// Convert @ 1430a6c20

FSlateLayoutTransform * __cdecl
TransformConverter<FSlateLayoutTransform>::Convert(FSlateLayoutTransform *param_1)

{
  return param_1;
}

// GetAliceInWonderland @ 1430c7460

FText * __cdecl RichTextHelper::GetAliceInWonderland(FText *__return_storage_ptr__)

{
  FText::FromString(__return_storage_ptr__,
                    L"The <a id=\"browser\" href=\"http://en.wikipedia.org/wiki/Dormouse_(Alice%27s_Adventures_in_Wonderland)\" style=\"RichText.Interactive.Text.Hyperlink\">Dormouse</> had closed its eyes by this time, and was going off into a doze; but, on being pinched by the Hatter, it woke up again with a little shriek, and went on: \'<RichText.Interactive.Text.Dialogue>-that begins with an M, such as </><a id=\"browser\" href=\"http://en.wikipedia.org/wiki/Mousetrap\" style=\"RichText.Interactive.Text.DialogueHyperlink\">mouse-traps</><RichText.Interactive.Text.Dialogue>, and the moon, and memory, and muchness-you know you say things are \"much of a muchness\"-did you ever see such a thing as a drawing of a muchness?</>\'\n\n\'<RichText.Interactive.Text.Dialogue>Really, now you ask me,</>\' said <a id=\"browser\" href=\"http://en.wikipedia.org/wiki/Alice_(Alice%27s_Adventures_in_Wonderland)\" style=\"RichText.Interactive.Text.Hyperlink\">Alice</>, very much confused, \'<RichText.Interactive.Text.Dialogue>I don\'t think-</>\'\n\n\'<RichText.Interactive.Text.Dialogue>Then you shouldn\'t talk,</>\' said the <a id=\"browser\" href=\"http://en.wikipedia.org/wiki/The_Hatter\" style=\"RichText.Interactive.Text.Hyperlink\">Hatter</>.\n\nThis piece of rudeness was more than <a id=\"browser\" href=\"http://en.wikipedia.org/wiki/Alice_(Alice%27s_Adventures_in_Wonderland)\" style=\"RichText.Interactive.Text.Hyperlink\">Alice</> could bear: she got up in great disgust, and walked off; the <a id=\"browser\" href=\"http://en.wikipedia.org/wiki/Dormouse_(Alice%27s_Adventures_in_Wonderland)\" style=\"RichText.Interactive.Text.Hyperlink\">Dormouse</> fell asleep instantly, and neither of the others took the least notice of her going, though she looked back once or twice, half hoping that they would call after her: the last time she saw them, they were trying to put the <a id=\"browser\" href=\"http://en.wikipedia.org/wiki/Dormouse_(Alice%27s_Adventures_in_Wonderland)\" style=\"RichText.Interactive.Text.Hyperlink\">Dormouse</> into the teapot.\n\n\'<RichText.Interactive.Text.Dialogue>At any rate I\'ll never go..." /* TRUNCATED STRING LITERAL */
                   );
  return __return_storage_ptr__;
}

// GetAroundTheWorldIn80Days_Rainbow @ 1430c74b0

FText * __cdecl RichTextHelper::GetAroundTheWorldIn80Days_Rainbow(FText *__return_storage_ptr__)

{
  FText::FromString(__return_storage_ptr__,
                    L"<Rainbow.Text.Red>\"</><Rainbow.Text.Orange>I</> <Rainbow.Text.Yellow>know</> <Rainbow.Text.Green>it;</> <Rainbow.Text.Blue>I</> <Rainbow.Text.Red>don\'t</> <Rainbow.Text.Orange>blame</> <Rainbow.Text.Yellow>you.</>  <Rainbow.Text.Green>We</> <Rainbow.Text.Blue>start</> <Rainbow.Text.Red>for</> <Rainbow.Text.Orange>Dover</> <Rainbow.Text.Yellow>and</> <Rainbow.Text.Green>Calais</> <Rainbow.Text.Blue>in</> <Rainbow.Text.Red>ten</> <Rainbow.Text.Orange>minutes.</>\"\n\n<Rainbow.Text.Yellow>A</> <Rainbow.Text.Green>puzzled</> <Rainbow.Text.Blue>grin</> <Rainbow.Text.Red>overspread</> <Rainbow.Text.Orange>Passepartout\'s</> <Rainbow.Text.Yellow>round</> <Rainbow.Text.Green>face;</> <Rainbow.Text.Blue>clearly</> <Rainbow.Text.Red>he</> <Rainbow.Text.Orange>had</> <Rainbow.Text.Yellow>not</> <Rainbow.Text.Green>comprehended</> <Rainbow.Text.Blue>his</> <Rainbow.Text.Red>employer.</>\n\n<Rainbow.Text.Orange>\"</><Rainbow.Text.Yellow>Monsieur</> <Rainbow.Text.Green>is</> <Rainbow.Text.Blue>going</> <Rainbow.Text.Red>to</> <Rainbow.Text.Orange>leave</> <Rainbow.Text.Yellow>home?</><Rainbow.Text.Green>\"</>\n\n<Rainbow.Text.Blue>\"</><Rainbow.Text.Red>Yes,</><Rainbow.Text.Orange>\"</> <Rainbow.Text.Yellow>returned</> <Rainbow.Text.Green>Phileas</> <Rainbow.Text.Blue>Fogg.</>  <Rainbow.Text.Red>\"</><Rainbow.Text.Orange>We</> <Rainbow.Text.Yellow>are</> <Rainbow.Text.Green>going</> <Rainbow.Text.Blue>round</> <Rainbow.Text.Red>the</> <Rainbow.Text.Yellow>world.</><Rainbow.Text.Green>\"</>\n\n<Rainbow.Text.Blue>Passepartout</> <Rainbow.Text.Red>opened</> <Rainbow.Text.Orange>wide</> <Rainbow.Text.Yellow>his</> <Rainbow.Text.Green>eyes,</> <Rainbow.Text.Blue>raised</> <Rainbow.Text.Red>his</> <Rainbow.Text.Orange>eyebrows,</> <Rainbow.Text.Yellow>held</> <Rainbow.Text.Green>up</> <Rainbow.Text.Blue>his</> <Rainbow.Text.Red>hands,</> <Rainbow.Text.Orange>and</> <Rainbow.Text.Yellow>seemed</> <Rainbow.Text.Green>about</> <Rainbow.Text.Blue>to</> <Rainbow.Text.Red>collapse,</> <Rainbow.Text.Orange>so</> <Rainbow.Text.Yellow>overcome</> <Rainbow.T..." /* TRUNCATED STRING LITERAL */
                   );
  return __return_storage_ptr__;
}

// GetTestRenderTransform @ 1430cdda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<TTransform2<float>_> * __cdecl
GetTestRenderTransform(TOptional<TTransform2<float>_> *__return_storage_ptr__)

{
  TMatrix2x2<float> *pTVar1;
  undefined1 auStack_68 [32];
  TMatrix2x2<float> local_48;
  TTransform2<float> local_38;
  TMatrix2x2<float> local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  pTVar1 = Concatenate<TShear2<float>,TScale2<float>_>
                     (&local_20,&TestSuiteNS::Shear,&TestSuiteNS::Scale);
  Concatenate<TMatrix2x2<float>,TQuat2<float>_>(&local_48,pTVar1,&TestSuiteNS::Rot);
  TransformConverter<TTransform2<float>_>::Convert<TMatrix2x2<float>_>(&local_38,&local_48);
  TOptional<TTransform2<float>_>::TOptional<TTransform2<float>_>(__return_storage_ptr__,&local_38);
  return __return_storage_ptr__;
}

// GetTestRenderTransformPivot @ 1430cde30

TVector2<double> * __cdecl GetTestRenderTransformPivot(TVector2<double> *__return_storage_ptr__)

{
  UE::Math::TVector2<double>::TVector2<double><float>(__return_storage_ptr__,&TestSuiteNS::Offset);
  return __return_storage_ptr__;
}

// GetTheWarOfTheWorlds_Part1 @ 1430cde60

FText * __cdecl RichTextHelper::GetTheWarOfTheWorlds_Part1(FText *__return_storage_ptr__)

{
  FText::FromString(__return_storage_ptr__,
                    L"When we had finished eating we went softly upstairs to my study, and I looked again out of the open window.  In one night the valley had become a valley of ashes.  The fires had dwindled now.  Where flames had been there were now streamers of smoke; but the countless ruins of shattered and gutted houses and blasted and blackened trees that the night had hidden stood out now gaunt and terrible in the pitiless light of dawn.  Yet here and there some object had had the luck to escape--a white railway signal here, the end of a greenhouse there, white and fresh amid the wreckage.  Never before in the history of warfare had destruction been so indiscriminate and so universal. And shining with the growing light of the east, three of the metallic giants stood about the pit, their cowls rotating as though they were surveying the desolation they had made.\n\nIt seemed to me that the pit had been enlarged, and ever and again puffs of vivid green vapour streamed up and out of it towards the brightening dawn--streamed up, whirled, broke, and vanished.\n\nBeyond were the pillars of fire about Chobham.  They became pillars of bloodshot smoke at the first touch of day.\n\nAs the dawn grew brighter we withdrew from the window from which we had watched the Martians, and went very quietly downstairs.\n\nThe artilleryman agreed with me that the house was no place to stay in.  He proposed, he said, to make his way Londonward, and thence rejoin his battery--No. 12, of the Horse Artillery.  My plan was to return at once to Leatherhead; and so greatly had the strength of the Martians impressed me that I had determined to take my wife to Newhaven, and go with her out of the country forthwith.  For I already perceived clearly that the country about London must inevitably be the scene of a disastrous struggle before such creatures as these could be destroyed.\n\nBetween us and Leatherhead, however, lay the third cylinder, with its guarding giants.  Had I been alone, I think I should have taken my chance and struck across country.  But the artillerym..." /* TRUNCATED STRING LITERAL */
                   );
  return __return_storage_ptr__;
}

// GetTheWarOfTheWorlds_Part2 @ 1430cde90

FText * __cdecl RichTextHelper::GetTheWarOfTheWorlds_Part2(FText *__return_storage_ptr__)

{
  FText::FromString(__return_storage_ptr__,
                    L"And beyond, over the blue hills that rise southward of the river, the glittering Martians went to and fro, calmly and methodically spreading their poison cloud over this patch of country and then over that, laying it again with their steam jets when it had served its purpose, and taking possession of the conquered country.  They do not seem to have aimed at extermination so much as at complete demoralisation and the destruction of any opposition.  They exploded any stores of powder they came upon, cut every telegraph, and wrecked the railways here and there.  They were hamstringing mankind.  They seemed in no hurry to extend the field of their operations, and did not come beyond the central part of London all that day.  It is possible that a very considerable number of people in London stuck to their houses through Monday morning.  Certain it is that many died at home suffocated by the Black Smoke.\n\nUntil about midday the Pool of London was an astonishing scene. Steamboats and shipping of all sorts lay there, tempted by the enormous sums of money offered by fugitives, and it is said that many who swam out to these vessels were thrust off with boathooks and drowned.  About one o\'clock in the afternoon the thinning remnant of a cloud of the black vapour appeared between the arches of Blackfriars Bridge.  At that the Pool became a scene of mad confusion, fighting, and collision, and for some time a multitude of boats and barges jammed in the northern arch of the Tower Bridge, and the sailors and lightermen had to fight savagely against the people who swarmed upon them from the riverfront.  People were actually clambering down the piers of the bridge from above.\n\nWhen, an hour later, a Martian appeared beyond the Clock Tower and waded down the river, nothing but wreckage floated above Limehouse.\n\nOf the falling of the fifth cylinder I have presently to tell.  The sixth star fell at Wimbledon.  My brother, keeping watch beside the women in the chaise in a meadow, saw the green flash of it far beyond the hills.  On Tue..." /* TRUNCATED STRING LITERAL */
                   );
  return __return_storage_ptr__;
}

// GetTheWarOfTheWorlds_Part3 @ 1430cdec0

FText * __cdecl RichTextHelper::GetTheWarOfTheWorlds_Part3(FText *__return_storage_ptr__)

{
  FText::FromString(__return_storage_ptr__,
                    L"They saw the gaunt figures separating and rising out of the water as they retreated shoreward, and one of them raised the camera-like generator of the Heat-Ray.  He held it pointing obliquely downward, and a bank of steam sprang from the water at its touch.  It must have driven through the iron of the ship\'s side like a white-hot iron rod through paper.\n\nBut no one heeded that very much.  At the sight of the Martian\'s collapse the captain on the bridge yelled inarticulately, and all the crowding passengers on the steamer\'s stern shouted together.  And then they yelled again.  For, surging out beyond the white tumult, drove something long and black, the flames streaming from its middle parts, its ventilators and funnels spouting fire.\n\nShe was alive still; the steering gear, it seems, was intact and her engines working.  She headed straight for a second Martian, and was within a hundred yards of him when the Heat-Ray came to bear.  Then with a violent thud, a blinding flash, her decks, her funnels, leaped upward.  The Martian staggered with the violence of her explosion, and in another moment the flaming wreckage, still driving forward with the impetus of its pace, had struck him and crumpled him up like a thing of cardboard.  My brother shouted involuntarily.  A boiling tumult of steam hid everything again.\n\n\"Two!\" yelled the captain.\n\nEveryone was shouting.  The whole steamer from end to end rang with frantic cheering that was taken up first by one and then by all in the crowding multitude of ships and boats that was driving out to sea.\n\nThe little vessel continued to beat its way seaward, and the ironclads receded slowly towards the coast, which was hidden still by a marbled bank of vapour, part steam, part black gas, eddying and combining in the strangest way.  The fleet of refugees was scattering to the northeast; several smacks were sailing between the ironclads and the steamboat.  After a time, and before they reached the sinking cloud bank, the warships turned northward, and then abruptly went about and pa..." /* TRUNCATED STRING LITERAL */
                   );
  return __return_storage_ptr__;
}

// MakeSplitterTest @ 1430d77a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl MakeSplitterTest(void)

{
  FDeprecateVector2DParameter *pFVar1;
  TSlateDecl<SSplitterTest,RequiredArgs::T0RequiredArgs> *this;
  TSharedRef<SSplitterTest,1> *pTVar2;
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> *this_00;
  T0RequiredArgs local_5f8;
  T0RequiredArgs local_5f7 [7];
  FSlateApplication *local_5f0;
  TVector2<double>_u_0 *local_5e8;
  FDeprecateVector2DParameter *local_5e0;
  FDeprecateVector2DParameter local_5d8;
  FArguments *local_5d0;
  FArguments *local_5c8;
  FArguments *local_5c0;
  FArguments *local_5b8;
  FArguments *local_5b0;
  TSharedRef<SWindow,1> *local_5a8;
  TSharedRef<SWindow,1> *local_5a0;
  code *local_598;
  TVector2<double>_u_0 local_590;
  TSharedRef<SWidget,1> local_580;
  TSharedRef<SWindow,1> local_570;
  FDeprecateVector2DParameter local_560;
  TSharedRef<SSplitterTest,1> local_558;
  TSharedRef<SWindow,1> local_548;
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> local_538;
  TSlateDecl<SSplitterTest,RequiredArgs::T0RequiredArgs> local_520;
  TSharedRef<SWindow,1> local_508;
  FSlateBaseNamedArgs local_4f8;
  FArguments local_300;
  
  local_5d0 = SWindow::FArguments::FArguments(&local_300);
  local_5e0 = &local_560;
  local_590._s_0.X = __real_4084000000000000;
  local_590._s_0.Y = __real_407e000000000000;
  local_5e8 = &local_590;
  pFVar1 = UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
                     (local_5e0,(TVector2<double> *)&local_5e8->_s_0);
  local_5d8 = *pFVar1;
  local_5c8 = SWindow::FArguments::ClientSize(local_5d0,local_5d8);
  local_5b8 = SWindow::FArguments::AutoCenter(local_5c8,PrimaryWorkArea);
  local_5c0 = SSplitterTest::FArguments::FArguments((FArguments *)&local_4f8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_5f8);
  this = MakeTDecl<SSplitterTest,RequiredArgs::T0RequiredArgs>
                   (&local_520,"SSplitterTest",
                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                    ,0x19a0,&local_5f8);
  pTVar2 = TSlateDecl<SSplitterTest,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this,&local_558,local_5c0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSplitterTest>(&local_580,pTVar2);
  local_5b0 = SWindow::FArguments::operator[](local_5b8,&local_580);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_5f7);
  this_00 = MakeTDecl<SWindow,RequiredArgs::T0RequiredArgs>
                      (&local_538,"SWindow",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x199c,local_5f7);
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::operator<<=(this_00,&local_570,local_5b0);
  TSharedPtr<SWindow,1>::~TSharedPtr<SWindow,1>(&local_538._Widget);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_580);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_558.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_520._Widget.SharedReferenceCount);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_4f8);
  SWindow::FArguments::~FArguments(&local_300);
  local_5f0 = FSlateApplication::Get();
  local_598 = *(code **)(*(longlong *)local_5f0 + 0x10);
  local_5a8 = &local_508;
  local_5a0 = TSharedRef<SWindow,1>::TSharedRef<SWindow,1>(local_5a8,&local_570);
  (*local_598)(local_5f0,&local_548,local_5a0,1);
  TSharedRef<SWindow,1>::~TSharedRef<SWindow,1>(&local_548);
  TSharedRef<SWindow,1>::~TSharedRef<SWindow,1>(&local_570);
  return;
}

// OnBrowserLinkClicked @ 1430d90b0

void __cdecl
RichTextHelper::OnBrowserLinkClicked
          (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           *param_1,TSharedRef<SWidget,1> *param_2)

{
  undefined1 local_98 [4];
  int local_94;
  FString *local_90;
  FScriptContainerElement *local_88;
  FString *local_80;
  FScriptContainerElement *local_78;
  FScriptContainerElement *local_70;
  FScriptContainerElement *local_68;
  FScriptContainerElement *local_60;
  TSharedRef<SWidget,1> *local_58;
  TSharedRef<SWidget,1> *local_50;
  FText *local_48;
  FString local_40;
  FText local_30;
  TSharedRef<SWidget,1> local_20 [2];
  
  ::FString::FString(&local_40,L"href");
  local_90 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
             ::Find((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                     *)param_1,&local_40);
  local_80 = local_90;
  ::FString::~FString(&local_40);
  if (local_90 == (FString *)0x0) {
    local_58 = local_20;
    local_50 = TSharedRef<SWidget,1>::TSharedRef<SWidget,1>(local_58,param_2);
    local_48 = FText::AsLocalizable_Advanced_LocText
                         (&local_30,L"STestSuite",L"FailedToFindUrlPopUpMessage",
                          L"Sorry this hyperlink is not <RichText.Tagline.TextHighlight>configured incorrectly</>!"
                         );
    SpawnProClickerPopUp(local_48,local_50);
    FText::~FText(&local_30);
  }
  else {
    local_94 = (local_90->Data).ArrayNum;
    if (local_94 == 0) {
      local_88 = (FScriptContainerElement *)
                 `FString::operator*'::__l2::<lambda_1>::operator()(local_98);
    }
    else {
      local_88 = (local_90->Data).AllocatorInstance.Data;
      local_78 = local_88;
      local_70 = local_88;
      local_68 = local_88;
    }
    local_60 = local_88;
    FWindowsPlatformProcess::LaunchURL((wchar_t *)local_88,(wchar_t *)0x0,(FString *)0x0);
  }
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(param_2);
  return;
}

// RestoreSlateTestSuite @ 1430ea8b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl RestoreSlateTestSuite(void)

{
  FName *pFVar1;
  TSharedRef<FGlobalTabmanager,1> *pTVar2;
  FGlobalTabmanager *pFVar3;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *pTVar4;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  *pTVar5;
  FTabSpawnerEntry *pFVar6;
  FText *pFVar7;
  TSharedRef<FTabManager::FLayout,1> *pTVar8;
  FLayout *pFVar9;
  TSharedRef<FTabManager::FArea,1> *pTVar10;
  FArea *pFVar11;
  TSharedRef<FTabManager::FStack,1> *pTVar12;
  FStack *pFVar13;
  TSharedRef<FTabManager::FLayoutNode,1> *pTVar14;
  TSharedPtr<SWindow,1> *pTVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  TVector2<double> *pTVar19;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  TSharedRef<FTabManager::FLayout,1> local_2f0;
  FName local_2e0;
  FName local_2d8;
  FName local_2d0;
  FName local_2c8;
  FName local_2c0;
  FName local_2b8;
  FName local_2b0;
  FName local_2a8;
  FName local_2a0;
  FName local_298;
  FName local_290;
  FName local_288;
  FText local_280;
  undefined1 local_270 [24];
  TVector2<double> local_258;
  FTabId local_248;
  undefined1 local_238 [16];
  TVector2<double> local_228;
  TSharedRef<FTabManager::FArea,1> local_218;
  TSharedRef<FTabManager::FStack,1> local_208;
  TSharedRef<FTabManager::FStack,1> local_1f8;
  TSharedRef<FTabManager::FArea,1> local_1e8;
  TSharedRef<FTabManager::FArea,1> local_1d8;
  TSharedRef<FTabManager::FLayout,1> local_1c8;
  TSharedRef<FTabManager::FArea,1> local_1b8;
  TSharedRef<FTabManager::FStack,1> local_1a8;
  TSharedRef<FTabManager::FStack,1> local_198;
  TSharedRef<FTabManager::FStack,1> local_188;
  TSharedRef<FTabManager::FStack,1> local_178;
  TSharedRef<FTabManager::FStack,1> local_168;
  TSharedRef<FTabManager::FStack,1> local_158;
  TSharedRef<FTabManager::FArea,1> local_148;
  TSharedRef<FTabManager::FArea,1> local_138;
  TSharedRef<FTabManager::FLayout,1> local_128;
  TSharedPtr<SWidget,1> local_118;
  TSharedPtr<SWindow,1> local_108;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> local_f8;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> local_e0;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> local_c8;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> local_b0;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  local_98;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  local_80;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  local_68;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  local_50;
  TSharedRef<FTabManager::FLayoutNode,1> local_38;
  TSharedRef<FTabManager::FLayoutNode,1> local_28;
  
  pFVar1 = FName::FName(&local_2b8,"SlateReflector");
  FModuleManager::LoadModuleChecked<ISlateReflectorModule>(*pFVar1);
  FTestStyle::ResetToDefault();
  pTVar2 = FGlobalTabmanager::Get();
  pFVar3 = TSharedRef<FGlobalTabmanager,1>::operator->(pTVar2);
  pTVar4 = &local_f8;
  for (lVar16 = 0x18; lVar16 != 0; lVar16 = lVar16 + -1) {
    *(undefined1 *)pTVar4 = 0;
    pTVar4 = (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
             &pTVar4->field_0x1;
  }
  pTVar4 = TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
           TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_f8);
  pTVar5 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
           ::CreateStatic<>(&local_98,SpawnTestSuite1);
  pFVar1 = FName::FName(&local_2e0,"TestSuite1");
  FTabManager::RegisterTabSpawner((FTabManager *)pFVar3,*pFVar1,pTVar5,pTVar4);
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            (&local_98);
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_f8);
  pTVar2 = FGlobalTabmanager::Get();
  pFVar3 = TSharedRef<FGlobalTabmanager,1>::operator->(pTVar2);
  pTVar4 = &local_e0;
  for (lVar16 = 0x18; lVar16 != 0; lVar16 = lVar16 + -1) {
    *(undefined1 *)pTVar4 = 0;
    pTVar4 = (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
             &pTVar4->field_0x1;
  }
  pTVar4 = TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
           TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_e0);
  pTVar5 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
           ::CreateStatic<>(&local_80,SpawnTestSuite2);
  pFVar1 = FName::FName(&local_2d8,"TestSuite2");
  FTabManager::RegisterTabSpawner((FTabManager *)pFVar3,*pFVar1,pTVar5,pTVar4);
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            (&local_80);
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_e0);
  pTVar2 = FGlobalTabmanager::Get();
  pFVar3 = TSharedRef<FGlobalTabmanager,1>::operator->(pTVar2);
  pTVar4 = &local_c8;
  for (lVar16 = 0x18; lVar16 != 0; lVar16 = lVar16 + -1) {
    *(undefined1 *)pTVar4 = 0;
    pTVar4 = (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
             &pTVar4->field_0x1;
  }
  pTVar4 = TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
           TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_c8);
  pTVar5 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
           ::CreateStatic<>(&local_68,SpawnRenderTransformManipulator);
  pFVar1 = FName::FName(&local_2d0,"RenderTransformManipulator");
  FTabManager::RegisterTabSpawner((FTabManager *)pFVar3,*pFVar1,pTVar5,pTVar4);
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            (&local_68);
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_c8);
  pTVar2 = FGlobalTabmanager::Get();
  pFVar3 = TSharedRef<FGlobalTabmanager,1>::operator->(pTVar2);
  pTVar4 = &local_b0;
  for (lVar16 = 0x18; lVar16 != 0; lVar16 = lVar16 + -1) {
    *(undefined1 *)pTVar4 = 0;
    pTVar4 = (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
             &pTVar4->field_0x1;
  }
  pTVar4 = TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
           TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_b0);
  pTVar5 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
           ::CreateStatic<>(&local_50,SpawnWidgetGallery);
  pFVar1 = FName::FName(&local_2c8,"WidgetGalleryTab");
  pFVar6 = FGlobalTabmanager::RegisterNomadTabSpawner(pFVar3,*pFVar1,pTVar5,pTVar4);
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_280,L"STestSuite",L"WidgetGalleryTab",L"Widget Gallery");
  pFVar6 = FTabSpawnerEntry::SetDisplayName(pFVar6,pFVar7);
  FTabSpawnerEntry::SetGroup(pFVar6,&TestSuiteMenu::MenuRoot);
  FText::~FText(&local_280);
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            (&local_50);
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_b0);
  pFVar1 = FName::FName(&local_2c0,"SlateTestSuite_Layout");
  pTVar8 = FTabManager::NewLayout(&local_128,*pFVar1);
  pFVar9 = TSharedRef<FTabManager::FLayout,1>::operator->(pTVar8);
  pTVar10 = FTabManager::NewArea(&local_138,__real_44c80000,__real_44960000);
  pFVar11 = TSharedRef<FTabManager::FArea,1>::operator->(pTVar10);
  local_310 = __real_407a400000000000;
  local_308 = __real_4024000000000000;
  puVar17 = &local_310;
  puVar18 = local_270;
  for (lVar16 = 0x10; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar18 = *(undefined1 *)puVar17;
    puVar17 = (undefined8 *)((longlong)puVar17 + 1);
    puVar18 = puVar18 + 1;
  }
  puVar18 = local_270;
  pTVar19 = &local_258;
  for (lVar16 = 0x10; lVar16 != 0; lVar16 = lVar16 + -1) {
    *(undefined1 *)&pTVar19->field0_0x0 = *puVar18;
    puVar18 = puVar18 + 1;
    pTVar19 = (TVector2<double> *)((longlong)&pTVar19->field0_0x0 + 1);
  }
  pTVar10 = FTabManager::FArea::SetWindow(pFVar11,&local_148,&local_258,false);
  pFVar11 = TSharedRef<FTabManager::FArea,1>::operator->(pTVar10);
  pTVar12 = FTabManager::NewStack(&local_158);
  pFVar13 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar12);
  pFVar1 = FName::FName(&local_288,"TestSuite2");
  pTVar12 = FTabManager::FStack::AddTab(pFVar13,&local_168,*pFVar1,OpenedTab);
  pFVar13 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar12);
  pFVar1 = FName::FName(&local_2b0,"TestSuite1");
  pTVar12 = FTabManager::FStack::AddTab(pFVar13,&local_178,*pFVar1,OpenedTab);
  pFVar13 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar12);
  pFVar1 = FName::FName(&local_2a8,"RenderTransformManipulator");
  pTVar12 = FTabManager::FStack::AddTab(pFVar13,&local_188,*pFVar1,OpenedTab);
  pFVar13 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar12);
  pFVar1 = FName::FName(&local_2a0,"WidgetGalleryTab");
  pTVar12 = FTabManager::FStack::AddTab(pFVar13,&local_198,*pFVar1,OpenedTab);
  pFVar13 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar12);
  pFVar1 = FName::FName(&local_298,"TestSuite1");
  FTabId::FTabId(&local_248,*pFVar1);
  pTVar12 = FTabManager::FStack::SetForegroundTab(pFVar13,&local_1a8,&local_248);
  pTVar14 = TSharedRef<FTabManager::FLayoutNode,1>::
            TSharedRef<FTabManager::FLayoutNode,1><FTabManager::FStack>(&local_38,pTVar12);
  pTVar10 = FTabManager::FArea::Split(pFVar11,&local_1b8,pTVar14);
  pTVar8 = FTabManager::FLayout::AddArea(pFVar9,&local_1c8,pTVar10);
  pFVar9 = TSharedRef<FTabManager::FLayout,1>::operator->(pTVar8);
  pTVar10 = FTabManager::NewArea(&local_1d8,__real_43c80000,__real_44160000);
  pFVar11 = TSharedRef<FTabManager::FArea,1>::operator->(pTVar10);
  local_300 = __real_4024000000000000;
  local_2f8 = __real_4024000000000000;
  puVar17 = &local_300;
  puVar18 = local_238;
  for (lVar16 = 0x10; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar18 = *(undefined1 *)puVar17;
    puVar17 = (undefined8 *)((longlong)puVar17 + 1);
    puVar18 = puVar18 + 1;
  }
  puVar18 = local_238;
  pTVar19 = &local_228;
  for (lVar16 = 0x10; lVar16 != 0; lVar16 = lVar16 + -1) {
    *(undefined1 *)&pTVar19->field0_0x0 = *puVar18;
    puVar18 = puVar18 + 1;
    pTVar19 = (TVector2<double> *)((longlong)&pTVar19->field0_0x0 + 1);
  }
  pTVar10 = FTabManager::FArea::SetWindow(pFVar11,&local_1e8,&local_228,false);
  pFVar11 = TSharedRef<FTabManager::FArea,1>::operator->(pTVar10);
  pTVar12 = FTabManager::NewStack(&local_1f8);
  pFVar13 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar12);
  pFVar1 = FName::FName(&local_290,"WidgetReflector");
  pTVar12 = FTabManager::FStack::AddTab(pFVar13,&local_208,*pFVar1,OpenedTab);
  pTVar14 = TSharedRef<FTabManager::FLayoutNode,1>::
            TSharedRef<FTabManager::FLayoutNode,1><FTabManager::FStack>(&local_28,pTVar12);
  pTVar10 = FTabManager::FArea::Split(pFVar11,&local_218,pTVar14);
  FTabManager::FLayout::AddArea(pFVar9,&local_2f0,pTVar10);
  TSharedRef<FTabManager::FArea,1>::~TSharedRef<FTabManager::FArea,1>(&local_218);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_208);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_1f8);
  TSharedRef<FTabManager::FArea,1>::~TSharedRef<FTabManager::FArea,1>(&local_1e8);
  TSharedRef<FTabManager::FArea,1>::~TSharedRef<FTabManager::FArea,1>(&local_1d8);
  TSharedRef<FTabManager::FLayout,1>::~TSharedRef<FTabManager::FLayout,1>(&local_1c8);
  TSharedRef<FTabManager::FArea,1>::~TSharedRef<FTabManager::FArea,1>(&local_1b8);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_1a8);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_198);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_188);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_178);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_168);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_158);
  TSharedRef<FTabManager::FArea,1>::~TSharedRef<FTabManager::FArea,1>(&local_148);
  TSharedRef<FTabManager::FArea,1>::~TSharedRef<FTabManager::FArea,1>(&local_138);
  TSharedRef<FTabManager::FLayout,1>::~TSharedRef<FTabManager::FLayout,1>(&local_128);
  pTVar2 = FGlobalTabmanager::Get();
  pFVar3 = TSharedRef<FGlobalTabmanager,1>::operator->(pTVar2);
  pTVar15 = TSharedPtr<SWindow,1>::TSharedPtr<SWindow,1>(&local_108,(FNullTag *)0x0);
  FTabManager::RestoreFrom((FTabManager *)pFVar3,&local_118,&local_2f0,pTVar15,false,Never);
  TSharedPtr<SWidget,1>::~TSharedPtr<SWidget,1>(&local_118);
  TSharedPtr<SWindow,1>::~TSharedPtr<SWindow,1>(&local_108);
  TSharedRef<FTabManager::FLayout,1>::~TSharedRef<FTabManager::FLayout,1>(&local_2f0);
  return;
}

// SpawnProClickerPopUp @ 1430f0a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl RichTextHelper::SpawnProClickerPopUp(FText *param_1,TSharedRef<SWidget,1> *param_2)

{
  FName *pFVar1;
  TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs> *this;
  TSharedRef<SRichTextBlock,1> *pTVar2;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SBorder,1> *pTVar3;
  FDeprecateSlateVector2D *pFVar4;
  undefined1 auStackY_bd8 [32];
  T0RequiredArgs local_b78;
  T0RequiredArgs local_b77;
  undefined1 local_b76 [2];
  Type local_b74;
  FSlateApplication *local_b70;
  ISlateStyle *local_b68;
  FPopupTransitionEffect local_b60 [2];
  FArguments *local_b58;
  FName *local_b50;
  FName local_b48;
  code *local_b40;
  FSlateBrush *local_b38;
  TAttribute<FSlateBrush_const_*> *local_b30;
  TAttribute<FSlateBrush_const_*> *local_b28;
  FArguments *local_b20;
  TAttribute<FText> *local_b18;
  TAttribute<FText> *local_b10;
  FArguments *local_b08;
  FName local_b00;
  ISlateStyle *local_af8;
  FArguments *local_af0;
  ISlateStyle *local_ae8;
  FArguments *local_ae0;
  undefined1 *local_ad8;
  TAttribute<ETextJustify::Type> *local_ad0;
  FArguments *local_ac8;
  FArguments *local_ac0;
  FArguments *local_ab8;
  FArguments *local_ab0;
  undefined1 *local_aa8;
  code *local_aa0;
  TOptional<EPopupMethod> *local_a98;
  FDeprecateVector2DParameter local_a90;
  FPopupTransitionEffect *local_a88;
  FDeprecateVector2DParameter local_a80;
  FWidgetPath *local_a78;
  TSharedRef<SWidget,1> *local_a70;
  FSlateApplication *local_a68;
  TSharedRef<SWidget,1> local_a60;
  TSharedRef<SWidget,1> local_a50;
  FName local_a40;
  undefined1 local_a38 [8];
  TSharedRef<SBorder,1> local_a30;
  TSharedRef<SRichTextBlock,1> local_a20;
  TSharedPtr<IMenu,1> local_a10;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_a00;
  TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs> local_9e8;
  undefined1 local_9d0 [32];
  TAttribute<FSlateBrush_const_*> local_9b0;
  TAttribute<FText> local_988;
  FArguments local_958;
  FArguments local_578;
  FWidgetPath local_178;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_bd8;
  local_b58 = SBorder::FArguments::FArguments(&local_958);
  local_b20 = SBorder::FArguments::Padding(local_b58,__real_41200000);
  local_b30 = &local_9b0;
  local_b68 = FTestStyle::Get();
  local_b40 = *(code **)((longlong)*local_b68 + 0x50);
  local_b50 = &local_a40;
  pFVar1 = ::FName::FName(local_b50,"RichText.Tagline.Background");
  local_b48 = *pFVar1;
  local_b38 = (FSlateBrush *)(*local_b40)(local_b68,local_b48,0);
  local_b28 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>(local_b30,&local_b38)
  ;
  local_ab8 = SBorder::FArguments::BorderImage(local_b20,local_b28);
  local_b08 = SRichTextBlock::FArguments::FArguments(&local_578);
  local_b18 = &local_988;
  local_b10 = TAttribute<FText>::TAttribute<FText><FText>(local_b18,param_1);
  local_af0 = SRichTextBlock::FArguments::Text(local_b08,local_b10);
  ::FName::FName(&local_b00,"RichText.Tagline.Text");
  local_af8 = FTestStyle::Get();
  local_ae0 = SRichTextBlock::FArguments::TextStyle(local_af0,local_af8,&local_b00,(char *)0x0);
  local_ae8 = FTestStyle::Get();
  local_ac8 = SRichTextBlock::FArguments::DecoratorStyleSet(local_ae0,local_ae8);
  local_ad8 = local_9d0;
  local_b74 = Center;
  local_ad0 = TAttribute<enum_ETextJustify::Type>::TAttribute<enum_ETextJustify::Type>
                        (local_ad8,&local_b74);
  local_ac0 = SRichTextBlock::FArguments::Justification(local_ac8,local_ad0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_b78);
  this = MakeTDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs>
                   (&local_9e8,"SRichTextBlock",
                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                    ,0x7e2,&local_b78);
  pTVar2 = TSlateDecl<SRichTextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this,&local_a20,local_ac0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SRichTextBlock>(&local_a60,pTVar2);
  local_ab0 = SBorder::FArguments::operator[](local_ab8,&local_a60);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_b77);
  this_00 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                      (&local_a00,"SBorder",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x7e0,&local_b77);
  pTVar3 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_a30,local_ab0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_a50,pTVar3);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_a30.SharedReferenceCount);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_a00);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a60);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_a20.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_9e8._Widget.SharedReferenceCount);
  SRichTextBlock::FArguments::~FArguments(&local_578);
  SBorder::FArguments::~FArguments(&local_958);
  local_a68 = FSlateApplication::Get();
  local_aa8 = local_b76;
  local_a98 = TOptional<enum_EPopupMethod>::TOptional<enum_EPopupMethod>(local_aa8);
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
            (&local_a90,&UE::Math::TVector2<float>::ZeroVector);
  local_a88 = FPopupTransitionEffect::FPopupTransitionEffect(local_b60,ContextMenu);
  local_b70 = FSlateApplication::Get();
  local_aa0 = *(code **)(*(longlong *)local_b70 + 0x68);
  pFVar4 = (FDeprecateSlateVector2D *)(*local_aa0)(local_b70,local_a38);
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter(&local_a80,pFVar4);
  local_a78 = FWidgetPath::FWidgetPath(&local_178);
  local_a70 = param_2;
  FSlateApplication::PushMenu
            (local_a68,&local_a10,param_2,local_a78,&local_a50,&local_a80,local_a88,true,&local_a90,
             SUB82(local_a98,0),true,-1);
  TSharedPtr<IMenu,1>::~TSharedPtr<IMenu,1>(&local_a10);
  FWidgetPath::~FWidgetPath(&local_178);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_a50);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(param_2);
  return;
}

// SpawnRenderTransformManipulator @ 1430f0f70

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __cdecl
SpawnRenderTransformManipulator
          (TSharedRef<SDockTab,1> *__return_storage_ptr__,FSpawnTabArgs *param_1)

{
  FText *pFVar1;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> *this;
  TSlateDecl<SRenderTransformManipulatorWidget,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SRenderTransformManipulatorWidget,1> *pTVar2;
  T0RequiredArgs local_778;
  T0RequiredArgs local_777 [7];
  SDockTab *local_770;
  FArguments *local_768;
  TAttribute<FText> *local_760;
  TAttribute<FText> *local_758;
  FArguments *local_750;
  TAttribute<FText> *local_748;
  TAttribute<FText> *local_740;
  FArguments *local_738;
  FArguments *local_730;
  FArguments *local_728;
  TSharedRef<SWidget,1> *local_720;
  TSharedRef<SWidget,1> *local_718;
  code *local_710;
  TSharedRef<SDockTab,1> *local_708;
  FText local_700;
  FText local_6f0;
  TSharedRef<SRenderTransformManipulatorWidget,1> local_6e0;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_6d0;
  TSlateDecl<SRenderTransformManipulatorWidget,RequiredArgs::T0RequiredArgs> local_6b8;
  TSharedRef<SWidget,1> local_6a0;
  TAttribute<FText> local_690;
  TAttribute<FText> local_660;
  FSlateBaseNamedArgs local_630;
  FArguments local_438;
  
  local_768 = SDockTab::FArguments::FArguments(&local_438);
  local_750 = SDockTab::FArguments::TabRole(local_768,MajorTab);
  local_760 = &local_690;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_6f0,L"STestSuite",L"RenderTransformTabLabel",L"Render Transform");
  local_758 = TAttribute<FText>::TAttribute<FText>(local_760,pFVar1);
  local_738 = SDockTab::FArguments::Label(local_750,local_758);
  local_748 = &local_660;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_700,L"STestSuite",L"RenderTransformTabToolTip",
                      L"Allows manipulating the render transform of all test tabs at a global level."
                     );
  local_740 = TAttribute<FText>::TAttribute<FText>(local_748,pFVar1);
  local_730 = TSlateBaseNamedArgs<SDockTab>::ToolTipText
                        ((TSlateBaseNamedArgs<SDockTab> *)local_738,local_740);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_778);
  this = MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                   (&local_6d0,"SDockTab",
                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                    ,0x1949,&local_778);
  local_708 = TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this,__return_storage_ptr__,local_730);
  TSharedPtr<SDockTab,1>::~TSharedPtr<SDockTab,1>(&local_6d0._Widget);
  FText::~FText(&local_700);
  FText::~FText(&local_6f0);
  SDockTab::FArguments::~FArguments(&local_438);
  local_770 = TSharedRef<SDockTab,1>::operator->(__return_storage_ptr__);
  local_710 = *(code **)(local_770->_padding_ + 0x248);
  local_720 = &local_6a0;
  local_728 = SRenderTransformManipulatorWidget::FArguments::FArguments((FArguments *)&local_630);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_777);
  this_00 = MakeTDecl<SRenderTransformManipulatorWidget,RequiredArgs::T0RequiredArgs>
                      (&local_6b8,"SRenderTransformManipulatorWidget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1950,local_777);
  pTVar2 = TSlateDecl<SRenderTransformManipulatorWidget,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_6e0,local_728);
  local_718 = TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SRenderTransformManipulatorWidget>
                        (local_720,pTVar2);
  (*local_710)(local_770,local_718);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_6e0.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_6b8._Widget.SharedReferenceCount);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_630);
  return __return_storage_ptr__;
}

// SpawnResponsiveGrid @ 1430f11f0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __cdecl
SpawnResponsiveGrid(TSharedRef<SDockTab,1> *__return_storage_ptr__,FSpawnTabArgs *param_1)

{
  FText *pFVar1;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> *this;
  TSlateDecl<SResponsiveGridPanelTestWidget,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SResponsiveGridPanelTestWidget,1> *pTVar2;
  T0RequiredArgs local_718;
  T0RequiredArgs local_717 [7];
  SDockTab *local_710;
  TAttribute<FText> *local_708;
  TAttribute<FText> *local_700;
  FArguments *local_6f8;
  FArguments *local_6f0;
  FArguments *local_6e8;
  TSharedRef<SWidget,1> *local_6e0;
  TSharedRef<SWidget,1> *local_6d8;
  code *local_6d0;
  TSharedRef<SDockTab,1> *local_6c8;
  FText local_6c0;
  TSharedRef<SResponsiveGridPanelTestWidget,1> local_6b0;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_6a0;
  TSlateDecl<SResponsiveGridPanelTestWidget,RequiredArgs::T0RequiredArgs> local_688;
  TSharedRef<SWidget,1> local_670;
  TAttribute<FText> local_660;
  FSlateBaseNamedArgs local_630;
  FArguments local_438;
  
  local_6f8 = SDockTab::FArguments::FArguments(&local_438);
  local_708 = &local_660;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_6c0,L"STestSuite",L"ResponsiveGridTabLabel",L"Responsive Grid");
  local_700 = TAttribute<FText>::TAttribute<FText>(local_708,pFVar1);
  local_6f0 = SDockTab::FArguments::Label(local_6f8,local_700);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_718);
  this = MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                   (&local_6a0,"SDockTab",
                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                    ,0x1844,&local_718);
  local_6c8 = TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this,__return_storage_ptr__,local_6f0);
  TSharedPtr<SDockTab,1>::~TSharedPtr<SDockTab,1>(&local_6a0._Widget);
  FText::~FText(&local_6c0);
  SDockTab::FArguments::~FArguments(&local_438);
  local_710 = TSharedRef<SDockTab,1>::operator->(__return_storage_ptr__);
  local_6d0 = *(code **)(local_710->_padding_ + 0x248);
  local_6e0 = &local_670;
  local_6e8 = SResponsiveGridPanelTestWidget::FArguments::FArguments((FArguments *)&local_630);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_717);
  this_00 = MakeTDecl<SResponsiveGridPanelTestWidget,RequiredArgs::T0RequiredArgs>
                      (&local_688,"SResponsiveGridPanelTestWidget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1849,local_717);
  pTVar2 = TSlateDecl<SResponsiveGridPanelTestWidget,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_6b0,local_6e8);
  local_6d8 = TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SResponsiveGridPanelTestWidget>
                        (local_6e0,pTVar2);
  (*local_6d0)(local_710,local_6d8);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_6b0.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_688._Widget.SharedReferenceCount);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_630);
  return __return_storage_ptr__;
}

// SpawnTab @ 1430f13e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __cdecl
SpawnTab(TSharedRef<SDockTab,1> *__return_storage_ptr__,FSpawnTabArgs *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  FSlotArguments *pFVar4;
  FName *pFVar5;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *this;
  TSharedRef<SImage,1> *pTVar6;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<STextBlock,1> *pTVar7;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SHorizontalBox,1> *pTVar8;
  TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SToolTip,1> *pTVar9;
  TSlateDecl<SAnimTest,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SAnimTest,1> *pTVar10;
  TSlateDecl<SFxTest,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SFxTest,1> *pTVar11;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_05;
  TSharedRef<SVerticalBox,1> *pTVar12;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> *pTVar13;
  TSharedRef<FTabManager,1> *this_06;
  T1RequiredArgs<FTabManager_*_&> TVar14;
  TSlateDecl<SDocumentsTest,RequiredArgs::T1RequiredArgs<FTabManager_*_&>_> *this_07;
  TSharedRef<SDocumentsTest,1> *pTVar15;
  TSlateDecl<SRichTextTest,RequiredArgs::T0RequiredArgs> *this_08;
  TSharedRef<SRichTextTest,1> *pTVar16;
  TSlateDecl<SMultiLineEditingTest,RequiredArgs::T0RequiredArgs> *this_09;
  TSharedRef<SMultiLineEditingTest,1> *pTVar17;
  TSlateDecl<STextEditTest,RequiredArgs::T0RequiredArgs> *this_10;
  TSharedRef<STextEditTest,1> *pTVar18;
  TSlateDecl<SRichTextEditTest,RequiredArgs::T0RequiredArgs> *this_11;
  TSharedRef<SRichTextEditTest,1> *pTVar19;
  TSlateDecl<SLayoutRoundingTest,RequiredArgs::T0RequiredArgs> *this_12;
  TSharedRef<SLayoutRoundingTest,1> *pTVar20;
  FMargin *pFVar21;
  TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs> *pTVar22;
  TSharedRef<SSplineTest,1> *pTVar23;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *pTVar24;
  TSharedRef<SBorder,1> *pTVar25;
  TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs> *this_13;
  TSharedRef<SUniformGridPanel,1> *pTVar26;
  TSlateDecl<SElementTesting,RequiredArgs::T0RequiredArgs> *this_14;
  TSharedRef<SElementTesting,1> *pTVar27;
  TSlateDecl<SSplitterTest,RequiredArgs::T0RequiredArgs> *this_15;
  TSharedRef<SSplitterTest,1> *pTVar28;
  TSlateDecl<SMultiBoxTest,RequiredArgs::T0RequiredArgs> *this_16;
  TSharedRef<SMultiBoxTest,1> *pTVar29;
  TSlateDecl<SColorPickerTest,RequiredArgs::T0RequiredArgs> *this_17;
  TSharedRef<SColorPickerTest,1> *pTVar30;
  TSlateDecl<SDPIScalingTest,RequiredArgs::T0RequiredArgs> *this_18;
  TSharedRef<SDPIScalingTest,1> *pTVar31;
  TSlateDecl<SInvalidationTest,RequiredArgs::T0RequiredArgs> *this_19;
  TSharedRef<SInvalidationTest,1> *pTVar32;
  TSlateDecl<SGammaTest,RequiredArgs::T0RequiredArgs> *this_20;
  TSharedRef<SGammaTest,1> *pTVar33;
  TSlateDecl<SNotificationListTest,RequiredArgs::T0RequiredArgs> *this_21;
  TSharedRef<SNotificationListTest,1> *pTVar34;
  TSlateDecl<SGridPanelTest,RequiredArgs::T0RequiredArgs> *this_22;
  TSharedRef<SGridPanelTest,1> *pTVar35;
  TSharedRef<SDockTab,1> *pTVar36;
  longlong lVar37;
  longlong *plVar38;
  FName local_res18 [2];
  T0RequiredArgs local_c1e6;
  T0RequiredArgs local_c1e5;
  T0RequiredArgs local_c1e4;
  T0RequiredArgs local_c1e3;
  T0RequiredArgs local_c1e2;
  T0RequiredArgs local_c1e1;
  T0RequiredArgs local_c1e0;
  T0RequiredArgs local_c1df;
  undefined1 local_c1de;
  undefined1 local_c1dd;
  T0RequiredArgs local_c1dc;
  undefined1 local_c1db;
  undefined1 local_c1da;
  T0RequiredArgs local_c1d9;
  undefined1 local_c1d8;
  undefined1 local_c1d7;
  T0RequiredArgs local_c1d6;
  undefined1 local_c1d5;
  undefined1 local_c1d4;
  T0RequiredArgs local_c1d3;
  T0RequiredArgs local_c1d2;
  undefined1 local_c1d1;
  undefined1 local_c1d0;
  T0RequiredArgs local_c1cf;
  T0RequiredArgs local_c1ce;
  undefined1 local_c1cd;
  undefined1 local_c1cc;
  T0RequiredArgs local_c1cb;
  T0RequiredArgs local_c1ca;
  undefined1 local_c1c9;
  undefined1 local_c1c8;
  T0RequiredArgs local_c1c7;
  T0RequiredArgs local_c1c6;
  undefined1 local_c1c5;
  undefined1 local_c1c4;
  T0RequiredArgs local_c1c3;
  T0RequiredArgs local_c1c2;
  undefined1 local_c1c1;
  undefined1 local_c1c0;
  T0RequiredArgs local_c1bf;
  T0RequiredArgs local_c1be;
  T0RequiredArgs local_c1bd;
  T0RequiredArgs local_c1bc;
  T0RequiredArgs local_c1bb;
  T0RequiredArgs local_c1ba;
  T0RequiredArgs local_c1b9;
  T0RequiredArgs local_c1b8;
  T0RequiredArgs local_c1b7;
  T0RequiredArgs local_c1b6;
  undefined1 local_c1b5;
  undefined1 local_c1b4;
  T0RequiredArgs local_c1b3;
  T0RequiredArgs local_c1b2;
  undefined1 local_c1b1;
  undefined1 local_c1b0;
  T0RequiredArgs local_c1af;
  T0RequiredArgs local_c1ae;
  undefined1 local_c1ad;
  undefined1 local_c1ac;
  T0RequiredArgs local_c1ab;
  T0RequiredArgs local_c1aa;
  undefined1 local_c1a9;
  undefined1 local_c1a8;
  T0RequiredArgs local_c1a7;
  T0RequiredArgs local_c1a6;
  undefined1 local_c1a5;
  undefined1 local_c1a4;
  T0RequiredArgs local_c1a3;
  T0RequiredArgs local_c1a2;
  undefined1 local_c1a1;
  undefined1 local_c1a0;
  T0RequiredArgs local_c19f;
  T0RequiredArgs local_c19e;
  undefined1 local_c19d;
  undefined1 local_c19c;
  T0RequiredArgs local_c19b;
  T0RequiredArgs local_c19a;
  undefined1 local_c199;
  undefined1 local_c198;
  T0RequiredArgs local_c197;
  T0RequiredArgs local_c196;
  undefined1 local_c195;
  undefined1 local_c194;
  T0RequiredArgs local_c193;
  T0RequiredArgs local_c192;
  T0RequiredArgs local_c191;
  uint local_c190;
  uint local_c18c;
  uint local_c188;
  uint local_c184;
  uint local_c180;
  uint local_c17c;
  uint local_c178;
  uint local_c174;
  uint local_c170;
  uint local_c16c;
  uint local_c168;
  uint local_c164;
  uint local_c160;
  uint local_c15c;
  uint local_c158;
  uint local_c154;
  uint local_c150;
  uint local_c14c;
  longlong local_c148;
  longlong local_c140;
  longlong local_c138;
  longlong local_c130;
  longlong local_c128;
  longlong local_c120;
  longlong local_c118;
  longlong local_c110;
  longlong local_c108;
  longlong local_c100;
  longlong local_c0f8;
  longlong local_c0f0;
  longlong local_c0e8;
  longlong local_c0e0;
  longlong local_c0d8;
  longlong local_c0d0;
  longlong local_c0c8;
  longlong local_c0c0;
  longlong local_c0b8;
  longlong local_c0b0;
  longlong local_c0a8;
  longlong local_c0a0;
  longlong local_c098;
  longlong local_c090;
  longlong local_c088;
  longlong local_c080;
  longlong local_c078;
  longlong local_c070;
  longlong local_c068;
  longlong local_c060;
  longlong local_c058;
  longlong local_c050;
  longlong local_c048;
  longlong local_c040;
  longlong local_c038;
  longlong local_c030;
  ISlateStyle *local_c028;
  undefined4 local_c020;
  undefined4 uStack_c01c;
  undefined4 local_c018;
  undefined4 uStack_c014;
  undefined4 local_c010;
  undefined4 uStack_c00c;
  undefined4 local_c008;
  undefined4 uStack_c004;
  undefined4 local_c000;
  undefined4 uStack_bffc;
  undefined4 local_bff8;
  undefined4 uStack_bff4;
  undefined4 local_bff0;
  undefined4 uStack_bfec;
  undefined4 local_bfe8;
  undefined4 uStack_bfe4;
  undefined4 local_bfe0;
  undefined4 uStack_bfdc;
  undefined4 local_bfd8;
  undefined4 uStack_bfd4;
  undefined4 local_bfd0;
  undefined4 uStack_bfcc;
  undefined4 local_bfc8;
  undefined4 uStack_bfc4;
  undefined4 local_bfc0;
  undefined4 uStack_bfbc;
  undefined4 local_bfb8;
  undefined4 uStack_bfb4;
  undefined4 local_bfb0;
  undefined4 uStack_bfac;
  undefined4 local_bfa8;
  undefined4 uStack_bfa4;
  FName *local_bfa0;
  FName local_bf98;
  longlong local_bf90;
  longlong local_bf88;
  TAttribute<FText> *local_bf80;
  TAttribute<FText> *local_bf78;
  FArguments *local_bf70;
  FArguments *local_bf68;
  undefined1 *local_bf60;
  FName *local_bf58;
  FName local_bf50;
  code *local_bf48;
  FSlateBrush *local_bf40;
  TAttribute<FSlateBrush_const_*> *local_bf38;
  TAttribute<FSlateBrush_const_*> *local_bf30;
  FArguments *local_bf28;
  FArguments *local_bf20;
  FSlotArguments *local_bf18;
  FSlotArguments *local_bf10;
  FArguments *local_bf08;
  undefined1 *local_bf00;
  TAttribute<FText> *local_bef8;
  TAttribute<FText> *local_bef0;
  FArguments *local_bee8;
  FArguments *local_bee0;
  FSlotArguments *local_bed8;
  FSlotArguments *local_bed0;
  FArguments *local_bec8;
  FArguments *local_bec0;
  FArguments *local_beb8;
  FArguments *local_beb0;
  TAttribute<TSharedPtr<IToolTip,1>_> *local_bea8;
  TAttribute<TSharedPtr<IToolTip,1>_> *local_bea0;
  FArguments *local_be98;
  FArguments *local_be90;
  FArguments *local_be88;
  FArguments *local_be80;
  FSlotArguments *local_be78;
  FSlotArguments *local_be70;
  FArguments *local_be68;
  FArguments *local_be60;
  FSlotArguments *local_be58;
  FSlotArguments *local_be50;
  FArguments *local_be48;
  FArguments *local_be40;
  FArguments *local_be38;
  FArguments *local_be30;
  FName *local_be28;
  FName local_be20;
  longlong local_be18;
  longlong local_be10;
  TAttribute<FText> *local_be08;
  TAttribute<FText> *local_be00;
  FArguments *local_bdf8;
  FArguments *local_bdf0;
  FArguments *local_bde8;
  FArguments *local_bde0;
  FName *local_bdd8;
  FTagMetaData *local_bdd0;
  FTagMetaData *local_bdc8;
  FArguments *local_bdc0;
  FTabManager *local_bdb8;
  FArguments *local_bdb0;
  FArguments *local_bda8;
  FArguments *local_bda0;
  FName *local_bd98;
  FName local_bd90;
  longlong local_bd88;
  longlong local_bd80;
  TAttribute<FText> *local_bd78;
  TAttribute<FText> *local_bd70;
  FArguments *local_bd68;
  TAttribute<FText> *local_bd60;
  TAttribute<FText> *local_bd58;
  FArguments *local_bd50;
  FArguments *local_bd48;
  TSharedRef<SWidget,1> *local_bd40;
  FArguments *local_bd38;
  FArguments *local_bd30;
  FName *local_bd28;
  FName local_bd20;
  longlong local_bd18;
  longlong local_bd10;
  TAttribute<FText> *local_bd08;
  TAttribute<FText> *local_bd00;
  FArguments *local_bcf8;
  TAttribute<FText> *local_bcf0;
  TAttribute<FText> *local_bce8;
  FArguments *local_bce0;
  FArguments *local_bcd8;
  TSharedRef<SWidget,1> *local_bcd0;
  FArguments *local_bcc8;
  FArguments *local_bcc0;
  FName *local_bcb8;
  FName local_bcb0;
  longlong local_bca8;
  longlong local_bca0;
  TAttribute<FText> *local_bc98;
  TAttribute<FText> *local_bc90;
  FArguments *local_bc88;
  FArguments *local_bc80;
  FArguments *local_bc78;
  FArguments *local_bc70;
  FArguments *local_bc68;
  FArguments *local_bc60;
  FArguments *local_bc58;
  FName *local_bc50;
  FName local_bc48;
  longlong local_bc40;
  longlong local_bc38;
  TAttribute<FText> *local_bc30;
  TAttribute<FText> *local_bc28;
  FArguments *local_bc20;
  FArguments *local_bc18;
  FArguments *local_bc10;
  FArguments *local_bc08;
  FArguments *local_bc00;
  FArguments *local_bbf8;
  FArguments *local_bbf0;
  FName *local_bbe8;
  FName local_bbe0;
  longlong local_bbd8;
  longlong local_bbd0;
  TAttribute<FText> *local_bbc8;
  TAttribute<FText> *local_bbc0;
  FArguments *local_bbb8;
  TAttribute<FText> *local_bbb0;
  TAttribute<FText> *local_bba8;
  FArguments *local_bba0;
  FArguments *local_bb98;
  FArguments *local_bb90;
  FArguments *local_bb88;
  FArguments *local_bb80;
  FArguments *local_bb78;
  FArguments *local_bb70;
  FName *local_bb68;
  FName local_bb60;
  longlong local_bb58;
  longlong local_bb50;
  TAttribute<FText> *local_bb48;
  TAttribute<FText> *local_bb40;
  FArguments *local_bb38;
  TAttribute<FText> *local_bb30;
  TAttribute<FText> *local_bb28;
  FArguments *local_bb20;
  FArguments *local_bb18;
  FArguments *local_bb10;
  FArguments *local_bb08;
  FArguments *local_bb00;
  FArguments *local_baf8;
  FArguments *local_baf0;
  FName *local_bae8;
  FName local_bae0;
  longlong local_bad8;
  longlong local_bad0;
  TAttribute<FText> *local_bac8;
  TAttribute<FText> *local_bac0;
  FArguments *local_bab8;
  FArguments *local_bab0;
  FArguments *local_baa8;
  FArguments *local_baa0;
  FArguments *local_ba98;
  FArguments *local_ba90;
  FArguments *local_ba88;
  FName *local_ba80;
  FName local_ba78;
  longlong local_ba70;
  longlong local_ba68;
  FArguments *local_ba60;
  FArguments *local_ba58;
  FArguments *local_ba50;
  TAttribute<FMargin> *local_ba48;
  TAttribute<FMargin> *local_ba40;
  FArguments *local_ba38;
  FArguments *local_ba30;
  undefined4 *local_ba28;
  TVector2<float>_u_0 local_ba20;
  FArguments *local_ba18;
  undefined4 *local_ba10;
  TVector2<float>_u_0 local_ba08;
  FArguments *local_ba00;
  undefined4 *local_b9f8;
  TVector2<float>_u_0 local_b9f0;
  FArguments *local_b9e8;
  undefined4 *local_b9e0;
  TVector2<float>_u_0 local_b9d8;
  FArguments *local_b9d0;
  FArguments *local_b9c8;
  FArguments *local_b9c0;
  FArguments *local_b9b8;
  FSlotArguments *local_b9b0;
  FSlotArguments *local_b9a8;
  FArguments *local_b9a0;
  FArguments *local_b998;
  undefined4 *local_b990;
  TVector2<float>_u_0 local_b988;
  FArguments *local_b980;
  undefined4 *local_b978;
  TVector2<float>_u_0 local_b970;
  FArguments *local_b968;
  undefined4 *local_b960;
  TVector2<float>_u_0 local_b958;
  FArguments *local_b950;
  undefined4 *local_b948;
  TVector2<float>_u_0 local_b940;
  FArguments *local_b938;
  FArguments *local_b930;
  FArguments *local_b928;
  FArguments *local_b920;
  FSlotArguments *local_b918;
  FSlotArguments *local_b910;
  FArguments *local_b908;
  FArguments *local_b900;
  undefined4 *local_b8f8;
  TVector2<float>_u_0 local_b8f0;
  FArguments *local_b8e8;
  undefined4 *local_b8e0;
  TVector2<float>_u_0 local_b8d8;
  FArguments *local_b8d0;
  undefined4 *local_b8c8;
  TVector2<float>_u_0 local_b8c0;
  FArguments *local_b8b8;
  undefined4 *local_b8b0;
  TVector2<float>_u_0 local_b8a8;
  FArguments *local_b8a0;
  FArguments *local_b898;
  FArguments *local_b890;
  FArguments *local_b888;
  FSlotArguments *local_b880;
  FSlotArguments *local_b878;
  FArguments *local_b870;
  FArguments *local_b868;
  undefined4 *local_b860;
  TVector2<float>_u_0 local_b858;
  FArguments *local_b850;
  undefined4 *local_b848;
  TVector2<float>_u_0 local_b840;
  FArguments *local_b838;
  undefined4 *local_b830;
  TVector2<float>_u_0 local_b828;
  FArguments *local_b820;
  undefined4 *local_b818;
  TVector2<float>_u_0 local_b810;
  FArguments *local_b808;
  FArguments *local_b800;
  FArguments *local_b7f8;
  FArguments *local_b7f0;
  FSlotArguments *local_b7e8;
  FSlotArguments *local_b7e0;
  FArguments *local_b7d8;
  FArguments *local_b7d0;
  FArguments *local_b7c8;
  FArguments *local_b7c0;
  FName *local_b7b8;
  FName local_b7b0;
  longlong local_b7a8;
  longlong local_b7a0;
  TAttribute<FText> *local_b798;
  TAttribute<FText> *local_b790;
  FArguments *local_b788;
  TAttribute<FText> *local_b780;
  TAttribute<FText> *local_b778;
  FArguments *local_b770;
  FArguments *local_b768;
  FArguments *local_b760;
  FArguments *local_b758;
  FArguments *local_b750;
  FArguments *local_b748;
  FArguments *local_b740;
  FName *local_b738;
  FName local_b730;
  longlong local_b728;
  longlong local_b720;
  TAttribute<FText> *local_b718;
  TAttribute<FText> *local_b710;
  FArguments *local_b708;
  TAttribute<FText> *local_b700;
  TAttribute<FText> *local_b6f8;
  FArguments *local_b6f0;
  FArguments *local_b6e8;
  FArguments *local_b6e0;
  FArguments *local_b6d8;
  FArguments *local_b6d0;
  FArguments *local_b6c8;
  FArguments *local_b6c0;
  FName *local_b6b8;
  FName local_b6b0;
  longlong local_b6a8;
  longlong local_b6a0;
  TAttribute<FText> *local_b698;
  TAttribute<FText> *local_b690;
  FArguments *local_b688;
  TAttribute<FText> *local_b680;
  TAttribute<FText> *local_b678;
  FArguments *local_b670;
  FArguments *local_b668;
  FArguments *local_b660;
  FArguments *local_b658;
  FArguments *local_b650;
  FArguments *local_b648;
  FArguments *local_b640;
  FName *local_b638;
  FName local_b630;
  longlong local_b628;
  longlong local_b620;
  TAttribute<FText> *local_b618;
  TAttribute<FText> *local_b610;
  FArguments *local_b608;
  TAttribute<FText> *local_b600;
  TAttribute<FText> *local_b5f8;
  FArguments *local_b5f0;
  FArguments *local_b5e8;
  FArguments *local_b5e0;
  FArguments *local_b5d8;
  FArguments *local_b5d0;
  FArguments *local_b5c8;
  FArguments *local_b5c0;
  FArguments *local_b5b8;
  FArguments *local_b5b0;
  FArguments *local_b5a8;
  FArguments *local_b5a0;
  FArguments *local_b598;
  FArguments *local_b590;
  FName *local_b588;
  FName local_b580;
  longlong local_b578;
  longlong local_b570;
  FArguments *local_b568;
  FArguments *local_b560;
  FArguments *local_b558;
  FArguments *local_b550;
  FArguments *local_b548;
  FArguments *local_b540;
  FName *local_b538;
  FName local_b530;
  longlong local_b528;
  longlong local_b520;
  FArguments *local_b518;
  FArguments *local_b510;
  FArguments *local_b508;
  FArguments *local_b500;
  FArguments *local_b4f8;
  FArguments *local_b4f0;
  FName *local_b4e8;
  FName local_b4e0;
  longlong local_b4d8;
  longlong local_b4d0;
  TAttribute<FText> *local_b4c8;
  TAttribute<FText> *local_b4c0;
  FArguments *local_b4b8;
  TAttribute<FText> *local_b4b0;
  TAttribute<FText> *local_b4a8;
  FArguments *local_b4a0;
  FArguments *local_b498;
  FArguments *local_b490;
  FArguments *local_b488;
  FArguments *local_b480;
  FArguments *local_b478;
  FArguments *local_b470;
  FName *local_b468;
  FName local_b460;
  longlong local_b458;
  longlong local_b450;
  FArguments *local_b448;
  FArguments *local_b440;
  FArguments *local_b438;
  FArguments *local_b430;
  FArguments *local_b428;
  FArguments *local_b420;
  FArguments *local_b418;
  TSharedRef<SWidget,1> local_b410;
  TSharedRef<SWidget,1> local_b400;
  TSharedRef<SWidget,1> local_b3f0;
  TSharedRef<SWidget,1> local_b3e0;
  TSharedRef<SWidget,1> local_b3d0;
  TSharedRef<SWidget,1> local_b3c0;
  TSharedRef<SWidget,1> local_b3b0;
  TSharedRef<SWidget,1> local_b3a0;
  TSharedRef<SWidget,1> local_b390;
  TSharedRef<SWidget,1> local_b380;
  TSharedRef<SWidget,1> local_b370;
  TSharedRef<SWidget,1> local_b360;
  TSharedRef<SWidget,1> local_b350;
  TSharedRef<SWidget,1> local_b340;
  TSharedRef<SWidget,1> local_b330;
  TSharedRef<SWidget,1> local_b320;
  TSharedRef<SWidget,1> local_b310;
  TSharedRef<SWidget,1> local_b300;
  TSharedRef<SWidget,1> local_b2f0;
  TSharedRef<SWidget,1> local_b2e0;
  TSharedRef<SWidget,1> local_b2d0;
  TSharedRef<SWidget,1> local_b2c0;
  TSharedRef<SWidget,1> local_b2b0;
  TSharedRef<SWidget,1> local_b2a0;
  TSharedRef<SWidget,1> local_b290;
  TSharedRef<SWidget,1> local_b280;
  TSharedRef<SWidget,1> local_b270;
  TSharedRef<SWidget,1> local_b260;
  TSharedRef<SWidget,1> local_b250;
  TSharedRef<SWidget,1> local_b240;
  longlong *local_b230;
  longlong *local_b228;
  FName local_b220;
  FName local_b218;
  longlong *local_b210;
  longlong *local_b208;
  FName local_b200;
  FTabManager *local_b1f8;
  FName local_b1f0;
  longlong *local_b1e8;
  longlong *local_b1e0;
  FName local_b1d8;
  longlong *local_b1d0;
  longlong *local_b1c8;
  FName local_b1c0;
  longlong *local_b1b8;
  longlong *local_b1b0;
  FName local_b1a8;
  longlong *local_b1a0;
  longlong *local_b198;
  FName local_b190;
  longlong *local_b188;
  longlong *local_b180;
  FName local_b178;
  longlong *local_b170;
  longlong *local_b168;
  FName local_b160;
  longlong *local_b158;
  longlong *local_b150;
  FName local_b148;
  longlong *local_b140;
  longlong *local_b138;
  FName local_b130;
  longlong *local_b128;
  FName local_b120;
  FName local_b118;
  longlong *local_b110;
  longlong *local_b108;
  FName local_b100;
  longlong *local_b0f8;
  longlong *local_b0f0;
  FName local_b0e8;
  longlong *local_b0e0;
  longlong *local_b0d8;
  FName local_b0d0;
  longlong *local_b0c8;
  longlong *local_b0c0;
  FName local_b0b8;
  longlong *local_b0b0;
  longlong *local_b0a8;
  FName local_b0a0;
  longlong *local_b098;
  longlong *local_b090;
  FName local_b088;
  longlong *local_b080;
  longlong *local_b078;
  longlong *local_b070;
  TSharedRef<SVerticalBox,1> local_b068;
  TSharedRef<SFxTest,1> local_b058;
  TSharedRef<SAnimTest,1> local_b048;
  TSharedRef<SToolTip,1> local_b038;
  TSharedRef<SHorizontalBox,1> local_b028;
  TSharedRef<STextBlock,1> local_b018;
  FText local_b008;
  TSharedRef<SImage,1> local_aff8;
  FText local_afe8;
  TSharedRef<FTabManager,1> local_afd8;
  TSharedRef<SDocumentsTest,1> local_afc8;
  FText local_afb8;
  TSharedRef<SWidget,1> local_afa8;
  FText local_af98;
  FText local_af88;
  TSharedRef<SWidget,1> local_af78;
  FText local_af68;
  FText local_af58;
  TSharedRef<SRichTextTest,1> local_af48;
  FText local_af38;
  TSharedRef<SMultiLineEditingTest,1> local_af28;
  FText local_af18;
  TSharedRef<STextEditTest,1> local_af08;
  FText local_aef8;
  FText local_aee8;
  TSharedRef<SRichTextEditTest,1> local_aed8;
  FText local_aec8;
  FText local_aeb8;
  TSharedRef<SLayoutRoundingTest,1> local_aea8;
  FText local_ae98;
  TSharedRef<SUniformGridPanel,1> local_ae88;
  TSharedRef<SBorder,1> local_ae78;
  TSharedRef<SSplineTest,1> local_ae68;
  TSharedRef<SBorder,1> local_ae58;
  TSharedRef<SSplineTest,1> local_ae48;
  TSharedRef<SBorder,1> local_ae38;
  TSharedRef<SSplineTest,1> local_ae28;
  TSharedRef<SBorder,1> local_ae18;
  TSharedRef<SSplineTest,1> local_ae08;
  TSharedRef<SElementTesting,1> local_adf8;
  FText local_ade8;
  FText local_add8;
  TSharedRef<SSplitterTest,1> local_adc8;
  FText local_adb8;
  FText local_ada8;
  TSharedRef<SMultiBoxTest,1> local_ad98;
  FText local_ad88;
  FText local_ad78;
  TSharedRef<SColorPickerTest,1> local_ad68;
  FText local_ad58;
  FText local_ad48;
  TSharedRef<SDPIScalingTest,1> local_ad38;
  TSharedRef<SInvalidationTest,1> local_ad28;
  TSharedRef<SGammaTest,1> local_ad18;
  TSharedRef<SNotificationListTest,1> local_ad08;
  FText local_acf8;
  FText local_ace8;
  TSharedRef<SGridPanelTest,1> local_acd8;
  TSlateDecl<SMultiLineEditingTest,RequiredArgs::T0RequiredArgs> local_acc8;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_acb0;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_ac98;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_ac80;
  TSlateDecl<SFxTest,RequiredArgs::T0RequiredArgs> local_ac68;
  TSlateDecl<SAnimTest,RequiredArgs::T0RequiredArgs> local_ac50;
  TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs> local_ac38;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_ac20;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_ac08;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_abf0;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_abd8;
  TSlateDecl<SDocumentsTest,RequiredArgs::T1RequiredArgs<FTabManager_*_&>_> local_abc0;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_aba8;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_ab90;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_ab78;
  TSlateDecl<SRichTextTest,RequiredArgs::T0RequiredArgs> local_ab60;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_ab48;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_ab30;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_ab18;
  TSlateDecl<STextEditTest,RequiredArgs::T0RequiredArgs> local_ab00;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_aae8;
  TSlateDecl<SRichTextEditTest,RequiredArgs::T0RequiredArgs> local_aad0;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_aab8;
  TSlateDecl<SLayoutRoundingTest,RequiredArgs::T0RequiredArgs> local_aaa0;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_aa88;
  TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs> local_aa70;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_aa58;
  TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs> local_aa40;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_aa28;
  TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs> local_aa10;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_a9f8;
  TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs> local_a9e0;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_a9c8;
  TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs> local_a9b0;
  TSlateDecl<SElementTesting,RequiredArgs::T0RequiredArgs> local_a998;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_a980;
  TSlateDecl<SSplitterTest,RequiredArgs::T0RequiredArgs> local_a968;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_a950;
  TSlateDecl<SMultiBoxTest,RequiredArgs::T0RequiredArgs> local_a938;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_a920;
  TSlateDecl<SColorPickerTest,RequiredArgs::T0RequiredArgs> local_a908;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_a8f0;
  TSlateDecl<SDPIScalingTest,RequiredArgs::T0RequiredArgs> local_a8d8;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_a8c0;
  TSlateDecl<SInvalidationTest,RequiredArgs::T0RequiredArgs> local_a8a8;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_a890;
  TSlateDecl<SGammaTest,RequiredArgs::T0RequiredArgs> local_a878;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_a860;
  TSlateDecl<SNotificationListTest,RequiredArgs::T0RequiredArgs> local_a848;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_a830;
  TSlateDecl<SGridPanelTest,RequiredArgs::T0RequiredArgs> local_a818;
  FMargin local_a800;
  FTagMetaData local_a7f0;
  FSlotArguments local_a7e0;
  FSlotArguments local_a7b8;
  FSlotArguments local_a790;
  FSlotArguments local_a768;
  TAttribute<FSlateBrush_const_*> local_a740;
  TAttribute<FText> local_a718;
  TAttribute<TSharedPtr<IToolTip,1>_> local_a6e8;
  TAttribute<FText> local_a6b8;
  TAttribute<FText> local_a688;
  TAttribute<FText> local_a658;
  TAttribute<FText> local_a628;
  TAttribute<FText> local_a5f8;
  TAttribute<FText> local_a5c8;
  TAttribute<FText> local_a598;
  TAttribute<FText> local_a568;
  TAttribute<FText> local_a538;
  TAttribute<FText> local_a508;
  TAttribute<FText> local_a4d8;
  TAttribute<FText> local_a4a8;
  TAttribute<FText> local_a478;
  TAttribute<FMargin> local_a448;
  TAttribute<FText> local_a418;
  TAttribute<FText> local_a3e8;
  TAttribute<FText> local_a3b8;
  TAttribute<FText> local_a388;
  TAttribute<FText> local_a358;
  TAttribute<FText> local_a328;
  TAttribute<FText> local_a2f8;
  TAttribute<FText> local_a2c8;
  TAttribute<FText> local_a298;
  TAttribute<FText> local_a268;
  FSlotArguments local_a238;
  FSlotArguments local_a150;
  FSlotArguments local_a068;
  FSlotArguments local_9f80;
  FArguments local_9e98;
  FArguments local_9c90;
  FSlateBaseNamedArgs local_9a88;
  FSlateBaseNamedArgs local_9890;
  FSlateBaseNamedArgs local_9698;
  FSlateBaseNamedArgs local_94a0;
  FArguments local_92a8;
  FArguments local_90b0;
  FArguments local_8eb8;
  FArguments local_8cc0;
  FArguments local_8ac8;
  FArguments local_88d0;
  FArguments local_86d8;
  FArguments local_84e0;
  FArguments local_82e8;
  FArguments local_80f0;
  FArguments local_7ef8;
  FArguments local_7d00;
  FArguments local_7b08;
  FArguments local_78f0;
  FArguments local_76d8;
  FArguments local_74c0;
  FArguments local_72a8;
  FArguments local_7080;
  FArguments local_6e08;
  FArguments local_6b60;
  FArguments local_6818;
  FArguments local_6438;
  FArguments local_6058;
  FArguments local_5c78;
  FArguments local_5898;
  FArguments local_5470;
  FArguments local_5048;
  FArguments local_4c20;
  FArguments local_47f8;
  FArguments local_43d0;
  FArguments local_3fa8;
  FArguments local_3b80;
  FArguments local_3758;
  FArguments local_3330;
  FArguments local_2f08;
  FArguments local_2ae0;
  FArguments local_26b8;
  FArguments local_2290;
  FArguments local_1e68;
  FArguments local_1a40;
  FArguments local_1618;
  FArguments local_11f0;
  FArguments local_dc8;
  FArguments local_9a0;
  FArguments local_578;
  undefined8 uStack_18;
  
  uStack_18 = 0x1430f13fb;
  local_res18[0] = param_2;
  local_bfa0 = FName::FName(&local_b120,L"AnimationTestTab");
  local_bf98 = *local_bfa0;
  local_c148 = 0;
  pFVar5 = local_res18;
  plVar38 = &local_c148;
  for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
    *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
    pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value + 1);
    plVar38 = (longlong *)((longlong)plVar38 + 1);
  }
  local_b230 = &local_c148;
  local_bf90 = local_c148;
  local_c140 = 0;
  pFVar5 = &local_bf98;
  plVar38 = &local_c140;
  for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
    *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
    pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value + 1);
    plVar38 = (longlong *)((longlong)plVar38 + 1);
  }
  local_b228 = &local_c140;
  local_bf88 = local_c140;
  local_c190 = (uint)(local_bf90 == local_c140);
  if (local_bf90 == local_c140) {
    local_bf70 = SDockTab::FArguments::FArguments(&local_5898);
    local_bf80 = &local_a718;
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_afe8,L"STestSuite",L"AnimationTestTabLabel",L"Animation Test");
    local_bf78 = TAttribute<FText>::TAttribute<FText>(local_bf80,pFVar3);
    local_bf68 = SDockTab::FArguments::Label(local_bf70,local_bf78);
    local_be98 = TSlateBaseNamedArgs<SDockTab>::Clipping
                           ((TSlateBaseNamedArgs<SDockTab> *)local_bf68,ClipToBounds);
    local_bea8 = &local_a6e8;
    local_beb8 = SToolTip::FArguments::FArguments(&local_6b60);
    local_bf08 = SHorizontalBox::FArguments::FArguments(&local_9c90);
    pFVar4 = SHorizontalBox::Slot(&local_9f80);
    pFVar4 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar4);
    local_bf60 = &pFVar4->field_0x18;
    local_bf18 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                           ((FSlotArgumentsMixin *)local_bf60,__real_40000000);
    local_bf28 = SImage::FArguments::FArguments(&local_6e08);
    local_bf38 = &local_a740;
    local_c028 = FCoreStyle::Get();
    local_bf48 = *(code **)((longlong)*local_c028 + 0x50);
    local_bf58 = &local_b220;
    pFVar5 = FName::FName(local_bf58,L"AppIcon");
    local_bf50 = *pFVar5;
    local_bf40 = (FSlateBrush *)(*local_bf48)(local_c028,local_bf50,0,0);
    local_bf30 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                           (local_bf38,&local_bf40);
    local_bf20 = SImage::FArguments::Image(local_bf28,local_bf30);
    RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1e6);
    this = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                     (&local_abf0,"SImage",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x171a,&local_c1e6);
    pTVar6 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                       (this,&local_aff8,local_bf20);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_b3d0,pTVar6);
    local_bf10 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                           ((FSlotArguments *)local_bf18,&local_b3d0);
    local_bec8 = SHorizontalBox::FArguments::operator+(local_bf08,local_bf10);
    pFVar4 = SHorizontalBox::Slot(&local_a068);
    pFVar4 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth(pFVar4);
    local_bf00 = &pFVar4->field_0x48;
    local_bed8 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
                           ((FSlotArgumentsMixin *)local_bf00,VAlign_Center);
    local_bee8 = STextBlock::FArguments::FArguments(&local_578);
    local_bef8 = &local_a6b8;
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_b008,L"STestSuite",L"AnimationTestLabel",
                        L"Bring up some test for animation.");
    local_bef0 = TAttribute<FText>::TAttribute<FText>(local_bef8,pFVar3);
    local_bee0 = STextBlock::FArguments::Text(local_bee8,local_bef0);
    RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1e5);
    this_00 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                        (&local_ac08,"STextBlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                         ,0x1721,&local_c1e5);
    pTVar7 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                       (this_00,&local_b018,local_bee0);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_b3e0,pTVar7);
    local_bed0 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                           ((FSlotArguments *)local_bed8,&local_b3e0);
    local_bec0 = SHorizontalBox::FArguments::operator+(local_bec8,local_bed0);
    RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1e4);
    this_01 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                        (&local_ac20,"SHorizontalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                         ,0x1715,&local_c1e4);
    pTVar8 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                       (this_01,&local_b028,local_bec0);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_b3f0,pTVar8);
    local_beb0 = SToolTip::FArguments::operator[](local_beb8,&local_b3f0);
    RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1e3);
    this_02 = MakeTDecl<SToolTip,RequiredArgs::T0RequiredArgs>
                        (&local_ac38,"SToolTip",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                         ,0x1713,&local_c1e3);
    pTVar9 = TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>::operator<<=
                       (this_02,&local_b038,local_beb0);
    local_bea0 = TAttribute<TSharedPtr<IToolTip,1>_>::
                 TAttribute<TSharedPtr<IToolTip,1>_><TSharedRef<SToolTip,1>_>(local_bea8,pTVar9);
    local_be38 = TSlateBaseNamedArgs<SDockTab>::ToolTip
                           ((TSlateBaseNamedArgs<SDockTab> *)local_be98,local_bea0);
    local_be90 = SVerticalBox::FArguments::FArguments(&local_9e98);
    local_be88 = TSlateBaseNamedArgs<SVerticalBox>::RenderTransform_Static<>
                           ((TSlateBaseNamedArgs<SVerticalBox> *)local_be90,GetTestRenderTransform);
    local_be68 = TSlateBaseNamedArgs<SVerticalBox>::RenderTransformPivot_Static<>
                           ((TSlateBaseNamedArgs<SVerticalBox> *)local_be88,
                            GetTestRenderTransformPivot);
    local_be78 = SVerticalBox::Slot(&local_a150);
    local_be80 = SAnimTest::FArguments::FArguments((FArguments *)&local_9890);
    RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1e2);
    this_03 = MakeTDecl<SAnimTest,RequiredArgs::T0RequiredArgs>
                        (&local_ac50,"SAnimTest",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                         ,0x172d,&local_c1e2);
    pTVar10 = TSlateDecl<SAnimTest,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_03,&local_b048,local_be80);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SAnimTest>(&local_b400,pTVar10);
    local_be70 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                           ((FSlotArguments *)local_be78,&local_b400);
    local_be48 = SVerticalBox::FArguments::operator+(local_be68,local_be70);
    local_be58 = SVerticalBox::Slot(&local_a238);
    local_be60 = SFxTest::FArguments::FArguments((FArguments *)&local_9a88);
    RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1e1);
    this_04 = MakeTDecl<SFxTest,RequiredArgs::T0RequiredArgs>
                        (&local_ac68,"SFxTest",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                         ,0x1732,&local_c1e1);
    pTVar11 = TSlateDecl<SFxTest,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_04,&local_b058,local_be60);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SFxTest>(&local_b240,pTVar11);
    local_be50 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                           ((FSlotArguments *)local_be58,&local_b240);
    local_be40 = SVerticalBox::FArguments::operator+(local_be48,local_be50);
    RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1e0);
    this_05 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                        (&local_ac80,"SVerticalBox",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                         ,0x1727,&local_c1e0);
    pTVar12 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_05,&local_b068,local_be40);
    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_b250,pTVar12);
    local_be30 = SDockTab::FArguments::operator[](local_be38,&local_b250);
    RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1df);
    pTVar13 = MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                        (&local_ac98,"SDockTab",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                         ,0x170e,&local_c1df);
    TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
              (pTVar13,__return_storage_ptr__,local_be30);
    TSharedPtr<SDockTab,1>::~TSharedPtr<SDockTab,1>(&local_ac98._Widget);
    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_b250);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_b068.SharedReferenceCount);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_ac80._Widget.SharedReferenceCount);
    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_b240);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_b058.SharedReferenceCount);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_ac68._Widget.SharedReferenceCount);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_9a88);
    SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_a238);
    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_b400);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_b048.SharedReferenceCount);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_ac50._Widget.SharedReferenceCount);
    FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_9890);
    SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_a150);
    TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
    ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_9e98._Slots);
    TSlateBaseNamedArgs<SVerticalBox>::~TSlateBaseNamedArgs<SVerticalBox>
              ((TSlateBaseNamedArgs<SVerticalBox> *)&local_9e98);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_b038.SharedReferenceCount);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_ac38._Widget.SharedReferenceCount);
    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_b3f0);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_b028.SharedReferenceCount);
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
    ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_ac20);
    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_b3e0);
    TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_b018);
    TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
    ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_ac08);
    FText::~FText(&local_b008);
    STextBlock::FArguments::~FArguments(&local_578);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_a068);
    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_b3d0);
    SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
              (&local_aff8.SharedReferenceCount);
    TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::
    ~TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>(&local_abf0);
    SImage::FArguments::~FArguments(&local_6e08);
    SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_9f80);
    TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
    ~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_9c90._Slots);
    TSlateBaseNamedArgs<SHorizontalBox>::~TSlateBaseNamedArgs<SHorizontalBox>
              ((TSlateBaseNamedArgs<SHorizontalBox> *)&local_9c90);
    SToolTip::FArguments::~FArguments(&local_6b60);
    FText::~FText(&local_afe8);
    SDockTab::FArguments::~FArguments(&local_5898);
  }
  else {
    local_be28 = FName::FName(&local_b218,"DocumentsTestTab");
    local_be20 = *local_be28;
    local_c138 = 0;
    pFVar5 = local_res18;
    plVar38 = &local_c138;
    for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
      *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
      pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value + 1);
      plVar38 = (longlong *)((longlong)plVar38 + 1);
    }
    local_b210 = &local_c138;
    local_be18 = local_c138;
    local_c130 = 0;
    pFVar5 = &local_be20;
    plVar38 = &local_c130;
    for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
      *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
      pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value + 1);
      plVar38 = (longlong *)((longlong)plVar38 + 1);
    }
    local_b208 = &local_c130;
    local_be10 = local_c130;
    local_c1de = local_be18 == local_c130;
    local_c18c = (uint)(byte)local_c1de;
    local_c1dd = local_c1de;
    if ((bool)local_c1de) {
      this_06 = TSharedPtr<FTabManager,1>::ToSharedRef(&TestSuite1TabManager,&local_afd8);
      local_bdb8 = TSharedRef<FTabManager,1>::Get(this_06);
      TSharedRef<FTabManager,1>::~TSharedRef<FTabManager,1>(&local_afd8);
      local_bdf8 = SDockTab::FArguments::FArguments(&local_5470);
      local_be08 = &local_a688;
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         (&local_afb8,L"TestSuite1",L"DocumentsTab",L"Documents");
      local_be00 = TAttribute<FText>::TAttribute<FText>(local_be08,pFVar3);
      local_bdf0 = SDockTab::FArguments::Label(local_bdf8,local_be00);
      local_bda8 = TSlateBaseNamedArgs<SDockTab>::Clipping
                             ((TSlateBaseNamedArgs<SDockTab> *)local_bdf0,ClipToBounds);
      local_bde8 = SDocumentsTest::FArguments::FArguments((FArguments *)&local_9698);
      local_bde0 = TSlateBaseNamedArgs<SDocumentsTest>::RenderTransform_Static<>
                             ((TSlateBaseNamedArgs<SDocumentsTest> *)local_bde8,
                              GetTestRenderTransform);
      local_bdc0 = TSlateBaseNamedArgs<SDocumentsTest>::RenderTransformPivot_Static<>
                             ((TSlateBaseNamedArgs<SDocumentsTest> *)local_bde0,
                              GetTestRenderTransformPivot);
      local_bdd0 = &local_a7f0;
      local_bdd8 = &local_b200;
      pFVar5 = FName::FName(local_bdd8,"DocumentSpawner");
      local_bdc8 = FTagMetaData::FTagMetaData(local_bdd0,*pFVar5);
      local_bdb0 = TSlateBaseNamedArgs<SDocumentsTest>::AddMetaData<FTagMetaData,FTagMetaData>
                             ((TSlateBaseNamedArgs<SDocumentsTest> *)local_bdc0,local_bdc8);
      TVar14 = RequiredArgs::MakeRequiredArgs<FTabManager_*_&>(&local_b1f8);
      this_07 = MakeTDecl<SDocumentsTest,RequiredArgs::T1RequiredArgs<FTabManager_*_&>_>
                          (&local_abc0,"SDocumentsTest",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                           ,0x173f,(T1RequiredArgs<FTabManager_*_&> *)TVar14.Arg0);
      pTVar15 = TSlateDecl<SDocumentsTest,RequiredArgs::T1RequiredArgs<FTabManager_*_&>_>::
                operator<<=(this_07,&local_afc8,local_bdb0);
      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SDocumentsTest>(&local_b3c0,pTVar15);
      local_bda0 = SDockTab::FArguments::operator[](local_bda8,&local_b3c0);
      RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1dc);
      pTVar13 = MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                          (&local_abd8,"SDockTab",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                           ,0x173b,&local_c1dc);
      TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
                (pTVar13,__return_storage_ptr__,local_bda0);
      TSharedPtr<SDockTab,1>::~TSharedPtr<SDockTab,1>(&local_abd8._Widget);
      TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_b3c0);
      SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
                (&local_afc8.SharedReferenceCount);
      SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
                (&local_abc0._Widget.SharedReferenceCount);
      FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_9698);
      FText::~FText(&local_afb8);
      SDockTab::FArguments::~FArguments(&local_5470);
    }
    else {
      local_bd98 = FName::FName(&local_b1f0,L"TableViewTestTab");
      local_bd90 = *local_bd98;
      local_c128 = 0;
      pFVar5 = local_res18;
      plVar38 = &local_c128;
      for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
        *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
        pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value + 1);
        plVar38 = (longlong *)((longlong)plVar38 + 1);
      }
      local_b1e8 = &local_c128;
      local_bd88 = local_c128;
      local_c120 = 0;
      pFVar5 = &local_bd90;
      plVar38 = &local_c120;
      for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
        *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
        pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value + 1);
        plVar38 = (longlong *)((longlong)plVar38 + 1);
      }
      local_b1e0 = &local_c120;
      local_bd80 = local_c120;
      local_c1db = local_bd88 == local_c120;
      local_c188 = (uint)(byte)local_c1db;
      local_c1da = local_c1db;
      if ((bool)local_c1db) {
        local_bd68 = SDockTab::FArguments::FArguments(&local_5048);
        local_bd78 = &local_a658;
        pFVar3 = FText::AsLocalizable_Advanced_LocText
                           (&local_af88,L"STestSuite",L"ListViewTestTab",L"ListView Test");
        local_bd70 = TAttribute<FText>::TAttribute<FText>(local_bd78,pFVar3);
        local_bd50 = SDockTab::FArguments::Label(local_bd68,local_bd70);
        local_bd60 = &local_a628;
        pFVar3 = FText::AsLocalizable_Advanced_LocText
                           (&local_af98,L"STestSuite",L"ListViewTestToolTip",
                            L"Switches to the List View test tab, which allows you to test list widgets in Slate."
                           );
        local_bd58 = TAttribute<FText>::TAttribute<FText>(local_bd60,pFVar3);
        local_bd48 = TSlateBaseNamedArgs<SDockTab>::ToolTipText
                               ((TSlateBaseNamedArgs<SDockTab> *)local_bd50,local_bd58);
        local_bd38 = TSlateBaseNamedArgs<SDockTab>::Clipping
                               ((TSlateBaseNamedArgs<SDockTab> *)local_bd48,ClipToBounds);
        local_bd40 = MakeTableViewTesting(&local_afa8);
        local_bd30 = SDockTab::FArguments::operator[](local_bd38,local_bd40);
        RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1d9);
        pTVar13 = MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                            (&local_aba8,"SDockTab",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                             ,0x1747,&local_c1d9);
        TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
                  (pTVar13,__return_storage_ptr__,local_bd30);
        TSharedPtr<SDockTab,1>::~TSharedPtr<SDockTab,1>(&local_aba8._Widget);
        TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_afa8);
        FText::~FText(&local_af98);
        FText::~FText(&local_af88);
        SDockTab::FArguments::~FArguments(&local_5048);
      }
      else {
        local_bd28 = FName::FName(&local_b1d8,L"LayoutExampleTab");
        local_bd20 = *local_bd28;
        local_c118 = 0;
        pFVar5 = local_res18;
        plVar38 = &local_c118;
        for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
          *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
          pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value + 1);
          plVar38 = (longlong *)((longlong)plVar38 + 1);
        }
        local_b1d0 = &local_c118;
        local_bd18 = local_c118;
        local_c110 = 0;
        pFVar5 = &local_bd20;
        plVar38 = &local_c110;
        for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
          *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
          pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value + 1);
          plVar38 = (longlong *)((longlong)plVar38 + 1);
        }
        local_b1c8 = &local_c110;
        local_bd10 = local_c110;
        local_c1d8 = local_bd18 == local_c110;
        local_c184 = (uint)(byte)local_c1d8;
        local_c1d7 = local_c1d8;
        if ((bool)local_c1d8) {
          local_bcf8 = SDockTab::FArguments::FArguments(&local_4c20);
          local_bd08 = &local_a5f8;
          pFVar3 = FText::AsLocalizable_Advanced_LocText
                             (&local_af58,L"STestSuite",L"LayoutExampleTab",L"Layout Example");
          local_bd00 = TAttribute<FText>::TAttribute<FText>(local_bd08,pFVar3);
          local_bce0 = SDockTab::FArguments::Label(local_bcf8,local_bd00);
          local_bcf0 = &local_a5c8;
          pFVar3 = FText::AsLocalizable_Advanced_LocText
                             (&local_af68,L"STestSuite",L"LayoutExampleTabToolTip",
                              L"Switches to the Layout Example tab, which shows off examples of various Slate layout primitives."
                             );
          local_bce8 = TAttribute<FText>::TAttribute<FText>(local_bcf0,pFVar3);
          local_bcd8 = TSlateBaseNamedArgs<SDockTab>::ToolTipText
                                 ((TSlateBaseNamedArgs<SDockTab> *)local_bce0,local_bce8);
          local_bcc8 = TSlateBaseNamedArgs<SDockTab>::Clipping
                                 ((TSlateBaseNamedArgs<SDockTab> *)local_bcd8,ClipToBounds);
          local_bcd0 = MakeLayoutExample(&local_af78);
          local_bcc0 = SDockTab::FArguments::operator[](local_bcc8,local_bcd0);
          RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1d6);
          pTVar13 = MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                              (&local_ab90,"SDockTab",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                               ,0x1751,&local_c1d6);
          TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
                    (pTVar13,__return_storage_ptr__,local_bcc0);
          TSharedPtr<SDockTab,1>::~TSharedPtr<SDockTab,1>(&local_ab90._Widget);
          TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_af78);
          FText::~FText(&local_af68);
          FText::~FText(&local_af58);
          SDockTab::FArguments::~FArguments(&local_4c20);
        }
        else {
          local_bcb8 = FName::FName(&local_b1c0,L"RichTextTab");
          local_bcb0 = *local_bcb8;
          local_c108 = 0;
          pFVar5 = local_res18;
          plVar38 = &local_c108;
          for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
            *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
            pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value + 1);
            plVar38 = (longlong *)((longlong)plVar38 + 1);
          }
          local_b1b8 = &local_c108;
          local_bca8 = local_c108;
          local_c100 = 0;
          pFVar5 = &local_bcb0;
          plVar38 = &local_c100;
          for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
            *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
            pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value + 1);
            plVar38 = (longlong *)((longlong)plVar38 + 1);
          }
          local_b1b0 = &local_c100;
          local_bca0 = local_c100;
          local_c1d5 = local_bca8 == local_c100;
          local_c180 = (uint)(byte)local_c1d5;
          local_c1d4 = local_c1d5;
          if ((bool)local_c1d5) {
            local_bc88 = SDockTab::FArguments::FArguments(&local_47f8);
            local_bc98 = &local_a598;
            pFVar3 = FText::AsLocalizable_Advanced_LocText
                               (&local_af38,L"STestSuite",L"RichTextTestTab",L"Rich Text");
            local_bc90 = TAttribute<FText>::TAttribute<FText>(local_bc98,pFVar3);
            local_bc80 = SDockTab::FArguments::Label(local_bc88,local_bc90);
            local_bc60 = TSlateBaseNamedArgs<SDockTab>::Clipping
                                   ((TSlateBaseNamedArgs<SDockTab> *)local_bc80,ClipToBounds);
            local_bc78 = SRichTextTest::FArguments::FArguments((FArguments *)&local_94a0);
            local_bc70 = TSlateBaseNamedArgs<SRichTextTest>::RenderTransform_Static<>
                                   ((TSlateBaseNamedArgs<SRichTextTest> *)local_bc78,
                                    GetTestRenderTransform);
            local_bc68 = TSlateBaseNamedArgs<SRichTextTest>::RenderTransformPivot_Static<>
                                   ((TSlateBaseNamedArgs<SRichTextTest> *)local_bc70,
                                    GetTestRenderTransformPivot);
            RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1d3);
            this_08 = MakeTDecl<SRichTextTest,RequiredArgs::T0RequiredArgs>
                                (&local_ab60,"SRichTextTest",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                 ,0x1760,&local_c1d3);
            pTVar16 = TSlateDecl<SRichTextTest,RequiredArgs::T0RequiredArgs>::operator<<=
                                (this_08,&local_af48,local_bc68);
            TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SRichTextTest>(&local_b3b0,pTVar16);
            local_bc58 = SDockTab::FArguments::operator[](local_bc60,&local_b3b0);
            RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1d2);
            pTVar13 = MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                                (&local_ab78,"SDockTab",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                 ,0x175c,&local_c1d2);
            TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar13,__return_storage_ptr__,local_bc58);
            TSharedPtr<SDockTab,1>::~TSharedPtr<SDockTab,1>(&local_ab78._Widget);
            TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_b3b0);
            SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
                      (&local_af48.SharedReferenceCount);
            SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
                      (&local_ab60._Widget.SharedReferenceCount);
            FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_94a0);
            FText::~FText(&local_af38);
            SDockTab::FArguments::~FArguments(&local_47f8);
          }
          else {
            local_bc50 = FName::FName(&local_b1a8,L"MultiLineEditTab");
            local_bc48 = *local_bc50;
            local_c0f8 = 0;
            pFVar5 = local_res18;
            plVar38 = &local_c0f8;
            for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
              *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
              pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value + 1);
              plVar38 = (longlong *)((longlong)plVar38 + 1);
            }
            local_b1a0 = &local_c0f8;
            local_bc40 = local_c0f8;
            local_c0f0 = 0;
            pFVar5 = &local_bc48;
            plVar38 = &local_c0f0;
            for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
              *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
              pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value + 1);
              plVar38 = (longlong *)((longlong)plVar38 + 1);
            }
            local_b198 = &local_c0f0;
            local_bc38 = local_c0f0;
            local_c1d1 = local_bc40 == local_c0f0;
            local_c17c = (uint)(byte)local_c1d1;
            local_c1d0 = local_c1d1;
            if ((bool)local_c1d1) {
              local_bc20 = SDockTab::FArguments::FArguments(&local_43d0);
              local_bc30 = &local_a568;
              pFVar3 = FText::AsLocalizable_Advanced_LocText
                                 (&local_af18,L"STestSuite",L"MultiLineEditTab",L"MultiLine Edit");
              local_bc28 = TAttribute<FText>::TAttribute<FText>(local_bc30,pFVar3);
              local_bc18 = SDockTab::FArguments::Label(local_bc20,local_bc28);
              local_bbf8 = TSlateBaseNamedArgs<SDockTab>::Clipping
                                     ((TSlateBaseNamedArgs<SDockTab> *)local_bc18,ClipToBounds);
              local_bc10 = SMultiLineEditingTest::FArguments::FArguments(&local_92a8);
              local_bc08 = TSlateBaseNamedArgs<SMultiLineEditingTest>::RenderTransform_Static<>
                                     ((TSlateBaseNamedArgs<SMultiLineEditingTest> *)local_bc10,
                                      GetTestRenderTransform);
              local_bc00 = TSlateBaseNamedArgs<SMultiLineEditingTest>::RenderTransformPivot_Static<>
                                     ((TSlateBaseNamedArgs<SMultiLineEditingTest> *)local_bc08,
                                      GetTestRenderTransformPivot);
              RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1cf);
              this_09 = MakeTDecl<SMultiLineEditingTest,RequiredArgs::T0RequiredArgs>
                                  (&local_acc8,"SMultiLineEditingTest",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                   ,0x176c,&local_c1cf);
              pTVar17 = TSlateDecl<SMultiLineEditingTest,RequiredArgs::T0RequiredArgs>::operator<<=
                                  (this_09,&local_af28,local_bc00);
              TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SMultiLineEditingTest>
                        (&local_b3a0,pTVar17);
              local_bbf0 = SDockTab::FArguments::operator[](local_bbf8,&local_b3a0);
              RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1ce);
              pTVar13 = MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                                  (&local_ab48,"SDockTab",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                   ,0x1767,&local_c1ce);
              TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar13,__return_storage_ptr__,local_bbf0);
              TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
              ~TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>(&local_ab48);
              TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_b3a0);
              TSharedRef<SMultiLineEditingTest,1>::~TSharedRef<SMultiLineEditingTest,1>(&local_af28)
              ;
              TSlateDecl<SMultiLineEditingTest,RequiredArgs::T0RequiredArgs>::
              ~TSlateDecl<SMultiLineEditingTest,RequiredArgs::T0RequiredArgs>(&local_acc8);
              SMultiLineEditingTest::FArguments::~FArguments(&local_92a8);
              FText::~FText(&local_af18);
              SDockTab::FArguments::~FArguments(&local_43d0);
            }
            else {
              local_bbe8 = FName::FName(&local_b190,L"EditableTextTab");
              local_bbe0 = *local_bbe8;
              local_c0e8 = 0;
              pFVar5 = local_res18;
              plVar38 = &local_c0e8;
              for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
                *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
                pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value + 1);
                plVar38 = (longlong *)((longlong)plVar38 + 1);
              }
              local_b188 = &local_c0e8;
              local_bbd8 = local_c0e8;
              local_c0e0 = 0;
              pFVar5 = &local_bbe0;
              plVar38 = &local_c0e0;
              for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
                *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
                pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value + 1);
                plVar38 = (longlong *)((longlong)plVar38 + 1);
              }
              local_b180 = &local_c0e0;
              local_bbd0 = local_c0e0;
              local_c1cd = local_bbd8 == local_c0e0;
              local_c178 = (uint)(byte)local_c1cd;
              local_c1cc = local_c1cd;
              if ((bool)local_c1cd) {
                local_bbb8 = SDockTab::FArguments::FArguments(&local_3fa8);
                local_bbc8 = &local_a538;
                pFVar3 = FText::AsLocalizable_Advanced_LocText
                                   (&local_aee8,L"STestSuite",L"EditableTextTestTab",
                                    L"Editable Text");
                local_bbc0 = TAttribute<FText>::TAttribute<FText>(local_bbc8,pFVar3);
                local_bba0 = SDockTab::FArguments::Label(local_bbb8,local_bbc0);
                local_bbb0 = &local_a508;
                pFVar3 = FText::AsLocalizable_Advanced_LocText
                                   (&local_aef8,L"STestSuite",L"EditableTextTestTabToolTip",
                                    L"Switches to the Editable Text tab, where you can test the various inline text editing controls."
                                   );
                local_bba8 = TAttribute<FText>::TAttribute<FText>(local_bbb0,pFVar3);
                local_bb98 = TSlateBaseNamedArgs<SDockTab>::ToolTipText
                                       ((TSlateBaseNamedArgs<SDockTab> *)local_bba0,local_bba8);
                local_bb78 = TSlateBaseNamedArgs<SDockTab>::Clipping
                                       ((TSlateBaseNamedArgs<SDockTab> *)local_bb98,ClipToBounds);
                local_bb90 = STextEditTest::FArguments::FArguments(&local_90b0);
                local_bb88 = TSlateBaseNamedArgs<STextEditTest>::RenderTransform_Static<>
                                       ((TSlateBaseNamedArgs<STextEditTest> *)local_bb90,
                                        GetTestRenderTransform);
                local_bb80 = TSlateBaseNamedArgs<STextEditTest>::RenderTransformPivot_Static<>
                                       ((TSlateBaseNamedArgs<STextEditTest> *)local_bb88,
                                        GetTestRenderTransformPivot);
                RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1cb);
                this_10 = MakeTDecl<STextEditTest,RequiredArgs::T0RequiredArgs>
                                    (&local_ab00,"STextEditTest",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                     ,0x177c,&local_c1cb);
                pTVar18 = TSlateDecl<STextEditTest,RequiredArgs::T0RequiredArgs>::operator<<=
                                    (this_10,&local_af08,local_bb80);
                TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextEditTest>(&local_b390,pTVar18);
                local_bb70 = SDockTab::FArguments::operator[](local_bb78,&local_b390);
                RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1ca);
                pTVar13 = MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                                    (&local_ab18,"SDockTab",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                     ,0x1777,&local_c1ca);
                TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
                          (pTVar13,__return_storage_ptr__,local_bb70);
                TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
                ~TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>(&local_ab18);
                TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_b390);
                TSharedRef<STextEditTest,1>::~TSharedRef<STextEditTest,1>(&local_af08);
                TSlateDecl<STextEditTest,RequiredArgs::T0RequiredArgs>::
                ~TSlateDecl<STextEditTest,RequiredArgs::T0RequiredArgs>(&local_ab00);
                STextEditTest::FArguments::~FArguments(&local_90b0);
                FText::~FText(&local_aef8);
                FText::~FText(&local_aee8);
                SDockTab::FArguments::~FArguments(&local_3fa8);
              }
              else {
                local_bb68 = FName::FName(&local_b178,L"RichEditableTextTab");
                local_bb60 = *local_bb68;
                local_c0d8 = 0;
                pFVar5 = local_res18;
                plVar38 = &local_c0d8;
                for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
                  *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
                  pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value + 1);
                  plVar38 = (longlong *)((longlong)plVar38 + 1);
                }
                local_b170 = &local_c0d8;
                local_bb58 = local_c0d8;
                local_c0d0 = 0;
                pFVar5 = &local_bb60;
                plVar38 = &local_c0d0;
                for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
                  *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
                  pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value + 1);
                  plVar38 = (longlong *)((longlong)plVar38 + 1);
                }
                local_b168 = &local_c0d0;
                local_bb50 = local_c0d0;
                local_c1c9 = local_bb58 == local_c0d0;
                local_c174 = (uint)(byte)local_c1c9;
                local_c1c8 = local_c1c9;
                if ((bool)local_c1c9) {
                  local_bb38 = SDockTab::FArguments::FArguments(&local_3b80);
                  local_bb48 = &local_a4d8;
                  pFVar3 = FText::AsLocalizable_Advanced_LocText
                                     (&local_aeb8,L"STestSuite",L"RichEditableTextTestTab",
                                      L"Rich Editable Text");
                  local_bb40 = TAttribute<FText>::TAttribute<FText>(local_bb48,pFVar3);
                  local_bb20 = SDockTab::FArguments::Label(local_bb38,local_bb40);
                  local_bb30 = &local_a4a8;
                  pFVar3 = FText::AsLocalizable_Advanced_LocText
                                     (&local_aec8,L"STestSuite",L"RichEditableTextTestTabToolTip",
                                      L"Switches to the Rich Editable Text tab, where you can test the various rich editable text features."
                                     );
                  local_bb28 = TAttribute<FText>::TAttribute<FText>(local_bb30,pFVar3);
                  local_bb18 = TSlateBaseNamedArgs<SDockTab>::ToolTipText
                                         ((TSlateBaseNamedArgs<SDockTab> *)local_bb20,local_bb28);
                  local_baf8 = TSlateBaseNamedArgs<SDockTab>::Clipping
                                         ((TSlateBaseNamedArgs<SDockTab> *)local_bb18,ClipToBounds);
                  local_bb10 = SRichTextEditTest::FArguments::FArguments(&local_8eb8);
                  local_bb08 = TSlateBaseNamedArgs<SRichTextEditTest>::RenderTransform_Static<>
                                         ((TSlateBaseNamedArgs<SRichTextEditTest> *)local_bb10,
                                          GetTestRenderTransform);
                  local_bb00 = TSlateBaseNamedArgs<SRichTextEditTest>::RenderTransformPivot_Static<>
                                         ((TSlateBaseNamedArgs<SRichTextEditTest> *)local_bb08,
                                          GetTestRenderTransformPivot);
                  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1c7);
                  this_11 = MakeTDecl<SRichTextEditTest,RequiredArgs::T0RequiredArgs>
                                      (&local_aad0,"SRichTextEditTest",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                       ,0x1789,&local_c1c7);
                  pTVar19 = TSlateDecl<SRichTextEditTest,RequiredArgs::T0RequiredArgs>::operator<<=
                                      (this_11,&local_aed8,local_bb00);
                  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SRichTextEditTest>
                            (&local_b380,pTVar19);
                  local_baf0 = SDockTab::FArguments::operator[](local_baf8,&local_b380);
                  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1c6);
                  pTVar13 = MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                                      (&local_aae8,"SDockTab",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                       ,0x1784,&local_c1c6);
                  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
                            (pTVar13,__return_storage_ptr__,local_baf0);
                  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
                  ~TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>(&local_aae8);
                  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_b380);
                  TSharedRef<SRichTextEditTest,1>::~TSharedRef<SRichTextEditTest,1>(&local_aed8);
                  TSlateDecl<SRichTextEditTest,RequiredArgs::T0RequiredArgs>::
                  ~TSlateDecl<SRichTextEditTest,RequiredArgs::T0RequiredArgs>(&local_aad0);
                  SRichTextEditTest::FArguments::~FArguments(&local_8eb8);
                  FText::~FText(&local_aec8);
                  FText::~FText(&local_aeb8);
                  SDockTab::FArguments::~FArguments(&local_3b80);
                }
                else {
                  local_bae8 = FName::FName(&local_b160,"LayoutRoundingTab");
                  local_bae0 = *local_bae8;
                  local_c0c8 = 0;
                  pFVar5 = local_res18;
                  plVar38 = &local_c0c8;
                  for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
                    *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
                    pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value + 1);
                    plVar38 = (longlong *)((longlong)plVar38 + 1);
                  }
                  local_b158 = &local_c0c8;
                  local_bad8 = local_c0c8;
                  local_c0c0 = 0;
                  pFVar5 = &local_bae0;
                  plVar38 = &local_c0c0;
                  for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
                    *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
                    pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value + 1);
                    plVar38 = (longlong *)((longlong)plVar38 + 1);
                  }
                  local_b150 = &local_c0c0;
                  local_bad0 = local_c0c0;
                  local_c1c5 = local_bad8 == local_c0c0;
                  local_c170 = (uint)(byte)local_c1c5;
                  local_c1c4 = local_c1c5;
                  if ((bool)local_c1c5) {
                    local_bab8 = SDockTab::FArguments::FArguments(&local_3758);
                    local_bac8 = &local_a478;
                    pFVar3 = FText::AsLocalizable_Advanced_LocText
                                       (&local_ae98,L"STestSuite",L"LayoutRoundingTab",
                                        L"Layout Rounding");
                    local_bac0 = TAttribute<FText>::TAttribute<FText>(local_bac8,pFVar3);
                    local_bab0 = SDockTab::FArguments::Label(local_bab8,local_bac0);
                    local_ba90 = TSlateBaseNamedArgs<SDockTab>::Clipping
                                           ((TSlateBaseNamedArgs<SDockTab> *)local_bab0,ClipToBounds
                                           );
                    local_baa8 = SLayoutRoundingTest::FArguments::FArguments(&local_8cc0);
                    local_baa0 = TSlateBaseNamedArgs<SLayoutRoundingTest>::RenderTransform_Static<>
                                           ((TSlateBaseNamedArgs<SLayoutRoundingTest> *)local_baa8,
                                            GetTestRenderTransform);
                    local_ba98 = TSlateBaseNamedArgs<SLayoutRoundingTest>::
                                 RenderTransformPivot_Static<>
                                           ((TSlateBaseNamedArgs<SLayoutRoundingTest> *)local_baa0,
                                            GetTestRenderTransformPivot);
                    RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1c3);
                    this_12 = MakeTDecl<SLayoutRoundingTest,RequiredArgs::T0RequiredArgs>
                                        (&local_aaa0,"SLayoutRoundingTest",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                         ,0x1795,&local_c1c3);
                    pTVar20 = TSlateDecl<SLayoutRoundingTest,RequiredArgs::T0RequiredArgs>::
                              operator<<=(this_12,&local_aea8,local_ba98);
                    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SLayoutRoundingTest>
                              (&local_b370,pTVar20);
                    local_ba88 = SDockTab::FArguments::operator[](local_ba90,&local_b370);
                    RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1c2);
                    pTVar13 = MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                                        (&local_aab8,"SDockTab",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                         ,0x1791,&local_c1c2);
                    TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
                              (pTVar13,__return_storage_ptr__,local_ba88);
                    TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
                    ~TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>(&local_aab8);
                    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_b370);
                    TSharedRef<SLayoutRoundingTest,1>::~TSharedRef<SLayoutRoundingTest,1>
                              (&local_aea8);
                    TSlateDecl<SLayoutRoundingTest,RequiredArgs::T0RequiredArgs>::
                    ~TSlateDecl<SLayoutRoundingTest,RequiredArgs::T0RequiredArgs>(&local_aaa0);
                    SLayoutRoundingTest::FArguments::~FArguments(&local_8cc0);
                    FText::~FText(&local_ae98);
                    SDockTab::FArguments::~FArguments(&local_3758);
                  }
                  else {
                    local_ba80 = FName::FName(&local_b148,L"SplineTestTab");
                    local_ba78 = *local_ba80;
                    local_c0b8 = 0;
                    pFVar5 = local_res18;
                    plVar38 = &local_c0b8;
                    for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
                      *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
                      pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value + 1);
                      plVar38 = (longlong *)((longlong)plVar38 + 1);
                    }
                    local_b140 = &local_c0b8;
                    local_ba70 = local_c0b8;
                    local_c0b0 = 0;
                    pFVar5 = &local_ba78;
                    plVar38 = &local_c0b0;
                    for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
                      *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
                      pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value + 1);
                      plVar38 = (longlong *)((longlong)plVar38 + 1);
                    }
                    local_b138 = &local_c0b0;
                    local_ba68 = local_c0b0;
                    local_c1c1 = local_ba70 == local_c0b0;
                    local_c16c = (uint)(byte)local_c1c1;
                    local_c1c0 = local_c1c1;
                    if ((bool)local_c1c1) {
                      local_ba60 = SDockTab::FArguments::FArguments(&local_3330);
                      local_b7c8 = TSlateBaseNamedArgs<SDockTab>::Clipping
                                             ((TSlateBaseNamedArgs<SDockTab> *)local_ba60,
                                              ClipToBounds);
                      local_ba58 = SUniformGridPanel::FArguments::FArguments(&local_7080);
                      local_ba50 = TSlateBaseNamedArgs<SUniformGridPanel>::RenderTransform_Static<>
                                             ((TSlateBaseNamedArgs<SUniformGridPanel> *)local_ba58,
                                              GetTestRenderTransform);
                      local_ba38 = TSlateBaseNamedArgs<SUniformGridPanel>::
                                   RenderTransformPivot_Static<>
                                             ((TSlateBaseNamedArgs<SUniformGridPanel> *)local_ba50,
                                              GetTestRenderTransformPivot);
                      local_ba48 = &local_a448;
                      pFVar21 = FMargin::FMargin(&local_a800,__real_41200000);
                      local_ba40 = TAttribute<FMargin>::TAttribute<FMargin>(local_ba48,pFVar21);
                      local_b9a0 = SUniformGridPanel::FArguments::SlotPadding(local_ba38,local_ba40)
                      ;
                      local_b9b0 = SUniformGridPanel::Slot(&local_a768,0,0);
                      local_ba30 = SBorder::FArguments::FArguments(&local_5c78);
                      local_b9c0 = TSlateBaseNamedArgs<SBorder>::Clipping
                                             ((TSlateBaseNamedArgs<SBorder> *)local_ba30,
                                              ClipToBounds);
                      local_ba18 = SSplineTest::FArguments::FArguments(&local_74c0);
                      local_c020 = __real_42800000;
                      uStack_c01c = __real_42800000;
                      local_ba28 = &local_c020;
                      local_ba20._s_0.Y = (float)__real_42800000;
                      local_ba20._s_0.X = (float)__real_42800000;
                      local_ba00 = SSplineTest::FArguments::P0
                                             (local_ba18,(TVector2<float>)local_ba20);
                      local_c018 = __real_43800000;
                      uStack_c014 = __real_42800000;
                      local_ba10 = &local_c018;
                      local_ba08._s_0.Y = (float)__real_42800000;
                      local_ba08._s_0.X = (float)__real_43800000;
                      local_b9e8 = SSplineTest::FArguments::P1
                                             (local_ba00,(TVector2<float>)local_ba08);
                      local_c010 = __real_42800000;
                      uStack_c00c = __real_43800000;
                      local_b9f8 = &local_c010;
                      local_b9f0._s_0.Y = (float)__real_43800000;
                      local_b9f0._s_0.X = (float)__real_42800000;
                      local_b9d0 = SSplineTest::FArguments::P2
                                             (local_b9e8,(TVector2<float>)local_b9f0);
                      local_c008 = __real_43800000;
                      uStack_c004 = __real_43800000;
                      local_b9e0 = &local_c008;
                      local_b9d8._s_0.Y = (float)__real_43800000;
                      local_b9d8._s_0.X = (float)__real_43800000;
                      local_b9c8 = SSplineTest::FArguments::P3
                                             (local_b9d0,(TVector2<float>)local_b9d8);
                      RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1bf);
                      pTVar22 = MakeTDecl<SSplineTest,RequiredArgs::T0RequiredArgs>
                                          (&local_a9b0,"SSplineTest",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                           ,0x17a8,&local_c1bf);
                      pTVar23 = TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs>::operator<<=
                                          (pTVar22,&local_ae08,local_b9c8);
                      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSplineTest>(&local_b2e0,pTVar23)
                      ;
                      local_b9b8 = SBorder::FArguments::operator[](local_b9c0,&local_b2e0);
                      RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1be);
                      pTVar24 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                                          (&local_a9c8,"SBorder",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                           ,0x17a5,&local_c1be);
                      pTVar25 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                                          (pTVar24,&local_ae18,local_b9b8);
                      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_b2f0,pTVar25);
                      local_b9a8 = TSlotBase<SUniformGridPanel::FSlot>::FSlotArguments::operator[]
                                             ((FSlotArguments *)local_b9b0,&local_b2f0);
                      local_b908 = SUniformGridPanel::FArguments::operator+(local_b9a0,local_b9a8);
                      local_b918 = SUniformGridPanel::Slot(&local_a790,1,0);
                      local_b998 = SBorder::FArguments::FArguments(&local_6058);
                      local_b928 = TSlateBaseNamedArgs<SBorder>::Clipping
                                             ((TSlateBaseNamedArgs<SBorder> *)local_b998,
                                              ClipToBounds);
                      local_b980 = SSplineTest::FArguments::FArguments(&local_76d8);
                      local_c000 = __real_42c00000;
                      uStack_bffc = __real_42000000;
                      local_b990 = &local_c000;
                      local_b988._s_0.Y = (float)__real_42000000;
                      local_b988._s_0.X = (float)__real_42c00000;
                      local_b968 = SSplineTest::FArguments::P0
                                             (local_b980,(TVector2<float>)local_b988);
                      local_bff8 = __real_43200000;
                      uStack_bff4 = __real_43000000;
                      local_b978 = &local_bff8;
                      local_b970._s_0.Y = (float)__real_43000000;
                      local_b970._s_0.X = (float)__real_43200000;
                      local_b950 = SSplineTest::FArguments::P1
                                             (local_b968,(TVector2<float>)local_b970);
                      local_bff0 = __real_42c00000;
                      uStack_bfec = __real_43000000;
                      local_b960 = &local_bff0;
                      local_b958._s_0.Y = (float)__real_43000000;
                      local_b958._s_0.X = (float)__real_42c00000;
                      local_b938 = SSplineTest::FArguments::P2
                                             (local_b950,(TVector2<float>)local_b958);
                      local_bfe8 = __real_43200000;
                      uStack_bfe4 = __real_42000000;
                      local_b948 = &local_bfe8;
                      local_b940._s_0.Y = (float)__real_42000000;
                      local_b940._s_0.X = (float)__real_43200000;
                      local_b930 = SSplineTest::FArguments::P3
                                             (local_b938,(TVector2<float>)local_b940);
                      RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1bd);
                      pTVar22 = MakeTDecl<SSplineTest,RequiredArgs::T0RequiredArgs>
                                          (&local_a9e0,"SSplineTest",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                           ,0x17b4,&local_c1bd);
                      pTVar23 = TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs>::operator<<=
                                          (pTVar22,&local_ae28,local_b930);
                      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSplineTest>(&local_b300,pTVar23)
                      ;
                      local_b920 = SBorder::FArguments::operator[](local_b928,&local_b300);
                      RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1bc);
                      pTVar24 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                                          (&local_a9f8,"SBorder",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                           ,0x17b1,&local_c1bc);
                      pTVar25 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                                          (pTVar24,&local_ae38,local_b920);
                      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_b310,pTVar25);
                      local_b910 = TSlotBase<SUniformGridPanel::FSlot>::FSlotArguments::operator[]
                                             ((FSlotArguments *)local_b918,&local_b310);
                      local_b870 = SUniformGridPanel::FArguments::operator+(local_b908,local_b910);
                      local_b880 = SUniformGridPanel::Slot(&local_a7b8,0,1);
                      local_b900 = SBorder::FArguments::FArguments(&local_6438);
                      local_b890 = TSlateBaseNamedArgs<SBorder>::Clipping
                                             ((TSlateBaseNamedArgs<SBorder> *)local_b900,
                                              ClipToBounds);
                      local_b8e8 = SSplineTest::FArguments::FArguments(&local_78f0);
                      local_bfe0 = __real_42800000;
                      uStack_bfdc = __real_42800000;
                      local_b8f8 = &local_bfe0;
                      local_b8f0._s_0.Y = (float)__real_42800000;
                      local_b8f0._s_0.X = (float)__real_42800000;
                      local_b8d0 = SSplineTest::FArguments::P0
                                             (local_b8e8,(TVector2<float>)local_b8f0);
                      local_bfd8 = __real_43800000;
                      uStack_bfd4 = __real_42800000;
                      local_b8e0 = &local_bfd8;
                      local_b8d8._s_0.Y = (float)__real_42800000;
                      local_b8d8._s_0.X = (float)__real_43800000;
                      local_b8b8 = SSplineTest::FArguments::P1
                                             (local_b8d0,(TVector2<float>)local_b8d8);
                      local_bfd0 = __real_43800000;
                      uStack_bfcc = __real_43800000;
                      local_b8c8 = &local_bfd0;
                      local_b8c0._s_0.Y = (float)__real_43800000;
                      local_b8c0._s_0.X = (float)__real_43800000;
                      local_b8a0 = SSplineTest::FArguments::P2
                                             (local_b8b8,(TVector2<float>)local_b8c0);
                      local_bfc8 = __real_42800000;
                      uStack_bfc4 = __real_43800000;
                      local_b8b0 = &local_bfc8;
                      local_b8a8._s_0.Y = (float)__real_43800000;
                      local_b8a8._s_0.X = (float)__real_42800000;
                      local_b898 = SSplineTest::FArguments::P3
                                             (local_b8a0,(TVector2<float>)local_b8a8);
                      RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1bb);
                      pTVar22 = MakeTDecl<SSplineTest,RequiredArgs::T0RequiredArgs>
                                          (&local_aa10,"SSplineTest",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                           ,0x17c0,&local_c1bb);
                      pTVar23 = TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs>::operator<<=
                                          (pTVar22,&local_ae48,local_b898);
                      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSplineTest>(&local_b320,pTVar23)
                      ;
                      local_b888 = SBorder::FArguments::operator[](local_b890,&local_b320);
                      RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1ba);
                      pTVar24 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                                          (&local_aa28,"SBorder",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                           ,0x17bd,&local_c1ba);
                      pTVar25 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                                          (pTVar24,&local_ae58,local_b888);
                      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_b330,pTVar25);
                      local_b878 = TSlotBase<SUniformGridPanel::FSlot>::FSlotArguments::operator[]
                                             ((FSlotArguments *)local_b880,&local_b330);
                      local_b7d8 = SUniformGridPanel::FArguments::operator+(local_b870,local_b878);
                      local_b7e8 = SUniformGridPanel::Slot(&local_a7e0,1,1);
                      local_b868 = SBorder::FArguments::FArguments(&local_6818);
                      local_b7f8 = TSlateBaseNamedArgs<SBorder>::Clipping
                                             ((TSlateBaseNamedArgs<SBorder> *)local_b868,
                                              ClipToBounds);
                      local_b850 = SSplineTest::FArguments::FArguments(&local_7b08);
                      local_bfc0 = __real_42800000;
                      uStack_bfbc = __real_42800000;
                      local_b860 = &local_bfc0;
                      local_b858._s_0.Y = (float)__real_42800000;
                      local_b858._s_0.X = (float)__real_42800000;
                      local_b838 = SSplineTest::FArguments::P0
                                             (local_b850,(TVector2<float>)local_b858);
                      local_bfb8 = __real_43000000;
                      uStack_bfb4 = __real_43000000;
                      local_b848 = &local_bfb8;
                      local_b840._s_0.Y = (float)__real_43000000;
                      local_b840._s_0.X = (float)__real_43000000;
                      local_b820 = SSplineTest::FArguments::P1
                                             (local_b838,(TVector2<float>)local_b840);
                      local_bfb0 = __real_43440000;
                      uStack_bfac = __real_43440000;
                      local_b830 = &local_bfb0;
                      local_b828._s_0.Y = (float)__real_43440000;
                      local_b828._s_0.X = (float)__real_43440000;
                      local_b808 = SSplineTest::FArguments::P2
                                             (local_b820,(TVector2<float>)local_b828);
                      local_bfa8 = __real_43800000;
                      uStack_bfa4 = __real_43800000;
                      local_b818 = &local_bfa8;
                      local_b810._s_0.Y = (float)__real_43800000;
                      local_b810._s_0.X = (float)__real_43800000;
                      local_b800 = SSplineTest::FArguments::P3
                                             (local_b808,(TVector2<float>)local_b810);
                      RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1b9);
                      pTVar22 = MakeTDecl<SSplineTest,RequiredArgs::T0RequiredArgs>
                                          (&local_aa40,"SSplineTest",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                           ,0x17cc,&local_c1b9);
                      pTVar23 = TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs>::operator<<=
                                          (pTVar22,&local_ae68,local_b800);
                      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSplineTest>(&local_b340,pTVar23)
                      ;
                      local_b7f0 = SBorder::FArguments::operator[](local_b7f8,&local_b340);
                      RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1b8);
                      pTVar24 = MakeTDecl<SBorder,RequiredArgs::T0RequiredArgs>
                                          (&local_aa58,"SBorder",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                           ,0x17c9,&local_c1b8);
                      pTVar25 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                                          (pTVar24,&local_ae78,local_b7f0);
                      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBorder>(&local_b410,pTVar25);
                      local_b7e0 = TSlotBase<SUniformGridPanel::FSlot>::FSlotArguments::operator[]
                                             ((FSlotArguments *)local_b7e8,&local_b410);
                      local_b7d0 = SUniformGridPanel::FArguments::operator+(local_b7d8,local_b7e0);
                      RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1b7);
                      this_13 = MakeTDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>
                                          (&local_aa70,"SUniformGridPanel",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                           ,0x179f,&local_c1b7);
                      pTVar26 = TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>::
                                operator<<=(this_13,&local_ae88,local_b7d0);
                      TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SUniformGridPanel>
                                (&local_b360,pTVar26);
                      local_b7c0 = SDockTab::FArguments::operator[](local_b7c8,&local_b360);
                      RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1b6);
                      pTVar13 = MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                                          (&local_aa88,"SDockTab",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                           ,0x179c,&local_c1b6);
                      TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
                                (pTVar13,__return_storage_ptr__,local_b7c0);
                      TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
                      ~TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>(&local_aa88);
                      TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_b360);
                      TSharedRef<SUniformGridPanel,1>::~TSharedRef<SUniformGridPanel,1>(&local_ae88)
                      ;
                      TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>::
                      ~TSlateDecl<SUniformGridPanel,RequiredArgs::T0RequiredArgs>(&local_aa70);
                      TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_b410);
                      TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_ae78);
                      TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
                      ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_aa58);
                      TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_b340);
                      TSharedRef<SSplineTest,1>::~TSharedRef<SSplineTest,1>(&local_ae68);
                      TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs>::
                      ~TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs>(&local_aa40);
                      SSplineTest::FArguments::~FArguments(&local_7b08);
                      SBorder::FArguments::~FArguments(&local_6818);
                      SUniformGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_a7e0);
                      TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_b330);
                      TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_ae58);
                      TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
                      ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_aa28);
                      TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_b320);
                      TSharedRef<SSplineTest,1>::~TSharedRef<SSplineTest,1>(&local_ae48);
                      TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs>::
                      ~TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs>(&local_aa10);
                      SSplineTest::FArguments::~FArguments(&local_78f0);
                      SBorder::FArguments::~FArguments(&local_6438);
                      SUniformGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_a7b8);
                      TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_b310);
                      TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_ae38);
                      TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
                      ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_a9f8);
                      TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_b300);
                      TSharedRef<SSplineTest,1>::~TSharedRef<SSplineTest,1>(&local_ae28);
                      TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs>::
                      ~TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs>(&local_a9e0);
                      SSplineTest::FArguments::~FArguments(&local_76d8);
                      SBorder::FArguments::~FArguments(&local_6058);
                      SUniformGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_a790);
                      TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_b2f0);
                      TSharedRef<SBorder,1>::~TSharedRef<SBorder,1>(&local_ae18);
                      TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
                      ~TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>(&local_a9c8);
                      TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_b2e0);
                      TSharedRef<SSplineTest,1>::~TSharedRef<SSplineTest,1>(&local_ae08);
                      TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs>::
                      ~TSlateDecl<SSplineTest,RequiredArgs::T0RequiredArgs>(&local_a9b0);
                      SSplineTest::FArguments::~FArguments(&local_74c0);
                      SBorder::FArguments::~FArguments(&local_5c78);
                      SUniformGridPanel::FSlot::FSlotArguments::~FSlotArguments(&local_a768);
                      SUniformGridPanel::FArguments::~FArguments(&local_7080);
                      SDockTab::FArguments::~FArguments(&local_3330);
                    }
                    else {
                      local_b7b8 = FName::FName(&local_b130,L"ElementTestsTab");
                      local_b7b0 = *local_b7b8;
                      local_c0a8 = 0;
                      pFVar5 = local_res18;
                      plVar38 = &local_c0a8;
                      for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
                        *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
                        pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value + 1);
                        plVar38 = (longlong *)((longlong)plVar38 + 1);
                      }
                      local_b128 = &local_c0a8;
                      local_b7a8 = local_c0a8;
                      local_c0a0 = 0;
                      pFVar5 = &local_b7b0;
                      plVar38 = &local_c0a0;
                      for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
                        *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
                        pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value + 1);
                        plVar38 = (longlong *)((longlong)plVar38 + 1);
                      }
                      local_b070 = &local_c0a0;
                      local_b7a0 = local_c0a0;
                      local_c1b5 = local_b7a8 == local_c0a0;
                      local_c168 = (uint)(byte)local_c1b5;
                      local_c1b4 = local_c1b5;
                      if ((bool)local_c1b5) {
                        local_b788 = SDockTab::FArguments::FArguments(&local_2f08);
                        local_b798 = &local_a418;
                        pFVar3 = FText::AsLocalizable_Advanced_LocText
                                           (&local_add8,L"STestSuite",L"ElementTestsTab",
                                            L"Element Tests");
                        local_b790 = TAttribute<FText>::TAttribute<FText>(local_b798,pFVar3);
                        local_b770 = SDockTab::FArguments::Label(local_b788,local_b790);
                        local_b780 = &local_a3e8;
                        pFVar3 = FText::AsLocalizable_Advanced_LocText
                                           (&local_ade8,L"STestSuite",L"ElementTestsTabToolTip",
                                            L"Switches to the Element Tests tab, which allows you to view various rendering-related features of Slate."
                                           );
                        local_b778 = TAttribute<FText>::TAttribute<FText>(local_b780,pFVar3);
                        local_b768 = TSlateBaseNamedArgs<SDockTab>::ToolTipText
                                               ((TSlateBaseNamedArgs<SDockTab> *)local_b770,
                                                local_b778);
                        local_b748 = TSlateBaseNamedArgs<SDockTab>::Clipping
                                               ((TSlateBaseNamedArgs<SDockTab> *)local_b768,
                                                ClipToBounds);
                        local_b760 = SElementTesting::FArguments::FArguments(&local_8ac8);
                        local_b758 = TSlateBaseNamedArgs<SElementTesting>::RenderTransform_Static<>
                                               ((TSlateBaseNamedArgs<SElementTesting> *)local_b760,
                                                GetTestRenderTransform);
                        local_b750 = TSlateBaseNamedArgs<SElementTesting>::
                                     RenderTransformPivot_Static<>
                                               ((TSlateBaseNamedArgs<SElementTesting> *)local_b758,
                                                GetTestRenderTransformPivot);
                        RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1b3);
                        this_14 = MakeTDecl<SElementTesting,RequiredArgs::T0RequiredArgs>
                                            (&local_a998,"SElementTesting",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                             ,0x17dd,&local_c1b3);
                        pTVar27 = TSlateDecl<SElementTesting,RequiredArgs::T0RequiredArgs>::
                                  operator<<=(this_14,&local_adf8,local_b750);
                        TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SElementTesting>
                                  (&local_b2d0,pTVar27);
                        local_b740 = SDockTab::FArguments::operator[](local_b748,&local_b2d0);
                        RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1b2);
                        pTVar13 = MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                                            (&local_ab30,"SDockTab",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                             ,0x17d8,&local_c1b2);
                        TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
                                  (pTVar13,__return_storage_ptr__,local_b740);
                        TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
                        ~TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>(&local_ab30);
                        TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_b2d0);
                        TSharedRef<SElementTesting,1>::~TSharedRef<SElementTesting,1>(&local_adf8);
                        TSlateDecl<SElementTesting,RequiredArgs::T0RequiredArgs>::
                        ~TSlateDecl<SElementTesting,RequiredArgs::T0RequiredArgs>(&local_a998);
                        SElementTesting::FArguments::~FArguments(&local_8ac8);
                        FText::~FText(&local_ade8);
                        FText::~FText(&local_add8);
                        SDockTab::FArguments::~FArguments(&local_2f08);
                      }
                      else {
                        local_b738 = FName::FName(&local_b118,L"SplitterTestTab");
                        local_b730 = *local_b738;
                        local_c098 = 0;
                        pFVar5 = local_res18;
                        plVar38 = &local_c098;
                        for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
                          *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
                          pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value + 1);
                          plVar38 = (longlong *)((longlong)plVar38 + 1);
                        }
                        local_b110 = &local_c098;
                        local_b728 = local_c098;
                        local_c090 = 0;
                        pFVar5 = &local_b730;
                        plVar38 = &local_c090;
                        for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
                          *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
                          pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value + 1);
                          plVar38 = (longlong *)((longlong)plVar38 + 1);
                        }
                        local_b108 = &local_c090;
                        local_b720 = local_c090;
                        local_c1b1 = local_b728 == local_c090;
                        local_c164 = (uint)(byte)local_c1b1;
                        local_c1b0 = local_c1b1;
                        if ((bool)local_c1b1) {
                          local_b708 = SDockTab::FArguments::FArguments(&local_2ae0);
                          local_b718 = &local_a3b8;
                          pFVar3 = FText::AsLocalizable_Advanced_LocText
                                             (&local_ada8,L"STestSuite",L"SplitterTestTab",
                                              L"Splitter Test");
                          local_b710 = TAttribute<FText>::TAttribute<FText>(local_b718,pFVar3);
                          local_b6f0 = SDockTab::FArguments::Label(local_b708,local_b710);
                          local_b700 = &local_a388;
                          pFVar3 = FText::AsLocalizable_Advanced_LocText
                                             (&local_adb8,L"STestSuite",L"SplitterTestTabToolTip",
                                              L"Switches to the Splitter Test tab, which you can use to test splitters."
                                             );
                          local_b6f8 = TAttribute<FText>::TAttribute<FText>(local_b700,pFVar3);
                          local_b6e8 = TSlateBaseNamedArgs<SDockTab>::ToolTipText
                                                 ((TSlateBaseNamedArgs<SDockTab> *)local_b6f0,
                                                  local_b6f8);
                          local_b6c8 = TSlateBaseNamedArgs<SDockTab>::Clipping
                                                 ((TSlateBaseNamedArgs<SDockTab> *)local_b6e8,
                                                  ClipToBounds);
                          local_b6e0 = SSplitterTest::FArguments::FArguments(&local_88d0);
                          local_b6d8 = TSlateBaseNamedArgs<SSplitterTest>::RenderTransform_Static<>
                                                 ((TSlateBaseNamedArgs<SSplitterTest> *)local_b6e0,
                                                  GetTestRenderTransform);
                          local_b6d0 = TSlateBaseNamedArgs<SSplitterTest>::
                                       RenderTransformPivot_Static<>
                                                 ((TSlateBaseNamedArgs<SSplitterTest> *)local_b6d8,
                                                  GetTestRenderTransformPivot);
                          RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1af);
                          this_15 = MakeTDecl<SSplitterTest,RequiredArgs::T0RequiredArgs>
                                              (&local_a968,"SSplitterTest",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                               ,0x17e9,&local_c1af);
                          pTVar28 = TSlateDecl<SSplitterTest,RequiredArgs::T0RequiredArgs>::
                                    operator<<=(this_15,&local_adc8,local_b6d0);
                          TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSplitterTest>
                                    (&local_b2c0,pTVar28);
                          local_b6c0 = SDockTab::FArguments::operator[](local_b6c8,&local_b2c0);
                          RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1ae);
                          pTVar13 = MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                                              (&local_a980,"SDockTab",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                               ,0x17e4,&local_c1ae);
                          TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
                                    (pTVar13,__return_storage_ptr__,local_b6c0);
                          TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
                          ~TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>(&local_a980);
                          TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_b2c0);
                          TSharedRef<SSplitterTest,1>::~TSharedRef<SSplitterTest,1>(&local_adc8);
                          TSlateDecl<SSplitterTest,RequiredArgs::T0RequiredArgs>::
                          ~TSlateDecl<SSplitterTest,RequiredArgs::T0RequiredArgs>(&local_a968);
                          SSplitterTest::FArguments::~FArguments(&local_88d0);
                          FText::~FText(&local_adb8);
                          FText::~FText(&local_ada8);
                          SDockTab::FArguments::~FArguments(&local_2ae0);
                        }
                        else {
                          local_b6b8 = FName::FName(&local_b100,L"MultiBoxTestTab");
                          local_b6b0 = *local_b6b8;
                          local_c088 = 0;
                          pFVar5 = local_res18;
                          plVar38 = &local_c088;
                          for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
                            *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
                            pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value + 1);
                            plVar38 = (longlong *)((longlong)plVar38 + 1);
                          }
                          local_b0f8 = &local_c088;
                          local_b6a8 = local_c088;
                          local_c080 = 0;
                          pFVar5 = &local_b6b0;
                          plVar38 = &local_c080;
                          for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
                            *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
                            pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value + 1);
                            plVar38 = (longlong *)((longlong)plVar38 + 1);
                          }
                          local_b0f0 = &local_c080;
                          local_b6a0 = local_c080;
                          local_c1ad = local_b6a8 == local_c080;
                          local_c160 = (uint)(byte)local_c1ad;
                          local_c1ac = local_c1ad;
                          if ((bool)local_c1ad) {
                            local_b688 = SDockTab::FArguments::FArguments(&local_26b8);
                            local_b698 = &local_a358;
                            pFVar3 = FText::AsLocalizable_Advanced_LocText
                                               (&local_ad78,L"STestSuite",L"MultiBoxTextTab",
                                                L"MultiBox Text");
                            local_b690 = TAttribute<FText>::TAttribute<FText>(local_b698,pFVar3);
                            local_b670 = SDockTab::FArguments::Label(local_b688,local_b690);
                            local_b680 = &local_a328;
                            pFVar3 = FText::AsLocalizable_Advanced_LocText
                                               (&local_ad88,L"STestSuite",L"MultiBoxTextTabToolTip",
                                                L"Switches to the MultiBox tab, where you can test out MultiBoxes and MultiBlocks."
                                               );
                            local_b678 = TAttribute<FText>::TAttribute<FText>(local_b680,pFVar3);
                            local_b668 = TSlateBaseNamedArgs<SDockTab>::ToolTipText
                                                   ((TSlateBaseNamedArgs<SDockTab> *)local_b670,
                                                    local_b678);
                            local_b648 = TSlateBaseNamedArgs<SDockTab>::Clipping
                                                   ((TSlateBaseNamedArgs<SDockTab> *)local_b668,
                                                    ClipToBounds);
                            local_b660 = SMultiBoxTest::FArguments::FArguments(&local_86d8);
                            local_b658 = TSlateBaseNamedArgs<SMultiBoxTest>::
                                         RenderTransform_Static<>
                                                   ((TSlateBaseNamedArgs<SMultiBoxTest> *)local_b660
                                                    ,GetTestRenderTransform);
                            local_b650 = TSlateBaseNamedArgs<SMultiBoxTest>::
                                         RenderTransformPivot_Static<>
                                                   ((TSlateBaseNamedArgs<SMultiBoxTest> *)local_b658
                                                    ,GetTestRenderTransformPivot);
                            RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1ab);
                            this_16 = MakeTDecl<SMultiBoxTest,RequiredArgs::T0RequiredArgs>
                                                (&local_a938,"SMultiBoxTest",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                                 ,0x17f5,&local_c1ab);
                            pTVar29 = TSlateDecl<SMultiBoxTest,RequiredArgs::T0RequiredArgs>::
                                      operator<<=(this_16,&local_ad98,local_b650);
                            TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SMultiBoxTest>
                                      (&local_b2b0,pTVar29);
                            local_b640 = SDockTab::FArguments::operator[](local_b648,&local_b2b0);
                            RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1aa);
                            pTVar13 = MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                                                (&local_a950,"SDockTab",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                                 ,0x17f0,&local_c1aa);
                            TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
                                      (pTVar13,__return_storage_ptr__,local_b640);
                            TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
                            ~TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>(&local_a950);
                            TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_b2b0);
                            TSharedRef<SMultiBoxTest,1>::~TSharedRef<SMultiBoxTest,1>(&local_ad98);
                            TSlateDecl<SMultiBoxTest,RequiredArgs::T0RequiredArgs>::
                            ~TSlateDecl<SMultiBoxTest,RequiredArgs::T0RequiredArgs>(&local_a938);
                            SMultiBoxTest::FArguments::~FArguments(&local_86d8);
                            FText::~FText(&local_ad88);
                            FText::~FText(&local_ad78);
                            SDockTab::FArguments::~FArguments(&local_26b8);
                          }
                          else {
                            local_b638 = FName::FName(&local_b0e8,L"ColorPickerTestTab");
                            local_b630 = *local_b638;
                            local_c078 = 0;
                            pFVar5 = local_res18;
                            plVar38 = &local_c078;
                            for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
                              *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
                              pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value + 1);
                              plVar38 = (longlong *)((longlong)plVar38 + 1);
                            }
                            local_b0e0 = &local_c078;
                            local_b628 = local_c078;
                            local_c070 = 0;
                            pFVar5 = &local_b630;
                            plVar38 = &local_c070;
                            for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
                              *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
                              pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value + 1);
                              plVar38 = (longlong *)((longlong)plVar38 + 1);
                            }
                            local_b0d8 = &local_c070;
                            local_b620 = local_c070;
                            local_c1a9 = local_b628 == local_c070;
                            local_c15c = (uint)(byte)local_c1a9;
                            local_c1a8 = local_c1a9;
                            if ((bool)local_c1a9) {
                              local_b608 = SDockTab::FArguments::FArguments(&local_2290);
                              local_b618 = &local_a2f8;
                              pFVar3 = FText::AsLocalizable_Advanced_LocText
                                                 (&local_ad48,L"STestSuite",L"ColorPickerTestTab",
                                                  L"Color Picker Test");
                              local_b610 = TAttribute<FText>::TAttribute<FText>(local_b618,pFVar3);
                              local_b5f0 = SDockTab::FArguments::Label(local_b608,local_b610);
                              local_b600 = &local_a2c8;
                              pFVar3 = FText::AsLocalizable_Advanced_LocText
                                                 (&local_ad58,L"STestSuite",
                                                  L"ColorPickerTestTabToolTip",
                                                  L"Switches to the Color Picker tab, where you can test out the color picker."
                                                 );
                              local_b5f8 = TAttribute<FText>::TAttribute<FText>(local_b600,pFVar3);
                              local_b5e8 = TSlateBaseNamedArgs<SDockTab>::ToolTipText
                                                     ((TSlateBaseNamedArgs<SDockTab> *)local_b5f0,
                                                      local_b5f8);
                              local_b5c8 = TSlateBaseNamedArgs<SDockTab>::Clipping
                                                     ((TSlateBaseNamedArgs<SDockTab> *)local_b5e8,
                                                      ClipToBounds);
                              local_b5e0 = SColorPickerTest::FArguments::FArguments(&local_72a8);
                              local_b5d8 = TSlateBaseNamedArgs<SColorPickerTest>::
                                           RenderTransform_Static<>
                                                     ((TSlateBaseNamedArgs<SColorPickerTest> *)
                                                      local_b5e0,GetTestRenderTransform);
                              local_b5d0 = TSlateBaseNamedArgs<SColorPickerTest>::
                                           RenderTransformPivot_Static<>
                                                     ((TSlateBaseNamedArgs<SColorPickerTest> *)
                                                      local_b5d8,GetTestRenderTransformPivot);
                              RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1a7);
                              this_17 = MakeTDecl<SColorPickerTest,RequiredArgs::T0RequiredArgs>
                                                  (&local_a908,"SColorPickerTest",
                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                                  ,0x1801,&local_c1a7);
                              pTVar30 = TSlateDecl<SColorPickerTest,RequiredArgs::T0RequiredArgs>::
                                        operator<<=(this_17,&local_ad68,local_b5d0);
                              TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SColorPickerTest>
                                        (&local_b2a0,pTVar30);
                              local_b5c0 = SDockTab::FArguments::operator[](local_b5c8,&local_b2a0);
                              RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1a6);
                              pTVar13 = MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                                                  (&local_a920,"SDockTab",
                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                                  ,0x17fc,&local_c1a6);
                              TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
                                        (pTVar13,__return_storage_ptr__,local_b5c0);
                              TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
                              ~TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>(&local_a920);
                              TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_b2a0);
                              TSharedRef<SColorPickerTest,1>::~TSharedRef<SColorPickerTest,1>
                                        (&local_ad68);
                              TSlateDecl<SColorPickerTest,RequiredArgs::T0RequiredArgs>::
                              ~TSlateDecl<SColorPickerTest,RequiredArgs::T0RequiredArgs>
                                        (&local_a908);
                              SColorPickerTest::FArguments::~FArguments(&local_72a8);
                              FText::~FText(&local_ad58);
                              FText::~FText(&local_ad48);
                              SDockTab::FArguments::~FArguments(&local_2290);
                            }
                            else {
                              local_c1a5 = FName::Equals(local_res18[0],"DPIScalingTest");
                              local_c1a4 = local_c1a5;
                              if ((bool)local_c1a5) {
                                local_b5b8 = SDockTab::FArguments::FArguments(&local_1e68);
                                local_b598 = TSlateBaseNamedArgs<SDockTab>::Clipping
                                                       ((TSlateBaseNamedArgs<SDockTab> *)local_b5b8,
                                                        ClipToBounds);
                                local_b5b0 = SDPIScalingTest::FArguments::FArguments(&local_84e0);
                                local_b5a8 = TSlateBaseNamedArgs<SDPIScalingTest>::
                                             RenderTransform_Static<>
                                                       ((TSlateBaseNamedArgs<SDPIScalingTest> *)
                                                        local_b5b0,GetTestRenderTransform);
                                local_b5a0 = TSlateBaseNamedArgs<SDPIScalingTest>::
                                             RenderTransformPivot_Static<>
                                                       ((TSlateBaseNamedArgs<SDPIScalingTest> *)
                                                        local_b5a8,GetTestRenderTransformPivot);
                                RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1a3);
                                this_18 = MakeTDecl<SDPIScalingTest,RequiredArgs::T0RequiredArgs>
                                                    (&local_a8d8,"SDPIScalingTest",
                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                                  ,0x180b,&local_c1a3);
                                pTVar31 = TSlateDecl<SDPIScalingTest,RequiredArgs::T0RequiredArgs>::
                                          operator<<=(this_18,&local_ad38,local_b5a0);
                                TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SDPIScalingTest>
                                          (&local_b290,pTVar31);
                                local_b590 = SDockTab::FArguments::operator[]
                                                       (local_b598,&local_b290);
                                RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c1a2);
                                pTVar13 = MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                                                    (&local_a8f0,"SDockTab",
                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                                  ,0x1808,&local_c1a2);
                                TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
                                          (pTVar13,__return_storage_ptr__,local_b590);
                                TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
                                ~TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>(&local_a8f0);
                                TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_b290);
                                TSharedRef<SDPIScalingTest,1>::~TSharedRef<SDPIScalingTest,1>
                                          (&local_ad38);
                                TSlateDecl<SDPIScalingTest,RequiredArgs::T0RequiredArgs>::
                                ~TSlateDecl<SDPIScalingTest,RequiredArgs::T0RequiredArgs>
                                          (&local_a8d8);
                                SDPIScalingTest::FArguments::~FArguments(&local_84e0);
                                SDockTab::FArguments::~FArguments(&local_1e68);
                              }
                              else {
                                local_b588 = FName::FName(&local_b0d0,L"InvalidationTest");
                                local_b580 = *local_b588;
                                local_c068 = 0;
                                pFVar5 = local_res18;
                                plVar38 = &local_c068;
                                for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
                                  *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
                                  pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value + 1)
                                  ;
                                  plVar38 = (longlong *)((longlong)plVar38 + 1);
                                }
                                local_b0c8 = &local_c068;
                                local_b578 = local_c068;
                                local_c060 = 0;
                                pFVar5 = &local_b580;
                                plVar38 = &local_c060;
                                for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
                                  *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
                                  pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value + 1)
                                  ;
                                  plVar38 = (longlong *)((longlong)plVar38 + 1);
                                }
                                local_b0c0 = &local_c060;
                                local_b570 = local_c060;
                                local_c1a1 = local_b578 == local_c060;
                                local_c158 = (uint)(byte)local_c1a1;
                                local_c1a0 = local_c1a1;
                                if ((bool)local_c1a1) {
                                  local_b568 = SDockTab::FArguments::FArguments(&local_1a40);
                                  local_b548 = TSlateBaseNamedArgs<SDockTab>::Clipping
                                                         ((TSlateBaseNamedArgs<SDockTab> *)
                                                          local_b568,ClipToBounds);
                                  local_b560 = SInvalidationTest::FArguments::FArguments
                                                         (&local_82e8);
                                  local_b558 = TSlateBaseNamedArgs<SInvalidationTest>::
                                               RenderTransform_Static<>
                                                         ((TSlateBaseNamedArgs<SInvalidationTest> *)
                                                          local_b560,GetTestRenderTransform);
                                  local_b550 = TSlateBaseNamedArgs<SInvalidationTest>::
                                               RenderTransformPivot_Static<>
                                                         ((TSlateBaseNamedArgs<SInvalidationTest> *)
                                                          local_b558,GetTestRenderTransformPivot);
                                  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c19f);
                                  this_19 = MakeTDecl<SInvalidationTest,RequiredArgs::T0RequiredArgs>
                                                      (&local_a8a8,"SInvalidationTest",
                                                                                                              
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                                  ,0x1815,&local_c19f);
                                  pTVar32 = TSlateDecl<SInvalidationTest,RequiredArgs::T0RequiredArgs>
                                            ::operator<<=(this_19,&local_ad28,local_b550);
                                  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SInvalidationTest>
                                            (&local_b280,pTVar32);
                                  local_b540 = SDockTab::FArguments::operator[]
                                                         (local_b548,&local_b280);
                                  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c19e);
                                  pTVar13 = MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                                                      (&local_a8c0,"SDockTab",
                                                                                                              
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                                  ,0x1812,&local_c19e);
                                  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
                                            (pTVar13,__return_storage_ptr__,local_b540);
                                  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
                                  ~TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>(&local_a8c0);
                                  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_b280);
                                  TSharedRef<SInvalidationTest,1>::~TSharedRef<SInvalidationTest,1>
                                            (&local_ad28);
                                  TSlateDecl<SInvalidationTest,RequiredArgs::T0RequiredArgs>::
                                  ~TSlateDecl<SInvalidationTest,RequiredArgs::T0RequiredArgs>
                                            (&local_a8a8);
                                  SInvalidationTest::FArguments::~FArguments(&local_82e8);
                                  SDockTab::FArguments::~FArguments(&local_1a40);
                                }
                                else {
                                  local_b538 = FName::FName(&local_b0b8,L"GammaTest");
                                  local_b530 = *local_b538;
                                  local_c058 = 0;
                                  pFVar5 = local_res18;
                                  plVar38 = &local_c058;
                                  for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
                                    *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
                                    pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value +
                                                      1);
                                    plVar38 = (longlong *)((longlong)plVar38 + 1);
                                  }
                                  local_b0b0 = &local_c058;
                                  local_b528 = local_c058;
                                  local_c050 = 0;
                                  pFVar5 = &local_b530;
                                  plVar38 = &local_c050;
                                  for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
                                    *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
                                    pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value +
                                                      1);
                                    plVar38 = (longlong *)((longlong)plVar38 + 1);
                                  }
                                  local_b0a8 = &local_c050;
                                  local_b520 = local_c050;
                                  local_c19d = local_b528 == local_c050;
                                  local_c154 = (uint)(byte)local_c19d;
                                  local_c19c = local_c19d;
                                  if ((bool)local_c19d) {
                                    local_b518 = SDockTab::FArguments::FArguments(&local_1618);
                                    local_b4f8 = TSlateBaseNamedArgs<SDockTab>::Clipping
                                                           ((TSlateBaseNamedArgs<SDockTab> *)
                                                            local_b518,ClipToBounds);
                                    local_b510 = SGammaTest::FArguments::FArguments(&local_80f0);
                                    local_b508 = TSlateBaseNamedArgs<SGammaTest>::
                                                 RenderTransform_Static<>
                                                           ((TSlateBaseNamedArgs<SGammaTest> *)
                                                            local_b510,GetTestRenderTransform);
                                    local_b500 = TSlateBaseNamedArgs<SGammaTest>::
                                                 RenderTransformPivot_Static<>
                                                           ((TSlateBaseNamedArgs<SGammaTest> *)
                                                            local_b508,GetTestRenderTransformPivot);
                                    RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c19b);
                                    this_20 = MakeTDecl<SGammaTest,RequiredArgs::T0RequiredArgs>
                                                        (&local_a878,"SGammaTest",
                                                                                                                  
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                                  ,0x181f,&local_c19b);
                                    pTVar33 = TSlateDecl<SGammaTest,RequiredArgs::T0RequiredArgs>::
                                              operator<<=(this_20,&local_ad18,local_b500);
                                    TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SGammaTest>
                                              (&local_b270,pTVar33);
                                    local_b4f0 = SDockTab::FArguments::operator[]
                                                           (local_b4f8,&local_b270);
                                    RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c19a);
                                    pTVar13 = MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                                                        (&local_a890,"SDockTab",
                                                                                                                  
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                                  ,0x181c,&local_c19a);
                                    TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
                                              (pTVar13,__return_storage_ptr__,local_b4f0);
                                    TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
                                    ~TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>(&local_a890);
                                    TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_b270);
                                    TSharedRef<SGammaTest,1>::~TSharedRef<SGammaTest,1>(&local_ad18)
                                    ;
                                    TSlateDecl<SGammaTest,RequiredArgs::T0RequiredArgs>::
                                    ~TSlateDecl<SGammaTest,RequiredArgs::T0RequiredArgs>
                                              (&local_a878);
                                    SGammaTest::FArguments::~FArguments(&local_80f0);
                                    SDockTab::FArguments::~FArguments(&local_1618);
                                  }
                                  else {
                                    local_b4e8 = FName::FName(&local_b0a0,L"NotificationListTestTab"
                                                             );
                                    local_b4e0 = *local_b4e8;
                                    local_c048 = 0;
                                    pFVar5 = local_res18;
                                    plVar38 = &local_c048;
                                    for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
                                      *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
                                      pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value
                                                        + 1);
                                      plVar38 = (longlong *)((longlong)plVar38 + 1);
                                    }
                                    local_b098 = &local_c048;
                                    local_b4d8 = local_c048;
                                    local_c040 = 0;
                                    pFVar5 = &local_b4e0;
                                    plVar38 = &local_c040;
                                    for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
                                      *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
                                      pFVar5 = (FName *)((longlong)&(pFVar5->ComparisonIndex).Value
                                                        + 1);
                                      plVar38 = (longlong *)((longlong)plVar38 + 1);
                                    }
                                    local_b090 = &local_c040;
                                    local_b4d0 = local_c040;
                                    local_c199 = local_b4d8 == local_c040;
                                    local_c150 = (uint)(byte)local_c199;
                                    local_c198 = local_c199;
                                    if ((bool)local_c199) {
                                      local_b4b8 = SDockTab::FArguments::FArguments(&local_11f0);
                                      local_b4c8 = &local_a298;
                                      pFVar3 = FText::AsLocalizable_Advanced_LocText
                                                         (&local_ace8,L"STestSuite",
                                                          L"NotificationListTestTab",
                                                          L"Notification List Test");
                                      local_b4c0 = TAttribute<FText>::TAttribute<FText>
                                                             (local_b4c8,pFVar3);
                                      local_b4a0 = SDockTab::FArguments::Label
                                                             (local_b4b8,local_b4c0);
                                      local_b4b0 = &local_a268;
                                      pFVar3 = FText::AsLocalizable_Advanced_LocText
                                                         (&local_acf8,L"STestSuite",
                                                          L"NotificationListTestTabToolTip",
                                                                                                                    
                                                  L"Switches to the Notification List tab, where you can test out the notification list."
                                                  );
                                      local_b4a8 = TAttribute<FText>::TAttribute<FText>
                                                             (local_b4b0,pFVar3);
                                      local_b498 = TSlateBaseNamedArgs<SDockTab>::ToolTipText
                                                             ((TSlateBaseNamedArgs<SDockTab> *)
                                                              local_b4a0,local_b4a8);
                                      local_b478 = TSlateBaseNamedArgs<SDockTab>::Clipping
                                                             ((TSlateBaseNamedArgs<SDockTab> *)
                                                              local_b498,ClipToBounds);
                                      local_b490 = SNotificationListTest::FArguments::FArguments
                                                             (&local_7ef8);
                                      local_b488 = TSlateBaseNamedArgs<SNotificationListTest>::
                                                   RenderTransform_Static<>
                                                             ((
                                                  TSlateBaseNamedArgs<SNotificationListTest> *)
                                                  local_b490,GetTestRenderTransform);
                                      local_b480 = TSlateBaseNamedArgs<SNotificationListTest>::
                                                   RenderTransformPivot_Static<>
                                                             ((
                                                  TSlateBaseNamedArgs<SNotificationListTest> *)
                                                  local_b488,GetTestRenderTransformPivot);
                                      RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c197);
                                      this_21 = MakeTDecl<SNotificationListTest,RequiredArgs::T0RequiredArgs>
                                                          (&local_a848,"SNotificationListTest",
                                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                                  ,0x182b,&local_c197);
                                      pTVar34 = TSlateDecl<SNotificationListTest,RequiredArgs::T0RequiredArgs>
                                                ::operator<<=(this_21,&local_ad08,local_b480);
                                      TSharedRef<SWidget,1>::
                                      TSharedRef<SWidget,1><SNotificationListTest>
                                                (&local_b260,pTVar34);
                                      local_b470 = SDockTab::FArguments::operator[]
                                                             (local_b478,&local_b260);
                                      RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c196);
                                      pTVar13 = MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                                                          (&local_a860,"SDockTab",
                                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                                  ,0x1826,&local_c196);
                                      TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
                                                (pTVar13,__return_storage_ptr__,local_b470);
                                      TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
                                      ~TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                                                (&local_a860);
                                      TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_b260);
                                      TSharedRef<SNotificationListTest,1>::
                                      ~TSharedRef<SNotificationListTest,1>(&local_ad08);
                                      TSlateDecl<SNotificationListTest,RequiredArgs::T0RequiredArgs>
                                      ::
                                      ~TSlateDecl<SNotificationListTest,RequiredArgs::T0RequiredArgs>
                                                (&local_a848);
                                      SNotificationListTest::FArguments::~FArguments(&local_7ef8);
                                      FText::~FText(&local_acf8);
                                      FText::~FText(&local_ace8);
                                      SDockTab::FArguments::~FArguments(&local_11f0);
                                    }
                                    else {
                                      local_b468 = FName::FName(&local_b088,"GridPanelTest");
                                      local_b460 = *local_b468;
                                      local_c038 = 0;
                                      pFVar5 = local_res18;
                                      plVar38 = &local_c038;
                                      for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
                                        *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
                                        pFVar5 = (FName *)((longlong)
                                                           &(pFVar5->ComparisonIndex).Value + 1);
                                        plVar38 = (longlong *)((longlong)plVar38 + 1);
                                      }
                                      local_b080 = &local_c038;
                                      local_b458 = local_c038;
                                      local_c030 = 0;
                                      pFVar5 = &local_b460;
                                      plVar38 = &local_c030;
                                      for (lVar37 = 8; lVar37 != 0; lVar37 = lVar37 + -1) {
                                        *(char *)plVar38 = (char)(pFVar5->ComparisonIndex).Value;
                                        pFVar5 = (FName *)((longlong)
                                                           &(pFVar5->ComparisonIndex).Value + 1);
                                        plVar38 = (longlong *)((longlong)plVar38 + 1);
                                      }
                                      local_b078 = &local_c030;
                                      local_b450 = local_c030;
                                      local_c195 = local_b458 == local_c030;
                                      local_c14c = (uint)(byte)local_c195;
                                      local_c194 = local_c195;
                                      if ((bool)local_c195) {
                                        local_b448 = SDockTab::FArguments::FArguments(&local_dc8);
                                        local_b428 = TSlateBaseNamedArgs<SDockTab>::Clipping
                                                               ((TSlateBaseNamedArgs<SDockTab> *)
                                                                local_b448,ClipToBounds);
                                        local_b440 = SGridPanelTest::FArguments::FArguments
                                                               (&local_7d00);
                                        local_b438 = TSlateBaseNamedArgs<SGridPanelTest>::
                                                     RenderTransform_Static<>
                                                               ((TSlateBaseNamedArgs<SGridPanelTest>
                                                                 *)local_b440,GetTestRenderTransform
                                                               );
                                        local_b430 = TSlateBaseNamedArgs<SGridPanelTest>::
                                                     RenderTransformPivot_Static<>
                                                               ((TSlateBaseNamedArgs<SGridPanelTest>
                                                                 *)local_b438,
                                                                GetTestRenderTransformPivot);
                                        RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c193);
                                        this_22 = MakeTDecl<SGridPanelTest,RequiredArgs::T0RequiredArgs>
                                                            (&local_a818,"SGridPanelTest",
                                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                                  ,0x1835,&local_c193);
                                        pTVar35 = TSlateDecl<SGridPanelTest,RequiredArgs::T0RequiredArgs>
                                                  ::operator<<=(this_22,&local_acd8,local_b430);
                                        TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SGridPanelTest>
                                                  (&local_b350,pTVar35);
                                        local_b420 = SDockTab::FArguments::operator[]
                                                               (local_b428,&local_b350);
                                        RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c192);
                                        pTVar13 = MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                                                            (&local_a830,"SDockTab",
                                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                                  ,0x1832,&local_c192);
                                        TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
                                        operator<<=(pTVar13,__return_storage_ptr__,local_b420);
                                        TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
                                        ~TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                                                  (&local_a830);
                                        TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_b350);
                                        TSharedRef<SGridPanelTest,1>::~TSharedRef<SGridPanelTest,1>
                                                  (&local_acd8);
                                        TSlateDecl<SGridPanelTest,RequiredArgs::T0RequiredArgs>::
                                        ~TSlateDecl<SGridPanelTest,RequiredArgs::T0RequiredArgs>
                                                  (&local_a818);
                                        SGridPanelTest::FArguments::~FArguments(&local_7d00);
                                        SDockTab::FArguments::~FArguments(&local_dc8);
                                      }
                                      else {
                                        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                                                          (&bGEnsureHasExecuted<3090803868024444988>
                                                           ,false,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                                  ,0x183c,"false");
                                        if (bVar2) {
                                          pcVar1 = (code *)swi(3);
                                          pTVar36 = (TSharedRef<SDockTab,1> *)(*pcVar1)();
                                          return pTVar36;
                                        }
                                        local_b418 = SDockTab::FArguments::FArguments(&local_9a0);
                                        RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_c191);
                                        pTVar13 = MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                                                            (&local_acb0,"SDockTab",
                                                                                                                          
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                                                  ,0x183d,&local_c191);
                                        TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
                                        operator<<=(pTVar13,__return_storage_ptr__,local_b418);
                                        TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::
                                        ~TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                                                  (&local_acb0);
                                        SDockTab::FArguments::~FArguments(&local_9a0);
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// SpawnTestSuite1 @ 1430f66e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x0001430f851b) */
/* WARNING: Removing unreachable block (ram,0x0001430f8395) */
/* WARNING: Removing unreachable block (ram,0x0001430f8602) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SDockTab,1> * __cdecl
SpawnTestSuite1(TSharedRef<SDockTab,1> *__return_storage_ptr__,FSpawnTabArgs *param_1)

{
  FName *pFVar1;
  TSharedRef<FTabManager::FLayout,1> *pTVar2;
  TSharedRef<FTabManager::FArea,1> *pTVar3;
  TSharedRef<FTabManager::FStack,1> *pTVar4;
  TSharedRef<FTabManager::FSplitter,1> *pTVar5;
  FText *pFVar6;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> *this;
  TSharedRef<FGlobalTabmanager,1> *this_00;
  TSharedRef<FTabManager,1> *pTVar7;
  TSharedPtr<FUICommandList,1> *pTVar8;
  FSlotArguments *this_01;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SVerticalBox,1> *pTVar9;
  longlong lVar10;
  undefined8 *puVar11;
  code **ppcVar12;
  undefined1 *puVar13;
  TVector2<double> *pTVar14;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *pTVar15;
  pmf_84ddf988 *ppVar16;
  T0RequiredArgs local_1908;
  T0RequiredArgs local_1907 [7];
  FName *local_1900;
  FName *local_18f8;
  FName *local_18f0;
  uint local_18e8;
  uint local_18e0;
  uint local_18d8;
  uint local_18d0;
  uint local_18c8;
  uint local_18c0;
  float local_18b8 [2];
  FNameEntryId *local_18b0;
  FNameEntryId *local_18a8;
  FNameEntryId *local_18a0;
  SDockTab *local_1898;
  undefined4 local_1890;
  FNameEntryId local_188c [2];
  FNameEntryId local_1884 [2];
  FNameEntryId local_187c [3];
  FName *local_1870;
  FStack *local_1868;
  FName *local_1860;
  FName local_1858;
  FStack *local_1850;
  FName *local_1848;
  FName local_1840;
  FStack *local_1838;
  TSharedRef<FTabManager::FLayoutNode,1> *local_1830;
  TSharedRef<FTabManager::FLayoutNode,1> *local_1828;
  FArea *local_1820;
  FSplitter *local_1818;
  FSplitter *local_1810;
  FStack *local_1808;
  FName *local_1800;
  FName local_17f8;
  FStack *local_17f0;
  FName *local_17e8;
  FName local_17e0;
  FStack *local_17d8;
  FName *local_17d0;
  FName local_17c8;
  FStack *local_17c0;
  TSharedRef<FTabManager::FLayoutNode,1> *local_17b8;
  TSharedRef<FTabManager::FLayoutNode,1> *local_17b0;
  FSplitter *local_17a8;
  FStack *local_17a0;
  FName *local_1798;
  FName local_1790;
  FStack *local_1788;
  FStack *local_1780;
  FName *local_1778;
  FName local_1770;
  FStack *local_1768;
  FName *local_1760;
  FName local_1758;
  FStack *local_1750;
  FName *local_1748;
  FName local_1740;
  FStack *local_1738;
  FName *local_1730;
  FName local_1728;
  FStack *local_1720;
  FName *local_1718;
  FName local_1710;
  FStack *local_1708;
  FName *local_1700;
  FName local_16f8;
  FStack *local_16f0;
  TSharedRef<FTabManager::FLayoutNode,1> *local_16e8;
  TSharedRef<FTabManager::FLayoutNode,1> *local_16e0;
  FSplitter *local_16d8;
  TSharedRef<FTabManager::FLayoutNode,1> *local_16d0;
  TSharedRef<FTabManager::FLayoutNode,1> *local_16c8;
  FArea *local_16c0;
  TSharedRef<FTabManager::FArea,1> *local_16b8;
  FLayout *local_16b0;
  undefined8 *local_16a8;
  FArea *local_16a0;
  FName *local_1698;
  FName local_1690;
  FStack *local_1688;
  TSharedRef<FTabManager::FLayoutNode,1> *local_1680;
  TSharedRef<FTabManager::FLayoutNode,1> *local_1678;
  FArea *local_1670;
  TSharedRef<FTabManager::FArea,1> *local_1668;
  FLayout *local_1660;
  FArguments *local_1658;
  TAttribute<FText> *local_1650;
  TAttribute<FText> *local_1648;
  FArguments *local_1640;
  TAttribute<FText> *local_1638;
  TAttribute<FText> *local_1630;
  FArguments *local_1628;
  FArguments *local_1620;
  FGlobalTabmanager *local_1618;
  FName *local_1610;
  FName local_1608;
  FName local_1600;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *local_15f8;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  *local_15f0;
  FName local_15e8;
  FTabManager *local_15e0;
  FText *local_15d8;
  FTabSpawnerEntry *local_15d0;
  FTabSpawnerEntry *local_15c8;
  FName *local_15c0;
  FName local_15b8;
  FName local_15b0;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *local_15a8;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  *local_15a0;
  FName local_1598;
  FTabManager *local_1590;
  FText *local_1588;
  FTabSpawnerEntry *local_1580;
  FTabSpawnerEntry *local_1578;
  FName *local_1570;
  FName local_1568;
  FName local_1560;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *local_1558;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  *local_1550;
  FName local_1548;
  FTabManager *local_1540;
  FText *local_1538;
  FTabSpawnerEntry *local_1530;
  FTabSpawnerEntry *local_1528;
  FName *local_1520;
  FName local_1518;
  FName local_1510;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *local_1508;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  *local_1500;
  FName local_14f8;
  FTabManager *local_14f0;
  FText *local_14e8;
  FTabSpawnerEntry *local_14e0;
  FTabSpawnerEntry *local_14d8;
  FName *local_14d0;
  FName local_14c8;
  FName local_14c0;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *local_14b8;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  *local_14b0;
  FName local_14a8;
  FTabManager *local_14a0;
  FText *local_1498;
  FTabSpawnerEntry *local_1490;
  FTabSpawnerEntry *local_1488;
  FName *local_1480;
  FName local_1478;
  FName local_1470;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *local_1468;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  *local_1460;
  FName local_1458;
  FTabManager *local_1450;
  FText *local_1448;
  FTabSpawnerEntry *local_1440;
  FTabSpawnerEntry *local_1438;
  FName *local_1430;
  FName local_1428;
  FName local_1420;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *local_1418;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  *local_1410;
  FName local_1408;
  FTabManager *local_1400;
  FText *local_13f8;
  FTabSpawnerEntry *local_13f0;
  FTabSpawnerEntry *local_13e8;
  FName *local_13e0;
  FName local_13d8;
  FName local_13d0;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *local_13c8;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  *local_13c0;
  FName local_13b8;
  FTabManager *local_13b0;
  FTabSpawnerEntry *local_13a8;
  FName *local_13a0;
  FName local_1398;
  FName local_1390;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *local_1388;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  *local_1380;
  FName local_1378;
  FTabManager *local_1370;
  FText *local_1368;
  FTabSpawnerEntry *local_1360;
  FTabSpawnerEntry *local_1358;
  FName *local_1350;
  FName local_1348;
  FName local_1340;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *local_1338;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  *local_1330;
  FName local_1328;
  FTabManager *local_1320;
  FText *local_1318;
  FTabSpawnerEntry *local_1310;
  FTabSpawnerEntry *local_1308;
  FName *local_1300;
  FName local_12f8;
  FName local_12f0;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *local_12e8;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  *local_12e0;
  FName local_12d8;
  FTabManager *local_12d0;
  FText *local_12c8;
  FTabSpawnerEntry *local_12c0;
  FNameEntryId *local_12b8;
  FName *local_12b0;
  FName local_12a8;
  FName local_12a0;
  TSharedPtr<FExtender,1> *local_1298;
  TSharedPtr<FUICommandList_const_,1> *local_1290;
  FName local_1288;
  ISlateStyle *local_1280;
  TSharedPtr<FExtender,1> *local_1278;
  TSharedPtr<FUICommandList_const_,1> *local_1270;
  FNameEntryId *local_1268;
  FName *local_1260;
  FName local_1258;
  FName local_1250;
  FName local_1248;
  FNameEntryId *local_1240;
  FName *local_1238;
  FName local_1230;
  FName local_1228;
  FName local_1220;
  TSharedRef<FTabManager,1> *local_1218;
  FName local_1210;
  FName local_1208;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *local_1200;
  TSharedRef<SWidget,1> *local_11f8;
  FSlotArguments *local_11f0;
  FSlotArguments *local_11e8;
  FArguments *local_11e0;
  TAttribute<float> *local_11d8;
  TAttribute<float> *local_11d0;
  FSlotArguments *local_11c8;
  TSharedPtr<SWindow,1> *local_11c0;
  FTabManager *local_11b8;
  TSharedPtr<SWidget,1> *local_11b0;
  TSharedRef<SWidget,1> *local_11a8;
  FSlotArguments *local_11a0;
  FSlotArguments *local_1198;
  FArguments *local_1190;
  FArguments *local_1188;
  TSharedRef<SWidget,1> *local_1180;
  TSharedRef<SWidget,1> *local_1178;
  code *local_1170;
  undefined8 local_1168;
  undefined8 local_1160;
  TSharedPtr<FTabManager,1> local_1158;
  code *local_1148;
  undefined4 local_1140;
  TSharedRef<FTabManager::FLayout,1> local_1138;
  FName local_1128;
  FName local_1120;
  FName local_1118;
  FName local_1110;
  FName local_1108;
  FName local_1100;
  FName local_10f8;
  FName local_10f0;
  FName local_10e8;
  FName local_10e0;
  FName local_10d8;
  FName local_10d0;
  FName local_10c8;
  FName local_10c0;
  FName local_10b8;
  TSharedRef<SDockTab,1> *local_10b0;
  FName local_10a8;
  FName local_10a0;
  FName local_1098;
  FName local_1090;
  FName local_1088;
  FName local_1080;
  FName local_1078;
  FName local_1070;
  FName local_1068;
  FName local_1060;
  FName local_1058;
  FName local_1050;
  FName local_1048;
  FName local_1040;
  FName local_1038;
  FName local_1030;
  FName local_1028;
  FName local_1020;
  FName local_1018;
  FName local_1010;
  FName local_1008;
  FName local_1000;
  FName local_ff8;
  FName local_ff0;
  FTabId local_fe8;
  undefined1 local_fd8 [16];
  TVector2<double> local_fc8;
  TSharedRef<FTabManager::FArea,1> local_fb8;
  TSharedRef<FTabManager::FStack,1> local_fa8;
  TSharedRef<FTabManager::FStack,1> local_f98;
  TSharedRef<FTabManager::FArea,1> local_f88;
  TSharedRef<FTabManager::FArea,1> local_f78;
  TSharedRef<FTabManager::FLayout,1> local_f68;
  TSharedRef<FTabManager::FArea,1> local_f58;
  TSharedRef<FTabManager::FSplitter,1> local_f48;
  TSharedRef<FTabManager::FStack,1> local_f38;
  TSharedRef<FTabManager::FStack,1> local_f28;
  TSharedRef<FTabManager::FStack,1> local_f18;
  TSharedRef<FTabManager::FStack,1> local_f08;
  TSharedRef<FTabManager::FStack,1> local_ef8;
  TSharedRef<FTabManager::FStack,1> local_ee8;
  TSharedRef<FTabManager::FStack,1> local_ed8;
  TSharedRef<FTabManager::FStack,1> local_ec8;
  TSharedRef<FTabManager::FStack,1> local_eb8;
  TSharedRef<FTabManager::FStack,1> local_ea8;
  TSharedRef<FTabManager::FSplitter,1> local_e98;
  TSharedRef<FTabManager::FStack,1> local_e88;
  TSharedRef<FTabManager::FStack,1> local_e78;
  TSharedRef<FTabManager::FStack,1> local_e68;
  TSharedRef<FTabManager::FStack,1> local_e58;
  TSharedRef<FTabManager::FStack,1> local_e48;
  TSharedRef<FTabManager::FSplitter,1> local_e38;
  TSharedRef<FTabManager::FSplitter,1> local_e28;
  TSharedRef<FTabManager::FSplitter,1> local_e18;
  TSharedRef<FTabManager::FArea,1> local_e08;
  TSharedRef<FTabManager::FStack,1> local_df8;
  TSharedRef<FTabManager::FStack,1> local_de8;
  TSharedRef<FTabManager::FStack,1> local_dd8;
  TSharedRef<FTabManager::FStack,1> local_dc8;
  TSharedRef<FTabManager::FArea,1> local_db8;
  TSharedRef<FTabManager::FLayout,1> local_da8;
  FText local_d98;
  FText local_d88;
  TSharedRef<FTabManager,1> local_d78;
  FText local_d68;
  FText local_d58;
  FText local_d48;
  FText local_d38;
  FText local_d28;
  FText local_d18;
  FText local_d08;
  FText local_cf8;
  FText local_ce8;
  FText local_cd8;
  TSharedPtr<FUICommandList,1> local_cc8;
  undefined1 local_cb8 [16];
  pmf_84ddf988 local_ca8;
  FText local_c98;
  TSharedRef<FTabManager,1> local_c88;
  TSharedRef<SVerticalBox,1> local_c78;
  TSharedRef<SWidget,1> local_c68;
  TSharedPtr<SWidget,1> local_c58;
  TSharedRef<SWidget,1> local_c48;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> local_c38;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> local_c20;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> local_c08;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> local_bf0;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> local_bd8;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> local_bc0;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> local_ba8;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> local_b90;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> local_b78;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> local_b60;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> local_b48;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  local_b30;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_b18;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  local_b00;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  local_ae8;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  local_ad0;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  local_ab8;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  local_aa0;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  local_a88;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  local_a70;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  local_a58;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  local_a40;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  local_a28;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> local_a10;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_9f8;
  TSharedRef<FTabManager::FLayoutNode,1> local_9e0;
  TSharedRef<FTabManager::FLayoutNode,1> local_9d0;
  TSharedPtr<FExtender,1> local_9c0;
  TSharedRef<SWidget,1> local_9b0;
  TSharedRef<FTabManager::FLayoutNode,1> local_9a0;
  TSharedRef<FTabManager::FLayoutNode,1> local_990;
  TSharedRef<FTabManager::FLayoutNode,1> local_980;
  TSharedPtr<FUICommandList_const_,1> local_970;
  TAttribute<FText> local_960;
  TAttribute<FText> local_930;
  FMenuBarBuilder local_8f8;
  TAttribute<float> local_898;
  TAttribute<FText> local_878;
  TAttribute<FText> local_848;
  FSlotArguments local_818;
  FSlotArguments local_730;
  FArguments local_648;
  FArguments local_440;
  undefined8 uStack_18;
  
  uStack_18 = 0x1430f66f6;
  local_1890 = 0;
  local_1870 = &local_1128;
  pFVar1 = FName::FName(local_1870,"TestSuite1_Layout");
  pTVar2 = FTabManager::NewLayout(&local_da8,*pFVar1);
  local_16b0 = TSharedRef<FTabManager::FLayout,1>::operator->(pTVar2);
  pTVar3 = FTabManager::NewPrimaryArea(&local_db8);
  local_1820 = TSharedRef<FTabManager::FArea,1>::operator->(pTVar3);
  local_1830 = &local_9a0;
  pTVar4 = FTabManager::NewStack(&local_dc8);
  local_1868 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar4);
  pTVar4 = FTabManager::FStack::SetSizeCoefficient(local_1868,&local_dd8,__real_3e4ccccd);
  local_1850 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar4);
  local_1860 = &local_1120;
  pFVar1 = FName::FName(local_1860,"LayoutExampleTab");
  local_1858 = *pFVar1;
  pTVar4 = FTabManager::FStack::AddTab(local_1850,&local_de8,local_1858,OpenedTab);
  local_1838 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar4);
  local_1848 = &local_1118;
  pFVar1 = FName::FName(local_1848,"DocumentsTestTab");
  local_1840 = *pFVar1;
  pTVar4 = FTabManager::FStack::AddTab(local_1838,&local_df8,local_1840,OpenedTab);
  local_1828 = TSharedRef<FTabManager::FLayoutNode,1>::
               TSharedRef<FTabManager::FLayoutNode,1><FTabManager::FStack>(local_1830,pTVar4);
  pTVar3 = FTabManager::FArea::Split(local_1820,&local_e08,local_1828);
  local_16c0 = TSharedRef<FTabManager::FArea,1>::operator->(pTVar3);
  local_16d0 = &local_990;
  pTVar5 = FTabManager::NewSplitter(&local_e18);
  local_1818 = TSharedRef<FTabManager::FSplitter,1>::operator->(pTVar5);
  pTVar5 = FTabManager::FSplitter::SetOrientation(local_1818,&local_e28,Orient_Vertical);
  local_1810 = TSharedRef<FTabManager::FSplitter,1>::operator->(pTVar5);
  pTVar5 = FTabManager::FSplitter::SetSizeCoefficient(local_1810,&local_e38,__real_3f4ccccd);
  local_17a8 = TSharedRef<FTabManager::FSplitter,1>::operator->(pTVar5);
  local_17b8 = &local_980;
  pTVar4 = FTabManager::NewStack(&local_e48);
  local_1808 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar4);
  pTVar4 = FTabManager::FStack::SetSizeCoefficient(local_1808,&local_e58,__real_3e800000);
  local_17f0 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar4);
  local_1800 = &local_1110;
  pFVar1 = FName::FName(local_1800,"MultiBoxTestTab");
  local_17f8 = *pFVar1;
  pTVar4 = FTabManager::FStack::AddTab(local_17f0,&local_e68,local_17f8,OpenedTab);
  local_17d8 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar4);
  local_17e8 = &local_1108;
  pFVar1 = FName::FName(local_17e8,"ResponsiveGrid");
  local_17e0 = *pFVar1;
  pTVar4 = FTabManager::FStack::AddTab(local_17d8,&local_e78,local_17e0,OpenedTab);
  local_17c0 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar4);
  local_17d0 = &local_1100;
  pFVar1 = FName::FName(local_17d0,"DocTest");
  local_17c8 = *pFVar1;
  pTVar4 = FTabManager::FStack::AddTab(local_17c0,&local_e88,local_17c8,ClosedTab);
  local_17b0 = TSharedRef<FTabManager::FLayoutNode,1>::
               TSharedRef<FTabManager::FLayoutNode,1><FTabManager::FStack>(local_17b8,pTVar4);
  pTVar5 = FTabManager::FSplitter::Split(local_17a8,&local_e98,local_17b0);
  local_16d8 = TSharedRef<FTabManager::FSplitter,1>::operator->(pTVar5);
  local_16e8 = &local_9e0;
  pTVar4 = FTabManager::NewStack(&local_ea8);
  local_17a0 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar4);
  pTVar4 = FTabManager::FStack::SetSizeCoefficient(local_17a0,&local_eb8,__real_3f400000);
  local_1788 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar4);
  local_1798 = &local_10f8;
  pFVar1 = FName::FName(local_1798,"TableViewTestTab");
  local_1790 = *pFVar1;
  pTVar4 = FTabManager::FStack::AddTab(local_1788,&local_ec8,local_1790,OpenedTab);
  local_1780 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar4);
  pFVar1 = FName::FName(&local_10f0,"TableViewTestTab");
  FTabId::FTabId(&local_fe8,*pFVar1);
  pTVar4 = FTabManager::FStack::SetForegroundTab(local_1780,&local_ed8,&local_fe8);
  local_1768 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar4);
  local_1778 = &local_10e8;
  pFVar1 = FName::FName(local_1778,"LayoutRoundingTab");
  local_1770 = *pFVar1;
  pTVar4 = FTabManager::FStack::AddTab(local_1768,&local_ee8,local_1770,OpenedTab);
  local_1750 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar4);
  local_1760 = &local_10e0;
  pFVar1 = FName::FName(local_1760,"EditableTextTab");
  local_1758 = *pFVar1;
  pTVar4 = FTabManager::FStack::AddTab(local_1750,&local_ef8,local_1758,OpenedTab);
  local_1738 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar4);
  local_1748 = &local_10d8;
  pFVar1 = FName::FName(local_1748,"RichTextTab");
  local_1740 = *pFVar1;
  pTVar4 = FTabManager::FStack::AddTab(local_1738,&local_f08,local_1740,OpenedTab);
  local_1720 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar4);
  local_1730 = &local_10d0;
  pFVar1 = FName::FName(local_1730,"MultiLineEditTab");
  local_1728 = *pFVar1;
  pTVar4 = FTabManager::FStack::AddTab(local_1720,&local_f18,local_1728,OpenedTab);
  local_1708 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar4);
  local_1718 = &local_10c8;
  pFVar1 = FName::FName(local_1718,"RichEditableTextTab");
  local_1710 = *pFVar1;
  pTVar4 = FTabManager::FStack::AddTab(local_1708,&local_f28,local_1710,OpenedTab);
  local_16f0 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar4);
  local_1700 = &local_10c0;
  pFVar1 = FName::FName(local_1700,"WebBrowserTab");
  local_16f8 = *pFVar1;
  pTVar4 = FTabManager::FStack::AddTab(local_16f0,&local_f38,local_16f8,OpenedTab);
  local_16e0 = TSharedRef<FTabManager::FLayoutNode,1>::
               TSharedRef<FTabManager::FLayoutNode,1><FTabManager::FStack>(local_16e8,pTVar4);
  pTVar5 = FTabManager::FSplitter::Split(local_16d8,&local_f48,local_16e0);
  local_16c8 = TSharedRef<FTabManager::FLayoutNode,1>::
               TSharedRef<FTabManager::FLayoutNode,1><FTabManager::FSplitter>(local_16d0,pTVar5);
  local_16b8 = FTabManager::FArea::Split(local_16c0,&local_f58,local_16c8);
  pTVar2 = FTabManager::FLayout::AddArea(local_16b0,&local_f68,local_16b8);
  local_1660 = TSharedRef<FTabManager::FLayout,1>::operator->(pTVar2);
  pTVar3 = FTabManager::NewArea(&local_f78,__real_43a00000,__real_43700000);
  local_16a0 = TSharedRef<FTabManager::FArea,1>::operator->(pTVar3);
  local_1168 = __real_4082c00000000000;
  local_1160 = __real_4049000000000000;
  local_16a8 = &local_1168;
  puVar11 = local_16a8;
  puVar13 = local_fd8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)puVar11;
    puVar11 = (undefined8 *)((longlong)puVar11 + 1);
    puVar13 = puVar13 + 1;
  }
  puVar13 = local_fd8;
  pTVar14 = &local_fc8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)&pTVar14->field0_0x0 = *puVar13;
    puVar13 = puVar13 + 1;
    pTVar14 = (TVector2<double> *)((longlong)&pTVar14->field0_0x0 + 1);
  }
  pTVar3 = FTabManager::FArea::SetWindow(local_16a0,&local_f88,&local_fc8,false);
  local_1670 = TSharedRef<FTabManager::FArea,1>::operator->(pTVar3);
  local_1680 = &local_9d0;
  pTVar4 = FTabManager::NewStack(&local_f98);
  local_1688 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar4);
  local_1698 = &local_10b8;
  pFVar1 = FName::FName(local_1698,"SplitterTestTab");
  local_1690 = *pFVar1;
  pTVar4 = FTabManager::FStack::AddTab(local_1688,&local_fa8,local_1690,ClosedTab);
  local_1678 = TSharedRef<FTabManager::FLayoutNode,1>::
               TSharedRef<FTabManager::FLayoutNode,1><FTabManager::FStack>(local_1680,pTVar4);
  local_1668 = FTabManager::FArea::Split(local_1670,&local_fb8,local_1678);
  FTabManager::FLayout::AddArea(local_1660,&local_1138,local_1668);
  TSharedRef<FTabManager::FArea,1>::~TSharedRef<FTabManager::FArea,1>(&local_fb8);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_fa8);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_f98);
  TSharedRef<FTabManager::FArea,1>::~TSharedRef<FTabManager::FArea,1>(&local_f88);
  TSharedRef<FTabManager::FArea,1>::~TSharedRef<FTabManager::FArea,1>(&local_f78);
  TSharedRef<FTabManager::FLayout,1>::~TSharedRef<FTabManager::FLayout,1>(&local_f68);
  TSharedRef<FTabManager::FArea,1>::~TSharedRef<FTabManager::FArea,1>(&local_f58);
  TSharedRef<FTabManager::FSplitter,1>::~TSharedRef<FTabManager::FSplitter,1>(&local_f48);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_f38);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_f28);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_f18);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_f08);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_ef8);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_ee8);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_ed8);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_ec8);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_eb8);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_ea8);
  TSharedRef<FTabManager::FSplitter,1>::~TSharedRef<FTabManager::FSplitter,1>(&local_e98);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_e88);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_e78);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_e68);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_e58);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_e48);
  TSharedRef<FTabManager::FSplitter,1>::~TSharedRef<FTabManager::FSplitter,1>(&local_e38);
  TSharedRef<FTabManager::FSplitter,1>::~TSharedRef<FTabManager::FSplitter,1>(&local_e28);
  TSharedRef<FTabManager::FSplitter,1>::~TSharedRef<FTabManager::FSplitter,1>(&local_e18);
  TSharedRef<FTabManager::FArea,1>::~TSharedRef<FTabManager::FArea,1>(&local_e08);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_df8);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_de8);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_dd8);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_dc8);
  TSharedRef<FTabManager::FArea,1>::~TSharedRef<FTabManager::FArea,1>(&local_db8);
  TSharedRef<FTabManager::FLayout,1>::~TSharedRef<FTabManager::FLayout,1>(&local_da8);
  local_1658 = SDockTab::FArguments::FArguments(&local_440);
  local_1640 = SDockTab::FArguments::TabRole(local_1658,MajorTab);
  local_1650 = &local_878;
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_d88,L"STestSuite",L"TestSuite1TabLabel",L"Test Suite 1");
  local_1648 = TAttribute<FText>::TAttribute<FText>(local_1650,pFVar6);
  local_1628 = SDockTab::FArguments::Label(local_1640,local_1648);
  local_1638 = &local_848;
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_d98,L"STestSuite",L"TestSuite1TabToolTip",
                      L"The App for the first Test Suite.");
  local_1630 = TAttribute<FText>::TAttribute<FText>(local_1638,pFVar6);
  local_1620 = TSlateBaseNamedArgs<SDockTab>::ToolTipText
                         ((TSlateBaseNamedArgs<SDockTab> *)local_1628,local_1630);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_1908);
  this = MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                   (&local_b18,"SDockTab",
                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                    ,0x189f,&local_1908);
  local_10b0 = TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
                         (this,__return_storage_ptr__,local_1620);
  TSharedPtr<SDockTab,1>::~TSharedPtr<SDockTab,1>(&local_b18._Widget);
  FText::~FText(&local_d98);
  FText::~FText(&local_d88);
  SDockTab::FArguments::~FArguments(&local_440);
  this_00 = FGlobalTabmanager::Get();
  local_1618 = TSharedRef<FGlobalTabmanager,1>::operator->(this_00);
  pTVar7 = FGlobalTabmanager::NewTabManager(local_1618,&local_d78,__return_storage_ptr__);
  TSharedPtr<FTabManager,1>::TSharedPtr<FTabManager,1><FTabManager>(&local_1158,pTVar7);
  TSharedPtr<FTabManager,1>::operator=(&TestSuite1TabManager,&local_1158);
  TSharedPtr<FTabManager,1>::~TSharedPtr<FTabManager,1>(&local_1158);
  TSharedRef<FTabManager,1>::~TSharedRef<FTabManager,1>(&local_d78);
  local_15e0 = TSharedPtr<FTabManager,1>::operator->(&TestSuite1TabManager);
  pTVar15 = &local_c38;
  for (lVar10 = 0x18; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)pTVar15 = 0;
    pTVar15 = (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
              &pTVar15->field_0x1;
  }
  local_15f8 = TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
               TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_c38)
  ;
  pFVar1 = FName::FName(&local_10a8,"LayoutExampleTab");
  local_15f0 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<FName>(&local_b00,SpawnTab,pFVar1);
  local_1610 = &local_10a0;
  pFVar1 = FName::FName(local_1610,"LayoutExampleTab");
  local_1608 = *pFVar1;
  local_1600 = local_1608;
  local_15e8 = local_1608;
  local_15d0 = FTabManager::RegisterTabSpawner(local_15e0,local_1608,local_15f0,local_15f8);
  local_15d8 = FText::AsLocalizable_Advanced_LocText
                         (&local_d68,L"TestSuite1",L"LayoutExampleTab",L"Layout Example");
  local_15c8 = FTabSpawnerEntry::SetDisplayName(local_15d0,local_15d8);
  FTabSpawnerEntry::SetGroup(local_15c8,&TestSuiteMenu::SuiteTabs);
  FText::~FText(&local_d68);
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            (&local_b00);
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_c38);
  local_1590 = TSharedPtr<FTabManager,1>::operator->(&TestSuite1TabManager);
  pTVar15 = &local_c20;
  for (lVar10 = 0x18; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)pTVar15 = 0;
    pTVar15 = (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
              &pTVar15->field_0x1;
  }
  local_15a8 = TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
               TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_c20)
  ;
  pFVar1 = FName::FName(&local_1098,"SplitterTestTab");
  local_15a0 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<FName>(&local_ae8,SpawnTab,pFVar1);
  local_15c0 = &local_1090;
  pFVar1 = FName::FName(local_15c0,"SplitterTestTab");
  local_15b8 = *pFVar1;
  local_15b0 = local_15b8;
  local_1598 = local_15b8;
  local_1580 = FTabManager::RegisterTabSpawner(local_1590,local_15b8,local_15a0,local_15a8);
  local_1588 = FText::AsLocalizable_Advanced_LocText
                         (&local_d58,L"TestSuite1",L"SplitterTestTab",L"Splitter Test");
  local_1578 = FTabSpawnerEntry::SetDisplayName(local_1580,local_1588);
  FTabSpawnerEntry::SetGroup(local_1578,&TestSuiteMenu::SuiteTabs);
  FText::~FText(&local_d58);
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            (&local_ae8);
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_c20);
  local_1540 = TSharedPtr<FTabManager,1>::operator->(&TestSuite1TabManager);
  pTVar15 = &local_c08;
  for (lVar10 = 0x18; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)pTVar15 = 0;
    pTVar15 = (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
              &pTVar15->field_0x1;
  }
  local_1558 = TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
               TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_c08)
  ;
  pFVar1 = FName::FName(&local_1088,"EditableTextTab");
  local_1550 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<FName>(&local_ad0,SpawnTab,pFVar1);
  local_1570 = &local_1080;
  pFVar1 = FName::FName(local_1570,"EditableTextTab");
  local_1568 = *pFVar1;
  local_1560 = local_1568;
  local_1548 = local_1568;
  local_1530 = FTabManager::RegisterTabSpawner(local_1540,local_1568,local_1550,local_1558);
  local_1538 = FText::AsLocalizable_Advanced_LocText
                         (&local_d48,L"TestSuite1",L"EditableTextTab",L"Editable Text Test");
  local_1528 = FTabSpawnerEntry::SetDisplayName(local_1530,local_1538);
  FTabSpawnerEntry::SetGroup(local_1528,&TestSuiteMenu::SuiteTabs);
  FText::~FText(&local_d48);
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            (&local_ad0);
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_c08);
  local_14f0 = TSharedPtr<FTabManager,1>::operator->(&TestSuite1TabManager);
  pTVar15 = &local_bf0;
  for (lVar10 = 0x18; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)pTVar15 = 0;
    pTVar15 = (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
              &pTVar15->field_0x1;
  }
  local_1508 = TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
               TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_bf0)
  ;
  pFVar1 = FName::FName(&local_1078,"RichTextTab");
  local_1500 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<FName>(&local_ab8,SpawnTab,pFVar1);
  local_1520 = &local_1070;
  pFVar1 = FName::FName(local_1520,"RichTextTab");
  local_1518 = *pFVar1;
  local_1510 = local_1518;
  local_14f8 = local_1518;
  local_14e0 = FTabManager::RegisterTabSpawner(local_14f0,local_1518,local_1500,local_1508);
  local_14e8 = FText::AsLocalizable_Advanced_LocText
                         (&local_d38,L"TestSuite1",L"RichTextTab",L"Rich Text Test");
  local_14d8 = FTabSpawnerEntry::SetDisplayName(local_14e0,local_14e8);
  FTabSpawnerEntry::SetGroup(local_14d8,&TestSuiteMenu::SuiteTabs);
  FText::~FText(&local_d38);
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            (&local_ab8);
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_bf0);
  local_14a0 = TSharedPtr<FTabManager,1>::operator->(&TestSuite1TabManager);
  pTVar15 = &local_bd8;
  for (lVar10 = 0x18; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)pTVar15 = 0;
    pTVar15 = (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
              &pTVar15->field_0x1;
  }
  local_14b8 = TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
               TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_bd8)
  ;
  pFVar1 = FName::FName(&local_1068,"MultiLineEditTab");
  local_14b0 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<FName>(&local_b30,SpawnTab,pFVar1);
  local_14d0 = &local_1060;
  pFVar1 = FName::FName(local_14d0,"MultiLineEditTab");
  local_14c8 = *pFVar1;
  local_14c0 = local_14c8;
  local_14a8 = local_14c8;
  local_1490 = FTabManager::RegisterTabSpawner(local_14a0,local_14c8,local_14b0,local_14b8);
  local_1498 = FText::AsLocalizable_Advanced_LocText
                         (&local_d28,L"TestSuite1",L"MultiLineEditTab",L"Multiline Edit");
  local_1488 = FTabSpawnerEntry::SetDisplayName(local_1490,local_1498);
  FTabSpawnerEntry::SetGroup(local_1488,&TestSuiteMenu::SuiteTabs);
  FText::~FText(&local_d28);
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            (&local_b30);
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_bd8);
  local_1450 = TSharedPtr<FTabManager,1>::operator->(&TestSuite1TabManager);
  pTVar15 = &local_bc0;
  for (lVar10 = 0x18; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)pTVar15 = 0;
    pTVar15 = (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
              &pTVar15->field_0x1;
  }
  local_1468 = TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
               TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_bc0)
  ;
  pFVar1 = FName::FName(&local_1058,"RichEditableTextTab");
  local_1460 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<FName>(&local_aa0,SpawnTab,pFVar1);
  local_1480 = &local_1050;
  pFVar1 = FName::FName(local_1480,"RichEditableTextTab");
  local_1478 = *pFVar1;
  local_1470 = local_1478;
  local_1458 = local_1478;
  local_1440 = FTabManager::RegisterTabSpawner(local_1450,local_1478,local_1460,local_1468);
  local_1448 = FText::AsLocalizable_Advanced_LocText
                         (&local_d18,L"TestSuite1",L"RichEditableTextTab",L"Rich Editable Text Test"
                         );
  local_1438 = FTabSpawnerEntry::SetDisplayName(local_1440,local_1448);
  FTabSpawnerEntry::SetGroup(local_1438,&TestSuiteMenu::SuiteTabs);
  FText::~FText(&local_d18);
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            (&local_aa0);
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_bc0);
  local_1400 = TSharedPtr<FTabManager,1>::operator->(&TestSuite1TabManager);
  pTVar15 = &local_ba8;
  for (lVar10 = 0x18; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)pTVar15 = 0;
    pTVar15 = (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
              &pTVar15->field_0x1;
  }
  local_1418 = TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
               TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_ba8)
  ;
  pFVar1 = FName::FName(&local_1048,"LayoutRoundingTab");
  local_1410 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<FName>(&local_a88,SpawnTab,pFVar1);
  local_1430 = &local_1040;
  pFVar1 = FName::FName(local_1430,"LayoutRoundingTab");
  local_1428 = *pFVar1;
  local_1420 = local_1428;
  local_1408 = local_1428;
  local_13f0 = FTabManager::RegisterTabSpawner(local_1400,local_1428,local_1410,local_1418);
  local_13f8 = FText::AsLocalizable_Advanced_LocText
                         (&local_d08,L"TestSuite1",L"LayoutRoundingTab",L"Layout Rounding");
  local_13e8 = FTabSpawnerEntry::SetDisplayName(local_13f0,local_13f8);
  FTabSpawnerEntry::SetGroup(local_13e8,&TestSuiteMenu::SuiteTabs);
  FText::~FText(&local_d08);
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            (&local_a88);
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_ba8);
  local_13b0 = TSharedPtr<FTabManager,1>::operator->(&TestSuite1TabManager);
  pTVar15 = &local_b90;
  for (lVar10 = 0x18; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)pTVar15 = 0;
    pTVar15 = (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
              &pTVar15->field_0x1;
  }
  local_13c8 = TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
               TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_b90)
  ;
  local_13c0 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<>(&local_a70,SpawnResponsiveGrid);
  local_13e0 = &local_1038;
  pFVar1 = FName::FName(local_13e0,"ResponsiveGrid");
  local_13d8 = *pFVar1;
  local_13d0 = local_13d8;
  local_13b8 = local_13d8;
  local_13a8 = FTabManager::RegisterTabSpawner(local_13b0,local_13d8,local_13c0,local_13c8);
  FTabSpawnerEntry::SetGroup(local_13a8,&TestSuiteMenu::SuiteTabs);
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            (&local_a70);
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_b90);
  local_1370 = TSharedPtr<FTabManager,1>::operator->(&TestSuite1TabManager);
  pTVar15 = &local_b78;
  for (lVar10 = 0x18; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)pTVar15 = 0;
    pTVar15 = (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
              &pTVar15->field_0x1;
  }
  local_1388 = TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
               TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_b78)
  ;
  pFVar1 = FName::FName(&local_1030,"MultiBoxTestTab");
  local_1380 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<FName>(&local_a58,SpawnTab,pFVar1);
  local_13a0 = &local_1028;
  pFVar1 = FName::FName(local_13a0,"MultiBoxTestTab");
  local_1398 = *pFVar1;
  local_1390 = local_1398;
  local_1378 = local_1398;
  local_1360 = FTabManager::RegisterTabSpawner(local_1370,local_1398,local_1380,local_1388);
  local_1368 = FText::AsLocalizable_Advanced_LocText
                         (&local_cf8,L"TestSuite1",L"MultiBoxTestTab",L"MultiBox Test");
  local_1358 = FTabSpawnerEntry::SetDisplayName(local_1360,local_1368);
  FTabSpawnerEntry::SetGroup(local_1358,&TestSuiteMenu::NestedCategory);
  FText::~FText(&local_cf8);
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            (&local_a58);
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_b78);
  local_1320 = TSharedPtr<FTabManager,1>::operator->(&TestSuite1TabManager);
  pTVar15 = &local_b60;
  for (lVar10 = 0x18; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)pTVar15 = 0;
    pTVar15 = (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
              &pTVar15->field_0x1;
  }
  local_1338 = TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
               TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_b60)
  ;
  pFVar1 = FName::FName(&local_1020,"TableViewTestTab");
  local_1330 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<FName>(&local_a40,SpawnTab,pFVar1);
  local_1350 = &local_1018;
  pFVar1 = FName::FName(local_1350,"TableViewTestTab");
  local_1348 = *pFVar1;
  local_1340 = local_1348;
  local_1328 = local_1348;
  local_1310 = FTabManager::RegisterTabSpawner(local_1320,local_1348,local_1330,local_1338);
  local_1318 = FText::AsLocalizable_Advanced_LocText
                         (&local_ce8,L"TestSuite1",L"TableViewTestTab",L"TableView Test");
  local_1308 = FTabSpawnerEntry::SetDisplayName(local_1310,local_1318);
  FTabSpawnerEntry::SetGroup(local_1308,&TestSuiteMenu::NestedCategory);
  FText::~FText(&local_ce8);
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            (&local_a40);
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_b60);
  local_12d0 = TSharedPtr<FTabManager,1>::operator->(&TestSuite1TabManager);
  pTVar15 = &local_b48;
  for (lVar10 = 0x18; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)pTVar15 = 0;
    pTVar15 = (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
              &pTVar15->field_0x1;
  }
  local_12e8 = TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
               TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_b48)
  ;
  pFVar1 = FName::FName(&local_1010,"DocumentsTestTab");
  local_12e0 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<FName>(&local_a28,SpawnTab,pFVar1);
  local_1300 = &local_1008;
  pFVar1 = FName::FName(local_1300,"DocumentsTestTab");
  local_12f8 = *pFVar1;
  local_12f0 = local_12f8;
  local_12d8 = local_12f8;
  local_12c0 = FTabManager::RegisterTabSpawner(local_12d0,local_12f8,local_12e0,local_12e8);
  local_12c8 = FText::AsLocalizable_Advanced_LocText
                         (&local_cd8,L"TestSuite1",L"DocumentsTestTab",L"Document Spawner");
  FTabSpawnerEntry::SetDisplayName(local_12c0,local_12c8);
  FText::~FText(&local_cd8);
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            (&local_a28);
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_b48);
  local_1900 = &local_1000;
  local_18b0 = FNameEntryId::FNameEntryId(local_188c);
  local_18e8 = local_18b0->Value;
  local_18e0 = local_18e8;
  local_12b8 = local_18b0;
  FNameEntryId::FNameEntryId(&local_1900->ComparisonIndex);
  local_1900->Number = 0;
  (local_1900->ComparisonIndex).Value = local_18e0;
  local_1900->Number = 0;
  local_12b0 = local_1900;
  local_12a8 = *local_1900;
  local_12a0 = local_12a8;
  local_1288 = local_12a8;
  local_1280 = FCoreStyle::Get();
  local_1298 = &local_9c0;
  local_1278 = TSharedPtr<FExtender,1>::TSharedPtr<FExtender,1>(local_1298,(FNullTag *)0x0);
  local_1290 = &local_970;
  pTVar8 = TSharedPtr<FUICommandList,1>::TSharedPtr<FUICommandList,1>(&local_cc8,(FNullTag *)0x0);
  local_1270 = TSharedPtr<FUICommandList_const_,1>::
               TSharedPtr<FUICommandList_const_,1><FUICommandList>(local_1290,pTVar8);
  FMenuBarBuilder::FMenuBarBuilder(&local_8f8,local_1270,local_1278,local_1280,local_1288);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_cc8.SharedReferenceCount);
  local_18f8 = &local_ff8;
  local_18a8 = FNameEntryId::FNameEntryId(local_1884);
  local_18d8 = local_18a8->Value;
  local_18d0 = local_18d8;
  local_1268 = local_18a8;
  FNameEntryId::FNameEntryId(&local_18f8->ComparisonIndex);
  local_18f8->Number = 0;
  (local_18f8->ComparisonIndex).Value = local_18d0;
  local_18f8->Number = 0;
  local_1260 = local_18f8;
  local_1258 = *local_18f8;
  local_18f0 = &local_ff0;
  local_1250 = local_1258;
  local_1248 = local_1258;
  local_1210 = local_1258;
  local_18a0 = FNameEntryId::FNameEntryId(local_187c);
  local_18c8 = local_18a0->Value;
  local_18c0 = local_18c8;
  local_1240 = local_18a0;
  FNameEntryId::FNameEntryId(&local_18f0->ComparisonIndex);
  local_18f0->Number = 0;
  (local_18f0->ComparisonIndex).Value = local_18c0;
  local_18f0->Number = 0;
  local_1238 = local_18f0;
  local_1230 = *local_18f0;
  local_1148 = FTabManager::PopulateTabSpawnerMenu;
  local_1140 = 0;
  ppcVar12 = &local_1148;
  puVar13 = local_cb8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *(undefined1 *)ppcVar12;
    ppcVar12 = (code **)((longlong)ppcVar12 + 1);
    puVar13 = puVar13 + 1;
  }
  local_1228 = local_1230;
  local_1220 = local_1230;
  local_1208 = local_1230;
  local_1218 = TSharedPtr<FTabManager,1>::ToSharedRef(&TestSuite1TabManager,&local_c88);
  puVar13 = local_cb8;
  ppVar16 = &local_ca8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    *(undefined1 *)ppVar16 = *puVar13;
    puVar13 = puVar13 + 1;
    ppVar16 = (pmf_84ddf988 *)&ppVar16->field_0x1;
  }
  local_1200 = TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
               CreateSP<FTabManager,1,TSharedRef<FWorkspaceItem,1>_&>
                         (&local_a10,local_1218,&local_ca8,&TestSuiteMenu::MenuRoot);
  pFVar6 = FText::GetEmpty();
  TAttribute<FText>::TAttribute<FText><FText>(&local_930,pFVar6);
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_c98,L"TestSuite",L"WindowMenuLabel",L"Window");
  TAttribute<FText>::TAttribute<FText>(&local_960,pFVar6);
  FMenuBarBuilder::AddPullDownMenu
            (&local_8f8,&local_960,&local_930,local_1200,local_1208,local_1210);
  TAttribute<FText>::~TAttribute<FText>(&local_960);
  FText::~FText(&local_c98);
  TAttribute<FText>::~TAttribute<FText>(&local_930);
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>(&local_a10);
  TSharedRef<FTabManager,1>::~TSharedRef<FTabManager,1>(&local_c88);
  local_1898 = TSharedRef<SDockTab,1>::operator->(__return_storage_ptr__);
  local_1170 = *(code **)(local_1898->_padding_ + 0x248);
  local_1180 = &local_9b0;
  local_11e0 = SVerticalBox::FArguments::FArguments(&local_648);
  this_01 = SVerticalBox::Slot(&local_730);
  local_11f0 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(this_01);
  local_11f8 = FMultiBoxBuilder::MakeWidget
                         ((FMultiBoxBuilder *)&local_8f8,&local_c48,
                          (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
                           *)0x0);
  local_11e8 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_11f0,local_11f8);
  local_1190 = SVerticalBox::FArguments::operator+(local_11e0,local_11e8);
  local_11c8 = SVerticalBox::Slot(&local_818);
  local_11d8 = &local_898;
  local_18b8[0] = __real_3f800000;
  local_11d0 = TAttribute<float>::TAttribute<float>(local_11d8,local_18b8);
  local_11a0 = SVerticalBox::FSlot::FSlotArguments::FillHeight(local_11c8,local_11d0);
  local_11b8 = TSharedPtr<FTabManager,1>::operator->(&TestSuite1TabManager);
  local_11c0 = FSpawnTabArgs::GetOwnerWindow(param_1);
  local_11b0 = FTabManager::RestoreFrom(local_11b8,&local_c58,&local_1138,local_11c0,false,Never);
  local_11a8 = TSharedPtr<SWidget,1>::ToSharedRef(local_11b0,&local_c68);
  local_1198 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_11a0,local_11a8);
  local_1188 = SVerticalBox::FArguments::operator+(local_1190,local_1198);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_1907);
  this_02 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_9f8,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x18d9,local_1907);
  pTVar9 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_02,&local_c78,local_1188);
  local_1178 = TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(local_1180,pTVar9);
  (*local_1170)(local_1898,local_1178);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_c78.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_9f8._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_c68);
  TSharedPtr<SWidget,1>::~TSharedPtr<SWidget,1>(&local_c58);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_818);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_c48);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_730);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_648._Slots);
  TSlateBaseNamedArgs<SVerticalBox>::~TSlateBaseNamedArgs<SVerticalBox>
            ((TSlateBaseNamedArgs<SVerticalBox> *)&local_648);
  FMenuBarBuilder::~FMenuBarBuilder(&local_8f8);
  TSharedRef<FTabManager::FLayout,1>::~TSharedRef<FTabManager::FLayout,1>(&local_1138);
  return __return_storage_ptr__;
}

// SpawnTestSuite2 @ 1430f8b50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x0001430fa0f8) */
/* WARNING: Removing unreachable block (ram,0x0001430f9f72) */
/* WARNING: Removing unreachable block (ram,0x0001430fa1df) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SDockTab,1> * __cdecl
SpawnTestSuite2(TSharedRef<SDockTab,1> *__return_storage_ptr__,FSpawnTabArgs *param_1)

{
  FName *pFVar1;
  TSharedRef<FTabManager::FLayout,1> *this;
  TSharedRef<FTabManager::FArea,1> *this_00;
  TSharedRef<FTabManager::FStack,1> *pTVar2;
  FText *pFVar3;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<FGlobalTabmanager,1> *this_02;
  TSharedRef<FTabManager,1> *pTVar4;
  TSharedPtr<FUICommandList,1> *pTVar5;
  FSlotArguments *this_03;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_04;
  TSharedRef<SVerticalBox,1> *pTVar6;
  longlong lVar7;
  code **ppcVar8;
  undefined1 *puVar9;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *pTVar10;
  pmf_84ddf988 *ppVar11;
  T0RequiredArgs local_14f8;
  T0RequiredArgs local_14f7 [7];
  FName *local_14f0;
  FName *local_14e8;
  FName *local_14e0;
  uint local_14d8;
  uint local_14d0;
  uint local_14c8;
  uint local_14c0;
  uint local_14b8;
  uint local_14b0;
  float local_14a8 [2];
  FNameEntryId *local_14a0;
  FNameEntryId *local_1498;
  FNameEntryId *local_1490;
  SDockTab *local_1488;
  undefined4 local_1480;
  FNameEntryId local_147c [2];
  FNameEntryId local_1474 [2];
  FNameEntryId local_146c [3];
  FName *local_1460;
  FName *local_1458;
  FName local_1450;
  FStack *local_1448;
  FName *local_1440;
  FName local_1438;
  FStack *local_1430;
  FName *local_1428;
  FName local_1420;
  FStack *local_1418;
  FName *local_1410;
  FName local_1408;
  FStack *local_1400;
  FName *local_13f8;
  FName local_13f0;
  FStack *local_13e8;
  FName *local_13e0;
  FName local_13d8;
  FStack *local_13d0;
  FName *local_13c8;
  FName local_13c0;
  FStack *local_13b8;
  FName *local_13b0;
  FName local_13a8;
  FStack *local_13a0;
  FName *local_1398;
  FName local_1390;
  FStack *local_1388;
  TSharedRef<FTabManager::FLayoutNode,1> *local_1380;
  TSharedRef<FTabManager::FLayoutNode,1> *local_1378;
  FArea *local_1370;
  TSharedRef<FTabManager::FArea,1> *local_1368;
  FLayout *local_1360;
  FArguments *local_1358;
  TAttribute<FText> *local_1350;
  TAttribute<FText> *local_1348;
  FArguments *local_1340;
  TAttribute<FText> *local_1338;
  TAttribute<FText> *local_1330;
  FArguments *local_1328;
  FArguments *local_1320;
  FGlobalTabmanager *local_1318;
  FName *local_1310;
  FName local_1308;
  FName local_1300;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *local_12f8;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  *local_12f0;
  FName local_12e8;
  FTabManager *local_12e0;
  FText *local_12d8;
  FTabSpawnerEntry *local_12d0;
  FTabSpawnerEntry *local_12c8;
  FName *local_12c0;
  FName local_12b8;
  FName local_12b0;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *local_12a8;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  *local_12a0;
  FName local_1298;
  FTabManager *local_1290;
  FText *local_1288;
  FTabSpawnerEntry *local_1280;
  FTabSpawnerEntry *local_1278;
  FName *local_1270;
  FName local_1268;
  FName local_1260;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *local_1258;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  *local_1250;
  FName local_1248;
  FTabManager *local_1240;
  FText *local_1238;
  FTabSpawnerEntry *local_1230;
  FTabSpawnerEntry *local_1228;
  FName *local_1220;
  FName local_1218;
  FName local_1210;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *local_1208;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  *local_1200;
  FName local_11f8;
  FTabManager *local_11f0;
  FText *local_11e8;
  FTabSpawnerEntry *local_11e0;
  FTabSpawnerEntry *local_11d8;
  FName *local_11d0;
  FName local_11c8;
  FName local_11c0;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *local_11b8;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  *local_11b0;
  FName local_11a8;
  FTabManager *local_11a0;
  FText *local_1198;
  FTabSpawnerEntry *local_1190;
  FTabSpawnerEntry *local_1188;
  FName *local_1180;
  FName local_1178;
  FName local_1170;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *local_1168;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  *local_1160;
  FName local_1158;
  FTabManager *local_1150;
  FText *local_1148;
  FTabSpawnerEntry *local_1140;
  FTabSpawnerEntry *local_1138;
  FName *local_1130;
  FName local_1128;
  FName local_1120;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *local_1118;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  *local_1110;
  FName local_1108;
  FTabManager *local_1100;
  FText *local_10f8;
  FTabSpawnerEntry *local_10f0;
  FTabSpawnerEntry *local_10e8;
  FName *local_10e0;
  FName local_10d8;
  FName local_10d0;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *local_10c8;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  *local_10c0;
  FName local_10b8;
  FTabManager *local_10b0;
  FText *local_10a8;
  FTabSpawnerEntry *local_10a0;
  FTabSpawnerEntry *local_1098;
  FName *local_1090;
  FName local_1088;
  FName local_1080;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *local_1078;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  *local_1070;
  FName local_1068;
  FTabManager *local_1060;
  FText *local_1058;
  FTabSpawnerEntry *local_1050;
  FTabSpawnerEntry *local_1048;
  FNameEntryId *local_1040;
  FName *local_1038;
  FName local_1030;
  FName local_1028;
  TSharedPtr<FExtender,1> *local_1020;
  TSharedPtr<FUICommandList_const_,1> *local_1018;
  FName local_1010;
  ISlateStyle *local_1008;
  TSharedPtr<FExtender,1> *local_1000;
  TSharedPtr<FUICommandList_const_,1> *local_ff8;
  FNameEntryId *local_ff0;
  FName *local_fe8;
  FName local_fe0;
  FName local_fd8;
  FName local_fd0;
  FNameEntryId *local_fc8;
  FName *local_fc0;
  FName local_fb8;
  FName local_fb0;
  FName local_fa8;
  TSharedRef<FTabManager,1> *local_fa0;
  FName local_f98;
  FName local_f90;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *local_f88;
  TSharedRef<SWidget,1> *local_f80;
  FSlotArguments *local_f78;
  FSlotArguments *local_f70;
  FArguments *local_f68;
  TAttribute<float> *local_f60;
  TAttribute<float> *local_f58;
  FSlotArguments *local_f50;
  TSharedPtr<SWindow,1> *local_f48;
  FTabManager *local_f40;
  TSharedPtr<SWidget,1> *local_f38;
  TSharedRef<SWidget,1> *local_f30;
  FSlotArguments *local_f28;
  FSlotArguments *local_f20;
  FArguments *local_f18;
  FArguments *local_f10;
  TSharedRef<SWidget,1> *local_f08;
  TSharedRef<SWidget,1> *local_f00;
  code *local_ef8;
  code *local_ef0;
  undefined4 local_ee8;
  TSharedRef<FTabManager::FLayout,1> local_ee0;
  TSharedPtr<FTabManager,1> local_ed0;
  FName local_ec0;
  FName local_eb8;
  FName local_eb0;
  FName local_ea8;
  FName local_ea0;
  FName local_e98;
  FName local_e90;
  FName local_e88;
  FName local_e80;
  FName local_e78;
  TSharedRef<SDockTab,1> *local_e70;
  FName local_e68;
  FName local_e60;
  FName local_e58;
  FName local_e50;
  FName local_e48;
  FName local_e40;
  FName local_e38;
  FName local_e30;
  FName local_e28;
  FName local_e20;
  FName local_e18;
  FName local_e10;
  FName local_e08;
  FName local_e00;
  FName local_df8;
  FName local_df0;
  FName local_de8;
  FName local_de0;
  FName local_dd8;
  FName local_dd0;
  FName local_dc8;
  TSharedRef<FTabManager::FArea,1> local_dc0;
  TSharedRef<FTabManager::FStack,1> local_db0;
  TSharedRef<FTabManager::FStack,1> local_da0;
  TSharedRef<FTabManager::FStack,1> local_d90;
  TSharedRef<FTabManager::FStack,1> local_d80;
  TSharedRef<FTabManager::FStack,1> local_d70;
  TSharedRef<FTabManager::FStack,1> local_d60;
  TSharedRef<FTabManager::FStack,1> local_d50;
  TSharedRef<FTabManager::FStack,1> local_d40;
  TSharedRef<FTabManager::FStack,1> local_d30;
  TSharedRef<FTabManager::FStack,1> local_d20;
  TSharedRef<FTabManager::FArea,1> local_d10;
  TSharedRef<FTabManager::FLayout,1> local_d00;
  FText local_cf0;
  FText local_ce0;
  TSharedRef<FTabManager,1> local_cd0;
  FText local_cc0;
  FText local_cb0;
  FText local_ca0;
  FText local_c90;
  FText local_c80;
  FText local_c70;
  FText local_c60;
  FText local_c50;
  FText local_c40;
  TSharedPtr<FUICommandList,1> local_c30;
  undefined1 local_c20 [24];
  pmf_84ddf988 local_c08;
  FText local_bf8;
  TSharedRef<FTabManager,1> local_be8;
  TSharedRef<SVerticalBox,1> local_bd8;
  TSharedRef<SWidget,1> local_bc8;
  TSharedPtr<SWidget,1> local_bb8;
  TSharedRef<SWidget,1> local_ba8;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> local_b98;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> local_b80;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> local_b68;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> local_b50;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> local_b38;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> local_b20;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> local_b08;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> local_af0;
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> local_ad8;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_ac0;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  local_aa8;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  local_a90;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  local_a78;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  local_a60;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  local_a48;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  local_a30;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  local_a18;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  local_a00;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
  local_9e8;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> local_9d0;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_9b8;
  TSharedPtr<FExtender,1> local_9a0;
  TSharedPtr<FUICommandList_const_,1> local_990;
  TSharedRef<SWidget,1> local_980;
  TSharedRef<FTabManager::FLayoutNode,1> local_970;
  TAttribute<FText> local_960;
  TAttribute<FText> local_930;
  FMenuBarBuilder local_8f8;
  TAttribute<float> local_898;
  TAttribute<FText> local_878;
  TAttribute<FText> local_848;
  FSlotArguments local_818;
  FSlotArguments local_730;
  FArguments local_648;
  FArguments local_440;
  undefined8 uStack_18;
  
  uStack_18 = 0x1430f8b66;
  local_1480 = 0;
  local_1460 = &local_ec0;
  pFVar1 = FName::FName(local_1460,"TestSuite2_Layout");
  this = FTabManager::NewLayout(&local_d00,*pFVar1);
  local_1360 = TSharedRef<FTabManager::FLayout,1>::operator->(this);
  this_00 = FTabManager::NewPrimaryArea(&local_d10);
  local_1370 = TSharedRef<FTabManager::FArea,1>::operator->(this_00);
  local_1380 = &local_970;
  pTVar2 = FTabManager::NewStack(&local_d20);
  local_1448 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar2);
  local_1458 = &local_eb8;
  pFVar1 = FName::FName(local_1458,"AnimationTestTab");
  local_1450 = *pFVar1;
  pTVar2 = FTabManager::FStack::AddTab(local_1448,&local_d30,local_1450,OpenedTab);
  local_1430 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar2);
  local_1440 = &local_eb0;
  pFVar1 = FName::FName(local_1440,"ElementTestsTab");
  local_1438 = *pFVar1;
  pTVar2 = FTabManager::FStack::AddTab(local_1430,&local_d40,local_1438,OpenedTab);
  local_1418 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar2);
  local_1428 = &local_ea8;
  pFVar1 = FName::FName(local_1428,"ColorPickerTestTab");
  local_1420 = *pFVar1;
  pTVar2 = FTabManager::FStack::AddTab(local_1418,&local_d50,local_1420,OpenedTab);
  local_1400 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar2);
  local_1410 = &local_ea0;
  pFVar1 = FName::FName(local_1410,"NotificationListTestTab");
  local_1408 = *pFVar1;
  pTVar2 = FTabManager::FStack::AddTab(local_1400,&local_d60,local_1408,OpenedTab);
  local_13e8 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar2);
  local_13f8 = &local_e98;
  pFVar1 = FName::FName(local_13f8,"GridPanelTest");
  local_13f0 = *pFVar1;
  pTVar2 = FTabManager::FStack::AddTab(local_13e8,&local_d70,local_13f0,OpenedTab);
  local_13d0 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar2);
  local_13e0 = &local_e90;
  pFVar1 = FName::FName(local_13e0,"DPIScalingTest");
  local_13d8 = *pFVar1;
  pTVar2 = FTabManager::FStack::AddTab(local_13d0,&local_d80,local_13d8,OpenedTab);
  local_13b8 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar2);
  local_13c8 = &local_e88;
  pFVar1 = FName::FName(local_13c8,"InvalidationTest");
  local_13c0 = *pFVar1;
  pTVar2 = FTabManager::FStack::AddTab(local_13b8,&local_d90,local_13c0,OpenedTab);
  local_13a0 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar2);
  local_13b0 = &local_e80;
  pFVar1 = FName::FName(local_13b0,"GammaTest");
  local_13a8 = *pFVar1;
  pTVar2 = FTabManager::FStack::AddTab(local_13a0,&local_da0,local_13a8,OpenedTab);
  local_1388 = TSharedRef<FTabManager::FStack,1>::operator->(pTVar2);
  local_1398 = &local_e78;
  pFVar1 = FName::FName(local_1398,"SplineTestTab");
  local_1390 = *pFVar1;
  pTVar2 = FTabManager::FStack::AddTab(local_1388,&local_db0,local_1390,OpenedTab);
  local_1378 = TSharedRef<FTabManager::FLayoutNode,1>::
               TSharedRef<FTabManager::FLayoutNode,1><FTabManager::FStack>(local_1380,pTVar2);
  local_1368 = FTabManager::FArea::Split(local_1370,&local_dc0,local_1378);
  FTabManager::FLayout::AddArea(local_1360,&local_ee0,local_1368);
  TSharedRef<FTabManager::FArea,1>::~TSharedRef<FTabManager::FArea,1>(&local_dc0);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_db0);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_da0);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_d90);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_d80);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_d70);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_d60);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_d50);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_d40);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_d30);
  TSharedRef<FTabManager::FStack,1>::~TSharedRef<FTabManager::FStack,1>(&local_d20);
  TSharedRef<FTabManager::FArea,1>::~TSharedRef<FTabManager::FArea,1>(&local_d10);
  TSharedRef<FTabManager::FLayout,1>::~TSharedRef<FTabManager::FLayout,1>(&local_d00);
  local_1358 = SDockTab::FArguments::FArguments(&local_440);
  local_1340 = SDockTab::FArguments::TabRole(local_1358,MajorTab);
  local_1350 = &local_878;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_ce0,L"STestSuite",L"TestSuite2TabLabel",L"Test Suite 2");
  local_1348 = TAttribute<FText>::TAttribute<FText>(local_1350,pFVar3);
  local_1328 = SDockTab::FArguments::Label(local_1340,local_1348);
  local_1338 = &local_848;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_cf0,L"STestSuite",L"TestSuite2TabToolTip",
                      L"The App for the first Test Suite.");
  local_1330 = TAttribute<FText>::TAttribute<FText>(local_1338,pFVar3);
  local_1320 = TSlateBaseNamedArgs<SDockTab>::ToolTipText
                         ((TSlateBaseNamedArgs<SDockTab> *)local_1328,local_1330);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_14f8);
  this_01 = MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                      (&local_ac0,"SDockTab",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1902,&local_14f8);
  local_e70 = TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
                        (this_01,__return_storage_ptr__,local_1320);
  TSharedPtr<SDockTab,1>::~TSharedPtr<SDockTab,1>(&local_ac0._Widget);
  FText::~FText(&local_cf0);
  FText::~FText(&local_ce0);
  SDockTab::FArguments::~FArguments(&local_440);
  this_02 = FGlobalTabmanager::Get();
  local_1318 = TSharedRef<FGlobalTabmanager,1>::operator->(this_02);
  pTVar4 = FGlobalTabmanager::NewTabManager(local_1318,&local_cd0,__return_storage_ptr__);
  TSharedPtr<FTabManager,1>::TSharedPtr<FTabManager,1><FTabManager>(&local_ed0,pTVar4);
  TSharedPtr<FTabManager,1>::operator=(&TestSuite2TabManager,&local_ed0);
  TSharedPtr<FTabManager,1>::~TSharedPtr<FTabManager,1>(&local_ed0);
  TSharedRef<FTabManager,1>::~TSharedRef<FTabManager,1>(&local_cd0);
  local_12e0 = TSharedPtr<FTabManager,1>::operator->(&TestSuite2TabManager);
  pTVar10 = &local_b98;
  for (lVar7 = 0x18; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)pTVar10 = 0;
    pTVar10 = (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
              &pTVar10->field_0x1;
  }
  local_12f8 = TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
               TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_b98)
  ;
  pFVar1 = FName::FName(&local_e68,"AnimationTestTab");
  local_12f0 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<FName>(&local_aa8,SpawnTab,pFVar1);
  local_1310 = &local_e60;
  pFVar1 = FName::FName(local_1310,"AnimationTestTab");
  local_1308 = *pFVar1;
  local_1300 = local_1308;
  local_12e8 = local_1308;
  local_12d0 = FTabManager::RegisterTabSpawner(local_12e0,local_1308,local_12f0,local_12f8);
  local_12d8 = FText::AsLocalizable_Advanced_LocText
                         (&local_cc0,L"TestSuite2",L"AnimationTestTab",L"Animation Test");
  local_12c8 = FTabSpawnerEntry::SetDisplayName(local_12d0,local_12d8);
  FTabSpawnerEntry::SetGroup(local_12c8,&TestSuiteMenu::SuiteTabs);
  FText::~FText(&local_cc0);
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            (&local_aa8);
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_b98);
  local_1290 = TSharedPtr<FTabManager,1>::operator->(&TestSuite2TabManager);
  pTVar10 = &local_b80;
  for (lVar7 = 0x18; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)pTVar10 = 0;
    pTVar10 = (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
              &pTVar10->field_0x1;
  }
  local_12a8 = TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
               TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_b80)
  ;
  pFVar1 = FName::FName(&local_e58,"SplineTestTab");
  local_12a0 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<FName>(&local_a90,SpawnTab,pFVar1);
  local_12c0 = &local_e50;
  pFVar1 = FName::FName(local_12c0,"SplineTestTab");
  local_12b8 = *pFVar1;
  local_12b0 = local_12b8;
  local_1298 = local_12b8;
  local_1280 = FTabManager::RegisterTabSpawner(local_1290,local_12b8,local_12a0,local_12a8);
  local_1288 = FText::AsLocalizable_Advanced_LocText
                         (&local_cb0,L"TestSuite2",L"SplineTestTab",L"Spline Test");
  local_1278 = FTabSpawnerEntry::SetDisplayName(local_1280,local_1288);
  FTabSpawnerEntry::SetGroup(local_1278,&TestSuiteMenu::SuiteTabs);
  FText::~FText(&local_cb0);
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            (&local_a90);
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_b80);
  local_1240 = TSharedPtr<FTabManager,1>::operator->(&TestSuite2TabManager);
  pTVar10 = &local_b68;
  for (lVar7 = 0x18; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)pTVar10 = 0;
    pTVar10 = (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
              &pTVar10->field_0x1;
  }
  local_1258 = TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
               TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_b68)
  ;
  pFVar1 = FName::FName(&local_e48,"ElementTestsTab");
  local_1250 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<FName>(&local_a78,SpawnTab,pFVar1);
  local_1270 = &local_e40;
  pFVar1 = FName::FName(local_1270,"ElementTestsTab");
  local_1268 = *pFVar1;
  local_1260 = local_1268;
  local_1248 = local_1268;
  local_1230 = FTabManager::RegisterTabSpawner(local_1240,local_1268,local_1250,local_1258);
  local_1238 = FText::AsLocalizable_Advanced_LocText
                         (&local_ca0,L"TestSuite2",L"ElementTestsTab",L"Elements Test");
  local_1228 = FTabSpawnerEntry::SetDisplayName(local_1230,local_1238);
  FTabSpawnerEntry::SetGroup(local_1228,&TestSuiteMenu::SuiteTabs);
  FText::~FText(&local_ca0);
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            (&local_a78);
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_b68);
  local_11f0 = TSharedPtr<FTabManager,1>::operator->(&TestSuite2TabManager);
  pTVar10 = &local_b50;
  for (lVar7 = 0x18; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)pTVar10 = 0;
    pTVar10 = (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
              &pTVar10->field_0x1;
  }
  local_1208 = TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
               TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_b50)
  ;
  pFVar1 = FName::FName(&local_e38,"ColorPickerTestTab");
  local_1200 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<FName>(&local_a60,SpawnTab,pFVar1);
  local_1220 = &local_e30;
  pFVar1 = FName::FName(local_1220,"ColorPickerTestTab");
  local_1218 = *pFVar1;
  local_1210 = local_1218;
  local_11f8 = local_1218;
  local_11e0 = FTabManager::RegisterTabSpawner(local_11f0,local_1218,local_1200,local_1208);
  local_11e8 = FText::AsLocalizable_Advanced_LocText
                         (&local_c90,L"TestSuite2",L"ColorPickerTestTab",L"Color Picker Test");
  local_11d8 = FTabSpawnerEntry::SetDisplayName(local_11e0,local_11e8);
  FTabSpawnerEntry::SetGroup(local_11d8,&TestSuiteMenu::SuiteTabs);
  FText::~FText(&local_c90);
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            (&local_a60);
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_b50);
  local_11a0 = TSharedPtr<FTabManager,1>::operator->(&TestSuite2TabManager);
  pTVar10 = &local_b38;
  for (lVar7 = 0x18; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)pTVar10 = 0;
    pTVar10 = (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
              &pTVar10->field_0x1;
  }
  local_11b8 = TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
               TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_b38)
  ;
  pFVar1 = FName::FName(&local_e28,"NotificationListTestTab");
  local_11b0 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<FName>(&local_a48,SpawnTab,pFVar1);
  local_11d0 = &local_e20;
  pFVar1 = FName::FName(local_11d0,"NotificationListTestTab");
  local_11c8 = *pFVar1;
  local_11c0 = local_11c8;
  local_11a8 = local_11c8;
  local_1190 = FTabManager::RegisterTabSpawner(local_11a0,local_11c8,local_11b0,local_11b8);
  local_1198 = FText::AsLocalizable_Advanced_LocText
                         (&local_c80,L"TestSuite2",L"NotificationListTestTab",L"Notifications Test")
  ;
  local_1188 = FTabSpawnerEntry::SetDisplayName(local_1190,local_1198);
  FTabSpawnerEntry::SetGroup(local_1188,&TestSuiteMenu::SuiteTabs);
  FText::~FText(&local_c80);
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            (&local_a48);
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_b38);
  local_1150 = TSharedPtr<FTabManager,1>::operator->(&TestSuite2TabManager);
  pTVar10 = &local_b20;
  for (lVar7 = 0x18; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)pTVar10 = 0;
    pTVar10 = (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
              &pTVar10->field_0x1;
  }
  local_1168 = TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
               TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_b20)
  ;
  pFVar1 = FName::FName(&local_e18,"GridPanelTest");
  local_1160 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<FName>(&local_a30,SpawnTab,pFVar1);
  local_1180 = &local_e10;
  pFVar1 = FName::FName(local_1180,"GridPanelTest");
  local_1178 = *pFVar1;
  local_1170 = local_1178;
  local_1158 = local_1178;
  local_1140 = FTabManager::RegisterTabSpawner(local_1150,local_1178,local_1160,local_1168);
  local_1148 = FText::AsLocalizable_Advanced_LocText
                         (&local_c70,L"TestSuite2",L"GridPanelTest",L"Grid Panel");
  local_1138 = FTabSpawnerEntry::SetDisplayName(local_1140,local_1148);
  FTabSpawnerEntry::SetGroup(local_1138,&TestSuiteMenu::SuiteTabs);
  FText::~FText(&local_c70);
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            (&local_a30);
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_b20);
  local_1100 = TSharedPtr<FTabManager,1>::operator->(&TestSuite2TabManager);
  pTVar10 = &local_b08;
  for (lVar7 = 0x18; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)pTVar10 = 0;
    pTVar10 = (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
              &pTVar10->field_0x1;
  }
  local_1118 = TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
               TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_b08)
  ;
  pFVar1 = FName::FName(&local_e08,"DPIScalingTest");
  local_1110 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<FName>(&local_a18,SpawnTab,pFVar1);
  local_1130 = &local_e00;
  pFVar1 = FName::FName(local_1130,"DPIScalingTest");
  local_1128 = *pFVar1;
  local_1120 = local_1128;
  local_1108 = local_1128;
  local_10f0 = FTabManager::RegisterTabSpawner(local_1100,local_1128,local_1110,local_1118);
  local_10f8 = FText::AsLocalizable_Advanced_LocText
                         (&local_c60,L"TestSuite2",L"DPIScalingTest",L"DPI Scaling");
  local_10e8 = FTabSpawnerEntry::SetDisplayName(local_10f0,local_10f8);
  FTabSpawnerEntry::SetGroup(local_10e8,&TestSuiteMenu::SuiteTabs);
  FText::~FText(&local_c60);
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            (&local_a18);
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_b08);
  local_10b0 = TSharedPtr<FTabManager,1>::operator->(&TestSuite2TabManager);
  pTVar10 = &local_af0;
  for (lVar7 = 0x18; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)pTVar10 = 0;
    pTVar10 = (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
              &pTVar10->field_0x1;
  }
  local_10c8 = TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
               TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_af0)
  ;
  pFVar1 = FName::FName(&local_df8,"InvalidationTest");
  local_10c0 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<FName>(&local_a00,SpawnTab,pFVar1);
  local_10e0 = &local_df0;
  pFVar1 = FName::FName(local_10e0,"InvalidationTest");
  local_10d8 = *pFVar1;
  local_10d0 = local_10d8;
  local_10b8 = local_10d8;
  local_10a0 = FTabManager::RegisterTabSpawner(local_10b0,local_10d8,local_10c0,local_10c8);
  local_10a8 = FText::AsLocalizable_Advanced_LocText
                         (&local_c50,L"TestSuite2",L"InvalidationTest",L"Invalidation");
  local_1098 = FTabSpawnerEntry::SetDisplayName(local_10a0,local_10a8);
  FTabSpawnerEntry::SetGroup(local_1098,&TestSuiteMenu::SuiteTabs);
  FText::~FText(&local_c50);
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            (&local_a00);
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_af0);
  local_1060 = TSharedPtr<FTabManager,1>::operator->(&TestSuite2TabManager);
  pTVar10 = &local_ad8;
  for (lVar7 = 0x18; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)pTVar10 = 0;
    pTVar10 = (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
              &pTVar10->field_0x1;
  }
  local_1078 = TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
               TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_ad8)
  ;
  pFVar1 = FName::FName(&local_de8,"GammaTest");
  local_1070 = TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
               ::CreateStatic<FName>(&local_9e8,SpawnTab,pFVar1);
  local_1090 = &local_de0;
  pFVar1 = FName::FName(local_1090,"GammaTest");
  local_1088 = *pFVar1;
  local_1080 = local_1088;
  local_1068 = local_1088;
  local_1050 = FTabManager::RegisterTabSpawner(local_1060,local_1088,local_1070,local_1078);
  local_1058 = FText::AsLocalizable_Advanced_LocText(&local_c40,L"TestSuite2",L"GammaTest",L"Gamma")
  ;
  local_1048 = FTabSpawnerEntry::SetDisplayName(local_1050,local_1058);
  FTabSpawnerEntry::SetGroup(local_1048,&TestSuiteMenu::SuiteTabs);
  FText::~FText(&local_c40);
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            (&local_9e8);
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>(&local_ad8);
  local_14f0 = &local_dd8;
  local_14a0 = FNameEntryId::FNameEntryId(local_147c);
  local_14d8 = local_14a0->Value;
  local_14d0 = local_14d8;
  local_1040 = local_14a0;
  FNameEntryId::FNameEntryId(&local_14f0->ComparisonIndex);
  local_14f0->Number = 0;
  (local_14f0->ComparisonIndex).Value = local_14d0;
  local_14f0->Number = 0;
  local_1038 = local_14f0;
  local_1030 = *local_14f0;
  local_1028 = local_1030;
  local_1010 = local_1030;
  local_1008 = FCoreStyle::Get();
  local_1020 = &local_9a0;
  local_1000 = TSharedPtr<FExtender,1>::TSharedPtr<FExtender,1>(local_1020,(FNullTag *)0x0);
  local_1018 = &local_990;
  pTVar5 = TSharedPtr<FUICommandList,1>::TSharedPtr<FUICommandList,1>(&local_c30,(FNullTag *)0x0);
  local_ff8 = TSharedPtr<FUICommandList_const_,1>::
              TSharedPtr<FUICommandList_const_,1><FUICommandList>(local_1018,pTVar5);
  FMenuBarBuilder::FMenuBarBuilder(&local_8f8,local_ff8,local_1000,local_1008,local_1010);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_c30.SharedReferenceCount);
  local_14e8 = &local_dd0;
  local_1498 = FNameEntryId::FNameEntryId(local_1474);
  local_14c8 = local_1498->Value;
  local_14c0 = local_14c8;
  local_ff0 = local_1498;
  FNameEntryId::FNameEntryId(&local_14e8->ComparisonIndex);
  local_14e8->Number = 0;
  (local_14e8->ComparisonIndex).Value = local_14c0;
  local_14e8->Number = 0;
  local_fe8 = local_14e8;
  local_fe0 = *local_14e8;
  local_14e0 = &local_dc8;
  local_fd8 = local_fe0;
  local_fd0 = local_fe0;
  local_f98 = local_fe0;
  local_1490 = FNameEntryId::FNameEntryId(local_146c);
  local_14b8 = local_1490->Value;
  local_14b0 = local_14b8;
  local_fc8 = local_1490;
  FNameEntryId::FNameEntryId(&local_14e0->ComparisonIndex);
  local_14e0->Number = 0;
  (local_14e0->ComparisonIndex).Value = local_14b0;
  local_14e0->Number = 0;
  local_fc0 = local_14e0;
  local_fb8 = *local_14e0;
  local_ef0 = FTabManager::PopulateTabSpawnerMenu;
  local_ee8 = 0;
  ppcVar8 = &local_ef0;
  puVar9 = local_c20;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *(undefined1 *)ppcVar8;
    ppcVar8 = (code **)((longlong)ppcVar8 + 1);
    puVar9 = puVar9 + 1;
  }
  local_fb0 = local_fb8;
  local_fa8 = local_fb8;
  local_f90 = local_fb8;
  local_fa0 = TSharedPtr<FTabManager,1>::ToSharedRef(&TestSuite2TabManager,&local_be8);
  puVar9 = local_c20;
  ppVar11 = &local_c08;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)ppVar11 = *puVar9;
    puVar9 = puVar9 + 1;
    ppVar11 = (pmf_84ddf988 *)&ppVar11->field_0x1;
  }
  local_f88 = TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
              CreateSP<FTabManager,1,TSharedRef<FWorkspaceItem,1>_&>
                        (&local_9d0,local_fa0,&local_c08,&TestSuiteMenu::MenuRoot);
  pFVar3 = FText::GetEmpty();
  TAttribute<FText>::TAttribute<FText><FText>(&local_930,pFVar3);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_bf8,L"TestSuite",L"WindowMenuLabel",L"Window");
  TAttribute<FText>::TAttribute<FText>(&local_960,pFVar3);
  FMenuBarBuilder::AddPullDownMenu(&local_8f8,&local_960,&local_930,local_f88,local_f90,local_f98);
  TAttribute<FText>::~TAttribute<FText>(&local_960);
  FText::~FText(&local_bf8);
  TAttribute<FText>::~TAttribute<FText>(&local_930);
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>(&local_9d0);
  TSharedRef<FTabManager,1>::~TSharedRef<FTabManager,1>(&local_be8);
  local_1488 = TSharedRef<SDockTab,1>::operator->(__return_storage_ptr__);
  local_ef8 = *(code **)(local_1488->_padding_ + 0x248);
  local_f08 = &local_980;
  local_f68 = SVerticalBox::FArguments::FArguments(&local_648);
  this_03 = SVerticalBox::Slot(&local_730);
  local_f78 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(this_03);
  local_f80 = FMultiBoxBuilder::MakeWidget
                        ((FMultiBoxBuilder *)&local_8f8,&local_ba8,
                         (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
                          *)0x0);
  local_f70 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)local_f78,local_f80);
  local_f18 = SVerticalBox::FArguments::operator+(local_f68,local_f70);
  local_f50 = SVerticalBox::Slot(&local_818);
  local_f60 = &local_898;
  local_14a8[0] = __real_3f800000;
  local_f58 = TAttribute<float>::TAttribute<float>(local_f60,local_14a8);
  local_f28 = SVerticalBox::FSlot::FSlotArguments::FillHeight(local_f50,local_f58);
  local_f40 = TSharedPtr<FTabManager,1>::operator->(&TestSuite2TabManager);
  local_f48 = FSpawnTabArgs::GetOwnerWindow(param_1);
  local_f38 = FTabManager::RestoreFrom(local_f40,&local_bb8,&local_ee0,local_f48,false,Never);
  local_f30 = TSharedPtr<SWidget,1>::ToSharedRef(local_f38,&local_bc8);
  local_f20 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                        ((FSlotArguments *)local_f28,local_f30);
  local_f10 = SVerticalBox::FArguments::operator+(local_f18,local_f20);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_14f7);
  this_04 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_9b8,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1936,local_14f7);
  pTVar6 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_04,&local_bd8,local_f10);
  local_f00 = TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(local_f08,pTVar6);
  (*local_ef8)(local_1488,local_f00);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_bd8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_9b8._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_bc8);
  TSharedPtr<SWidget,1>::~TSharedPtr<SWidget,1>(&local_bb8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_818);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_ba8);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_730);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_648._Slots);
  TSlateBaseNamedArgs<SVerticalBox>::~TSlateBaseNamedArgs<SVerticalBox>
            ((TSlateBaseNamedArgs<SVerticalBox> *)&local_648);
  FMenuBarBuilder::~FMenuBarBuilder(&local_8f8);
  TSharedRef<FTabManager::FLayout,1>::~TSharedRef<FTabManager::FLayout,1>(&local_ee0);
  return __return_storage_ptr__;
}

// SpawnWidgetGallery @ 1430fa730

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SDockTab,1> * __cdecl
SpawnWidgetGallery(TSharedRef<SDockTab,1> *__return_storage_ptr__,FSpawnTabArgs *param_1)

{
  FText *pFVar1;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> *this;
  T0RequiredArgs local_538 [8];
  FArguments *local_530;
  TAttribute<FText> *local_528;
  TAttribute<FText> *local_520;
  FArguments *local_518;
  TAttribute<FText> *local_510;
  TAttribute<FText> *local_508;
  FArguments *local_500;
  FArguments *local_4f8;
  TSharedRef<SWidget,1> *local_4f0;
  FArguments *local_4e8;
  FArguments *local_4e0;
  TSharedRef<SWidget,1> local_4d8;
  FText local_4c8;
  FText local_4b8;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_4a8;
  TAttribute<FText> local_490;
  TAttribute<FText> local_460;
  FArguments local_430;
  
  local_530 = SDockTab::FArguments::FArguments(&local_430);
  local_518 = SDockTab::FArguments::TabRole(local_530,NomadTab);
  local_528 = &local_490;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_4b8,L"STestSuite",L"WidgetGalleryTab",L"Widget Gallery");
  local_520 = TAttribute<FText>::TAttribute<FText>(local_528,pFVar1);
  local_500 = SDockTab::FArguments::Label(local_518,local_520);
  local_510 = &local_460;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_4c8,L"STestSuite",L"WidgetGalleryTabTextToolTip",
                      L"Switch to the widget gallery.");
  local_508 = TAttribute<FText>::TAttribute<FText>(local_510,pFVar1);
  local_4f8 = TSlateBaseNamedArgs<SDockTab>::ToolTipText
                        ((TSlateBaseNamedArgs<SDockTab> *)local_500,local_508);
  local_4e8 = TSlateBaseNamedArgs<SDockTab>::Clipping
                        ((TSlateBaseNamedArgs<SDockTab> *)local_4f8,ClipToBounds);
  local_4f0 = MakeWidgetGallery(&local_4d8);
  local_4e0 = SDockTab::FArguments::operator[](local_4e8,local_4f0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_538);
  this = MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                   (&local_4a8,"SDockTab",
                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                    ,0x1958,local_538);
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
            (this,__return_storage_ptr__,local_4e0);
  TSharedPtr<SDockTab,1>::~TSharedPtr<SDockTab,1>(&local_4a8._Widget);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_4d8);
  FText::~FText(&local_4c8);
  FText::~FText(&local_4b8);
  SDockTab::FArguments::~FArguments(&local_430);
  return __return_storage_ptr__;
}

// TestTransformCalculus @ 1431038d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl `anonymous_namespace'::TestTransformCalculus(void)

{
  TVector<double> *pTVar1;
  TMatrix<double> *pTVar2;
  TQuat<double> *pTVar3;
  TMatrix2x2<float> *pTVar4;
  TTransform2<float> *pTVar5;
  TScale2<float> TVar6;
  FSlateLayoutTransform *pFVar7;
  longlong lVar8;
  TRotator<double> *pTVar9;
  TVector<double> *pTVar10;
  TRotator<double> *pTVar11;
  TMatrix<double> *pTVar12;
  undefined1 *puVar13;
  FSlateLayoutTransform *pFVar14;
  TTransform2<float> *pTVar15;
  TMatrix2x2<float> *pTVar16;
  undefined1 auStackY_1b68 [32];
  TVector2<float>_u_0 local_1b38;
  TScale2<float> local_1b30;
  float local_1b28 [2];
  TShear2<float> local_1b20;
  TQuat2<float> local_1b18;
  FSlateLayoutTransform local_1b10;
  TVector2<double>_u_0 local_1b00;
  FSlateLayoutTransform local_1af0;
  float local_1ae0;
  float local_1adc;
  TRotator<double> local_1ad8;
  TVector2<float>_u_0 local_1ac0;
  TVector<double> local_1ab8;
  TRotator<double> local_1aa0;
  TVector<double> local_1a88;
  TQuat<double> local_1a68;
  TRotator<double> *local_1a48;
  TMatrix<double> *local_1a40;
  TVector<double> *local_1a38;
  TVector<double> *local_1a30;
  TMatrix<double> *local_1a28;
  FDeprecateVector2DParameter local_1a20;
  TVector2<double>_u_0 *local_1a18;
  TShear2<float> *local_1a10;
  TScale2<float> *local_1a08;
  TQuat2<float> *local_1a00;
  TMatrix2x2<float> *local_19f8;
  TVector2<double>_u_0 *local_19f0;
  TScale2<float> *local_19e8;
  TShear2<float> *local_19e0;
  TVector2<double> *local_19d8;
  TQuat2<float> *local_19d0;
  TMatrix2x2<float> *local_19c8;
  FSlateLayoutTransform *local_19c0;
  TRotator<double> *local_19b8;
  TRotator<double> *local_19b0;
  TMatrix<double> *local_19a8;
  TMatrix<double> *local_19a0;
  TRotator<double> *local_1998;
  TRotator<double> *local_1990;
  TQuat<double> *local_1988;
  TQuat<double> *local_1980;
  TVector<double> *local_1978;
  float *local_1970;
  FSlateLayoutTransform local_1968;
  TVector<double> *local_1958;
  TQuat<double> *local_1950;
  TRotator<double> *local_1948;
  float *local_1940;
  TVector<double> *local_1938;
  TQuat<double> *local_1930;
  TVector2<double>_u_0 local_1928;
  TRotator<double> local_1918;
  TRotator<double> local_1900;
  TRotator<double> local_18e8;
  FSlateLayoutTransform local_18d0;
  FSlateLayoutTransform local_18c4;
  TRotator<double> local_18b8;
  TQuat<double> local_1898;
  TShear2<float> *local_1878;
  TVector2<double> *local_1870;
  TQuat2<float> *local_1868;
  TMatrix2x2<float> *local_1860;
  TVector<double> local_1858;
  FSlateLayoutTransform *local_1840;
  TTransform2<float> *local_1838;
  TQuat2<float> local_1830;
  float local_1828 [2];
  TScale2<float> local_1820;
  TQuat2<float> local_1818;
  TShear2<float> local_1810;
  TScale2<float> local_1808;
  TScale2<float> *local_1800;
  TRotator<double> local_17f8;
  TRotator<double> local_17e0;
  TVector<double> local_17c8;
  FSlateLayoutTransform local_17a8;
  FSlateLayoutTransform local_179c;
  FSlateLayoutTransform local_1790;
  FSlateLayoutTransform local_1784;
  FSlateLayoutTransform local_1778;
  FSlateLayoutTransform local_176c;
  TVector2<double> local_1760;
  undefined1 local_1748 [32];
  TQuat<double> local_1728;
  TVector<double> local_1708;
  TVector<double> local_16f0;
  TVector<double> local_16d8;
  TVector<double> local_16c0;
  TVector<double> local_16a8;
  TVector<double> local_1690;
  TQuat<double> local_1678;
  TQuat<double> local_1658;
  TQuat<double> local_1638;
  TQuat<double> local_1618;
  TQuat<double> local_15f8;
  TTransform2<float> local_15d8;
  TMatrix2x2<float> local_15c0;
  TMatrix2x2<float> local_15b0;
  TTransform2<float> local_15a0;
  TTransform2<float> local_1588;
  undefined1 local_1568 [128];
  TTransform2<float> local_14e8;
  TTransform2<float> local_14d0;
  TTransform2<float> local_14b8;
  TTransform2<float> local_14a0;
  TTransform2<float> local_1488;
  TTransform2<float> local_1470;
  TMatrix<double> local_1458;
  TMatrix2x2<float> local_13d8;
  TMatrix2x2<float> local_13c8;
  TMatrix2x2<float> local_13b8;
  TMatrix2x2<float> local_13a8;
  TMatrix2x2<float> local_1398;
  TMatrix2x2<float> local_1388;
  TMatrix2x2<float> local_1378;
  TMatrix2x2<float> local_1368;
  TMatrix2x2<float> local_1358;
  TMatrix2x2<float> local_1348;
  TMatrix2x2<float> local_1338;
  TMatrix2x2<float> local_1328;
  TMatrix2x2<float> local_1318;
  TMatrix2x2<float> local_1308;
  TMatrix2x2<float> local_12f8;
  TTransform2<float> local_12e8;
  TTransform2<float> local_12d0;
  TTransform2<float> local_12b8;
  TTransform2<float> local_12a0;
  TTransform2<float> local_1288;
  TTransform2<float> local_1270;
  TTransform2<float> local_1258;
  TTransform2<float> local_1240;
  TTransform2<float> local_1228;
  TTransform2<float> local_1210;
  TTransform2<float> local_11f8;
  TTransform2<float> local_11e0;
  TTransform2<float> local_11c8;
  TTransform2<float> local_11b0;
  TTransform2<float> local_1198;
  TTransform2<float> local_1180;
  TTransform2<float> local_1168;
  TTransform2<float> local_1150;
  TTransform2<float> local_1138;
  TTransform2<float> local_1120;
  TTransform2<float> local_1108;
  TTransform2<float> local_10f0;
  TTransform2<float> local_10d8;
  TTransform2<float> local_10c0;
  TTransform2<float> local_10a8;
  TTransform2<float> local_1090;
  TTransform2<float> local_1078;
  TTransform2<float> local_1060;
  TTransform2<float> local_1048;
  TMatrix<double> local_1028;
  TMatrix<double> local_fa8;
  TMatrix<double> local_f28;
  TMatrix<double> local_ea8;
  TMatrix<double> local_e28;
  TMatrix<double> local_da8;
  TMatrix<double> local_d28;
  TMatrix<double> local_ca8;
  TMatrix<double> local_c28;
  TMatrix<double> local_ba8;
  TMatrix<double> local_b28;
  TMatrix<double> local_aa8;
  TMatrix<double> local_a28;
  TMatrix<double> local_9a8;
  TMatrix<double> local_928;
  TMatrix<double> local_8a8;
  TMatrix<double> local_828;
  TMatrix<double> local_7a8;
  TMatrix<double> local_728;
  TMatrix<double> local_6a8;
  TMatrix<double> local_628;
  TMatrix<double> local_5a8;
  TMatrix<double> local_528;
  TMatrix<double> local_4a8;
  TMatrix<double> local_428;
  TMatrix<double> local_3a8;
  TMatrix<double> local_328;
  TMatrix<double> local_2a8;
  TMatrix<double> local_228;
  TMatrix<double> local_1a8;
  TMatrix<double> local_128;
  TMatrix<double> local_a8;
  ulonglong local_28;
  undefined8 uStack_18;
  
  uStack_18 = 0x1431038dd;
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b68;
  local_1b38._s_0.X = __real_40b9999a;
  UE::Math::TVector<double>::TVector<double>
            (&local_1a88,__real_4014000000000000,__real_4018000000000000,__real_401c000000000000);
  local_1978 = UE::Math::TVector<double>::TVector<double>
                         (&local_16c0,__real_3ff0000000000000,__real_4000000000000000,
                          __real_4008000000000000);
  pTVar1 = UE::Math::TVector<double>::GetSafeNormal
                     (local_1978,&local_16d8,__real_3e45798ee0000000,
                      &UE::Math::TVector<double>::ZeroVector);
  pTVar10 = &local_17c8;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar10->field0_0x0 = *(undefined1 *)&pTVar1->field0_0x0;
    pTVar1 = (TVector<double> *)((longlong)&pTVar1->field0_0x0 + 1);
    pTVar10 = (TVector<double> *)((longlong)&pTVar10->field0_0x0 + 1);
  }
  UE::Math::TQuat<double>::TQuat<double>(&local_1898,&local_17c8,__real_4040c00000000000);
  local_1ad8.Pitch = __real_401c000000000000;
  local_1ad8.Yaw = __real_4020000000000000;
  local_1ad8.Roll = __real_4022000000000000;
  UE::Math::TRotationMatrix<double>::Make(&local_fa8,&local_1ad8);
  local_1970 = TransformConverter<float>::Convert(local_1b38.XY);
  local_1940 = local_1970;
  local_1958 = TransformConverter<UE::Math::TVector<double>_>::Convert(&local_1a88);
  local_1938 = local_1958;
  local_1950 = TransformConverter<UE::Math::TQuat<double>_>::Convert(&local_1898);
  local_1930 = local_1950;
  local_1a48 = TransformConverter<UE::Math::TRotator<double>_>::Convert(&local_1ad8);
  local_1948 = local_1a48;
  TransformConverter<UE::Math::TMatrix<double>_>::Convert<UE::Math::TMatrix<double>_>
            (&local_f28,&local_fa8);
  local_1a40 = &local_f28;
  TransformConverter<UE::Math::TQuat<double>_>::Convert<UE::Math::TRotator<double>_>
            (&local_1658,&local_1ad8);
  TransformConverter<UE::Math::TRotator<double>_>::Convert<UE::Math::TQuat<double>_>
            (&local_17e0,&local_1898);
  TransformConverter<UE::Math::TRotator<double>_>::Convert<UE::Math::TMatrix<double>_>
            (&local_17f8,&local_fa8);
  pTVar9 = &local_17f8;
  pTVar11 = &local_17e0;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pTVar11->Pitch = *(undefined1 *)&pTVar9->Pitch;
    pTVar9 = (TRotator<double> *)((longlong)&pTVar9->Pitch + 1);
    pTVar11 = (TRotator<double> *)((longlong)&pTVar11->Pitch + 1);
  }
  TransformConverter<UE::Math::TMatrix<double>_>::Convert<float>(&local_1028,local_1b38.XY);
  TransformConverter<UE::Math::TMatrix<double>_>::Convert<UE::Math::TVector<double>_>
            (&local_ea8,&local_1a88);
  pTVar2 = &local_ea8;
  pTVar12 = &local_1028;
  for (lVar8 = 0x80; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)pTVar12->M[0] = *(undefined1 *)pTVar2->M[0];
    pTVar2 = (TMatrix<double> *)((longlong)pTVar2->M[0] + 1);
    pTVar12 = (TMatrix<double> *)((longlong)pTVar12->M[0] + 1);
  }
  TransformConverter<UE::Math::TMatrix<double>_>::Convert<UE::Math::TQuat<double>_>
            (&local_e28,&local_1898);
  pTVar2 = &local_e28;
  pTVar12 = &local_1028;
  for (lVar8 = 0x80; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)pTVar12->M[0] = *(undefined1 *)pTVar2->M[0];
    pTVar2 = (TMatrix<double> *)((longlong)pTVar2->M[0] + 1);
    pTVar12 = (TMatrix<double> *)((longlong)pTVar12->M[0] + 1);
  }
  TransformConverter<UE::Math::TMatrix<double>_>::Convert<UE::Math::TRotator<double>_>
            (&local_da8,&local_1ad8);
  pTVar2 = &local_da8;
  pTVar12 = &local_1028;
  for (lVar8 = 0x80; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)pTVar12->M[0] = *(undefined1 *)pTVar2->M[0];
    pTVar2 = (TMatrix<double> *)((longlong)pTVar2->M[0] + 1);
    pTVar12 = (TMatrix<double> *)((longlong)pTVar12->M[0] + 1);
  }
  local_1b28[0] = Concatenate<float>(local_1b38._s_0.X,*local_1940);
  UE::Math::Concatenate<double>(&local_1ab8,&local_1a88,local_1938);
  UE::Math::Concatenate<double>(&local_1a68,&local_1898,local_1930);
  Concatenate<double>(&local_1aa0,&local_1ad8,local_1a48);
  UE::Math::Concatenate<double>(&local_1458,&local_fa8,local_1a40);
  pTVar2 = Concatenate<float,UE::Math::TVector<double>_>(&local_ba8,local_1b28,&local_1ab8);
  puVar13 = local_1568;
  for (lVar8 = 0x80; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar13 = *(undefined1 *)pTVar2->M[0];
    pTVar2 = (TMatrix<double> *)((longlong)pTVar2->M[0] + 1);
    puVar13 = puVar13 + 1;
  }
  pTVar2 = Concatenate<UE::Math::TVector<double>,float>(&local_b28,&local_1ab8,local_1b28);
  puVar13 = local_1568;
  for (lVar8 = 0x80; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar13 = *(undefined1 *)pTVar2->M[0];
    pTVar2 = (TMatrix<double> *)((longlong)pTVar2->M[0] + 1);
    puVar13 = puVar13 + 1;
  }
  pTVar2 = Concatenate<float,UE::Math::TQuat<double>_>(&local_aa8,local_1b28,&local_1a68);
  puVar13 = local_1568;
  for (lVar8 = 0x80; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar13 = *(undefined1 *)pTVar2->M[0];
    pTVar2 = (TMatrix<double> *)((longlong)pTVar2->M[0] + 1);
    puVar13 = puVar13 + 1;
  }
  pTVar2 = Concatenate<UE::Math::TQuat<double>,float>(&local_a28,&local_1a68,local_1b28);
  puVar13 = local_1568;
  for (lVar8 = 0x80; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar13 = *(undefined1 *)pTVar2->M[0];
    pTVar2 = (TMatrix<double> *)((longlong)pTVar2->M[0] + 1);
    puVar13 = puVar13 + 1;
  }
  pTVar2 = Concatenate<float,UE::Math::TRotator<double>_>(&local_9a8,local_1b28,&local_1aa0);
  puVar13 = local_1568;
  for (lVar8 = 0x80; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar13 = *(undefined1 *)pTVar2->M[0];
    pTVar2 = (TMatrix<double> *)((longlong)pTVar2->M[0] + 1);
    puVar13 = puVar13 + 1;
  }
  pTVar2 = Concatenate<UE::Math::TRotator<double>,float>(&local_928,&local_1aa0,local_1b28);
  puVar13 = local_1568;
  for (lVar8 = 0x80; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar13 = *(undefined1 *)pTVar2->M[0];
    pTVar2 = (TMatrix<double> *)((longlong)pTVar2->M[0] + 1);
    puVar13 = puVar13 + 1;
  }
  pTVar2 = Concatenate<float,UE::Math::TMatrix<double>_>(&local_8a8,local_1b28,&local_1458);
  puVar13 = local_1568;
  for (lVar8 = 0x80; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar13 = *(undefined1 *)pTVar2->M[0];
    pTVar2 = (TMatrix<double> *)((longlong)pTVar2->M[0] + 1);
    puVar13 = puVar13 + 1;
  }
  pTVar2 = Concatenate<UE::Math::TMatrix<double>,float>(&local_828,&local_1458,local_1b28);
  puVar13 = local_1568;
  for (lVar8 = 0x80; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar13 = *(undefined1 *)pTVar2->M[0];
    pTVar2 = (TMatrix<double> *)((longlong)pTVar2->M[0] + 1);
    puVar13 = puVar13 + 1;
  }
  pTVar2 = Concatenate<UE::Math::TVector<double>,UE::Math::TQuat<double>_>
                     (&local_7a8,&local_1ab8,&local_1a68);
  puVar13 = local_1568;
  for (lVar8 = 0x80; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar13 = *(undefined1 *)pTVar2->M[0];
    pTVar2 = (TMatrix<double> *)((longlong)pTVar2->M[0] + 1);
    puVar13 = puVar13 + 1;
  }
  pTVar2 = Concatenate<UE::Math::TQuat<double>,UE::Math::TVector<double>_>
                     (&local_728,&local_1a68,&local_1ab8);
  puVar13 = local_1568;
  for (lVar8 = 0x80; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar13 = *(undefined1 *)pTVar2->M[0];
    pTVar2 = (TMatrix<double> *)((longlong)pTVar2->M[0] + 1);
    puVar13 = puVar13 + 1;
  }
  pTVar2 = Concatenate<UE::Math::TVector<double>,UE::Math::TRotator<double>_>
                     (&local_6a8,&local_1ab8,&local_1aa0);
  puVar13 = local_1568;
  for (lVar8 = 0x80; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar13 = *(undefined1 *)pTVar2->M[0];
    pTVar2 = (TMatrix<double> *)((longlong)pTVar2->M[0] + 1);
    puVar13 = puVar13 + 1;
  }
  pTVar2 = Concatenate<UE::Math::TRotator<double>,UE::Math::TVector<double>_>
                     (&local_628,&local_1aa0,&local_1ab8);
  puVar13 = local_1568;
  for (lVar8 = 0x80; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar13 = *(undefined1 *)pTVar2->M[0];
    pTVar2 = (TMatrix<double> *)((longlong)pTVar2->M[0] + 1);
    puVar13 = puVar13 + 1;
  }
  pTVar2 = Concatenate<UE::Math::TVector<double>,UE::Math::TMatrix<double>_>
                     (&local_5a8,&local_1ab8,&local_1458);
  puVar13 = local_1568;
  for (lVar8 = 0x80; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar13 = *(undefined1 *)pTVar2->M[0];
    pTVar2 = (TMatrix<double> *)((longlong)pTVar2->M[0] + 1);
    puVar13 = puVar13 + 1;
  }
  pTVar2 = Concatenate<UE::Math::TMatrix<double>,UE::Math::TVector<double>_>
                     (&local_528,&local_1458,&local_1ab8);
  puVar13 = local_1568;
  for (lVar8 = 0x80; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar13 = *(undefined1 *)pTVar2->M[0];
    pTVar2 = (TMatrix<double> *)((longlong)pTVar2->M[0] + 1);
    puVar13 = puVar13 + 1;
  }
  pTVar3 = Concatenate<UE::Math::TQuat<double>,UE::Math::TRotator<double>_>
                     (&local_1638,&local_1a68,&local_1aa0);
  puVar13 = local_1748;
  for (lVar8 = 0x20; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar13 = *(undefined1 *)&pTVar3->X;
    pTVar3 = (TQuat<double> *)((longlong)&pTVar3->X + 1);
    puVar13 = puVar13 + 1;
  }
  pTVar3 = Concatenate<UE::Math::TRotator<double>,UE::Math::TQuat<double>_>
                     (&local_1618,&local_1aa0,&local_1a68);
  puVar13 = local_1748;
  for (lVar8 = 0x20; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar13 = *(undefined1 *)&pTVar3->X;
    pTVar3 = (TQuat<double> *)((longlong)&pTVar3->X + 1);
    puVar13 = puVar13 + 1;
  }
  pTVar2 = Concatenate<UE::Math::TQuat<double>,UE::Math::TMatrix<double>_>
                     (&local_4a8,&local_1a68,&local_1458);
  puVar13 = local_1568;
  for (lVar8 = 0x80; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar13 = *(undefined1 *)pTVar2->M[0];
    pTVar2 = (TMatrix<double> *)((longlong)pTVar2->M[0] + 1);
    puVar13 = puVar13 + 1;
  }
  pTVar2 = Concatenate<UE::Math::TMatrix<double>,UE::Math::TQuat<double>_>
                     (&local_428,&local_1458,&local_1a68);
  puVar13 = local_1568;
  for (lVar8 = 0x80; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar13 = *(undefined1 *)pTVar2->M[0];
    pTVar2 = (TMatrix<double> *)((longlong)pTVar2->M[0] + 1);
    puVar13 = puVar13 + 1;
  }
  pTVar2 = Concatenate<UE::Math::TRotator<double>,UE::Math::TMatrix<double>_>
                     (&local_3a8,&local_1aa0,&local_1458);
  puVar13 = local_1568;
  for (lVar8 = 0x80; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar13 = *(undefined1 *)pTVar2->M[0];
    pTVar2 = (TMatrix<double> *)((longlong)pTVar2->M[0] + 1);
    puVar13 = puVar13 + 1;
  }
  pTVar2 = Concatenate<UE::Math::TMatrix<double>,UE::Math::TRotator<double>_>
                     (&local_328,&local_1458,&local_1aa0);
  puVar13 = local_1568;
  for (lVar8 = 0x80; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar13 = *(undefined1 *)pTVar2->M[0];
    pTVar2 = (TMatrix<double> *)((longlong)pTVar2->M[0] + 1);
    puVar13 = puVar13 + 1;
  }
  local_1a38 = Inverse<double>(&local_16f0,&local_1a88);
  pTVar2 = Concatenate<UE::Math::TVector<double>,UE::Math::TRotator<double>_>
                     (&local_2a8,local_1a38,&local_1ad8);
  Concatenate<UE::Math::TMatrix<double>,UE::Math::TVector<double>_>(&local_d28,pTVar2,&local_1a88);
  pTVar2 = &local_d28;
  puVar13 = local_1568;
  for (lVar8 = 0x80; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar13 = *(undefined1 *)pTVar2->M[0];
    pTVar2 = (TMatrix<double> *)((longlong)pTVar2->M[0] + 1);
    puVar13 = puVar13 + 1;
  }
  local_1a30 = Inverse<double>(&local_1708,&local_1a88);
  local_1a28 = Concatenate<UE::Math::TVector<double>,UE::Math::TRotator<double>_>
                         (&local_228,local_1a30,&local_1ad8);
  pTVar2 = Concatenate<UE::Math::TMatrix<double>,float>(&local_1a8,local_1a28,local_1b38.XY);
  Concatenate<UE::Math::TMatrix<double>,UE::Math::TVector<double>_>(&local_ca8,pTVar2,&local_1a88);
  pTVar2 = &local_ca8;
  puVar13 = local_1568;
  for (lVar8 = 0x80; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar13 = *(undefined1 *)pTVar2->M[0];
    pTVar2 = (TMatrix<double> *)((longlong)pTVar2->M[0] + 1);
    puVar13 = puVar13 + 1;
  }
  TScale2<float>::TScale2<float>(&local_1b30,__real_3fb33333,__real_404ccccd);
  TShear2<float>::TShear2<float>(&local_1b20,__real_c0600000,__real_c0933333);
  local_1b00._s_0.X = __real_401c000000000000;
  local_1b00._s_0.Y = __real_4020000000000000;
  TQuat2<float>::TQuat2<float>(&local_1b18,__real_3fb33333);
  TMatrix2x2<float>::TMatrix2x2<float>
            (&local_15c0,__real_40a00000,__real_40c00000,__real_40e00000,__real_41000000);
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
            (&local_1a20,(TVector2<double> *)&local_1b00._s_0);
  FSlateLayoutTransform::FSlateLayoutTransform(&local_1b10,local_1b38._s_0.X,&local_1a20);
  local_1928._s_0.X = __real_4014000000000000;
  local_1928._s_0.Y = __real_401c000000000000;
  local_1a18 = &local_1928;
  local_1ae0 = __real_42340000;
  local_1adc = __real_42340000 * __real_3c8efa35;
  local_19f0 = local_1a18;
  local_1a00 = TQuat2<float>::TQuat2<float>(&local_1818,local_1adc);
  local_1a10 = TShear2<float>::TShear2<float>(&local_1810,__real_3f000000,__real_40000000);
  local_1a08 = TScale2<float>::TScale2<float>(&local_1808,__real_40000000,__real_40800000);
  local_19f8 = Concatenate<TScale2<float>,TShear2<float>_>(&local_1388,local_1a08,local_1a10);
  pTVar4 = Concatenate<TMatrix2x2<float>,TQuat2<float>_>(&local_1398,local_19f8,local_1a00);
  Concatenate<float,double>(&local_15a0,pTVar4,(TVector2<double> *)&local_19f0->_s_0);
  local_19e8 = TransformConverter<TScale2<float>_>::Convert(&local_1b30);
  local_1800 = local_19e8;
  local_19e0 = TransformConverter<TShear2<float>_>::Convert(&local_1b20);
  local_1878 = local_19e0;
  local_19d8 = TransformConverter<UE::Math::TVector2<double>_>::Convert
                         ((TVector2<double> *)&local_1b00._s_0);
  local_1870 = local_19d8;
  local_19d0 = TransformConverter<TQuat2<float>_>::Convert(&local_1b18);
  local_1868 = local_19d0;
  local_19c8 = TransformConverter<TMatrix2x2<float>_>::Convert(&local_15c0);
  local_1860 = local_19c8;
  local_19c0 = TransformConverter<FSlateLayoutTransform>::Convert(&local_1b10);
  local_1840 = local_19c0;
  local_1838 = TransformCast<TTransform2<float>,TTransform2<float>_>(&local_15a0);
  Concatenate<TScale2<float>_>((TScale2<float> *)&local_1ac0._s_0,&local_1b30);
  Concatenate<TShear2<float>_>(&local_1368,&local_1b20,&local_1b20);
  UE::Math::Concatenate<double>
            (&local_1760,(TVector2<double> *)&local_1b00._s_0,(TVector2<double> *)&local_1b00._s_0);
  Concatenate<TQuat2<float>_>(&local_1830,&local_1b18);
  Concatenate<TMatrix2x2<float>_>(&local_13a8,&local_15c0,&local_15c0);
  Concatenate<FSlateLayoutTransform>(&local_1968,&local_1b10,&local_1b10);
  Concatenate<TTransform2<float>_>(&local_1588,&local_15a0,&local_15a0);
  TransformConverter<FSlateLayoutTransform>::Convert<float>(&local_18d0,local_1b38.XY);
  pFVar7 = &local_18d0;
  pFVar14 = &local_1968;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pFVar14->Scale = *(undefined1 *)&pFVar7->Scale;
    pFVar7 = (FSlateLayoutTransform *)((longlong)&pFVar7->Scale + 1);
    pFVar14 = (FSlateLayoutTransform *)((longlong)&pFVar14->Scale + 1);
  }
  TransformConverter<FSlateLayoutTransform>::Convert<UE::Math::TVector2<double>_>
            (&local_18c4,(TVector2<double> *)&local_1b00._s_0);
  pFVar7 = &local_18c4;
  pFVar14 = &local_1968;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pFVar14->Scale = *(undefined1 *)&pFVar7->Scale;
    pFVar7 = (FSlateLayoutTransform *)((longlong)&pFVar7->Scale + 1);
    pFVar14 = (FSlateLayoutTransform *)((longlong)&pFVar14->Scale + 1);
  }
  TransformConverter<TTransform2<float>_>::Convert<float>(&local_14e8,local_1b38.XY);
  pTVar5 = &local_14e8;
  pTVar15 = &local_1588;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  TransformConverter<TTransform2<float>_>::Convert<TScale2<float>_>(&local_14d0,&local_1b30);
  pTVar5 = &local_14d0;
  pTVar15 = &local_1588;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  TransformConverter<TTransform2<float>_>::Convert<TShear2<float>_>(&local_14b8,&local_1b20);
  pTVar5 = &local_14b8;
  pTVar15 = &local_1588;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  TransformConverter<TTransform2<float>_>::Convert<UE::Math::TVector2<double>_>
            (&local_14a0,(TVector2<double> *)&local_1b00._s_0);
  pTVar5 = &local_14a0;
  pTVar15 = &local_1588;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  TransformConverter<TTransform2<float>_>::Convert<TQuat2<float>_>(&local_1488,&local_1b18);
  pTVar5 = &local_1488;
  pTVar15 = &local_1588;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  TransformConverter<TTransform2<float>_>::Convert<TMatrix2x2<float>_>(&local_1470,&local_15c0);
  pTVar5 = &local_1470;
  pTVar15 = &local_1588;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  pTVar5 = TransformCast<TTransform2<float>,FSlateLayoutTransform>(&local_1108,&local_1b10);
  pTVar15 = &local_1588;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  TVar6 = Concatenate<float,TScale2<float>_>(local_1828,(TScale2<float> *)&local_1b38._s_0);
  local_1ac0 = *(TVector2<float>_u_0 *)TVar6.Scale.field0_0x0;
  TVar6 = Concatenate<TScale2<float>,float>(&local_1820,(float *)&local_1b30);
  local_1ac0 = *(TVector2<float>_u_0 *)TVar6.Scale.field0_0x0;
  Concatenate<FSlateLayoutTransform>(&local_1af0,&local_1b10,&local_1b10);
  pFVar7 = Concatenate<double>(&local_1784,local_1b38._s_0.X,(TVector2<double> *)&local_1b00._s_0);
  pFVar14 = &local_1af0;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pFVar14->Scale = *(undefined1 *)&pFVar7->Scale;
    pFVar7 = (FSlateLayoutTransform *)((longlong)&pFVar7->Scale + 1);
    pFVar14 = (FSlateLayoutTransform *)((longlong)&pFVar14->Scale + 1);
  }
  pFVar7 = Concatenate<double>(&local_1778,(TVector2<double> *)&local_1b00._s_0,local_1b38._s_0.X);
  pFVar14 = &local_1af0;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pFVar14->Scale = *(undefined1 *)&pFVar7->Scale;
    pFVar7 = (FSlateLayoutTransform *)((longlong)&pFVar7->Scale + 1);
    pFVar14 = (FSlateLayoutTransform *)((longlong)&pFVar14->Scale + 1);
  }
  pFVar7 = Concatenate<float,FSlateLayoutTransform>(&local_176c,local_1b38.XY,&local_1b10);
  pFVar14 = &local_1af0;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pFVar14->Scale = *(undefined1 *)&pFVar7->Scale;
    pFVar7 = (FSlateLayoutTransform *)((longlong)&pFVar7->Scale + 1);
    pFVar14 = (FSlateLayoutTransform *)((longlong)&pFVar14->Scale + 1);
  }
  pFVar7 = Concatenate<UE::Math::TVector2<double>,FSlateLayoutTransform>
                     (&local_17a8,(TVector2<double> *)&local_1b00._s_0,&local_1b10);
  pFVar14 = &local_1af0;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pFVar14->Scale = *(undefined1 *)&pFVar7->Scale;
    pFVar7 = (FSlateLayoutTransform *)((longlong)&pFVar7->Scale + 1);
    pFVar14 = (FSlateLayoutTransform *)((longlong)&pFVar14->Scale + 1);
  }
  pFVar7 = Concatenate<FSlateLayoutTransform,float>(&local_179c,&local_1b10,local_1b38.XY);
  pFVar14 = &local_1af0;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pFVar14->Scale = *(undefined1 *)&pFVar7->Scale;
    pFVar7 = (FSlateLayoutTransform *)((longlong)&pFVar7->Scale + 1);
    pFVar14 = (FSlateLayoutTransform *)((longlong)&pFVar14->Scale + 1);
  }
  pFVar7 = Concatenate<FSlateLayoutTransform,UE::Math::TVector2<double>_>
                     (&local_1790,&local_1b10,(TVector2<double> *)&local_1b00._s_0);
  pFVar14 = &local_1af0;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)&pFVar14->Scale = *(undefined1 *)&pFVar7->Scale;
    pFVar7 = (FSlateLayoutTransform *)((longlong)&pFVar7->Scale + 1);
    pFVar14 = (FSlateLayoutTransform *)((longlong)&pFVar14->Scale + 1);
  }
  Concatenate<TTransform2<float>_>(&local_15d8,&local_15a0,&local_15a0);
  pTVar5 = Concatenate<float,double>(&local_10f0,(TVector2<double> *)&local_1b00._s_0,&local_1b30);
  pTVar15 = &local_15d8;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  pTVar5 = Concatenate<float,double>(&local_10d8,(TVector2<double> *)&local_1b00._s_0,&local_1b20);
  pTVar15 = &local_15d8;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  pTVar5 = Concatenate<float,double>(&local_10c0,(TVector2<double> *)&local_1b00._s_0,&local_1b18);
  pTVar15 = &local_15d8;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  pTVar5 = Concatenate<float,double>(&local_10a8,(TVector2<double> *)&local_1b00._s_0,&local_15c0);
  pTVar15 = &local_15d8;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  pTVar5 = Concatenate<float,double>(&local_1090,(TVector2<double> *)&local_1b00._s_0,&local_15a0);
  pTVar15 = &local_15d8;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  pTVar5 = Concatenate<TScale2<float>,FSlateLayoutTransform>(&local_1078,&local_1b30,&local_1b10);
  pTVar15 = &local_15d8;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  pTVar5 = Concatenate<TScale2<float>,TTransform2<float>_>(&local_1060,&local_1b30,&local_15a0);
  pTVar15 = &local_15d8;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  pTVar5 = Concatenate<TShear2<float>,FSlateLayoutTransform>(&local_1048,&local_1b20,&local_1b10);
  pTVar15 = &local_15d8;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  pTVar5 = Concatenate<TShear2<float>,TTransform2<float>_>(&local_12e8,&local_1b20,&local_15a0);
  pTVar15 = &local_15d8;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  pTVar5 = Concatenate<TQuat2<float>,FSlateLayoutTransform>(&local_12d0,&local_1b18,&local_1b10);
  pTVar15 = &local_15d8;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  pTVar5 = Concatenate<TQuat2<float>,TTransform2<float>_>(&local_12b8,&local_1b18,&local_15a0);
  pTVar15 = &local_15d8;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  pTVar5 = Concatenate<TMatrix2x2<float>,FSlateLayoutTransform>(&local_12a0,&local_15c0,&local_1b10)
  ;
  pTVar15 = &local_15d8;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  pTVar5 = Concatenate<TMatrix2x2<float>,TTransform2<float>_>(&local_1288,&local_15c0,&local_15a0);
  pTVar15 = &local_15d8;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  pTVar5 = Concatenate<FSlateLayoutTransform,TTransform2<float>_>
                     (&local_1270,&local_1b10,&local_15a0);
  pTVar15 = &local_15d8;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  pTVar5 = Concatenate<float,double>(&local_1258,&local_1b30,(TVector2<double> *)&local_1b00._s_0);
  pTVar15 = &local_15d8;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  pTVar5 = Concatenate<float,double>(&local_1240,&local_1b20,(TVector2<double> *)&local_1b00._s_0);
  pTVar15 = &local_15d8;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  pTVar5 = Concatenate<float,double>(&local_1228,&local_1b18,(TVector2<double> *)&local_1b00._s_0);
  pTVar15 = &local_15d8;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  pTVar5 = Concatenate<float,double>(&local_1210,&local_15c0,(TVector2<double> *)&local_1b00._s_0);
  pTVar15 = &local_15d8;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  pTVar5 = Concatenate<float,double>(&local_11f8,&local_15a0,(TVector2<double> *)&local_1b00._s_0);
  pTVar15 = &local_15d8;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  pTVar5 = Concatenate<FSlateLayoutTransform,TScale2<float>_>(&local_11e0,&local_1b10,&local_1b30);
  pTVar15 = &local_15d8;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  pTVar5 = Concatenate<TTransform2<float>,TScale2<float>_>(&local_11c8,&local_15a0,&local_1b30);
  pTVar15 = &local_15d8;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  pTVar5 = Concatenate<FSlateLayoutTransform,TShear2<float>_>(&local_1120,&local_1b10,&local_1b20);
  pTVar15 = &local_15d8;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  pTVar5 = Concatenate<TTransform2<float>,TShear2<float>_>(&local_11b0,&local_15a0,&local_1b20);
  pTVar15 = &local_15d8;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  pTVar5 = Concatenate<FSlateLayoutTransform,TQuat2<float>_>(&local_1198,&local_1b10,&local_1b18);
  pTVar15 = &local_15d8;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  pTVar5 = Concatenate<TTransform2<float>,TQuat2<float>_>(&local_1180,&local_15a0,&local_1b18);
  pTVar15 = &local_15d8;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  pTVar5 = Concatenate<FSlateLayoutTransform,TMatrix2x2<float>_>
                     (&local_1168,&local_1b10,&local_15c0);
  pTVar15 = &local_15d8;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  pTVar5 = Concatenate<TTransform2<float>,TMatrix2x2<float>_>(&local_1150,&local_15a0,&local_15c0);
  pTVar15 = &local_15d8;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  pTVar5 = Concatenate<TTransform2<float>,FSlateLayoutTransform>
                     (&local_1138,&local_15a0,&local_1b10);
  pTVar15 = &local_15d8;
  for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)(pTVar15->M).M[0] = *(undefined1 *)(pTVar5->M).M[0];
    pTVar5 = (TTransform2<float> *)((longlong)(pTVar5->M).M[0] + 1);
    pTVar15 = (TTransform2<float> *)((longlong)(pTVar15->M).M[0] + 1);
  }
  Concatenate<TScale2<float>,TShear2<float>_>(&local_15b0,&local_1b30,&local_1b20);
  pTVar4 = Concatenate<TScale2<float>,TQuat2<float>_>(&local_13b8,&local_1b30,&local_1b18);
  pTVar16 = &local_15b0;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)pTVar16->M[0] = *(undefined1 *)pTVar4->M[0];
    pTVar4 = (TMatrix2x2<float> *)((longlong)pTVar4->M[0] + 1);
    pTVar16 = (TMatrix2x2<float> *)((longlong)pTVar16->M[0] + 1);
  }
  pTVar4 = Concatenate<TScale2<float>,TMatrix2x2<float>_>(&local_13c8,&local_1b30,&local_15c0);
  pTVar16 = &local_15b0;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)pTVar16->M[0] = *(undefined1 *)pTVar4->M[0];
    pTVar4 = (TMatrix2x2<float> *)((longlong)pTVar4->M[0] + 1);
    pTVar16 = (TMatrix2x2<float> *)((longlong)pTVar16->M[0] + 1);
  }
  pTVar4 = Concatenate<TShear2<float>,TScale2<float>_>(&local_13d8,&local_1b20,&local_1b30);
  pTVar16 = &local_15b0;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)pTVar16->M[0] = *(undefined1 *)pTVar4->M[0];
    pTVar4 = (TMatrix2x2<float> *)((longlong)pTVar4->M[0] + 1);
    pTVar16 = (TMatrix2x2<float> *)((longlong)pTVar16->M[0] + 1);
  }
  pTVar4 = Concatenate<TQuat2<float>,TScale2<float>_>(&local_12f8,&local_1b18,&local_1b30);
  pTVar16 = &local_15b0;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)pTVar16->M[0] = *(undefined1 *)pTVar4->M[0];
    pTVar4 = (TMatrix2x2<float> *)((longlong)pTVar4->M[0] + 1);
    pTVar16 = (TMatrix2x2<float> *)((longlong)pTVar16->M[0] + 1);
  }
  pTVar4 = Concatenate<TMatrix2x2<float>,TScale2<float>_>(&local_1308,&local_15c0,&local_1b30);
  pTVar16 = &local_15b0;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)pTVar16->M[0] = *(undefined1 *)pTVar4->M[0];
    pTVar4 = (TMatrix2x2<float> *)((longlong)pTVar4->M[0] + 1);
    pTVar16 = (TMatrix2x2<float> *)((longlong)pTVar16->M[0] + 1);
  }
  pTVar4 = Concatenate<TShear2<float>,TQuat2<float>_>(&local_1318,&local_1b20,&local_1b18);
  pTVar16 = &local_15b0;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)pTVar16->M[0] = *(undefined1 *)pTVar4->M[0];
    pTVar4 = (TMatrix2x2<float> *)((longlong)pTVar4->M[0] + 1);
    pTVar16 = (TMatrix2x2<float> *)((longlong)pTVar16->M[0] + 1);
  }
  pTVar4 = Concatenate<TShear2<float>,TMatrix2x2<float>_>(&local_1328,&local_1b20,&local_15c0);
  pTVar16 = &local_15b0;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)pTVar16->M[0] = *(undefined1 *)pTVar4->M[0];
    pTVar4 = (TMatrix2x2<float> *)((longlong)pTVar4->M[0] + 1);
    pTVar16 = (TMatrix2x2<float> *)((longlong)pTVar16->M[0] + 1);
  }
  pTVar4 = Concatenate<TQuat2<float>,TShear2<float>_>(&local_1338,&local_1b18,&local_1b20);
  pTVar16 = &local_15b0;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)pTVar16->M[0] = *(undefined1 *)pTVar4->M[0];
    pTVar4 = (TMatrix2x2<float> *)((longlong)pTVar4->M[0] + 1);
    pTVar16 = (TMatrix2x2<float> *)((longlong)pTVar16->M[0] + 1);
  }
  pTVar4 = Concatenate<TMatrix2x2<float>,TShear2<float>_>(&local_1348,&local_15c0,&local_1b20);
  pTVar16 = &local_15b0;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)pTVar16->M[0] = *(undefined1 *)pTVar4->M[0];
    pTVar4 = (TMatrix2x2<float> *)((longlong)pTVar4->M[0] + 1);
    pTVar16 = (TMatrix2x2<float> *)((longlong)pTVar16->M[0] + 1);
  }
  pTVar4 = Concatenate<TQuat2<float>,TMatrix2x2<float>_>(&local_1358,&local_1b18,&local_15c0);
  pTVar16 = &local_15b0;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)pTVar16->M[0] = *(undefined1 *)pTVar4->M[0];
    pTVar4 = (TMatrix2x2<float> *)((longlong)pTVar4->M[0] + 1);
    pTVar16 = (TMatrix2x2<float> *)((longlong)pTVar16->M[0] + 1);
  }
  pTVar4 = Concatenate<TMatrix2x2<float>,TQuat2<float>_>(&local_1378,&local_15c0,&local_1b18);
  pTVar16 = &local_15b0;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined1 *)pTVar16->M[0] = *(undefined1 *)pTVar4->M[0];
    pTVar4 = (TMatrix2x2<float> *)((longlong)pTVar4->M[0] + 1);
    pTVar16 = (TMatrix2x2<float> *)((longlong)pTVar16->M[0] + 1);
  }
  local_18e8.Pitch = __real_4028ccccc0000000;
  local_18e8.Yaw = __real_4016ccccc0000000;
  local_18e8.Roll = __real_403d000000000000;
  local_19b8 = &local_18e8;
  local_19a8 = UE::Math::TRotationMatrix<double>::Make(&local_128,local_19b8);
  local_1900.Pitch = 0.0;
  local_1900.Yaw = __real_4031800000000000;
  local_1900.Roll = 0.0;
  local_19b0 = &local_1900;
  local_19a0 = UE::Math::TRotationMatrix<double>::Make(&local_a8,local_19b0);
  UE::Math::Concatenate<double>(&local_c28,local_19a0,local_19a8);
  local_1918.Pitch = __real_4028ccccc0000000;
  local_1918.Yaw = __real_4016ccccc0000000;
  local_1918.Roll = __real_403d000000000000;
  local_1998 = &local_1918;
  local_1988 = UE::Math::TQuat<double>::TQuat<double>(&local_15f8,local_1998);
  local_18b8.Pitch = 0.0;
  local_18b8.Yaw = __real_4031800000000000;
  local_18b8.Roll = 0.0;
  local_1990 = &local_18b8;
  local_1980 = UE::Math::TQuat<double>::TQuat<double>(&local_1678,local_1990);
  UE::Math::Concatenate<double>(&local_1728,local_1980,local_1988);
  UE::Math::TVector<double>::TVector<double>
            (&local_1858,__real_4008000000000000,__real_4010000000000000,__real_4014000000000000);
  TransformPoint<double>(&local_1690,&local_c28,&local_1858);
  TransformPoint<double>(&local_16a8,&local_1728,&local_1858);
  return true;
}

// ButtonStates'' @ 15035ff10

void __cdecl `dynamic_atexit_destructor_for_'SMultiBoxTest::ButtonStates__(void)

{
  TArray<bool,TSizedDefaultAllocator<32>_>::~TArray<bool,TSizedDefaultAllocator<32>_>
            (&SMultiBoxTest::ButtonStates);
  return;
}

// DefaultUndeterminedString'' @ 15035ff30

void __cdecl
`dynamic_atexit_destructor_for_'SNumericEntryBox<unsigned_short>::DefaultUndeterminedString__(void)

{
  if (SNumericEntryBox<unsigned_short>::DefaultUndeterminedString.TextData.Reference !=
      (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015035ff3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)
                 *SNumericEntryBox<unsigned_short>::DefaultUndeterminedString.TextData.Reference +
                0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DeveloperCategory'' @ 15035ff50

void __cdecl TestSuiteMenu::_dynamic_atexit_destructor_for__DeveloperCategory__(void)

{
  TSharedRef<FWorkspaceItem,1>::~TSharedRef<FWorkspaceItem,1>(&DeveloperCategory);
  return;
}

// `dynamic_atexit_destructor_for_'Inst'' @ 15035ff70

void __cdecl
`TCommands<FMultiBoxTestCommandList>::GetInstance'::__l2::_dynamic_atexit_destructor_for__Inst__
          (void)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = DAT_155063e70;
  if (DAT_155063e70 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)DAT_155063e70 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00015035ff93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// `dynamic_atexit_destructor_for_'MenuRoot'' @ 15035ffa0

void __cdecl TestSuiteMenu::_dynamic_atexit_destructor_for__MenuRoot__(void)

{
  TSharedRef<FWorkspaceItem,1>::~TSharedRef<FWorkspaceItem,1>(&MenuRoot);
  return;
}

// `dynamic_atexit_destructor_for_'Name'' @ 15035ffc0

void __cdecl
`SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::GetDefaultAccessibleText'::__l2::
_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SComboBox<TSharedPtr<FTextStyles::FFontFamily,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Name'' @ 15035ffe0

void __cdecl
`SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>::GetDefaultAccessibleText'::__l2::
_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'Name'' @ 150360000

void __cdecl
`SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::GetDefaultAccessibleText'::__l2::
_dynamic_atexit_destructor_for__Name__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
               ::__l2::Name.Data.AllocatorInstance.Data;
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_virtual_struct_TOptional<FText>___cdecl_SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::GetDefaultAccessibleText(EAccessibleType)const___ptr64'
      ::__l2::Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'NestedCategory'' @ 150360020

void __cdecl TestSuiteMenu::_dynamic_atexit_destructor_for__NestedCategory__(void)

{
  TSharedRef<FWorkspaceItem,1>::~TSharedRef<FWorkspaceItem,1>(&NestedCategory);
  return;
}

// `dynamic_atexit_destructor_for_'Style'' @ 150360040

void __cdecl
`SRenderTransformManipulatorWidgetImpl::GetStyle'::__l2::_dynamic_atexit_destructor_for__Style__
          (void)

{
  FSlateStyleSet::~FSlateStyleSet
            (&`private:_static_class_ISlateStyle_const&___ptr64___cdecl_SRenderTransformManipulatorWidgetImpl::GetStyle(void)'
              ::__l2::Style);
  return;
}

// `dynamic_atexit_destructor_for_'SuiteTabs'' @ 150360060

void __cdecl TestSuiteMenu::_dynamic_atexit_destructor_for__SuiteTabs__(void)

{
  TSharedRef<FWorkspaceItem,1>::~TSharedRef<FWorkspaceItem,1>(&SuiteTabs);
  return;
}

// `dynamic_atexit_destructor_for_'TestSuite1TabManager'' @ 150360080

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__TestSuite1TabManager__(void)

{
  TSharedPtr<FTabManager,1>::~TSharedPtr<FTabManager,1>(&TestSuite1TabManager);
  return;
}

// `dynamic_atexit_destructor_for_'TestSuite2TabManager'' @ 1503600a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__TestSuite2TabManager__(void)

{
  TSharedPtr<FTabManager,1>::~TSharedPtr<FTabManager,1>(&TestSuite2TabManager);
  return;
}

