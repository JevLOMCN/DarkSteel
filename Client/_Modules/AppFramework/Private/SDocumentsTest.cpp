// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 5

// Construct @ 143078490

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SDocumentsTest::Construct(SDocumentsTest *this,FArguments *param_1,FTabManager *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TRawPtrProxy<SDocumentsTest::FDocumentInfo> TVar4;
  TSlateDecl<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T0RequiredArgs>
  *this_00;
  TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *pTVar5;
  FSlotArguments *pFVar6;
  TTransform2<float> *pTVar7;
  FText *pFVar8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *this_01;
  TSharedRef<STextBlock,1> *pTVar9;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *pTVar10;
  TSharedRef<SButton,1> *pTVar11;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> *this_02;
  TSharedRef<SHorizontalBox,1> *pTVar12;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> *this_03;
  TSharedRef<SVerticalBox,1> *pTVar13;
  longlong lVar14;
  code **ppcVar15;
  undefined1 *puVar16;
  pmf_104ae464 *ppVar17;
  pmf_89769052 *ppVar18;
  pmf_bb1ff469 *ppVar19;
  bool bVar20;
  undefined1 auStackY_46a8 [32];
  T0RequiredArgs local_4654;
  bool local_4653;
  T0RequiredArgs local_4652;
  T0RequiredArgs local_4651;
  T0RequiredArgs local_4650;
  T0RequiredArgs local_464f;
  T0RequiredArgs local_464e;
  T0RequiredArgs local_464d;
  T0RequiredArgs local_464c;
  T0RequiredArgs local_464b;
  T0RequiredArgs local_464a;
  T0RequiredArgs local_4649;
  TArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSizedDefaultAllocator<32>_> *local_4648;
  TArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSizedDefaultAllocator<32>_> *local_4640;
  TArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSizedDefaultAllocator<32>_> *local_4638;
  TArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSizedDefaultAllocator<32>_> *local_4630;
  TArray<TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSizedDefaultAllocator<32>_> *local_4628;
  int local_4620;
  int local_461c;
  int local_4618;
  int local_4614;
  int local_4610;
  int local_460c [7];
  FText *local_45f0;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> *local_45e8;
  FText *local_45e0;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> *local_45d8;
  FText *local_45d0;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> *local_45c8;
  FText *local_45c0;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> *local_45b8;
  FText *local_45b0;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> *local_45a8;
  FText *local_45a0;
  FText *local_4598;
  FText *local_4590;
  FText *local_4588;
  FText *local_4580;
  int local_4578;
  int local_4574;
  int local_4570;
  int local_456c;
  int local_4568;
  FText *local_4560;
  FText *local_4558;
  FText *local_4550;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> *local_4548;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> *local_4540;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> *local_4538;
  FScriptContainerElement *local_4530;
  FScriptContainerElement *local_4528;
  FScriptContainerElement *local_4520;
  undefined4 local_4518;
  undefined4 local_4514;
  FScriptContainerElement *local_4510;
  FScriptContainerElement *local_4508;
  FScriptContainerElement *local_4500;
  longlong local_44f8;
  longlong local_44f0;
  FScriptContainerElement *local_44e8;
  FScriptContainerElement *local_44e0;
  FScriptContainerElement *local_44d8;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> *local_44d0;
  FText *local_44c8;
  FText *local_44c0;
  FText *local_44b8;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> *local_44b0;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> *local_44a8;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> *local_44a0;
  FScriptContainerElement *local_4498;
  FScriptContainerElement *local_4490;
  FScriptContainerElement *local_4488;
  undefined4 local_4480;
  undefined4 local_447c;
  FScriptContainerElement *local_4478;
  FScriptContainerElement *local_4470;
  FScriptContainerElement *local_4468;
  longlong local_4460;
  longlong local_4458;
  FScriptContainerElement *local_4450;
  FScriptContainerElement *local_4448;
  FScriptContainerElement *local_4440;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> *local_4438;
  FText *local_4430;
  FText *local_4428;
  FText *local_4420;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> *local_4418;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> *local_4410;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> *local_4408;
  FScriptContainerElement *local_4400;
  FScriptContainerElement *local_43f8;
  FScriptContainerElement *local_43f0;
  undefined4 local_43e8;
  undefined4 local_43e4;
  FScriptContainerElement *local_43e0;
  FScriptContainerElement *local_43d8;
  FScriptContainerElement *local_43d0;
  longlong local_43c8;
  longlong local_43c0;
  FScriptContainerElement *local_43b8;
  FScriptContainerElement *local_43b0;
  FScriptContainerElement *local_43a8;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> *local_43a0;
  FText *local_4398;
  FText *local_4390;
  FText *local_4388;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> *local_4380;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> *local_4378;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> *local_4370;
  FScriptContainerElement *local_4368;
  FScriptContainerElement *local_4360;
  FScriptContainerElement *local_4358;
  undefined4 local_4350;
  undefined4 local_434c;
  FScriptContainerElement *local_4348;
  FScriptContainerElement *local_4340;
  FScriptContainerElement *local_4338;
  longlong local_4330;
  longlong local_4328;
  FScriptContainerElement *local_4320;
  FScriptContainerElement *local_4318;
  FScriptContainerElement *local_4310;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> *local_4308;
  FText *local_4300;
  FText *local_42f8;
  FText *local_42f0;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> *local_42e8;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> *local_42e0;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> *local_42d8;
  FScriptContainerElement *local_42d0;
  FScriptContainerElement *local_42c8;
  FScriptContainerElement *local_42c0;
  undefined4 local_42b8;
  undefined4 local_42b4;
  FScriptContainerElement *local_42b0;
  FScriptContainerElement *local_42a8;
  FScriptContainerElement *local_42a0;
  longlong local_4298;
  longlong local_4290;
  FScriptContainerElement *local_4288;
  FScriptContainerElement *local_4280;
  FScriptContainerElement *local_4278;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> *local_4270;
  undefined1 *local_4268;
  TAttribute<ESelectionMode::Type> *local_4260;
  FArguments *local_4258;
  FArguments *local_4250;
  FArguments *local_4248;
  FArguments *local_4240;
  FSlotArguments *local_4238;
  FSlotArguments *local_4230;
  FArguments *local_4228;
  undefined1 *local_4220;
  undefined1 *local_4218;
  TAttribute<FMargin> *local_4210;
  TAttribute<FMargin> *local_4208;
  FArguments *local_4200;
  FArguments *local_41f8;
  FArguments *local_41f0;
  TVector2<double>_u_0 *local_41e8;
  TQuat2<float> *local_41e0;
  TVector2<double>_u_0 *local_41d8;
  TAttribute<TOptional<TTransform2<float>_>_> *local_41d0;
  TAttribute<TOptional<TTransform2<float>_>_> *local_41c8;
  FArguments *local_41c0;
  TAttribute<FMargin> *local_41b8;
  TAttribute<FMargin> *local_41b0;
  FArguments *local_41a8;
  FArguments *local_41a0;
  FArguments *local_4198;
  TVector2<double>_u_0 *local_4190;
  TQuat2<float> *local_4188;
  TVector2<double>_u_0 *local_4180;
  TAttribute<TOptional<TTransform2<float>_>_> *local_4178;
  TAttribute<TOptional<TTransform2<float>_>_> *local_4170;
  FArguments *local_4168;
  TAttribute<FMargin> *local_4160;
  TAttribute<FMargin> *local_4158;
  FArguments *local_4150;
  FArguments *local_4148;
  FArguments *local_4140;
  TAttribute<bool> *local_4138;
  TAttribute<bool> *local_4130;
  FArguments *local_4128;
  TVector2<double>_u_0 *local_4120;
  TQuat2<float> *local_4118;
  TVector2<double>_u_0 *local_4110;
  TAttribute<TOptional<TTransform2<float>_>_> *local_4108;
  TAttribute<TOptional<TTransform2<float>_>_> *local_4100;
  FArguments *local_40f8;
  TAttribute<FMargin> *local_40f0;
  TAttribute<FMargin> *local_40e8;
  FArguments *local_40e0;
  FArguments *local_40d8;
  FArguments *local_40d0;
  TVector2<double>_u_0 *local_40c8;
  TQuat2<float> *local_40c0;
  TVector2<double>_u_0 *local_40b8;
  TAttribute<TOptional<TTransform2<float>_>_> *local_40b0;
  TAttribute<TOptional<TTransform2<float>_>_> *local_40a8;
  FArguments *local_40a0;
  TAttribute<FMargin> *local_4098;
  TAttribute<FMargin> *local_4090;
  FArguments *local_4088;
  FArguments *local_4080;
  FArguments *local_4078;
  TAttribute<FText> *local_4070;
  TAttribute<FText> *local_4068;
  FArguments *local_4060;
  FArguments *local_4058;
  FArguments *local_4050;
  FArguments *local_4048;
  FArguments *local_4040;
  FArguments *local_4038;
  FArguments *local_4030;
  FArguments *local_4028;
  FArguments *local_4020;
  FArguments *local_4018;
  FArguments *local_4010;
  FArguments *local_4008;
  FSlotArguments *local_4000;
  FSlotArguments *local_3ff8;
  FArguments *local_3ff0;
  FArguments *local_3fe8;
  TAttribute<FText> *local_3fe0;
  TAttribute<FText> *local_3fd8;
  FArguments *local_3fd0;
  FArguments *local_3fc8;
  FArguments *local_3fc0;
  FSlotArguments *local_3fb8;
  FSlotArguments *local_3fb0;
  FArguments *local_3fa8;
  TAttribute<FText> *local_3fa0;
  TAttribute<FText> *local_3f98;
  FArguments *local_3f90;
  FArguments *local_3f88;
  FArguments *local_3f80;
  FSlotArguments *local_3f78;
  FSlotArguments *local_3f70;
  FArguments *local_3f68;
  FArguments *local_3f60;
  FSlotArguments *local_3f58;
  FSlotArguments *local_3f50;
  FArguments *local_3f48;
  FArguments *local_3f40;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *local_3f38;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> local_3f30;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> local_3f20;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> local_3f10;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> local_3f00;
  TSharedRef<SDocumentsTest::FDocumentInfo,1> local_3ef0;
  TVector2<double>_u_0 local_3ee0;
  TSharedRef<SWidget,1> local_3ed0;
  TSharedRef<SWidget,1> local_3ec0;
  TSharedRef<SWidget,1> local_3eb0;
  TSharedRef<SWidget,1> local_3ea0;
  TSharedRef<SWidget,1> local_3e90;
  TSharedRef<SWidget,1> local_3e80;
  TSharedRef<SWidget,1> local_3e70;
  TSharedRef<SWidget,1> local_3e60;
  code *local_3e50;
  undefined4 local_3e48;
  TVector2<double>_u_0 local_3e40;
  TVector2<double>_u_0 local_3e30;
  TSharedRef<SWidget,1> local_3e20;
  TVector2<double>_u_0 local_3e10;
  code *local_3e00;
  undefined4 local_3df8;
  code *local_3df0;
  undefined4 local_3de8;
  code *local_3de0;
  undefined4 local_3dd8;
  TSharedRef<SWidget,1> local_3dd0;
  TSharedRef<SWidget,1> local_3dc0;
  TQuat2<float> local_3db0;
  TQuat2<float> local_3da8;
  TQuat2<float> local_3da0;
  undefined1 local_3d98 [16];
  undefined1 local_3d88 [16];
  undefined1 local_3d78 [16];
  FText local_3d68;
  FText local_3d58;
  FText local_3d48;
  FText local_3d38;
  FText local_3d28;
  undefined1 local_3d18 [16];
  pmf_104ae464 local_3d08;
  undefined1 local_3cf8 [16];
  pmf_89769052 local_3ce8;
  undefined1 local_3cd8 [16];
  pmf_bb1ff469 local_3cc8;
  undefined1 local_3cb8 [16];
  pmf_bb1ff469 local_3ca8;
  TSharedRef<SVerticalBox,1> local_3c98;
  TSharedRef<SHorizontalBox,1> local_3c88;
  TSharedRef<SButton,1> local_3c78;
  FText local_3c68;
  TSharedRef<SButton,1> local_3c58;
  FText local_3c48;
  TSharedRef<SButton,1> local_3c38;
  TSharedRef<SButton,1> local_3c28;
  TSharedRef<SButton,1> local_3c18;
  TSharedRef<SButton,1> local_3c08;
  TSharedRef<SButton,1> local_3bf8;
  TSharedRef<STextBlock,1> local_3be8;
  FText local_3bd8;
  TSharedRef<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> local_3bc8;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_3bb8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_3ba0;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_3b88;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_3b70;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_3b58;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_3b40;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_3b28;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_3b10;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_3af8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_3ae0;
  TSlateDecl<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T0RequiredArgs>
  local_3ac8;
  undefined1 local_3ab0 [32];
  TAttribute<bool> local_3a90;
  TAttribute<FMargin> local_3a70;
  TAttribute<FText> local_3a40;
  TAttribute<FText> local_3a10;
  TAttribute<FText> local_39e0;
  TAttribute<FMargin> local_39b0;
  TAttribute<FMargin> local_3980;
  TAttribute<FMargin> local_3950;
  TAttribute<FMargin> local_3920;
  TAttribute<TOptional<TTransform2<float>_>_> local_38f0;
  TAttribute<TOptional<TTransform2<float>_>_> local_38b8;
  TAttribute<TOptional<TTransform2<float>_>_> local_3880;
  TAttribute<TOptional<TTransform2<float>_>_> local_3848;
  FSlotArguments local_3810;
  FSlotArguments local_3728;
  FSlotArguments local_3640;
  FSlotArguments local_3558;
  FSlotArguments local_3470;
  FArguments local_3388;
  FArguments local_3180;
  FArguments local_2f78;
  FArguments local_2a98;
  FArguments local_2558;
  FArguments local_2018;
  FArguments local_1ad8;
  FArguments local_1598;
  FArguments local_1058;
  FArguments local_b18;
  FArguments local_5d8;
  TTransform2<float> local_80;
  TTransform2<float> local_68;
  TTransform2<float> local_50;
  TTransform2<float> local_38;
  ulonglong local_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x1430784ab;
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_46a8;
  this->TabManager = param_2;
  local_4648 = &this->Documents;
  local_45f0 = ::operator_new(0x10);
  bVar20 = local_45f0 == (FText *)0x0;
  if (bVar20) {
    local_45a0 = (FText *)0x0;
  }
  else {
    local_4560 = FText::AsLocalizable_Advanced_LocText
                           (&local_3d68,L"STestSuite",L"Document01",L"Document 1");
    local_4558 = local_45f0;
    FText::FText(local_45f0,local_4560);
    local_4550 = local_45f0;
    local_45a0 = local_45f0;
  }
  TVar4 = MakeShareable<SDocumentsTest::FDocumentInfo>((FDocumentInfo *)local_3d98);
  TSharedRef<SDocumentsTest::FDocumentInfo,1>::
  TSharedRef<SDocumentsTest::FDocumentInfo,1><SDocumentsTest::FDocumentInfo>
            (&local_3f30,(TRawPtrProxy<SDocumentsTest::FDocumentInfo> *)TVar4.Object);
  local_45e8 = &local_3f30;
  local_4548 = (TSharedRef<SDocumentsTest::FDocumentInfo,1> *)(local_4648->AllocatorInstance).Data;
  local_4540 = local_4548;
  local_4538 = local_4548;
  if ((local_4548 <= local_45e8) &&
     (local_4530 = (local_4648->AllocatorInstance).Data, local_4528 = local_4530,
     local_4520 = local_4530,
     local_45e8 <
     (TSharedRef<SDocumentsTest::FDocumentInfo,1> *)
     (local_4530 + (longlong)local_4648->ArrayMax * 0x10))) {
    local_4518 = 0;
    local_4514 = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_44f8 = (longlong)local_4648->ArrayNum;
    local_44f0 = (longlong)local_4648->ArrayMax;
    local_4510 = (local_4648->AllocatorInstance).Data;
    local_4508 = local_4510;
    local_4500 = local_4510;
    local_44e8 = local_4510;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_4648->ArrayNum == local_4648->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_4648->AllocatorInstance,&local_4648->ArrayMax);
    local_4648->ArrayNum = iVar3;
  }
  local_4620 = local_4648->ArrayNum;
  local_4648->ArrayNum = local_4648->ArrayNum + 1;
  local_44e0 = (local_4648->AllocatorInstance).Data;
  local_44d8 = local_44e0 + (longlong)local_4620 * 0x10;
  local_44d0 = ::operator_new(0x10,local_44d8);
  TSharedRef<SDocumentsTest::FDocumentInfo,1>::TSharedRef<SDocumentsTest::FDocumentInfo,1>
            (local_44d0,&local_3f30);
  local_4578 = local_4620;
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3f30.SharedReferenceCount);
  if (!bVar20) {
    FText::~FText(&local_3d68);
  }
  local_4640 = &this->Documents;
  local_45e0 = ::operator_new(0x10);
  bVar20 = local_45e0 == (FText *)0x0;
  if (bVar20) {
    local_4598 = (FText *)0x0;
  }
  else {
    local_44c8 = FText::AsLocalizable_Advanced_LocText
                           (&local_3d58,L"STestSuite",L"Document02",L"Document 2");
    local_44c0 = local_45e0;
    FText::FText(local_45e0,local_44c8);
    local_44b8 = local_45e0;
    local_4598 = local_45e0;
  }
  TVar4 = MakeShareable<SDocumentsTest::FDocumentInfo>((FDocumentInfo *)(local_3d98 + 8));
  TSharedRef<SDocumentsTest::FDocumentInfo,1>::
  TSharedRef<SDocumentsTest::FDocumentInfo,1><SDocumentsTest::FDocumentInfo>
            (&local_3f20,(TRawPtrProxy<SDocumentsTest::FDocumentInfo> *)TVar4.Object);
  local_45d8 = &local_3f20;
  local_44b0 = (TSharedRef<SDocumentsTest::FDocumentInfo,1> *)(local_4640->AllocatorInstance).Data;
  local_44a8 = local_44b0;
  local_44a0 = local_44b0;
  if ((local_44b0 <= local_45d8) &&
     (local_4498 = (local_4640->AllocatorInstance).Data, local_4490 = local_4498,
     local_4488 = local_4498,
     local_45d8 <
     (TSharedRef<SDocumentsTest::FDocumentInfo,1> *)
     (local_4498 + (longlong)local_4640->ArrayMax * 0x10))) {
    local_4480 = 0;
    local_447c = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_4460 = (longlong)local_4640->ArrayNum;
    local_4458 = (longlong)local_4640->ArrayMax;
    local_4478 = (local_4640->AllocatorInstance).Data;
    local_4470 = local_4478;
    local_4468 = local_4478;
    local_4450 = local_4478;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_4640->ArrayNum == local_4640->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_4640->AllocatorInstance,&local_4640->ArrayMax);
    local_4640->ArrayNum = iVar3;
  }
  local_461c = local_4640->ArrayNum;
  local_4640->ArrayNum = local_4640->ArrayNum + 1;
  local_4448 = (local_4640->AllocatorInstance).Data;
  local_4440 = local_4448 + (longlong)local_461c * 0x10;
  local_4438 = ::operator_new(0x10,local_4440);
  TSharedRef<SDocumentsTest::FDocumentInfo,1>::TSharedRef<SDocumentsTest::FDocumentInfo,1>
            (local_4438,&local_3f20);
  local_4574 = local_461c;
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3f20.SharedReferenceCount);
  if (!bVar20) {
    FText::~FText(&local_3d58);
  }
  local_4638 = &this->Documents;
  local_45d0 = ::operator_new(0x10);
  bVar20 = local_45d0 == (FText *)0x0;
  if (bVar20) {
    local_4590 = (FText *)0x0;
  }
  else {
    local_4430 = FText::AsLocalizable_Advanced_LocText
                           (&local_3d48,L"STestSuite",L"Document03",L"Document 3");
    local_4428 = local_45d0;
    FText::FText(local_45d0,local_4430);
    local_4420 = local_45d0;
    local_4590 = local_45d0;
  }
  TVar4 = MakeShareable<SDocumentsTest::FDocumentInfo>((FDocumentInfo *)local_3d88);
  TSharedRef<SDocumentsTest::FDocumentInfo,1>::
  TSharedRef<SDocumentsTest::FDocumentInfo,1><SDocumentsTest::FDocumentInfo>
            (&local_3f10,(TRawPtrProxy<SDocumentsTest::FDocumentInfo> *)TVar4.Object);
  local_45c8 = &local_3f10;
  local_4418 = (TSharedRef<SDocumentsTest::FDocumentInfo,1> *)(local_4638->AllocatorInstance).Data;
  local_4410 = local_4418;
  local_4408 = local_4418;
  if ((local_4418 <= local_45c8) &&
     (local_4400 = (local_4638->AllocatorInstance).Data, local_43f8 = local_4400,
     local_43f0 = local_4400,
     local_45c8 <
     (TSharedRef<SDocumentsTest::FDocumentInfo,1> *)
     (local_4400 + (longlong)local_4638->ArrayMax * 0x10))) {
    local_43e8 = 0;
    local_43e4 = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_43c8 = (longlong)local_4638->ArrayNum;
    local_43c0 = (longlong)local_4638->ArrayMax;
    local_43e0 = (local_4638->AllocatorInstance).Data;
    local_43d8 = local_43e0;
    local_43d0 = local_43e0;
    local_43b8 = local_43e0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_4638->ArrayNum == local_4638->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_4638->AllocatorInstance,&local_4638->ArrayMax);
    local_4638->ArrayNum = iVar3;
  }
  local_4618 = local_4638->ArrayNum;
  local_4638->ArrayNum = local_4638->ArrayNum + 1;
  local_43b0 = (local_4638->AllocatorInstance).Data;
  local_43a8 = local_43b0 + (longlong)local_4618 * 0x10;
  local_43a0 = ::operator_new(0x10,local_43a8);
  TSharedRef<SDocumentsTest::FDocumentInfo,1>::TSharedRef<SDocumentsTest::FDocumentInfo,1>
            (local_43a0,&local_3f10);
  local_4570 = local_4618;
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3f10.SharedReferenceCount);
  if (!bVar20) {
    FText::~FText(&local_3d48);
  }
  local_4630 = &this->Documents;
  local_45c0 = ::operator_new(0x10);
  bVar20 = local_45c0 == (FText *)0x0;
  if (bVar20) {
    local_4588 = (FText *)0x0;
  }
  else {
    local_4398 = FText::AsLocalizable_Advanced_LocText
                           (&local_3d38,L"STestSuite",L"Document04",L"Document 4");
    local_4390 = local_45c0;
    FText::FText(local_45c0,local_4398);
    local_4388 = local_45c0;
    local_4588 = local_45c0;
  }
  TVar4 = MakeShareable<SDocumentsTest::FDocumentInfo>((FDocumentInfo *)(local_3d88 + 8));
  TSharedRef<SDocumentsTest::FDocumentInfo,1>::
  TSharedRef<SDocumentsTest::FDocumentInfo,1><SDocumentsTest::FDocumentInfo>
            (&local_3f00,(TRawPtrProxy<SDocumentsTest::FDocumentInfo> *)TVar4.Object);
  local_45b8 = &local_3f00;
  local_4380 = (TSharedRef<SDocumentsTest::FDocumentInfo,1> *)(local_4630->AllocatorInstance).Data;
  local_4378 = local_4380;
  local_4370 = local_4380;
  if ((local_4380 <= local_45b8) &&
     (local_4368 = (local_4630->AllocatorInstance).Data, local_4360 = local_4368,
     local_4358 = local_4368,
     local_45b8 <
     (TSharedRef<SDocumentsTest::FDocumentInfo,1> *)
     (local_4368 + (longlong)local_4630->ArrayMax * 0x10))) {
    local_4350 = 0;
    local_434c = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_4330 = (longlong)local_4630->ArrayNum;
    local_4328 = (longlong)local_4630->ArrayMax;
    local_4348 = (local_4630->AllocatorInstance).Data;
    local_4340 = local_4348;
    local_4338 = local_4348;
    local_4320 = local_4348;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_4630->ArrayNum == local_4630->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_4630->AllocatorInstance,&local_4630->ArrayMax);
    local_4630->ArrayNum = iVar3;
  }
  local_4614 = local_4630->ArrayNum;
  local_4630->ArrayNum = local_4630->ArrayNum + 1;
  local_4318 = (local_4630->AllocatorInstance).Data;
  local_4310 = local_4318 + (longlong)local_4614 * 0x10;
  local_4308 = ::operator_new(0x10,local_4310);
  TSharedRef<SDocumentsTest::FDocumentInfo,1>::TSharedRef<SDocumentsTest::FDocumentInfo,1>
            (local_4308,&local_3f00);
  local_456c = local_4614;
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3f00.SharedReferenceCount);
  if (!bVar20) {
    FText::~FText(&local_3d38);
  }
  local_4628 = &this->Documents;
  local_45b0 = ::operator_new(0x10);
  bVar20 = local_45b0 == (FText *)0x0;
  if (bVar20) {
    local_4580 = (FText *)0x0;
  }
  else {
    local_4300 = FText::AsLocalizable_Advanced_LocText
                           (&local_3d28,L"STestSuite",L"Document05",L"Document 5");
    local_42f8 = local_45b0;
    FText::FText(local_45b0,local_4300);
    local_42f0 = local_45b0;
    local_4580 = local_45b0;
  }
  TVar4 = MakeShareable<SDocumentsTest::FDocumentInfo>((FDocumentInfo *)local_3d78);
  TSharedRef<SDocumentsTest::FDocumentInfo,1>::
  TSharedRef<SDocumentsTest::FDocumentInfo,1><SDocumentsTest::FDocumentInfo>
            (&local_3ef0,(TRawPtrProxy<SDocumentsTest::FDocumentInfo> *)TVar4.Object);
  local_45a8 = &local_3ef0;
  local_42e8 = (TSharedRef<SDocumentsTest::FDocumentInfo,1> *)(local_4628->AllocatorInstance).Data;
  local_42e0 = local_42e8;
  local_42d8 = local_42e8;
  if ((local_42e8 <= local_45a8) &&
     (local_42d0 = (local_4628->AllocatorInstance).Data, local_42c8 = local_42d0,
     local_42c0 = local_42d0,
     local_45a8 <
     (TSharedRef<SDocumentsTest::FDocumentInfo,1> *)
     (local_42d0 + (longlong)local_4628->ArrayMax * 0x10))) {
    local_42b8 = 0;
    local_42b4 = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_4298 = (longlong)local_4628->ArrayNum;
    local_4290 = (longlong)local_4628->ArrayMax;
    local_42b0 = (local_4628->AllocatorInstance).Data;
    local_42a8 = local_42b0;
    local_42a0 = local_42b0;
    local_4288 = local_42b0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_4628->ArrayNum == local_4628->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_4628->AllocatorInstance,&local_4628->ArrayMax);
    local_4628->ArrayNum = iVar3;
  }
  local_4610 = local_4628->ArrayNum;
  local_4628->ArrayNum = local_4628->ArrayNum + 1;
  local_4280 = (local_4628->AllocatorInstance).Data;
  local_4278 = local_4280 + (longlong)local_4610 * 0x10;
  local_4270 = ::operator_new(0x10,local_4278);
  TSharedRef<SDocumentsTest::FDocumentInfo,1>::TSharedRef<SDocumentsTest::FDocumentInfo,1>
            (local_4270,&local_3ef0);
  local_4568 = local_4610;
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3ef0.SharedReferenceCount);
  if (!bVar20) {
    FText::~FText(&local_3d28);
  }
  this->bButtonOneVisible = true;
  local_3f38 = (TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_;
  local_4228 = SVerticalBox::FArguments::FArguments(&local_3180);
  local_4238 = SVerticalBox::Slot(&local_3470);
  local_4258 = SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::FArguments::FArguments
                         (&local_2f78);
  local_4268 = local_3ab0;
  local_460c[1] = 0;
  local_4260 = TAttribute<enum_ESelectionMode::Type>::TAttribute<enum_ESelectionMode::Type>
                         (local_4268,(Type *)(local_460c + 1));
  local_4250 = SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::FArguments::SelectionMode
                         (local_4258,local_4260);
  local_4248 = SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::FArguments::ListItemsSource
                         (local_4250,&this->Documents);
  local_3e50 = GenerateListRow;
  local_3e48 = 0;
  ppcVar15 = &local_3e50;
  puVar16 = local_3d18;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *(undefined1 *)ppcVar15;
    ppcVar15 = (code **)((longlong)ppcVar15 + 1);
    puVar16 = puVar16 + 1;
  }
  puVar16 = local_3d18;
  ppVar17 = &local_3d08;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined1 *)ppVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    ppVar17 = (pmf_104ae464 *)&ppVar17->field_0x1;
  }
  local_4240 = SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::FArguments::
               OnGenerateRow<SDocumentsTest>(local_4248,this,&local_3d08);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_4654);
  this_00 = MakeTDecl<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T0RequiredArgs>
                      (&local_3ac8,"SListView< TSharedRef<FDocumentInfo> >",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x56e,&local_4654);
  pTVar5 = TSlateDecl<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T0RequiredArgs>
           ::operator<<=(this_00,&local_3bc8,local_4240);
  TSharedRef<SWidget,1>::
  TSharedRef<SWidget,1><SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>_>
            (&local_3e80,pTVar5);
  local_4230 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_4238,&local_3e80);
  local_3ff0 = SVerticalBox::FArguments::operator+(local_4228,local_4230);
  pFVar6 = SVerticalBox::Slot(&local_3558);
  local_4220 = &pFVar6->field_0x48;
  pFVar6 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
                     ((FSlotArgumentsMixin *)local_4220,HAlign_Center);
  local_4218 = &pFVar6->field_0x48;
  local_4000 = TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::VAlign
                         ((FSlotArgumentsMixin *)local_4218,VAlign_Center);
  local_4200 = SButton::FArguments::FArguments(&local_b18);
  local_4210 = &local_39b0;
  local_460c[2] = 0x14;
  local_4208 = TAttribute<FMargin>::TAttribute<FMargin><int>(local_4210,local_460c + 2);
  local_41f8 = SButton::FArguments::ContentPadding(local_4200,local_4208);
  local_41f0 = SButton::FArguments::HAlign(local_41f8,HAlign_Center);
  local_4010 = SButton::FArguments::VAlign(local_41f0,VAlign_Center);
  local_41c0 = SButton::FArguments::FArguments(&local_1058);
  local_41d0 = &local_38f0;
  local_41e0 = TQuat2<float>::TQuat2<float>((TQuat2<float> *)(local_3d78 + 8),__real_be860a92);
  local_3e40._s_0.X = __real_4034000000000000;
  local_3e40._s_0.Y = __real_4034000000000000;
  local_41e8 = &local_3e40;
  local_41d8 = local_41e8;
  pTVar7 = Concatenate<float,double>(&local_80,(TVector2<double> *)&local_41e8->_s_0,local_41e0);
  local_41c8 = TAttribute<TOptional<TTransform2<float>_>_>::
               TAttribute<TOptional<TTransform2<float>_>_><TTransform2<float>_>(local_41d0,pTVar7);
  local_41a8 = TSlateBaseNamedArgs<SButton>::RenderTransform
                         ((TSlateBaseNamedArgs<SButton> *)local_41c0,local_41c8);
  local_41b8 = &local_3980;
  local_460c[3] = 0x14;
  local_41b0 = TAttribute<FMargin>::TAttribute<FMargin><int>(local_41b8,local_460c + 3);
  local_41a0 = SButton::FArguments::ContentPadding(local_41a8,local_41b0);
  local_4198 = SButton::FArguments::HAlign(local_41a0,HAlign_Center);
  local_4020 = SButton::FArguments::VAlign(local_4198,VAlign_Center);
  local_4168 = SButton::FArguments::FArguments(&local_1598);
  local_4178 = &local_38b8;
  local_4188 = TQuat2<float>::TQuat2<float>(&local_3db0,__real_be860a92);
  local_3e30._s_0.X = __real_4034000000000000;
  local_3e30._s_0.Y = __real_4034000000000000;
  local_4190 = &local_3e30;
  local_4180 = local_4190;
  pTVar7 = Concatenate<float,double>(&local_68,(TVector2<double> *)&local_4190->_s_0,local_4188);
  local_4170 = TAttribute<TOptional<TTransform2<float>_>_>::
               TAttribute<TOptional<TTransform2<float>_>_><TTransform2<float>_>(local_4178,pTVar7);
  local_4150 = TSlateBaseNamedArgs<SButton>::RenderTransform
                         ((TSlateBaseNamedArgs<SButton> *)local_4168,local_4170);
  local_4160 = &local_3950;
  local_460c[4] = 0x14;
  local_4158 = TAttribute<FMargin>::TAttribute<FMargin><int>(local_4160,local_460c + 4);
  local_4148 = SButton::FArguments::ContentPadding(local_4150,local_4158);
  local_4140 = SButton::FArguments::HAlign(local_4148,HAlign_Center);
  local_4030 = SButton::FArguments::VAlign(local_4140,VAlign_Center);
  local_4128 = SButton::FArguments::FArguments(&local_1ad8);
  local_4138 = &local_3a90;
  local_4653 = false;
  local_4130 = TAttribute<bool>::TAttribute<bool>(local_4138,&local_4653);
  local_40f8 = TSlateBaseNamedArgs<SButton>::IsEnabled
                         ((TSlateBaseNamedArgs<SButton> *)local_4128,local_4130);
  local_4108 = &local_3880;
  local_4118 = TQuat2<float>::TQuat2<float>(&local_3da8,__real_be860a92);
  local_3ee0._s_0.X = __real_4034000000000000;
  local_3ee0._s_0.Y = __real_4034000000000000;
  local_4120 = &local_3ee0;
  local_4110 = local_4120;
  pTVar7 = Concatenate<float,double>(&local_50,(TVector2<double> *)&local_4120->_s_0,local_4118);
  local_4100 = TAttribute<TOptional<TTransform2<float>_>_>::
               TAttribute<TOptional<TTransform2<float>_>_><TTransform2<float>_>(local_4108,pTVar7);
  local_40e0 = TSlateBaseNamedArgs<SButton>::RenderTransform
                         ((TSlateBaseNamedArgs<SButton> *)local_40f8,local_4100);
  local_40f0 = &local_3920;
  local_460c[5] = 0x14;
  local_40e8 = TAttribute<FMargin>::TAttribute<FMargin><int>(local_40f0,local_460c + 5);
  local_40d8 = SButton::FArguments::ContentPadding(local_40e0,local_40e8);
  local_40d0 = SButton::FArguments::HAlign(local_40d8,HAlign_Center);
  local_4040 = SButton::FArguments::VAlign(local_40d0,VAlign_Center);
  local_40a0 = SButton::FArguments::FArguments(&local_2018);
  local_40b0 = &local_3848;
  local_40c0 = TQuat2<float>::TQuat2<float>(&local_3da0,__real_be860a92);
  local_3e10._s_0.X = __real_4034000000000000;
  local_3e10._s_0.Y = __real_4034000000000000;
  local_40c8 = &local_3e10;
  local_40b8 = local_40c8;
  pTVar7 = Concatenate<float,double>(&local_38,(TVector2<double> *)&local_40c8->_s_0,local_40c0);
  local_40a8 = TAttribute<TOptional<TTransform2<float>_>_>::
               TAttribute<TOptional<TTransform2<float>_>_><TTransform2<float>_>(local_40b0,pTVar7);
  local_4088 = TSlateBaseNamedArgs<SButton>::RenderTransform
                         ((TSlateBaseNamedArgs<SButton> *)local_40a0,local_40a8);
  local_4098 = &local_3a70;
  local_460c[0] = 0x14;
  local_4090 = TAttribute<FMargin>::TAttribute<FMargin><int>(local_4098,local_460c);
  local_4080 = SButton::FArguments::ContentPadding(local_4088,local_4090);
  local_4078 = SButton::FArguments::HAlign(local_4080,HAlign_Center);
  local_4050 = SButton::FArguments::VAlign(local_4078,VAlign_Center);
  local_4060 = STextBlock::FArguments::FArguments(&local_5d8);
  local_4070 = &local_3a40;
  pFVar8 = FText::AsLocalizable_Advanced_LocText(&local_3bd8,L"x",L"ClickMe",L"ClickMe!");
  local_4068 = TAttribute<FText>::TAttribute<FText>(local_4070,pFVar8);
  local_4058 = STextBlock::FArguments::Text(local_4060,local_4068);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_4652);
  this_01 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                      (&local_3ae0,"STextBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x589,&local_4652);
  pTVar9 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_01,&local_3be8,local_4058);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_3e60,pTVar9);
  local_4048 = SButton::FArguments::operator[](local_4050,&local_3e60);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_4651);
  pTVar10 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_3af8,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x585,&local_4651);
  pTVar11 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar10,&local_3bf8,local_4048);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_3e70,pTVar11);
  local_4038 = SButton::FArguments::operator[](local_4040,&local_3e70);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_4650);
  pTVar10 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_3b10,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x580,&local_4650);
  pTVar11 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar10,&local_3c08,local_4038);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_3e20,pTVar11);
  local_4028 = SButton::FArguments::operator[](local_4030,&local_3e20);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_464f);
  pTVar10 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_3b28,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x57c,&local_464f);
  pTVar11 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar10,&local_3c18,local_4028);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_3e90,pTVar11);
  local_4018 = SButton::FArguments::operator[](local_4020,&local_3e90);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_464e);
  pTVar10 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_3b40,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x578,&local_464e);
  pTVar11 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar10,&local_3c28,local_4018);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_3ea0,pTVar11);
  local_4008 = SButton::FArguments::operator[](local_4010,&local_3ea0);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_464d);
  pTVar10 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_3b58,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x575,&local_464d);
  pTVar11 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar10,&local_3c38,local_4008);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_3eb0,pTVar11);
  local_3ff8 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_4000,&local_3eb0);
  local_3f48 = SVerticalBox::FArguments::operator+(local_3ff0,local_3ff8);
  local_3f58 = SVerticalBox::Slot(&local_3640);
  local_3fa8 = SHorizontalBox::FArguments::FArguments(&local_3388);
  local_3fb8 = SHorizontalBox::Slot(&local_3728);
  local_3fe8 = SButton::FArguments::FArguments(&local_2558);
  local_3e00 = GetButtonOneVisibility;
  local_3df8 = 0;
  ppcVar15 = &local_3e00;
  puVar16 = local_3cf8;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *(undefined1 *)ppcVar15;
    ppcVar15 = (code **)((longlong)ppcVar15 + 1);
    puVar16 = puVar16 + 1;
  }
  puVar16 = local_3cf8;
  ppVar18 = &local_3ce8;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined1 *)ppVar18 = *puVar16;
    puVar16 = puVar16 + 1;
    ppVar18 = (pmf_89769052 *)&ppVar18->field_0x1;
  }
  local_3fd0 = TSlateBaseNamedArgs<SButton>::Visibility<SDocumentsTest>
                         ((TSlateBaseNamedArgs<SButton> *)local_3fe8,this,&local_3ce8);
  local_3fe0 = &local_3a10;
  pFVar8 = FText::AsLocalizable_Advanced_LocText(&local_3c48,L"STestSuite",L"Button1",L"Button One")
  ;
  local_3fd8 = TAttribute<FText>::TAttribute<FText>(local_3fe0,pFVar8);
  local_3fc8 = SButton::FArguments::Text(local_3fd0,local_3fd8);
  local_3df0 = ToggleButtonOneVisibility;
  local_3de8 = 0;
  ppcVar15 = &local_3df0;
  puVar16 = local_3cd8;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *(undefined1 *)ppcVar15;
    ppcVar15 = (code **)((longlong)ppcVar15 + 1);
    puVar16 = puVar16 + 1;
  }
  puVar16 = local_3cd8;
  ppVar19 = &local_3cc8;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined1 *)ppVar19 = *puVar16;
    puVar16 = puVar16 + 1;
    ppVar19 = (pmf_bb1ff469 *)&ppVar19->field_0x1;
  }
  local_3fc0 = SButton::FArguments::OnClicked<SDocumentsTest>(local_3fc8,this,&local_3cc8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_464c);
  pTVar10 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_3b70,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x596,&local_464c);
  pTVar11 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar10,&local_3c58,local_3fc0);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_3ec0,pTVar11);
  local_3fb0 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3fb8,&local_3ec0);
  local_3f68 = SHorizontalBox::FArguments::operator+(local_3fa8,local_3fb0);
  local_3f78 = SHorizontalBox::Slot(&local_3810);
  local_3f90 = SButton::FArguments::FArguments(&local_2a98);
  local_3fa0 = &local_39e0;
  pFVar8 = FText::AsLocalizable_Advanced_LocText(&local_3c68,L"STestSuite",L"Button2",L"Button Two")
  ;
  local_3f98 = TAttribute<FText>::TAttribute<FText>(local_3fa0,pFVar8);
  local_3f88 = SButton::FArguments::Text(local_3f90,local_3f98);
  local_3de0 = ToggleButtonOneVisibility;
  local_3dd8 = 0;
  ppcVar15 = &local_3de0;
  puVar16 = local_3cb8;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *(undefined1 *)ppcVar15;
    ppcVar15 = (code **)((longlong)ppcVar15 + 1);
    puVar16 = puVar16 + 1;
  }
  puVar16 = local_3cb8;
  ppVar19 = &local_3ca8;
  for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *(undefined1 *)ppVar19 = *puVar16;
    puVar16 = puVar16 + 1;
    ppVar19 = (pmf_bb1ff469 *)&ppVar19->field_0x1;
  }
  local_3f80 = SButton::FArguments::OnClicked<SDocumentsTest>(local_3f88,this,&local_3ca8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_464b);
  pTVar10 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_3b88,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x59d,&local_464b);
  pTVar11 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                      (pTVar10,&local_3c78,local_3f80);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_3ed0,pTVar11);
  local_3f70 = TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3f78,&local_3ed0);
  local_3f60 = SHorizontalBox::FArguments::operator+(local_3f68,local_3f70);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_464a);
  this_02 = MakeTDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
                      (&local_3ba0,"SHorizontalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x593,&local_464a);
  pTVar12 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_02,&local_3c88,local_3f60);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SHorizontalBox>(&local_3dc0,pTVar12);
  local_3f50 = TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[]
                         ((FSlotArguments *)local_3f58,&local_3dc0);
  local_3f40 = SVerticalBox::FArguments::operator+(local_3f48,local_3f50);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_4649);
  this_03 = MakeTDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
                      (&local_3bb8,"SVerticalBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x56b,&local_4649);
  pTVar13 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (this_03,&local_3c98,local_3f40);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SVerticalBox>(&local_3dd0,pTVar13);
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            (local_3f38,&local_3dd0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3dd0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3c98.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3bb8._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3dc0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3c88.SharedReferenceCount);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>(&local_3ba0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3ed0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3c78.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3b88._Widget.SharedReferenceCount);
  FText::~FText(&local_3c68);
  SButton::FArguments::~FArguments(&local_2a98);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_3810);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3ec0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3c58.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3b70._Widget.SharedReferenceCount);
  FText::~FText(&local_3c48);
  SButton::FArguments::~FArguments(&local_2558);
  SHorizontalBox::FSlot::FSlotArguments::~FSlotArguments(&local_3728);
  TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SHorizontalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_3388._Slots);
  TSlateBaseNamedArgs<SHorizontalBox>::~TSlateBaseNamedArgs<SHorizontalBox>
            ((TSlateBaseNamedArgs<SHorizontalBox> *)&local_3388);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_3640);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3eb0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3c38.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3b58._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3ea0);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3c28.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3b40._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3e90);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3c18.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3b28._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3e20);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3c08.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3b10._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3e70);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3bf8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3af8._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3e60);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_3be8);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_3ae0);
  FText::~FText(&local_3bd8);
  STextBlock::FArguments::~FArguments(&local_5d8);
  SButton::FArguments::~FArguments(&local_2018);
  SButton::FArguments::~FArguments(&local_1ad8);
  SButton::FArguments::~FArguments(&local_1598);
  SButton::FArguments::~FArguments(&local_1058);
  SButton::FArguments::~FArguments(&local_b18);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_3558);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_3e80);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3bc8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_3ac8._Widget.SharedReferenceCount);
  SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::FArguments::~FArguments(&local_2f78);
  SVerticalBox::FSlot::FSlotArguments::~FSlotArguments(&local_3470);
  TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>::
  ~TArray<SVerticalBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_>(&local_3180._Slots);
  TSlateBaseNamedArgs<SVerticalBox>::~TSlateBaseNamedArgs<SVerticalBox>
            ((TSlateBaseNamedArgs<SVerticalBox> *)&local_3180);
  return;
}

// GenerateListRow @ 1430c4ff0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<ITableRow,1> * __thiscall
SDocumentsTest::GenerateListRow
          (SDocumentsTest *this,TSharedRef<ITableRow,1> *__return_storage_ptr__,
          TSharedRef<SDocumentsTest::FDocumentInfo,1> *param_1,TSharedRef<STableViewBase,1> *param_2
          )

{
  FText *pFVar1;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SButton,1> *pTVar2;
  T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> TVar3;
  TSlateDecl<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  *this_01;
  TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> *pTVar4;
  longlong lVar5;
  code **ppcVar6;
  undefined1 *puVar7;
  T0RequiredArgs local_968 [4];
  undefined4 local_964;
  TDelegate<FReply___cdecl(void),FDefaultDelegateUserPolicy> *local_960;
  FArguments *local_958;
  TAttribute<FText> *local_950;
  TAttribute<FText> *local_948;
  FArguments *local_940;
  FArguments *local_938;
  FArguments *local_930;
  FArguments *local_928;
  code *local_920;
  undefined4 local_918;
  TSharedRef<SWidget,1> local_910;
  undefined1 local_900 [24];
  TSharedRef<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> local_8e8;
  TSharedRef<SButton,1> local_8d8;
  TSlateDecl<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
  local_8c8;
  TSlateDecl<SButton,RequiredArgs::T0RequiredArgs> local_8b0;
  TDelegate<FReply___cdecl(void),FDefaultDelegateUserPolicy> local_898;
  TAttribute<FText> local_880;
  FArguments local_850;
  FArguments local_558;
  
  local_964 = 0;
  local_930 = STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::FArguments::FArguments
                        (&local_850);
  local_958 = SButton::FArguments::FArguments(&local_558);
  local_920 = SummonDocumentButtonClicked;
  local_918 = 0;
  ppcVar6 = &local_920;
  puVar7 = local_900 + 8;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *(undefined1 *)ppcVar6;
    ppcVar6 = (code **)((longlong)ppcVar6 + 1);
    puVar7 = puVar7 + 1;
  }
  local_960 = TDelegate<FReply___cdecl(void),FDefaultDelegateUserPolicy>::
              CreateSP<SDocumentsTest,TSharedRef<SDocumentsTest::FDocumentInfo,1>_&>
                        (&local_898,this,(pmf_45ef89f7 *)(local_900 + 8),param_1);
  local_940 = SButton::FArguments::OnClicked(local_958,local_960);
  local_950 = &local_880;
  pFVar1 = &TSharedRef<SDocumentsTest::FDocumentInfo,1>::operator->(param_1)->DisplayName;
  local_948 = TAttribute<FText>::TAttribute<FText><FText>(local_950,pFVar1);
  local_938 = SButton::FArguments::Text(local_940,local_948);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_968);
  this_00 = MakeTDecl<SButton,RequiredArgs::T0RequiredArgs>
                      (&local_8b0,"SButton",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x5a9,local_968);
  pTVar2 = TSlateDecl<SButton,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_8d8,local_938);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SButton>(&local_910,pTVar2);
  local_928 = STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::FArguments::operator[]
                        (local_930,&local_910);
  TVar3 = RequiredArgs::MakeRequiredArgs<TSharedRef<STableViewBase,1>_const_&>
                    ((TSharedRef<STableViewBase,1> *)local_900);
  this_01 = MakeTDecl<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
                      (&local_8c8,"STableRow< TSharedRef<FDocumentInfo> >",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x5a7,(T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&> *)TVar3.Arg0);
  pTVar4 = TSlateDecl<STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,RequiredArgs::T1RequiredArgs<TSharedRef<STableViewBase,1>_const_&>_>
           ::operator<<=(this_01,&local_8e8,local_928);
  TSharedRef<ITableRow,1>::
  TSharedRef<ITableRow,1><STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>_>
            (__return_storage_ptr__,pTVar4);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_8e8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_8c8._Widget.SharedReferenceCount);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_910);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_8d8.SharedReferenceCount);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_8b0._Widget.SharedReferenceCount);
  TDelegate<FReply___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<FReply___cdecl(void),FDefaultDelegateUserPolicy>(&local_898);
  SButton::FArguments::~FArguments(&local_558);
  STableRow<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::FArguments::~FArguments(&local_850);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&param_1->SharedReferenceCount);
  return __return_storage_ptr__;
}

// GetButtonOneVisibility @ 1430c8510

/* WARNING: Enum "Type": Some values do not have unique names */

EVisibility __thiscall SDocumentsTest::GetButtonOneVisibility(SDocumentsTest *this)

{
  uchar *in_RDX;
  EVisibility *local_18;
  
  if (this->bButtonOneVisible == false) {
    local_18 = &EVisibility::Collapsed;
  }
  else {
    local_18 = &EVisibility::Visible;
  }
  *in_RDX = (local_18->Value).Value;
  return (EVisibility)SUB81(in_RDX,0);
}

// SummonDocumentButtonClicked @ 1430faa70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDocumentsTest::SummonDocumentButtonClicked
          (SDocumentsTest *this,FReply *__return_storage_ptr__,
          TSharedRef<SDocumentsTest::FDocumentInfo,1> *param_1)

{
  FText *pFVar1;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> *pTVar2;
  TSharedRef<STextBlock,1> *pTVar3;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> *this_00;
  TSharedRef<SBox,1> *pTVar4;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> *this_01;
  FName *pFVar5;
  T0RequiredArgs local_1478;
  T0RequiredArgs local_1477;
  T0RequiredArgs local_1476;
  T0RequiredArgs local_1475 [5];
  TAttribute<FText> *local_1470;
  TAttribute<FText> *local_1468;
  FArguments *local_1460;
  FArguments *local_1458;
  FArguments *local_1450;
  FArguments *local_1448;
  TAttribute<FText> *local_1440;
  TAttribute<FText> *local_1438;
  FArguments *local_1430;
  FArguments *local_1428;
  FArguments *local_1420;
  FArguments *local_1418;
  FArguments *local_1410;
  FArguments *local_1408;
  TAttribute<FText> *local_1400;
  TAttribute<FText> *local_13f8;
  FArguments *local_13f0;
  FArguments *local_13e8;
  NamedSlotProperty<SDockTab::FArguments> *local_13e0;
  FArguments *local_13d8;
  FName *local_13d0;
  FName local_13c8;
  TSharedRef<SDockTab,1> *local_13c0;
  FName local_13b8;
  FTabManager *local_13b0;
  TSharedRef<SWidget,1> local_13a8;
  TSharedRef<SWidget,1> local_1398;
  TSharedRef<SWidget,1> local_1388;
  FName local_1378;
  TSharedRef<SDockTab,1> local_1370;
  TSharedRef<STextBlock,1> local_1360;
  FText local_1350;
  TSharedRef<SBox,1> local_1340;
  TSharedRef<STextBlock,1> local_1330;
  TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs> local_1320;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1308;
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs> local_12f0;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_12d8;
  NamedSlotProperty<SDockTab::FArguments> local_12c0;
  TAttribute<FText> local_12b0;
  TAttribute<FText> local_1280;
  TAttribute<FText> local_1250;
  FArguments local_1220;
  FArguments local_ee0;
  FArguments local_ab8;
  FArguments local_560;
  undefined8 uStack_8;
  
  uStack_8 = 0x1430faa89;
  local_13b0 = this->TabManager;
  local_1460 = SDockTab::FArguments::FArguments(&local_ee0);
  local_1470 = &local_12b0;
  pFVar1 = &TSharedRef<SDocumentsTest::FDocumentInfo,1>::operator->(param_1)->DisplayName;
  local_1468 = TAttribute<FText>::TAttribute<FText><FText>(local_1470,pFVar1);
  local_1458 = SDockTab::FArguments::Label(local_1460,local_1468);
  local_1410 = SDockTab::FArguments::TabRole(local_1458,DocumentTab);
  local_1450 = SBox::FArguments::FArguments(&local_1220);
  local_1448 = SBox::FArguments::HAlign(local_1450,HAlign_Center);
  local_1420 = SBox::FArguments::VAlign(local_1448,VAlign_Center);
  local_1430 = STextBlock::FArguments::FArguments(&local_560);
  local_1440 = &local_1280;
  pFVar1 = &TSharedRef<SDocumentsTest::FDocumentInfo,1>::operator->(param_1)->DisplayName;
  local_1438 = TAttribute<FText>::TAttribute<FText><FText>(local_1440,pFVar1);
  local_1428 = STextBlock::FArguments::Text(local_1430,local_1438);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_1478);
  pTVar2 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_12d8,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x5bb,&local_1478);
  pTVar3 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar2,&local_1330,local_1428);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_1388,pTVar3);
  local_1418 = SBox::FArguments::operator[](local_1420,&local_1388);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_1477);
  this_00 = MakeTDecl<SBox,RequiredArgs::T0RequiredArgs>
                      (&local_12f0,"SBox",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x5b8,&local_1477);
  pTVar4 = TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (this_00,&local_1340,local_1418);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><SBox>(&local_1398,pTVar4);
  local_1408 = SDockTab::FArguments::operator[](local_1410,&local_1398);
  local_13e0 = SDockTab::FArguments::TabWellContentRight(local_1408,&local_12c0);
  local_13f0 = STextBlock::FArguments::FArguments(&local_ab8);
  local_1400 = &local_1250;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_1350,L"STestSuite",L"DocumentRightContentLabel",L"Right Content");
  local_13f8 = TAttribute<FText>::TAttribute<FText>(local_1400,pFVar1);
  local_13e8 = STextBlock::FArguments::Text(local_13f0,local_13f8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(&local_1476);
  pTVar2 = MakeTDecl<STextBlock,RequiredArgs::T0RequiredArgs>
                     (&local_1308,"STextBlock",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                      ,0x5c1,&local_1476);
  pTVar3 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (pTVar2,&local_1360,local_13e8);
  TSharedRef<SWidget,1>::TSharedRef<SWidget,1><STextBlock>(&local_13a8,pTVar3);
  local_13d8 = NamedSlotProperty<SDockTab::FArguments>::operator[](local_13e0,&local_13a8);
  RequiredArgs::T0RequiredArgs::T0RequiredArgs(local_1475);
  this_01 = MakeTDecl<SDockTab,RequiredArgs::T0RequiredArgs>
                      (&local_1320,"SDockTab",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Widgets\\Testing\\STestSuite.cpp"
                       ,0x5b4,local_1475);
  local_13c0 = TSlateDecl<SDockTab,RequiredArgs::T0RequiredArgs>::operator<<=
                         (this_01,&local_1370,local_13d8);
  local_13d0 = &local_1378;
  pFVar5 = ::FName::FName(local_13d0,"DocTest");
  local_13c8 = *pFVar5;
  local_13b8 = local_13c8;
  FTabManager::InsertNewDocumentTab(local_13b0,local_13c8,RequireClosedTab,local_13c0);
  TSharedRef<SDockTab,1>::~TSharedRef<SDockTab,1>(&local_1370);
  TSharedPtr<SDockTab,1>::~TSharedPtr<SDockTab,1>(&local_1320._Widget);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_13a8);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_1360);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_1308);
  FText::~FText(&local_1350);
  STextBlock::FArguments::~FArguments(&local_ab8);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1398);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&local_1340.SharedReferenceCount);
  TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>::~TSlateDecl<SBox,RequiredArgs::T0RequiredArgs>
            (&local_12f0);
  TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_1388);
  TSharedRef<STextBlock,1>::~TSharedRef<STextBlock,1>(&local_1330);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  ~TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>(&local_12d8);
  STextBlock::FArguments::~FArguments(&local_560);
  SBox::FArguments::~FArguments(&local_1220);
  SDockTab::FArguments::~FArguments(&local_ee0);
  FReply::Handled(__return_storage_ptr__);
  SharedPointerInternals::FSharedReferencer<1>::~FSharedReferencer<1>
            (&param_1->SharedReferenceCount);
  return __return_storage_ptr__;
}

// ToggleButtonOneVisibility @ 1431057f0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SDocumentsTest::ToggleButtonOneVisibility(SDocumentsTest *this,FReply *__return_storage_ptr__)

{
  this->bButtonOneVisible = this->bButtonOneVisible == false;
  FReply::Handled(__return_storage_ptr__);
  return __return_storage_ptr__;
}

