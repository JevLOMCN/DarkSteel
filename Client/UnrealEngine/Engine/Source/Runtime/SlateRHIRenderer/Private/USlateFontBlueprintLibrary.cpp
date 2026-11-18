// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 8

// StaticClass @ 145fd6c20

UClass * __cdecl USlateFontBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateFontBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SlateRHIRenderer",L"SlateFontBlueprintLibrary",
               &Z_Registration_Info_UClass_USlateFontBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUSlateFontBlueprintLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<USlateFontBlueprintLibrary>,
               InternalVTableHelperCtorCaller<USlateFontBlueprintLibrary>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateFontBlueprintLibrary.InnerSingleton;
}

// USlateFontBlueprintLibrary @ 145fe88c0

USlateFontBlueprintLibrary * __thiscall
USlateFontBlueprintLibrary::USlateFontBlueprintLibrary
          (USlateFontBlueprintLibrary *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USlateFontBlueprintLibrary__6B_;
  return this;
}

// USlateFontBlueprintLibrary @ 145fe88f0

USlateFontBlueprintLibrary * __thiscall
USlateFontBlueprintLibrary::USlateFontBlueprintLibrary
          (USlateFontBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USlateFontBlueprintLibrary__6B_;
  return this;
}

// ~USlateFontBlueprintLibrary @ 145feb540

void __thiscall
USlateFontBlueprintLibrary::~USlateFontBlueprintLibrary(USlateFontBlueprintLibrary *this)

{
  *(undefined ***)this = &___7USlateFontBlueprintLibrary__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14600d4b0

UClass * __cdecl USlateFontBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateFontBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SlateRHIRenderer",L"SlateFontBlueprintLibrary",
               &Z_Registration_Info_UClass_USlateFontBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUSlateFontBlueprintLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<USlateFontBlueprintLibrary>,
               InternalVTableHelperCtorCaller<USlateFontBlueprintLibrary>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateFontBlueprintLibrary.InnerSingleton;
}

// MakeSlateFontInfo @ 14601c9e0

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateFontInfo * __cdecl
USlateFontBlueprintLibrary::MakeSlateFontInfo
          (FSlateFontInfo *__return_storage_ptr__,UObject *param_1,UObject *param_2,
          FFontOutlineSettings *param_3,FName param_4,float param_5,int param_6,float param_7,
          bool param_8,bool param_9,float param_10)

{
  int iVar1;
  UObject *pUVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  UClass *pUVar6;
  FFrame *pFVar7;
  FSlateFontInfo *pFVar8;
  FFrame *pFVar9;
  FText local_38;
  FBlueprintExceptionInfo local_28;
  
  FSlateFontInfo::FSlateFontInfo(__return_storage_ptr__);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  (__return_storage_ptr__->FontObject).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_2);
  }
  (__return_storage_ptr__->FontMaterial).field0_0x0.DebugPtr = param_2;
  (__return_storage_ptr__->OutlineSettings).OutlineSize = param_3->OutlineSize;
  (__return_storage_ptr__->OutlineSettings).bMiteredCorners = param_3->bMiteredCorners;
  (__return_storage_ptr__->OutlineSettings).bSeparateFillAlpha = param_3->bSeparateFillAlpha;
  (__return_storage_ptr__->OutlineSettings).bApplyOutlineToDropShadows =
       param_3->bApplyOutlineToDropShadows;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_3->OutlineMaterial).field0_0x0.DebugPtr, pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  (__return_storage_ptr__->OutlineSettings).OutlineMaterial.field0_0x0 =
       (param_3->OutlineMaterial).field0_0x0;
  uVar4 = *(undefined8 *)((longlong)&(param_3->OutlineColor).field0_0x0 + 8);
  *(undefined8 *)&(__return_storage_ptr__->OutlineSettings).OutlineColor.field0_0x0 =
       *(undefined8 *)&(param_3->OutlineColor).field0_0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->OutlineSettings).OutlineColor.field0_0x0 + 8)
       = uVar4;
  __return_storage_ptr__->TypefaceFontName = param_4;
  __return_storage_ptr__->Size = param_5;
  __return_storage_ptr__->LetterSpacing = param_6;
  __return_storage_ptr__->SkewAmount = param_7;
  __return_storage_ptr__->bForceMonospaced = param_8;
  __return_storage_ptr__->MonospacedWidth = param_10;
  __return_storage_ptr__->bMaterialIsStencil = param_9;
  if (param_2 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) {
      return __return_storage_ptr__;
    }
    pFVar7 = FFrame::GetThreadLocalTopStackFrame();
    if ((pFVar7 == (FFrame *)0x0) ||
       (pFVar7 = FFrame::GetThreadLocalTopStackFrame(), pFVar7->Object == (UObject *)0x0)) {
      if (2 < (byte)LogSlateFontBlueprint._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlateFontBlueprint);
      }
    }
    else {
      FText::FromString(&local_38,
                        L"Font Material is not of type material. Either remove the reference or replace it with an object of type material."
                       );
      local_28.EventType = FatalError;
      local_28.Description.field0_0x0.TypedValue.TextData.Reference =
           (TRefCountPtr<ITextData>)(TRefCountPtr<ITextData>)local_38.TextData.Reference;
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 8))
                  (local_38.TextData.Reference,&param_8);
      }
      local_28.Description.field0_0x0.TypedValue.Flags = local_38.Flags;
      if ((local_28.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FSlateFontInfo *)(*pcVar3)();
        return pFVar8;
      }
      pFVar7 = FFrame::GetThreadLocalTopStackFrame();
      pFVar9 = FFrame::GetThreadLocalTopStackFrame();
      FBlueprintCoreDelegates::ThrowScriptException(pFVar9->Object,pFVar7,&local_28);
      if (local_28.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_28.Description.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
    }
    (__return_storage_ptr__->FontMaterial).field0_0x0.DebugPtr = (UObject *)0x0;
    return __return_storage_ptr__;
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUSlateFontBlueprintLibrary @ 14602c210

void __cdecl USlateFontBlueprintLibrary::StaticRegisterNativesUSlateFontBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_USlateFontBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execMakeSlateFontInfo @ 14602f510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
USlateFontBlueprintLibrary::execMakeSlateFontInfo(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  FName FVar9;
  UObject *pUVar10;
  UObject *pUVar11;
  UObject *pUVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  UClass *pUVar15;
  FFrame *pFVar16;
  FFrame *pFVar17;
  bool bVar18;
  bool bVar19;
  undefined1 local_res10 [8];
  undefined1 local_res18;
  undefined1 local_res20;
  int local_194;
  int local_190;
  float local_18c;
  float local_188;
  int local_184;
  float local_180 [2];
  FName local_178;
  int local_170;
  UObject *local_168;
  UObject *local_160;
  int local_158;
  undefined2 local_154;
  undefined1 local_152;
  UObject *local_150;
  FLinearColor_u_0 local_148;
  TObjectPtr<UObject_const_>_u_0 local_138;
  UObject *local_130;
  int local_128;
  undefined1 local_124;
  undefined1 local_123;
  undefined1 local_122;
  UObject *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  TReferenceControllerBase<1> *local_100;
  FName local_f8;
  float local_f0;
  int local_ec;
  float local_e8;
  undefined1 local_e4;
  undefined1 local_e3;
  undefined1 local_e2;
  float local_e0;
  FText local_d8;
  FBlueprintExceptionInfo local_c8;
  undefined8 local_b0;
  TReferenceControllerBase<1> *pTStack_a8;
  undefined8 local_90;
  undefined8 uStack_88;
  
  local_160 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_160,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_160);
  }
  local_168 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  local_158 = 0;
  local_154 = 0;
  local_148 = FLinearColor::Black.field0_0x0;
  local_152 = 0;
  local_150 = (UObject *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  local_178.ComparisonIndex.Value = 0;
  local_178.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_178,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_178);
  }
  local_180[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_180,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_180);
  }
  local_184 = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_184,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_184);
  }
  local_188 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  local_194 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_194,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_194);
  }
  bVar18 = local_194 != 0;
  local_190 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_190,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_190);
  }
  bVar19 = local_190 != 0;
  local_18c = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18c,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18c);
  }
  pUVar12 = local_150;
  iVar2 = local_158;
  FVar9 = local_178;
  fVar8 = local_180[0];
  fVar7 = local_188;
  fVar6 = local_18c;
  local_170 = local_184;
  local_res10[0] = (undefined1)local_154;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res18 = local_154._1_1_;
  local_res20 = local_152;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_150 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_150);
  }
  pUVar11 = local_160;
  pUVar10 = local_168;
  uVar13 = local_148._0_8_;
  uVar14 = local_148._8_8_;
  local_90 = local_148._0_8_;
  uStack_88 = local_148._8_8_;
  FSlateFontInfo::FSlateFontInfo((FSlateFontInfo *)&local_138.ObjectPtr);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar11);
  }
  local_138.DebugPtr = pUVar11;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar10);
  }
  local_124 = local_res10[0];
  local_123 = local_res18;
  local_122 = local_res20;
  local_130 = pUVar10;
  local_128 = iVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar12);
  }
  local_ec = local_170;
  local_f0 = fVar8;
  local_e8 = fVar7;
  local_e0 = fVar6;
  local_120 = pUVar12;
  local_f8 = FVar9;
  local_118 = uVar13;
  uStack_110 = uVar14;
  local_e3 = bVar18;
  local_e2 = bVar19;
  if (pUVar10 == (UObject *)0x0) goto LAB_14602f9e8;
  pUVar15 = Z_Construct_UClass_UMaterialInterface_NoRegister();
  iVar2 = (int)pUVar15->_padding_;
  if ((iVar2 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
      &pUVar15->_padding_)) goto LAB_14602f9e8;
  pFVar16 = FFrame::GetThreadLocalTopStackFrame();
  if (pFVar16 == (FFrame *)0x0) {
LAB_14602f9c4:
    if (2 < (byte)LogSlateFontBlueprint._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlateFontBlueprint);
    }
  }
  else {
    pFVar16 = FFrame::GetThreadLocalTopStackFrame();
    if (pFVar16->Object == (UObject *)0x0) goto LAB_14602f9c4;
    FText::FromString(&local_d8,
                      L"Font Material is not of type material. Either remove the reference or replace it with an object of type material."
                     );
    local_c8.EventType = FatalError;
    local_c8.Description.field0_0x0.TypedValue.TextData.Reference =
         (TRefCountPtr<ITextData>)(TRefCountPtr<ITextData>)local_d8.TextData.Reference;
    if (local_d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d8.TextData.Reference + 8))
                (local_d8.TextData.Reference,local_res10);
    }
    local_c8.Description.field0_0x0.TypedValue.Flags = local_d8.Flags;
    if (local_c8.Description.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0xbd,
                          L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                         );
      if (bVar18) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar16 = FFrame::GetThreadLocalTopStackFrame();
    pFVar17 = FFrame::GetThreadLocalTopStackFrame();
    FBlueprintCoreDelegates::ThrowScriptException(pFVar17->Object,pFVar16,&local_c8);
    if (local_c8.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_c8.Description.field0_0x0.TypedValue.TextData.Reference +
                  0x10))();
    }
    if (local_d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
    }
  }
  local_130 = (UObject *)0x0;
LAB_14602f9e8:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_138.DebugPtr != (UObject *)0x0)
     ) {
    UE::GC::MarkAsReachable(local_138.DebugPtr);
  }
  *(TObjectPtr<UObject_const_>_u_0 *)param_3 = local_138;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_130 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_130);
  }
  *(UObject **)((longlong)param_3 + 8) = local_130;
  *(int *)((longlong)param_3 + 0x10) = local_128;
  *(undefined1 *)((longlong)param_3 + 0x14) = local_124;
  *(undefined1 *)((longlong)param_3 + 0x15) = local_123;
  *(undefined1 *)((longlong)param_3 + 0x16) = local_122;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_120 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_120);
  }
  *(UObject **)((longlong)param_3 + 0x18) = local_120;
  local_b0 = local_108;
  pTStack_a8 = local_100;
  *(undefined8 *)((longlong)param_3 + 0x20) = local_118;
  *(undefined8 *)((longlong)param_3 + 0x28) = uStack_110;
  if (local_100 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_100->SharedReferenceCount = (atomic<int>)((int)local_100->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = *(TReferenceControllerBase<1> **)((longlong)param_3 + 0x38);
  *(undefined8 *)((longlong)param_3 + 0x30) = local_108;
  *(TReferenceControllerBase<1> **)((longlong)param_3 + 0x38) = local_100;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  *(FName *)((longlong)param_3 + 0x40) = local_f8;
  *(int *)((longlong)param_3 + 0x4c) = local_ec;
  *(undefined1 *)((longlong)param_3 + 0x54) = local_e4;
  *(float *)((longlong)param_3 + 0x48) = local_f0;
  *(undefined1 *)((longlong)param_3 + 0x55) = local_e3;
  *(float *)((longlong)param_3 + 0x50) = local_e8;
  *(undefined1 *)((longlong)param_3 + 0x56) = local_e2;
  *(float *)((longlong)param_3 + 0x58) = local_e0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_100);
  return;
}

