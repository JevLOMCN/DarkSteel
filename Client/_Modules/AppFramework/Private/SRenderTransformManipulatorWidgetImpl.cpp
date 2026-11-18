// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 16

// <lambda_invoker_cdecl> @ 14303fbd0

float __cdecl
`SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_10>::<lambda_invoker_cdecl>(void)

{
  TVector2<float> *pTVar1;
  
  pTVar1 = TScale2<float>::GetVector(&TestSuiteNS::Scale);
  return (pTVar1->field0_0x0)._s_0.Y;
}

// <lambda_invoker_cdecl> @ 14303fc00

void __cdecl
`SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_11>::<lambda_invoker_cdecl>
          (float param_1)

{
  TVector2<float> *pTVar1;
  TVector2<float>_u_0 *pTVar2;
  TShear2<float> local_18 [3];
  
  pTVar1 = TShear2<float>::GetVector(&TestSuiteNS::Shear);
  pTVar2 = (TVector2<float>_u_0 *)
           TShear2<float>::TShear2<float>(local_18,param_1,(pTVar1->field0_0x0)._s_0.Y);
  TestSuiteNS::Shear.Shear.field0_0x0 = (TVector2<float>)(TVector2<float>)pTVar2->_s_0;
  return;
}

// <lambda_invoker_cdecl> @ 14303fc40

float __cdecl
`SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_12>::<lambda_invoker_cdecl>(void)

{
  TVector2<float> *pTVar1;
  
  pTVar1 = TShear2<float>::GetVector(&TestSuiteNS::Shear);
  return (pTVar1->field0_0x0)._s_0.X;
}

// <lambda_invoker_cdecl> @ 14303fc70

void __cdecl
`SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_13>::<lambda_invoker_cdecl>
          (float param_1)

{
  TVector2<float> *pTVar1;
  TVector2<float>_u_0 *pTVar2;
  TShear2<float> local_18 [3];
  
  pTVar1 = TShear2<float>::GetVector(&TestSuiteNS::Shear);
  pTVar2 = (TVector2<float>_u_0 *)
           TShear2<float>::TShear2<float>(local_18,(pTVar1->field0_0x0)._s_0.X,param_1);
  TestSuiteNS::Shear.Shear.field0_0x0 = (TVector2<float>)(TVector2<float>)pTVar2->_s_0;
  return;
}

// <lambda_invoker_cdecl> @ 14303fcb0

float __cdecl
`SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_14>::<lambda_invoker_cdecl>(void)

{
  TVector2<float> *pTVar1;
  
  pTVar1 = TShear2<float>::GetVector(&TestSuiteNS::Shear);
  return (pTVar1->field0_0x0)._s_0.Y;
}

// <lambda_invoker_cdecl> @ 14303fd20

void __cdecl
`SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (float param_1)

{
  TVector2<float>_u_0 *pTVar1;
  TQuat2<float> local_1c [3];
  
  TestSuiteNS::RotDeg = param_1;
  pTVar1 = (TVector2<float>_u_0 *)TQuat2<float>::TQuat2<float>(local_1c,param_1 * __real_3c8efa35);
  TestSuiteNS::Rot.Rot.field0_0x0 = (TVector2<float>)(TVector2<float>)pTVar1->_s_0;
  return;
}

// <lambda_invoker_cdecl> @ 14303fd80

float __cdecl
`SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_2>::<lambda_invoker_cdecl>(void)

{
  return TestSuiteNS::RotDeg;
}

// <lambda_invoker_cdecl> @ 14303fdb0

void __cdecl
`SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_3>::<lambda_invoker_cdecl>
          (float param_1)

{
  TestSuiteNS::Offset.field0_0x0._s_0.X = param_1;
  return;
}

// <lambda_invoker_cdecl> @ 14303fdd0

float __cdecl
`SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_4>::<lambda_invoker_cdecl>(void)

{
  return TestSuiteNS::Offset.field0_0x0._s_0.X;
}

// <lambda_invoker_cdecl> @ 14303fe00

void __cdecl
`SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_5>::<lambda_invoker_cdecl>
          (float param_1)

{
  TestSuiteNS::Offset.field0_0x0._s_0.Y = param_1;
  return;
}

// <lambda_invoker_cdecl> @ 14303fe20

float __cdecl
`SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_6>::<lambda_invoker_cdecl>(void)

{
  return TestSuiteNS::Offset.field0_0x0._s_0.Y;
}

// <lambda_invoker_cdecl> @ 14303fe50

void __cdecl
`SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_7>::<lambda_invoker_cdecl>
          (float param_1)

{
  TVector2<float> *pTVar1;
  TVector2<float>_u_0 *pTVar2;
  TScale2<float> local_18 [3];
  
  pTVar1 = TScale2<float>::GetVector(&TestSuiteNS::Scale);
  pTVar2 = (TVector2<float>_u_0 *)
           TScale2<float>::TScale2<float>(local_18,param_1,(pTVar1->field0_0x0)._s_0.Y);
  TestSuiteNS::Scale.Scale.field0_0x0 = (TVector2<float>)(TVector2<float>)pTVar2->_s_0;
  return;
}

// <lambda_invoker_cdecl> @ 14303fe90

float __cdecl
`SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_8>::<lambda_invoker_cdecl>(void)

{
  TVector2<float> *pTVar1;
  
  pTVar1 = TScale2<float>::GetVector(&TestSuiteNS::Scale);
  return (pTVar1->field0_0x0)._s_0.X;
}

// <lambda_invoker_cdecl> @ 14303fec0

void __cdecl
`SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_9>::<lambda_invoker_cdecl>
          (float param_1)

{
  TVector2<float> *pTVar1;
  TVector2<float>_u_0 *pTVar2;
  TScale2<float> local_18 [3];
  
  pTVar1 = TScale2<float>::GetVector(&TestSuiteNS::Scale);
  pTVar2 = (TVector2<float>_u_0 *)
           TScale2<float>::TScale2<float>(local_18,(pTVar1->field0_0x0)._s_0.X,param_1);
  TestSuiteNS::Scale.Scale.field0_0x0 = (TVector2<float>)(TVector2<float>)pTVar2->_s_0;
  return;
}

// Construct @ 14308a5f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SRenderTransformManipulatorWidgetImpl::Construct
          (SRenderTransformManipulatorWidgetImpl *this,FArguments *param_1)

{
  FSlotArguments *pFVar1;
  FName *pFVar2;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SImage,1> *pTVar3;
  FText *pFVar4;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar5;
  TSharedRef<STextBlock,1> *pTVar6;
  FSlotArguments *pFVar7;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> *pTVar8;
  TSharedRef<SSpinBox<float>,1> *pTVar9;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *pTVar10;
  TSharedRef<SHorizontalBox,1> *pTVar11;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<SVerticalBox,1> *pTVar12;
  FArguments *pFVar13;
  T0RequiredArgs local_8ef8;
  T0RequiredArgs local_8ef7;
  <lambda_1> local_8ef6;
  T0RequiredArgs local_8ef5;
  T0RequiredArgs local_8ef4;
  T0RequiredArgs local_8ef3;
  <lambda_3> local_8ef2;
  T0RequiredArgs local_8ef1;
  T0RequiredArgs local_8ef0;
  T0RequiredArgs local_8eef;
  <lambda_5> local_8eee;
  T0RequiredArgs local_8eed;
  T0RequiredArgs local_8eec;
  T0RequiredArgs local_8eeb;
  <lambda_7> local_8eea;
  T0RequiredArgs local_8ee9;
  T0RequiredArgs local_8ee8;
  T0RequiredArgs local_8ee7;
  <lambda_9> local_8ee6;
  T0RequiredArgs local_8ee5;
  T0RequiredArgs local_8ee4;
  T0RequiredArgs local_8ee3;
  <lambda_11> local_8ee2;
  T0RequiredArgs local_8ee1;
  T0RequiredArgs local_8ee0;
  T0RequiredArgs local_8edf;
  <lambda_13> local_8ede;
  T0RequiredArgs local_8edd;
  T0RequiredArgs local_8edc;
  T0RequiredArgs local_8edb;
  <lambda_1> local_8eda;
  <lambda_3> local_8ed9;
  <lambda_5> local_8ed8;
  <lambda_7> local_8ed7;
  <lambda_9> local_8ed6;
  <lambda_11> local_8ed5;
  <lambda_13> local_8ed4;
  float local_8ed0;
  float local_8ecc;
  float local_8ec8;
  float local_8ec4;
  float local_8ec0;
  float local_8ebc;
  float local_8eb8;
  float local_8eb4;
  float local_8eb0;
  float local_8eac;
  float local_8ea8;
  float local_8ea4;
  float local_8ea0;
  float local_8e9c;
  ISlateStyle *local_8e98;
  undefined4 local_8e90;
  undefined1 *local_8e88;
  FArguments *local_8e80;
  FArguments *local_8e78;
  FName *local_8e70;
  FName local_8e68;
  code *local_8e60;
  FSlateBrush *local_8e58;
  TAttribute<FSlateBrush_const_*> *local_8e50;
  TAttribute<FSlateBrush_const_*> *local_8e48;
  FArguments *local_8e40;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> *local_8e38;
  FArguments *local_8e30;
  FSlotArguments *local_8e28;
  FSlotArguments *local_8e20;
  FArguments *local_8e18;
  undefined1 *local_8e10;
  TAttribute<FText> *local_8e08;
  TAttribute<FText> *local_8e00;
  FArguments *local_8df8;
  FArguments *local_8df0;
  FSlotArguments *local_8de8;
  FSlotArguments *local_8de0;
  FArguments *local_8dd8;
  undefined1 *local_8dd0;
  TAttribute<TOptional<float>_> *local_8dc8;
  TAttribute<TOptional<float>_> *local_8dc0;
  FArguments *local_8db8;
  TAttribute<TOptional<float>_> *local_8db0;
  TAttribute<TOptional<float>_> *local_8da8;
  FArguments *local_8da0;
  FArguments *local_8d98;
  FArguments *local_8d90;
  FArguments *local_8d88;
  FSlotArguments *local_8d80;
  FSlotArguments *local_8d78;
  FArguments *local_8d70;
  FArguments *local_8d68;
  FSlotArguments *local_8d60;
  FSlotArguments *local_8d58;
  FArguments *local_8d50;
  undefined1 *local_8d48;
  TAttribute<FText> *local_8d40;
  TAttribute<FText> *local_8d38;
  FArguments *local_8d30;
  FArguments *local_8d28;
  FSlotArguments *local_8d20;
  FSlotArguments *local_8d18;
  FArguments *local_8d10;
  undefined1 *local_8d08;
  TAttribute<TOptional<float>_> *local_8d00;
  TAttribute<TOptional<float>_> *local_8cf8;
  FArguments *local_8cf0;
  TAttribute<TOptional<float>_> *local_8ce8;
  TAttribute<TOptional<float>_> *local_8ce0;
  FArguments *local_8cd8;
  FArguments *local_8cd0;
  FArguments *local_8cc8;
  FArguments *local_8cc0;
  FSlotArguments *local_8cb8;
  FSlotArguments *local_8cb0;
  FArguments *local_8ca8;
  FArguments *local_8ca0;
  FSlotArguments *local_8c98;
  FSlotArguments *local_8c90;
  FArguments *local_8c88;
  undefined1 *local_8c80;
  TAttribute<FText> *local_8c78;
  TAttribute<FText> *local_8c70;
  FArguments *local_8c68;
  FArguments *local_8c60;
  FSlotArguments *local_8c58;
  FSlotArguments *local_8c50;
  FArguments *local_8c48;
  undefined1 *local_8c40;
  TAttribute<TOptional<float>_> *local_8c38;
  TAttribute<TOptional<float>_> *local_8c30;
  FArguments *local_8c28;
  TAttribute<TOptional<float>_> *local_8c20;
  TAttribute<TOptional<float>_> *local_8c18;
  FArguments *local_8c10;
  FArguments *local_8c08;
  FArguments *local_8c00;
  FArguments *local_8bf8;
  FSlotArguments *local_8bf0;
  FSlotArguments *local_8be8;
  FArguments *local_8be0;
  FArguments *local_8bd8;
  FSlotArguments *local_8bd0;
  FSlotArguments *local_8bc8;
  FArguments *local_8bc0;
  undefined1 *local_8bb8;
  TAttribute<FText> *local_8bb0;
  TAttribute<FText> *local_8ba8;
  FArguments *local_8ba0;
  FArguments *local_8b98;
  FSlotArguments *local_8b90;
  FSlotArguments *local_8b88;
  FArguments *local_8b80;
  undefined1 *local_8b78;
  TAttribute<TOptional<float>_> *local_8b70;
  TAttribute<TOptional<float>_> *local_8b68;
  FArguments *local_8b60;
  TAttribute<TOptional<float>_> *local_8b58;
  TAttribute<TOptional<float>_> *local_8b50;
  FArguments *local_8b48;
  FArguments *local_8b40;
  FArguments *local_8b38;
  FArguments *local_8b30;
  FSlotArguments *local_8b28;
  FSlotArguments *local_8b20;
  FArguments *local_8b18;
  FArguments *local_8b10;
  FSlotArguments *local_8b08;
  FSlotArguments *local_8b00;
  FArguments *local_8af8;
  undefined1 *local_8af0;
  TAttribute<FText> *local_8ae8;
  TAttribute<FText> *local_8ae0;
  FArguments *local_8ad8;
  FArguments *local_8ad0;
  FSlotArguments *local_8ac8;
  FSlotArguments *local_8ac0;
  FArguments *local_8ab8;
  undefined1 *local_8ab0;
  TAttribute<TOptional<float>_> *local_8aa8;
  TAttribute<TOptional<float>_> *local_8aa0;
  FArguments *local_8a98;
  TAttribute<TOptional<float>_> *local_8a90;
  TAttribute<TOptional<float>_> *local_8a88;
  FArguments *local_8a80;
  FArguments *local_8a78;
  FArguments *local_8a70;
  FArguments *local_8a68;
  FSlotArguments *local_8a60;
  FSlotArguments *local_8a58;
  FArguments *local_8a50;
  FArguments *local_8a48;
  FSlotArguments *local_8a40;
  FSlotArguments *local_8a38;
  FArguments *local_8a30;
  undefined1 *local_8a28;
  TAttribute<FText> *local_8a20;
  TAttribute<FText> *local_8a18;
  FArguments *local_8a10;
  FArguments *local_8a08;
  FSlotArguments *local_8a00;
  FSlotArguments *local_89f8;
  FArguments *local_89f0;
  undefined1 *local_89e8;
  TAttribute<TOptional<float>_> *local_89e0;
  TAttribute<TOptional<float>_> *local_89d8;
  FArguments *local_89d0;
  TAttribute<TOptional<float>_> *local_89c8;
  TAttribute<TOptional<float>_> *local_89c0;
  FArguments *local_89b8;
  FArguments *local_89b0;
  FArguments *local_89a8;
  FArguments *local_89a0;
  FSlotArguments *local_8998;
  FSlotArguments *local_8990;
  FArguments *local_8988;
  FArguments *local_8980;
  FSlotArguments *local_8978;
  FSlotArguments *local_8970;
  FArguments *local_8968;
  undefined1 *local_8960;
  TAttribute<FText> *local_8958;
  TAttribute<FText> *local_8950;
  FArguments *local_8948;
  FArguments *local_8940;
  FSlotArguments *local_8938;
  FSlotArguments *local_8930;
  FArguments *local_8928;
  undefined1 *local_8920;
  TAttribute<TOptional<float>_> *local_8918;
  TAttribute<TOptional<float>_> *local_8910;
  FArguments *local_8908;
  TAttribute<TOptional<float>_> *local_8900;
  TAttribute<TOptional<float>_> *local_88f8;
  FArguments *local_88f0;
  FArguments *local_88e8;
  FArguments *local_88e0;
  FArguments *local_88d8;
  FSlotArguments *local_88d0;
  FSlotArguments *local_88c8;
  FArguments *local_88c0;
  FArguments *local_88b8;
  FSlotArguments *local_88b0;
  FSlotArguments *local_88a8;
  FArguments *local_88a0;
  FArguments *local_8898;
  FArguments *local_8890;
  TSharedRef<SWidget,1> local_8888;
  TSharedRef<SWidget,1> local_8878;
  TSharedRef<SWidget,1> local_8868;
  TSharedRef<SWidget,1> local_8858;
  TSharedRef<SWidget,1> local_8848;
  TSharedRef<SWidget,1> local_8838;
  TSharedRef<SWidget,1> local_8828;
  TSharedRef<SWidget,1> local_8818;
  TSharedRef<SWidget,1> local_8808;
  TSharedRef<SWidget,1> local_87f8;
  TSharedRef<SWidget,1> local_87e8;
  TSharedRef<SWidget,1> local_87d8;
  TSharedRef<SWidget,1> local_87c8;
  TSharedRef<SWidget,1> local_87b8;
  TSharedRef<SWidget,1> local_87a8;
  TSharedRef<SWidget,1> local_8798;
  TSharedRef<SWidget,1> local_8788;
  TSharedRef<SWidget,1> local_8778;
  TSharedRef<SWidget,1> local_8768;
  TSharedRef<SWidget,1> local_8758;
  TSharedRef<SWidget,1> local_8748;
  TSharedRef<SWidget,1> local_8738;
  TSharedRef<SWidget,1> local_8728;
  FName local_8718;
  TSharedRef<SVerticalBox,1> local_8710;
  TSharedRef<SHorizontalBox,1> local_8700;
  TSharedRef<SSpinBox<float>,1> local_86f0;
  TSharedRef<STextBlock,1> local_86e0;
  FText local_86d0;
  TSharedRef<SHorizontalBox,1> local_86c0;
  TSharedRef<SSpinBox<float>,1> local_86b0;
  TSharedRef<STextBlock,1> local_86a0;
  FText local_8690;
  TSharedRef<SHorizontalBox,1> local_8680;
  TSharedRef<SSpinBox<float>,1> local_8670;
  TSharedRef<STextBlock,1> local_8660;
  FText local_8650;
  TSharedRef<SHorizontalBox,1> local_8640;
  TSharedRef<SSpinBox<float>,1> local_8630;
  TSharedRef<STextBlock,1> local_8620;
  FText local_8610;
  TSharedRef<SHorizontalBox,1> local_8600;
  TSharedRef<SSpinBox<float>,1> local_85f0;
  TSharedRef<STextBlock,1> local_85e0;
  FText local_85d0;
  TSharedRef<SHorizontalBox,1> local_85c0;
  TSharedRef<SSpinBox<float>,1> local_85b0;
  TSharedRef<STextBlock,1> local_85a0;
  FText local_8590;
  TSharedRef<SHorizontalBox,1> local_8580;
  TSharedRef<SSpinBox<float>,1> local_8570;
  TSharedRef<STextBlock,1> local_8560;
  FText local_8550;
  TSharedRef<SImage,1> local_8540;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_8530;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_8518;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> local_8500;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_84e8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_84d0;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> local_84b8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_84a0;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_8488;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> local_8470;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8458;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_8440;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> local_8428;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8410;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_83f8;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> local_83e0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_83c8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_83b0;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> local_8398;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8380;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_8368;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> local_8350;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_8338;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_8320;
  TAttribute<FSlateBrush_const_*> local_8308;
  TAttribute<TOptional<float>_> local_82e0;
  TAttribute<TOptional<float>_> local_82b8;
  TAttribute<TOptional<float>_> local_8290;
  TAttribute<TOptional<float>_> local_8268;
  TAttribute<TOptional<float>_> local_8240;
  TAttribute<TOptional<float>_> local_8218;
  TAttribute<TOptional<float>_> local_81f0;
  TAttribute<TOptional<float>_> local_81c8;
  TAttribute<TOptional<float>_> local_81a0;
  TAttribute<TOptional<float>_> local_8178;
  TAttribute<TOptional<float>_> local_8150;
  TAttribute<TOptional<float>_> local_8128;
  TAttribute<TOptional<float>_> local_8100;
  TAttribute<TOptional<float>_> local_80d8;
  TAttribute<FText> local_80b0;
  TAttribute<FText> local_8080;
  TAttribute<FText> local_8050;
  TAttribute<FText> local_8020;
  TAttribute<FText> local_7ff0;
  TAttribute<FText> local_7fc0;
  TAttribute<FText> local_7f90;
  FSlotArguments local_7f60;
  FSlotArguments local_7e78;
  FSlotArguments local_7d90;
  FSlotArguments local_7ca8;
  FSlotArguments local_7bc0;
  FSlotArguments local_7ad8;
  FSlotArguments local_79f0;
  FSlotArguments local_7908;
  FSlotArguments local_7820;
  FSlotArguments local_7738;
  FSlotArguments local_7650;
  FSlotArguments local_7568;
  FSlotArguments local_7480;
  FSlotArguments local_7398;
  FSlotArguments local_72b0;
  FSlotArguments local_71c8;
  FSlotArguments local_70e0;
  FSlotArguments local_6ff8;
  FSlotArguments local_6f10;
  FSlotArguments local_6e28;
  FSlotArguments local_6d40;
  FSlotArguments local_6c58;
  FArguments local_6b70;
  FArguments local_6968;
  FArguments local_6760;
  FArguments local_6558;
  FArguments local_6350;
  FArguments local_6148;
  FArguments local_5f40;
  FArguments local_5d38;
  FArguments local_5b30;
  FArguments local_5920;
  FArguments local_5678;
  FArguments local_5120;
  FArguments local_4bc8;
  FArguments local_4670;
  FArguments local_4118;
  FArguments local_3bc0;
  FArguments local_3668;
  FArguments local_3110;
  FArguments local_2a10;
  FArguments local_2310;
  FArguments local_1c10;
  FArguments local_1510;
  FArguments local_e10;
  FArguments local_710;
  undefined8 uStack_8;
  
  uStack_8 = 0x14308a604;
  local_8e90 = 0;
  local_8890 = SUserWidget::FArguments::FArguments(&local_5b30);
  local_8e18 = SVerticalBox::FArguments::FArguments(&local_5d38);
  pFVar1 = SVerticalBox::Slot(&local_6c58);
  local_8e88 = &pFVar1->field_0x18;
  local_8e28 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_8e88,__real_40800000);
  local_8e80 = SImage::FArguments::FArguments(&local_5920);
  local_8e78 = TSlateBaseNamedArgs<SImage>::RenderTransform_Static<>
                         ((TSlateBaseNamedArgs<SImage> *)local_8e80,GetTestRenderTransform);
  local_8e40 = TSlateBaseNamedArgs<SImage>::RenderTransformPivot_Static<>
                         ((TSlateBaseNamedArgs<SImage> *)local_8e78,GetTestRenderTransformPivot);
  local_8e50 = &local_8308;
  local_8e98 = GetStyle();
  local_8e60 = *(code **)((longlong)*local_8e98 + 0x50);
  local_8e70 = &local_8718;
  pFVar2 = ::FName::FName(local_8e70,"UEIcon");
  local_8e68 = *pFVar2;
  local_8e58 = (FSlateBrush *)(*local_8e60)(local_8e98,local_8e68,0,0);
  local_8e48 = TAttribute<FSlateBrush_const_*>::TAttribute<FSlateBrush_const_*>
                         (local_8e50,&local_8e58);
  local_8e30 = SImage::FArguments::Image(local_8e40,local_8e48);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8ef8);
  local_8e38 = MakeTDecl<SImage,RequiredArgs::T0RequiredArgs>
                         (&local_8320,"SImage",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                          ,0x1687,&local_8ef8);
  this_00 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::Expose<SImage>
                      (local_8e38,&this->ImageWidget);
  pTVar3 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_8540,local_8e30);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SImage>(&local_8768,pTVar3);
  local_8e20 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8e28,&local_8768);
  local_8d50 = SVerticalBox::FArguments::operator+(local_8e18,local_8e20);
  pFVar1 = SVerticalBox::Slot(&local_6d40);
  pFVar1 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_8e10 = &pFVar1->field_0x18;
  local_8d60 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_8e10,__real_40800000);
  local_8dd8 = SHorizontalBox::FArguments::FArguments(&local_5f40);
  local_8de8 = SHorizontalBox::Slot(&local_6e28);
  local_8df8 = STextBlock::FArguments::FArguments(&local_3668);
  local_8e08 = &local_80b0;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_8550,L"STestSuite",L"RD",L"Rotation degrees");
  local_8e00 = TAttribute<FText>::TAttribute<FText>(local_8e08,pFVar4);
  local_8df0 = STextBlock::FArguments::Text(local_8df8,local_8e00);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8ef7);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_8338,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1691,&local_8ef7);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_8560,local_8df0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_8728,pTVar6);
  local_8de0 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8de8,&local_8728);
  local_8d70 = SHorizontalBox::FArguments::operator+(local_8dd8,local_8de0);
  pFVar7 = SHorizontalBox::Slot(&local_6f10);
  local_8dd0 = &pFVar7->field_0x48;
  local_8d80 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_8dd0,HAlign_Fill);
  local_8db8 = SSpinBox<float>::FArguments::FArguments(&local_710);
  local_8dc8 = &local_82e0;
  local_8ed0 = 0.0;
  local_8dc0 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
                         (local_8dc8,&local_8ed0);
  local_8da0 = SSpinBox<float>::FArguments::MinValue(local_8db8,local_8dc0);
  local_8db0 = &local_82b8;
  local_8ecc = __real_43b40000;
  local_8da8 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
                         (local_8db0,&local_8ecc);
  local_8d98 = SSpinBox<float>::FArguments::MaxValue(local_8da0,local_8da8);
  local_8ef6 = local_8eda;
  local_8d90 = SSpinBox<float>::FArguments::
               OnValueChanged_Static<_SRenderTransformManipulatorWidgetImpl::Construct_::__l2::<lambda_1>_>
                         (local_8d98,local_8eda);
  local_8d88 = SSpinBox<float>::FArguments::Value_Static<>
                         (local_8d90,
                          `SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_2>::
                          <lambda_invoker_cdecl>);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8ef5);
  pTVar8 = MakeTDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>
                     (&local_8350,"SSpinBox<float>",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x1695,&local_8ef5);
  pTVar9 = TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar8,&local_8570,local_8d88);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpinBox<float>_>(&local_8738,pTVar9);
  local_8d78 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8d80,&local_8738);
  local_8d68 = SHorizontalBox::FArguments::operator+(local_8d70,local_8d78);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8ef4);
  pTVar10 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_8368,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x168e,&local_8ef4);
  pTVar11 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar10,&local_8580,local_8d68);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_8748,pTVar11);
  local_8d58 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8d60,&local_8748);
  local_8c88 = SVerticalBox::FArguments::operator+(local_8d50,local_8d58);
  pFVar1 = SVerticalBox::Slot(&local_6ff8);
  pFVar1 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_8d48 = &pFVar1->field_0x18;
  local_8c98 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_8d48,__real_40800000);
  local_8d10 = SHorizontalBox::FArguments::FArguments(&local_6148);
  local_8d20 = SHorizontalBox::Slot(&local_70e0);
  local_8d30 = STextBlock::FArguments::FArguments(&local_3bc0);
  local_8d40 = &local_8080;
  pFVar4 = FText::AsLocalizable_Advanced_LocText(&local_8590,L"STestSuite",L"XO",L"X Offset");
  local_8d38 = TAttribute<FText>::TAttribute<FText>(local_8d40,pFVar4);
  local_8d28 = STextBlock::FArguments::Text(local_8d30,local_8d38);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8ef3);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_8380,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x16a1,&local_8ef3);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_85a0,local_8d28);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_8758,pTVar6);
  local_8d18 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8d20,&local_8758);
  local_8ca8 = SHorizontalBox::FArguments::operator+(local_8d10,local_8d18);
  pFVar7 = SHorizontalBox::Slot(&local_71c8);
  local_8d08 = &pFVar7->field_0x48;
  local_8cb8 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_8d08,HAlign_Fill);
  local_8cf0 = SSpinBox<float>::FArguments::FArguments(&local_e10);
  local_8d00 = &local_8290;
  local_8ec8 = __real_c0000000;
  local_8cf8 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
                         (local_8d00,&local_8ec8);
  local_8cd8 = SSpinBox<float>::FArguments::MinValue(local_8cf0,local_8cf8);
  local_8ce8 = &local_8268;
  local_8ec4 = __real_40000000;
  local_8ce0 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
                         (local_8ce8,&local_8ec4);
  local_8cd0 = SSpinBox<float>::FArguments::MaxValue(local_8cd8,local_8ce0);
  local_8ef2 = local_8ed9;
  local_8cc8 = SSpinBox<float>::FArguments::
               OnValueChanged_Static<_SRenderTransformManipulatorWidgetImpl::Construct_::__l2::<lambda_3>_>
                         (local_8cd0,local_8ed9);
  local_8cc0 = SSpinBox<float>::FArguments::Value_Static<>
                         (local_8cc8,
                          `SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_4>::
                          <lambda_invoker_cdecl>);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8ef1);
  pTVar8 = MakeTDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>
                     (&local_8398,"SSpinBox<float>",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x16a5,&local_8ef1);
  pTVar9 = TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar8,&local_85b0,local_8cc0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpinBox<float>_>(&local_8888,pTVar9);
  local_8cb0 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8cb8,&local_8888);
  local_8ca0 = SHorizontalBox::FArguments::operator+(local_8ca8,local_8cb0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8ef0);
  pTVar10 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_83b0,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x169e,&local_8ef0);
  pTVar11 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar10,&local_85c0,local_8ca0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_8778,pTVar11);
  local_8c90 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8c98,&local_8778);
  local_8bc0 = SVerticalBox::FArguments::operator+(local_8c88,local_8c90);
  pFVar1 = SVerticalBox::Slot(&local_72b0);
  pFVar1 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_8c80 = &pFVar1->field_0x18;
  local_8bd0 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_8c80,__real_40800000);
  local_8c48 = SHorizontalBox::FArguments::FArguments(&local_6350);
  local_8c58 = SHorizontalBox::Slot(&local_7398);
  local_8c68 = STextBlock::FArguments::FArguments(&local_4118);
  local_8c78 = &local_8050;
  pFVar4 = FText::AsLocalizable_Advanced_LocText(&local_85d0,L"STestSuite",L"YO",L"Y Offset");
  local_8c70 = TAttribute<FText>::TAttribute<FText>(local_8c78,pFVar4);
  local_8c60 = STextBlock::FArguments::Text(local_8c68,local_8c70);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8eef);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_83c8,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x16b1,&local_8eef);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_85e0,local_8c60);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_8788,pTVar6);
  local_8c50 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8c58,&local_8788);
  local_8be0 = SHorizontalBox::FArguments::operator+(local_8c48,local_8c50);
  pFVar7 = SHorizontalBox::Slot(&local_7480);
  local_8c40 = &pFVar7->field_0x48;
  local_8bf0 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_8c40,HAlign_Fill);
  local_8c28 = SSpinBox<float>::FArguments::FArguments(&local_1510);
  local_8c38 = &local_8240;
  local_8ec0 = __real_c0000000;
  local_8c30 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
                         (local_8c38,&local_8ec0);
  local_8c10 = SSpinBox<float>::FArguments::MinValue(local_8c28,local_8c30);
  local_8c20 = &local_8218;
  local_8ebc = __real_40000000;
  local_8c18 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
                         (local_8c20,&local_8ebc);
  local_8c08 = SSpinBox<float>::FArguments::MaxValue(local_8c10,local_8c18);
  local_8eee = local_8ed8;
  local_8c00 = SSpinBox<float>::FArguments::
               OnValueChanged_Static<_SRenderTransformManipulatorWidgetImpl::Construct_::__l2::<lambda_5>_>
                         (local_8c08,local_8ed8);
  local_8bf8 = SSpinBox<float>::FArguments::Value_Static<>
                         (local_8c00,
                          `SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_6>::
                          <lambda_invoker_cdecl>);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8eed);
  pTVar8 = MakeTDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>
                     (&local_83e0,"SSpinBox<float>",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x16b5,&local_8eed);
  pTVar9 = TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar8,&local_85f0,local_8bf8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpinBox<float>_>(&local_8798,pTVar9);
  local_8be8 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8bf0,&local_8798);
  local_8bd8 = SHorizontalBox::FArguments::operator+(local_8be0,local_8be8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8eec);
  pTVar10 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_83f8,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x16ae,&local_8eec);
  pTVar11 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar10,&local_8600,local_8bd8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_87a8,pTVar11);
  local_8bc8 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8bd0,&local_87a8);
  local_8af8 = SVerticalBox::FArguments::operator+(local_8bc0,local_8bc8);
  pFVar1 = SVerticalBox::Slot(&local_7568);
  pFVar1 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_8bb8 = &pFVar1->field_0x18;
  local_8b08 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_8bb8,__real_40800000);
  local_8b80 = SHorizontalBox::FArguments::FArguments(&local_6558);
  local_8b90 = SHorizontalBox::Slot(&local_7650);
  local_8ba0 = STextBlock::FArguments::FArguments(&local_4670);
  local_8bb0 = &local_8020;
  pFVar4 = FText::AsLocalizable_Advanced_LocText(&local_8610,L"STestSuite",L"XS",L"X Scale");
  local_8ba8 = TAttribute<FText>::TAttribute<FText>(local_8bb0,pFVar4);
  local_8b98 = STextBlock::FArguments::Text(local_8ba0,local_8ba8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8eeb);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_8410,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x16c1,&local_8eeb);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_8620,local_8b98);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_87b8,pTVar6);
  local_8b88 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8b90,&local_87b8);
  local_8b18 = SHorizontalBox::FArguments::operator+(local_8b80,local_8b88);
  pFVar7 = SHorizontalBox::Slot(&local_7738);
  local_8b78 = &pFVar7->field_0x48;
  local_8b28 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_8b78,HAlign_Fill);
  local_8b60 = SSpinBox<float>::FArguments::FArguments(&local_1c10);
  local_8b70 = &local_81f0;
  local_8eb8 = __real_c1200000;
  local_8b68 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
                         (local_8b70,&local_8eb8);
  local_8b48 = SSpinBox<float>::FArguments::MinValue(local_8b60,local_8b68);
  local_8b58 = &local_81c8;
  local_8eb4 = __real_41200000;
  local_8b50 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
                         (local_8b58,&local_8eb4);
  local_8b40 = SSpinBox<float>::FArguments::MaxValue(local_8b48,local_8b50);
  local_8eea = local_8ed7;
  local_8b38 = SSpinBox<float>::FArguments::
               OnValueChanged_Static<_SRenderTransformManipulatorWidgetImpl::Construct_::__l2::<lambda_7>_>
                         (local_8b40,local_8ed7);
  local_8b30 = SSpinBox<float>::FArguments::Value_Static<>
                         (local_8b38,
                          `SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_8>::
                          <lambda_invoker_cdecl>);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8ee9);
  pTVar8 = MakeTDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>
                     (&local_8428,"SSpinBox<float>",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x16c5,&local_8ee9);
  pTVar9 = TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar8,&local_8630,local_8b30);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpinBox<float>_>(&local_87c8,pTVar9);
  local_8b20 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8b28,&local_87c8);
  local_8b10 = SHorizontalBox::FArguments::operator+(local_8b18,local_8b20);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8ee8);
  pTVar10 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_8440,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x16be,&local_8ee8);
  pTVar11 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar10,&local_8640,local_8b10);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_87d8,pTVar11);
  local_8b00 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8b08,&local_87d8);
  local_8a30 = SVerticalBox::FArguments::operator+(local_8af8,local_8b00);
  pFVar1 = SVerticalBox::Slot(&local_7820);
  pFVar1 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_8af0 = &pFVar1->field_0x18;
  local_8a40 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_8af0,__real_40800000);
  local_8ab8 = SHorizontalBox::FArguments::FArguments(&local_6760);
  local_8ac8 = SHorizontalBox::Slot(&local_7908);
  local_8ad8 = STextBlock::FArguments::FArguments(&local_4bc8);
  local_8ae8 = &local_7ff0;
  pFVar4 = FText::AsLocalizable_Advanced_LocText(&local_8650,L"STestSuite",L"YS",L"Y Scale");
  local_8ae0 = TAttribute<FText>::TAttribute<FText>(local_8ae8,pFVar4);
  local_8ad0 = STextBlock::FArguments::Text(local_8ad8,local_8ae0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8ee7);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_8458,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x16d1,&local_8ee7);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_8660,local_8ad0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_87e8,pTVar6);
  local_8ac0 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8ac8,&local_87e8);
  local_8a50 = SHorizontalBox::FArguments::operator+(local_8ab8,local_8ac0);
  pFVar7 = SHorizontalBox::Slot(&local_79f0);
  local_8ab0 = &pFVar7->field_0x48;
  local_8a60 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_8ab0,HAlign_Fill);
  local_8a98 = SSpinBox<float>::FArguments::FArguments(&local_2310);
  local_8aa8 = &local_81a0;
  local_8eb0 = __real_c1200000;
  local_8aa0 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
                         (local_8aa8,&local_8eb0);
  local_8a80 = SSpinBox<float>::FArguments::MinValue(local_8a98,local_8aa0);
  local_8a90 = &local_8178;
  local_8eac = __real_41200000;
  local_8a88 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
                         (local_8a90,&local_8eac);
  local_8a78 = SSpinBox<float>::FArguments::MaxValue(local_8a80,local_8a88);
  local_8ee6 = local_8ed6;
  local_8a70 = SSpinBox<float>::FArguments::
               OnValueChanged_Static<_SRenderTransformManipulatorWidgetImpl::Construct_::__l2::<lambda_9>_>
                         (local_8a78,local_8ed6);
  local_8a68 = SSpinBox<float>::FArguments::Value_Static<>
                         (local_8a70,
                          `SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_10>::
                          <lambda_invoker_cdecl>);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8ee5);
  pTVar8 = MakeTDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>
                     (&local_8470,"SSpinBox<float>",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x16d5,&local_8ee5);
  pTVar9 = TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar8,&local_8670,local_8a68);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpinBox<float>_>(&local_87f8,pTVar9);
  local_8a58 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8a60,&local_87f8);
  local_8a48 = SHorizontalBox::FArguments::operator+(local_8a50,local_8a58);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8ee4);
  pTVar10 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_8488,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x16ce,&local_8ee4);
  pTVar11 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar10,&local_8680,local_8a48);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_8808,pTVar11);
  local_8a38 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8a40,&local_8808);
  local_8968 = SVerticalBox::FArguments::operator+(local_8a30,local_8a38);
  pFVar1 = SVerticalBox::Slot(&local_7ad8);
  pFVar1 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_8a28 = &pFVar1->field_0x18;
  local_8978 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_8a28,__real_40800000);
  local_89f0 = SHorizontalBox::FArguments::FArguments(&local_6968);
  local_8a00 = SHorizontalBox::Slot(&local_7bc0);
  local_8a10 = STextBlock::FArguments::FArguments(&local_5120);
  local_8a20 = &local_7fc0;
  pFVar4 = FText::AsLocalizable_Advanced_LocText(&local_8690,L"STestSuite",L"XSH",L"X Shear");
  local_8a18 = TAttribute<FText>::TAttribute<FText>(local_8a20,pFVar4);
  local_8a08 = STextBlock::FArguments::Text(local_8a10,local_8a18);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8ee3);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_84a0,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x16e1,&local_8ee3);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_86a0,local_8a08);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_8818,pTVar6);
  local_89f8 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8a00,&local_8818);
  local_8988 = SHorizontalBox::FArguments::operator+(local_89f0,local_89f8);
  pFVar7 = SHorizontalBox::Slot(&local_7ca8);
  local_89e8 = &pFVar7->field_0x48;
  local_8998 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_89e8,HAlign_Fill);
  local_89d0 = SSpinBox<float>::FArguments::FArguments(&local_2a10);
  local_89e0 = &local_8150;
  local_8ea8 = __real_c0800000;
  local_89d8 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
                         (local_89e0,&local_8ea8);
  local_89b8 = SSpinBox<float>::FArguments::MinValue(local_89d0,local_89d8);
  local_89c8 = &local_8128;
  local_8ea4 = __real_40800000;
  local_89c0 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
                         (local_89c8,&local_8ea4);
  local_89b0 = SSpinBox<float>::FArguments::MaxValue(local_89b8,local_89c0);
  local_8ee2 = local_8ed5;
  local_89a8 = SSpinBox<float>::FArguments::
               OnValueChanged_Static<_SRenderTransformManipulatorWidgetImpl::Construct_::__l2::<lambda_11>_>
                         (local_89b0,local_8ed5);
  local_89a0 = SSpinBox<float>::FArguments::Value_Static<>
                         (local_89a8,
                          `SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_12>::
                          <lambda_invoker_cdecl>);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8ee1);
  pTVar8 = MakeTDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>
                     (&local_84b8,"SSpinBox<float>",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x16e5,&local_8ee1);
  pTVar9 = TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar8,&local_86b0,local_89a0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpinBox<float>_>(&local_8828,pTVar9);
  local_8990 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8998,&local_8828);
  local_8980 = SHorizontalBox::FArguments::operator+(local_8988,local_8990);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8ee0);
  pTVar10 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_84d0,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x16de,&local_8ee0);
  pTVar11 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar10,&local_86c0,local_8980);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_8838,pTVar11);
  local_8970 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8978,&local_8838);
  local_88a0 = SVerticalBox::FArguments::operator+(local_8968,local_8970);
  pFVar1 = SVerticalBox::Slot(&local_7d90);
  pFVar1 = SVerticalBox::FSlot::FSlotArguments::AutoHeight(pFVar1);
  local_8960 = &pFVar1->field_0x18;
  local_88b0 = TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
                         ((FSlotArgumentsMixin *)local_8960,__real_40800000);
  local_8928 = SHorizontalBox::FArguments::FArguments(&local_6b70);
  local_8938 = SHorizontalBox::Slot(&local_7e78);
  local_8948 = STextBlock::FArguments::FArguments(&local_5678);
  local_8958 = &local_7f90;
  pFVar4 = FText::AsLocalizable_Advanced_LocText(&local_86d0,L"STestSuite",L"YSH",L"Y Shear");
  local_8950 = TAttribute<FText>::TAttribute<FText>(local_8958,pFVar4);
  local_8940 = STextBlock::FArguments::Text(local_8948,local_8950);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8edf);
  pTVar5 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_84e8,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x16f1,&local_8edf);
  pTVar6 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar5,&local_86e0,local_8940);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_8848,pTVar6);
  local_8930 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_8938,&local_8848);
  local_88c0 = SHorizontalBox::FArguments::operator+(local_8928,local_8930);
  pFVar7 = SHorizontalBox::Slot(&local_7f60);
  local_8920 = &pFVar7->field_0x48;
  local_88d0 = TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
                         ((FSlotArgumentsMixin *)local_8920,HAlign_Fill);
  local_8908 = SSpinBox<float>::FArguments::FArguments(&local_3110);
  local_8918 = &local_8100;
  local_8ea0 = __real_c0800000;
  local_8910 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
                         (local_8918,&local_8ea0);
  local_88f0 = SSpinBox<float>::FArguments::MinValue(local_8908,local_8910);
  local_8900 = &local_80d8;
  local_8e9c = __real_40800000;
  local_88f8 = TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
                         (local_8900,&local_8e9c);
  local_88e8 = SSpinBox<float>::FArguments::MaxValue(local_88f0,local_88f8);
  local_8ede = local_8ed4;
  local_88e0 = SSpinBox<float>::FArguments::
               OnValueChanged_Static<_SRenderTransformManipulatorWidgetImpl::Construct_::__l2::<lambda_13>_>
                         (local_88e8,local_8ed4);
  local_88d8 = SSpinBox<float>::FArguments::Value_Static<>
                         (local_88e0,
                          `SRenderTransformManipulatorWidgetImpl::Construct'::__l2::<lambda_14>::
                          <lambda_invoker_cdecl>);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8edd);
  pTVar8 = MakeTDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>
                     (&local_8500,"SSpinBox<float>",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x16f5,&local_8edd);
  pTVar9 = TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar8,&local_86f0,local_88d8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SSpinBox<float>_>(&local_8858,pTVar9);
  local_88c8 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_88d0,&local_8858);
  local_88b8 = SHorizontalBox::FArguments::operator+(local_88c0,local_88c8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8edc);
  pTVar10 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_8518,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x16ee,&local_8edc);
  pTVar11 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar10,&local_8700,local_88b8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_8868,pTVar11);
  local_88a8 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_88b0,&local_8868);
  local_8898 = SVerticalBox::FArguments::operator+(local_88a0,local_88a8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_8edb);
  this_01 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_8530,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x1684,&local_8edb);
  pTVar12 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_01,&local_8710,local_8898);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_8878,pTVar12);
  pFVar13 = SUserWidget::FArguments::operator[](local_8890,&local_8878);
  SUserWidget::Construct((SUserWidget *)this,pFVar13);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8878);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_8710.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_8530._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8868);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_8700.SharedReferenceCount);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_8518);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8858);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_86f0.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_8500._Widget.SharedReferenceCount);
  SSpinBox<float>::FArguments::~FArguments(&local_3110);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_7f60);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8848);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_86e0);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_84e8);
  FText::~FText(&local_86d0);
  STextBlock::FArguments::~FArguments(&local_5678);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_7e78);
  TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_6b70._Slots);
  TSlateBaseNamedArgs<SHorizontalBox>::~TSlateBaseNamedArgs<SHorizontalBox>
            ((TSlateBaseNamedArgs<SHorizontalBox> *)&local_6b70);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_7d90);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8838);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_86c0);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_84d0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8828);
  TSharedRef<SSpinBox<float>,1>::~TSharedRef<SSpinBox<float>,1>(&local_86b0);
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>(&local_84b8);
  SSpinBox<float>::FArguments::~FArguments(&local_2a10);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_7ca8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8818);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_86a0);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_84a0);
  FText::~FText(&local_8690);
  STextBlock::FArguments::~FArguments(&local_5120);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_7bc0);
  SHorizontalBox::FArguments::~FArguments(&local_6968);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_7ad8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8808);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_8680);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_8488);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_87f8);
  TSharedRef<SSpinBox<float>,1>::~TSharedRef<SSpinBox<float>,1>(&local_8670);
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>(&local_8470);
  SSpinBox<float>::FArguments::~FArguments(&local_2310);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_79f0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_87e8);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_8660);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_8458);
  FText::~FText(&local_8650);
  STextBlock::FArguments::~FArguments(&local_4bc8);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_7908);
  SHorizontalBox::FArguments::~FArguments(&local_6760);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_7820);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_87d8);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_8640);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_8440);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_87c8);
  TSharedRef<SSpinBox<float>,1>::~TSharedRef<SSpinBox<float>,1>(&local_8630);
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>(&local_8428);
  SSpinBox<float>::FArguments::~FArguments(&local_1c10);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_7738);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_87b8);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_8620);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_8410);
  FText::~FText(&local_8610);
  STextBlock::FArguments::~FArguments(&local_4670);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_7650);
  SHorizontalBox::FArguments::~FArguments(&local_6558);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_7568);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_87a8);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_8600);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_83f8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8798);
  TSharedRef<SSpinBox<float>,1>::~TSharedRef<SSpinBox<float>,1>(&local_85f0);
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>(&local_83e0);
  SSpinBox<float>::FArguments::~FArguments(&local_1510);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_7480);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8788);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_85e0);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_83c8);
  FText::~FText(&local_85d0);
  STextBlock::FArguments::~FArguments(&local_4118);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_7398);
  SHorizontalBox::FArguments::~FArguments(&local_6350);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_72b0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8778);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_85c0);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_83b0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8888);
  TSharedRef<SSpinBox<float>,1>::~TSharedRef<SSpinBox<float>,1>(&local_85b0);
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>(&local_8398);
  SSpinBox<float>::FArguments::~FArguments(&local_e10);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_71c8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8758);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_85a0);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_8380);
  FText::~FText(&local_8590);
  STextBlock::FArguments::~FArguments(&local_3bc0);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_70e0);
  SHorizontalBox::FArguments::~FArguments(&local_6148);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6ff8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8748);
  TSharedRef<SHorizontalBox,1>::~TSharedRef<SHorizontalBox,1>(&local_8580);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_8368);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8738);
  TSharedRef<SSpinBox<float>,1>::~TSharedRef<SSpinBox<float>,1>(&local_8570);
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>(&local_8350);
  SSpinBox<float>::FArguments::~FArguments(&local_710);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6f10);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8728);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_8560);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_8338);
  FText::~FText(&local_8550);
  STextBlock::FArguments::~FArguments(&local_3668);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6e28);
  SHorizontalBox::FArguments::~FArguments(&local_5f40);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6d40);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_8768);
  TSharedRef<SImage,1>::~TSharedRef<SImage,1>(&local_8540);
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
            (&local_8320);
  SImage::FArguments::~FArguments(&local_5920);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_6c58);
  SVerticalBox::FArguments::~FArguments(&local_5d38);
  SUserWidget::FArguments::~FArguments(&local_5b30);
  return;
}

// GetStyle @ 1430cdaf0

ISlateStyle * __cdecl SRenderTransformManipulatorWidgetImpl::GetStyle(void)

{
  code *pcVar1;
  bool bVar2;
  ISlateStyle *pIVar3;
  FString *pFVar4;
  FSlateVectorImageBrush *this;
  FName *pFVar5;
  FSlateVectorImageBrush *local_a8;
  FLinearColor_u_0 local_a0;
  FName local_90;
  FLinearColor_u_0 *local_88;
  TVector2<double>_u_0 *local_80;
  FLinearColor_u_0 *local_78;
  FDeprecateVector2DParameter local_70;
  FString *local_68;
  FName *local_60;
  TVector2<double>_u_0 local_58;
  FName local_48;
  FString local_40;
  FString local_30;
  FString local_20 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_ISlateStyle_const&___ptr64___cdecl_SRenderTransformManipulatorWidgetImpl::GetStyle(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_ISlateStyle_const&___ptr64___cdecl_SRenderTransformManipulatorWidgetImpl::GetStyle(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_ISlateStyle_const&___ptr64___cdecl_SRenderTransformManipulatorWidgetImpl::GetStyle(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&local_90,"RenderTransformManipulatorStyle");
      FSlateStyleSet::FSlateStyleSet
                (&`private:_static_class_ISlateStyle_const&___ptr64___cdecl_SRenderTransformManipulatorWidgetImpl::GetStyle(void)'
                  ::__l2::Style,&local_90);
      atexit(`SRenderTransformManipulatorWidgetImpl::GetStyle'::__l2::
             _dynamic_atexit_destructor_for__Style__);
      _Init_thread_footer(&`private:_static_class_ISlateStyle_const&___ptr64___cdecl_SRenderTransformManipulatorWidgetImpl::GetStyle(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (`private:_static_class_ISlateStyle_const&___ptr64___cdecl_SRenderTransformManipulatorWidgetImpl::GetStyle(void)'
      ::__l2::IsInit == false) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                         ,0x166a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pIVar3 = (ISlateStyle *)(*pcVar1)();
        return pIVar3;
      }
    }
    pFVar4 = FPaths::EngineContentDir(&local_30);
    pFVar4 = ::operator/(&local_40,pFVar4,L"Slate");
    FSlateStyleSet::SetContentRoot
              (&`private:_static_class_ISlateStyle_const&___ptr64___cdecl_SRenderTransformManipulatorWidgetImpl::GetStyle(void)'
                ::__l2::Style,pFVar4);
    ::FString::~FString(&local_40);
    ::FString::~FString(&local_30);
    this = ::operator_new(0xb0);
    if (this == (FSlateVectorImageBrush *)0x0) {
      local_a8 = (FSlateVectorImageBrush *)0x0;
    }
    else {
      local_a0._s_0.R = __real_3f800000;
      local_a0._s_0.G = __real_3f800000;
      local_a0._s_0.B = __real_3f800000;
      local_a0._s_0.A = __real_3f800000;
      local_88 = &local_a0;
      local_58._s_0.X = __real_4049000000000000;
      local_58._s_0.Y = __real_4049000000000000;
      local_80 = &local_58;
      local_78 = local_88;
      UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
                (&local_70,(TVector2<double> *)&local_80->_s_0);
      local_68 = FSlateStyleSet::RootToContentDir
                           (&`private:_static_class_ISlateStyle_const&___ptr64___cdecl_SRenderTransformManipulatorWidgetImpl::GetStyle(void)'
                             ::__l2::Style,local_20,L"Starship/Common/unreal.svg");
      local_a8 = FSlateVectorImageBrush::FSlateVectorImageBrush
                           (this,local_68,&local_70,(FLinearColor *)&local_78->_s_0,NoTile);
    }
    local_60 = &local_48;
    pFVar5 = ::FName::FName(local_60,"UEIcon");
    FSlateStyleSet::Set<FSlateVectorImageBrush>
              (&`private:_static_class_ISlateStyle_const&___ptr64___cdecl_SRenderTransformManipulatorWidgetImpl::GetStyle(void)'
                ::__l2::Style,*pFVar5,local_a8);
    if (this != (FSlateVectorImageBrush *)0x0) {
      ::FString::~FString(local_20);
    }
    `private:_static_class_ISlateStyle_const&___ptr64___cdecl_SRenderTransformManipulatorWidgetImpl::GetStyle(void)'
    ::__l2::IsInit = true;
  }
  return (ISlateStyle *)
         &`private:_static_class_ISlateStyle_const&___ptr64___cdecl_SRenderTransformManipulatorWidgetImpl::GetStyle(void)'
          ::__l2::Style;
}

