// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticStruct @ 1484311b0

UScriptStruct * __cdecl FSpecularProfileStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSpecularProfileStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSpecularProfileStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSpecularProfileStruct,(UObject *)pUVar1,
                         L"SpecularProfileStruct");
  }
  return Z_Registration_Info_UScriptStruct_FSpecularProfileStruct.OuterSingleton;
}

// FSpecularProfileStruct @ 148442ab0

FSpecularProfileStruct * __thiscall
FSpecularProfileStruct::FSpecularProfileStruct
          (FSpecularProfileStruct *this,FSpecularProfileStruct *param_1)

{
  UTexture2D *pUVar1;
  
  this->Format = param_1->Format;
  FRuntimeCurveLinearColor::FRuntimeCurveLinearColor(&this->ViewColor,&param_1->ViewColor);
  FRuntimeCurveLinearColor::FRuntimeCurveLinearColor(&this->LightColor,&param_1->LightColor);
  pUVar1 = (param_1->Texture).field0_0x0.DebugPtr;
  (this->Texture).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return this;
}

// FSpecularProfileStruct @ 148442b20

FSpecularProfileStruct * __thiscall
FSpecularProfileStruct::FSpecularProfileStruct(FSpecularProfileStruct *this)

{
  float fVar1;
  undefined1 in_R9B;
  float in_XMM1_Da;
  FKeyHandle local_res8 [4];
  uint in_stack_ffffffffffffffb8;
  FKeyHandle FVar2;
  
  FRuntimeCurveLinearColor::FRuntimeCurveLinearColor(&this->ViewColor);
  FRuntimeCurveLinearColor::FRuntimeCurveLinearColor(&this->LightColor);
  (this->Texture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  FKeyHandle::FKeyHandle(local_res8);
  fVar1 = __real_3f800000;
  FVar2.Index = in_stack_ffffffffffffffb8 & 0xffffff00;
  FRichCurve::AddKey((this->ViewColor).ColorCurves,in_XMM1_Da,0.0,(bool)in_R9B,FVar2);
  FKeyHandle::FKeyHandle(local_res8);
  FVar2.Index = FVar2.Index & 0xffffff00;
  FRichCurve::AddKey((this->ViewColor).ColorCurves + 1,in_XMM1_Da,0.0,(bool)in_R9B,FVar2);
  FKeyHandle::FKeyHandle(local_res8);
  FVar2.Index = FVar2.Index & 0xffffff00;
  FRichCurve::AddKey((this->ViewColor).ColorCurves + 2,in_XMM1_Da,0.0,(bool)in_R9B,FVar2);
  FKeyHandle::FKeyHandle(local_res8);
  FVar2.Index = FVar2.Index & 0xffffff00;
  FRichCurve::AddKey((this->ViewColor).ColorCurves,in_XMM1_Da,fVar1,(bool)in_R9B,FVar2);
  FKeyHandle::FKeyHandle(local_res8);
  FVar2.Index = FVar2.Index & 0xffffff00;
  FRichCurve::AddKey((this->ViewColor).ColorCurves + 1,in_XMM1_Da,fVar1,(bool)in_R9B,FVar2);
  FKeyHandle::FKeyHandle(local_res8);
  FVar2.Index = FVar2.Index & 0xffffff00;
  FRichCurve::AddKey((this->ViewColor).ColorCurves + 2,in_XMM1_Da,fVar1,(bool)in_R9B,FVar2);
  FKeyHandle::FKeyHandle(local_res8);
  FVar2.Index = FVar2.Index & 0xffffff00;
  FRichCurve::AddKey((this->LightColor).ColorCurves,in_XMM1_Da,0.0,(bool)in_R9B,FVar2);
  FKeyHandle::FKeyHandle(local_res8);
  FVar2.Index = FVar2.Index & 0xffffff00;
  FRichCurve::AddKey((this->LightColor).ColorCurves + 1,in_XMM1_Da,0.0,(bool)in_R9B,FVar2);
  FKeyHandle::FKeyHandle(local_res8);
  FVar2.Index = FVar2.Index & 0xffffff00;
  FRichCurve::AddKey((this->LightColor).ColorCurves + 2,in_XMM1_Da,0.0,(bool)in_R9B,FVar2);
  FKeyHandle::FKeyHandle(local_res8);
  FVar2.Index = FVar2.Index & 0xffffff00;
  FRichCurve::AddKey((this->LightColor).ColorCurves,in_XMM1_Da,fVar1,(bool)in_R9B,FVar2);
  FKeyHandle::FKeyHandle(local_res8);
  FVar2.Index = FVar2.Index & 0xffffff00;
  FRichCurve::AddKey((this->LightColor).ColorCurves + 1,in_XMM1_Da,fVar1,(bool)in_R9B,FVar2);
  FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey((this->LightColor).ColorCurves + 2,in_XMM1_Da,fVar1,(bool)in_R9B,
                     (FKeyHandle)(FVar2.Index & 0xffffff00));
  this->Format = ViewLightVector;
  (this->Texture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  return this;
}

// operator= @ 148447cd0

FSpecularProfileStruct * __thiscall
FSpecularProfileStruct::operator=(FSpecularProfileStruct *this,FSpecularProfileStruct *param_1)

{
  UTexture2D *pUVar1;
  
  this->Format = param_1->Format;
  FRuntimeCurveLinearColor::operator=(&this->ViewColor,&param_1->ViewColor);
  FRuntimeCurveLinearColor::operator=(&this->LightColor,&param_1->LightColor);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->Texture).field0_0x0.DebugPtr, pUVar1 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Texture).field0_0x0 = (param_1->Texture).field0_0x0;
  return this;
}

// operator= @ 148447d50

FSpecularProfileStruct * __thiscall
FSpecularProfileStruct::operator=(FSpecularProfileStruct *this,FSpecularProfileStruct *param_1)

{
  UTexture2D *pUVar1;
  
  this->Format = param_1->Format;
  FRuntimeCurveLinearColor::operator=(&this->ViewColor,&param_1->ViewColor);
  FRuntimeCurveLinearColor::operator=(&this->LightColor,&param_1->LightColor);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->Texture).field0_0x0.DebugPtr, pUVar1 != (UTexture2D *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Texture).field0_0x0 = (param_1->Texture).field0_0x0;
  return this;
}

