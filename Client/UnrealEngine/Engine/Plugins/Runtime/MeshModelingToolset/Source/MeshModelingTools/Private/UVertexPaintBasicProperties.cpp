// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cc94090

UClass * __cdecl UVertexPaintBasicProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVertexPaintBasicProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"VertexPaintBasicProperties",
               &Z_Registration_Info_UClass_UVertexPaintBasicProperties.InnerSingleton,
               StaticRegisterNativesUVertexPaintBasicProperties,0xf8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UVertexPaintBasicProperties>,
               InternalVTableHelperCtorCaller<UVertexPaintBasicProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVertexPaintBasicProperties.InnerSingleton;
}

// UVertexPaintBasicProperties @ 14ccc03a0

UVertexPaintBasicProperties * __thiscall
UVertexPaintBasicProperties::UVertexPaintBasicProperties
          (UVertexPaintBasicProperties *this,FVTableHelper *param_1)

{
  FLinearColor FVar1;
  
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->PrimaryBrushType = Paint;
  this->SubToolType = Brush;
  this->_padding_ = (longlong)&___7UVertexPaintBasicProperties__6B_;
  this->Strength = 1.0;
  FVar1 = FLinearColor::Red;
  this->bIsPaintPressureEnabled = true;
  this->BlendMode = Lerp;
  this->SecondaryActionType = Erase;
  (this->PaintColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = FLinearColor::White;
  this->bIsErasePressureEnabled = true;
  this->SmoothStrength = 0.25;
  (this->EraseColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->ChannelFilter).bRed = true;
  (this->ChannelFilter).bGreen = true;
  (this->ChannelFilter).bBlue = true;
  (this->ChannelFilter).bAlpha = false;
  this->bHardEdges = false;
  return this;
}

// UVertexPaintBasicProperties @ 14ccc0430

UVertexPaintBasicProperties * __thiscall
UVertexPaintBasicProperties::UVertexPaintBasicProperties
          (UVertexPaintBasicProperties *this,FObjectInitializer *param_1)

{
  FLinearColor FVar1;
  
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->PrimaryBrushType = Paint;
  this->SubToolType = Brush;
  this->_padding_ = (longlong)&___7UVertexPaintBasicProperties__6B_;
  this->Strength = 1.0;
  FVar1 = FLinearColor::Red;
  this->bIsPaintPressureEnabled = true;
  this->BlendMode = Lerp;
  this->SecondaryActionType = Erase;
  (this->PaintColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = FLinearColor::White;
  this->bIsErasePressureEnabled = true;
  this->SmoothStrength = 0.25;
  (this->EraseColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->ChannelFilter).bRed = true;
  (this->ChannelFilter).bGreen = true;
  (this->ChannelFilter).bBlue = true;
  (this->ChannelFilter).bAlpha = false;
  this->bHardEdges = false;
  return this;
}

// ~UVertexPaintBasicProperties @ 14ccc4f60

void __thiscall
UVertexPaintBasicProperties::~UVertexPaintBasicProperties(UVertexPaintBasicProperties *this)

{
  this->_padding_ = (longlong)&___7UVertexPaintBasicProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd01fd0

UClass * __cdecl UVertexPaintBasicProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVertexPaintBasicProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"VertexPaintBasicProperties",
               &Z_Registration_Info_UClass_UVertexPaintBasicProperties.InnerSingleton,
               StaticRegisterNativesUVertexPaintBasicProperties,0xf8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UVertexPaintBasicProperties>,
               InternalVTableHelperCtorCaller<UVertexPaintBasicProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVertexPaintBasicProperties.InnerSingleton;
}

// StaticRegisterNativesUVertexPaintBasicProperties @ 14cd2f3b0

void __cdecl UVertexPaintBasicProperties::StaticRegisterNativesUVertexPaintBasicProperties(void)

{
  return;
}

