// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 7

// CallAnimNodeFunction<FAnimNode_BlendSpaceGraph> @ 1463f2070

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNodeReference::CallAnimNodeFunction<FAnimNode_BlendSpaceGraph>
          (FAnimNodeReference *this,wchar_t *param_1,
          TFunctionRef<void___cdecl(FAnimNode_BlendSpaceGraph_&)> *param_2)

{
  int iVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  
  if ((this->AnimNode != (FAnimNode_Base *)0x0) &&
     (pUVar2 = this->AnimNodeStruct, pUVar2 != (UScriptStruct *)0x0)) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpaceGraph.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpaceGraph.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpaceGraph,(UObject *)pUVar4,
                           L"AnimNode_BlendSpaceGraph");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpaceGraph.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_1463f2106;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpaceGraph.OuterSingleton)->
                 _padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpaceGraph.OuterSingleton)->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (this->AnimNode != (FAnimNode_Base *)0x0)) {
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8);
      return;
    }
  }
LAB_1463f2106:
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_BlendSpaceGraph>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_BlendSpaceGraph&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
  return;
}

// CallAnimNodeFunction<FAnimNode_BlendSpacePlayer> @ 1463f2140

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNodeReference::CallAnimNodeFunction<FAnimNode_BlendSpacePlayer>
          (FAnimNodeReference *this,wchar_t *param_1,
          TFunctionRef<void___cdecl(FAnimNode_BlendSpacePlayer_&)> *param_2)

{
  int iVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  
  if ((this->AnimNode != (FAnimNode_Base *)0x0) &&
     (pUVar2 = this->AnimNodeStruct, pUVar2 != (UScriptStruct *)0x0)) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,(UObject *)pUVar4,
                           L"AnimNode_BlendSpacePlayer");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_1463f21d6;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton)->
                 _padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayer.OuterSingleton)->_padding_))
    {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (this->AnimNode != (FAnimNode_Base *)0x0)) {
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8);
      return;
    }
  }
LAB_1463f21d6:
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_BlendSpacePlayer>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_BlendSpacePlayer&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
  return;
}

// CallAnimNodeFunction<FAnimNode_LayeredBoneBlend> @ 1463f2210

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNodeReference::CallAnimNodeFunction<FAnimNode_LayeredBoneBlend>
          (FAnimNodeReference *this,wchar_t *param_1,
          TFunctionRef<void___cdecl(FAnimNode_LayeredBoneBlend_&)> *param_2)

{
  int iVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  
  if ((this->AnimNode != (FAnimNode_Base *)0x0) &&
     (pUVar2 = this->AnimNodeStruct, pUVar2 != (UScriptStruct *)0x0)) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_LayeredBoneBlend.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_LayeredBoneBlend.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LayeredBoneBlend,(UObject *)pUVar4,
                           L"AnimNode_LayeredBoneBlend");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_LayeredBoneBlend.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_1463f22a6;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_LayeredBoneBlend.OuterSingleton)->
                 _padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_LayeredBoneBlend.OuterSingleton)->_padding_))
    {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (this->AnimNode != (FAnimNode_Base *)0x0)) {
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8);
      return;
    }
  }
LAB_1463f22a6:
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_LayeredBoneBlend>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_LayeredBoneBlend&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
  return;
}

// CallAnimNodeFunction<FAnimNode_MirrorBase> @ 1463f22e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNodeReference::CallAnimNodeFunction<FAnimNode_MirrorBase>
          (FAnimNodeReference *this,wchar_t *param_1,
          TFunctionRef<void___cdecl(FAnimNode_MirrorBase_&)> *param_2)

{
  int iVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  
  if ((this->AnimNode != (FAnimNode_Base *)0x0) &&
     (pUVar2 = this->AnimNodeStruct, pUVar2 != (UScriptStruct *)0x0)) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_MirrorBase.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_MirrorBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_MirrorBase,(UObject *)pUVar4,
                           L"AnimNode_MirrorBase");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_MirrorBase.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_1463f2376;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_MirrorBase.OuterSingleton)->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_MirrorBase.OuterSingleton)->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (this->AnimNode != (FAnimNode_Base *)0x0)) {
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8);
      return;
    }
  }
LAB_1463f2376:
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_MirrorBase>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_MirrorBase&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
  return;
}

// CallAnimNodeFunction<FAnimNode_ModifyCurve> @ 1463f23b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNodeReference::CallAnimNodeFunction<FAnimNode_ModifyCurve>
          (FAnimNodeReference *this,wchar_t *param_1,
          TFunctionRef<void___cdecl(FAnimNode_ModifyCurve_&)> *param_2)

{
  int iVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  
  if ((this->AnimNode != (FAnimNode_Base *)0x0) &&
     (pUVar2 = this->AnimNodeStruct, pUVar2 != (UScriptStruct *)0x0)) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_ModifyCurve.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_ModifyCurve.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ModifyCurve,(UObject *)pUVar4,
                           L"AnimNode_ModifyCurve");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_ModifyCurve.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_1463f2446;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_ModifyCurve.OuterSingleton)->_padding_
    ;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_ModifyCurve.OuterSingleton)->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (this->AnimNode != (FAnimNode_Base *)0x0)) {
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8);
      return;
    }
  }
LAB_1463f2446:
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_ModifyCurve>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_ModifyCurve&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
  return;
}

// CallAnimNodeFunction<FAnimNode_SequenceEvaluator> @ 1463f2480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequenceEvaluator>
          (FAnimNodeReference *this,wchar_t *param_1,
          TFunctionRef<void___cdecl(FAnimNode_SequenceEvaluator_&)> *param_2)

{
  int iVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  
  if ((this->AnimNode != (FAnimNode_Base *)0x0) &&
     (pUVar2 = this->AnimNodeStruct, pUVar2 != (UScriptStruct *)0x0)) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator,(UObject *)pUVar4,
                           L"AnimNode_SequenceEvaluator");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_1463f2516;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton)->
                 _padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton)->_padding_))
    {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (this->AnimNode != (FAnimNode_Base *)0x0)) {
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8);
      return;
    }
  }
LAB_1463f2516:
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SequenceEvaluator>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_SequenceEvaluator&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
  return;
}

// CallAnimNodeFunction<FAnimNode_SkeletalControlBase> @ 1463f2550

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SkeletalControlBase>
          (FAnimNodeReference *this,wchar_t *param_1,
          TFunctionRef<void___cdecl(FAnimNode_SkeletalControlBase_&)> *param_2)

{
  int iVar1;
  UScriptStruct *pUVar2;
  bool bVar3;
  UPackage *pUVar4;
  
  if ((this->AnimNode != (FAnimNode_Base *)0x0) &&
     (pUVar2 = this->AnimNodeStruct, pUVar2 != (UScriptStruct *)0x0)) {
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SkeletalControlBase.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_SkeletalControlBase.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,(UObject *)pUVar4
                           ,L"AnimNode_SkeletalControlBase");
      if (Z_Registration_Info_UScriptStruct_FAnimNode_SkeletalControlBase.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_1463f25e6;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FAnimNode_SkeletalControlBase.OuterSingleton)->
                 _padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FAnimNode_SkeletalControlBase.OuterSingleton)->_padding_
       )) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (this->AnimNode != (FAnimNode_Base *)0x0)) {
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8);
      return;
    }
  }
LAB_1463f25e6:
  if (2 < (byte)LogAnimation._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&`public:_void___cdecl_FAnimNodeReference::CallAnimNodeFunction<FAnimNode_SkeletalControlBase>(wchar_t_const*___ptr64,TFunctionRef<void___cdecl(FAnimNode_SkeletalControlBase&___ptr64)>)const___ptr64'
                ::__l8::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
  return;
}

