// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147992c40

UClass * __cdecl UStereoLayerShape::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStereoLayerShape.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StereoLayerShape",
               &Z_Registration_Info_UClass_UStereoLayerShape.InnerSingleton,
               StaticRegisterNativesUStereoLayerShape,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UStereoLayerShape>,
               InternalVTableHelperCtorCaller<UStereoLayerShape>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStereoLayerShape.InnerSingleton;
}

// UStereoLayerShape @ 1479a7d20

UStereoLayerShape * __thiscall
UStereoLayerShape::UStereoLayerShape(UStereoLayerShape *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UStereoLayerShape__6B_;
  return this;
}

// UStereoLayerShape @ 1479a7d50

UStereoLayerShape * __thiscall
UStereoLayerShape::UStereoLayerShape(UStereoLayerShape *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UStereoLayerShape__6B_;
  return this;
}

// ~UStereoLayerShape @ 1479a9af0

void __thiscall UStereoLayerShape::~UStereoLayerShape(UStereoLayerShape *this)

{
  *(undefined ***)this = &___7UStereoLayerShape__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyShape @ 1479b33c0

void __thiscall UStereoLayerShape::ApplyShape(UStereoLayerShape *this,FLayerDesc *param_1)

{
  return;
}

// GetPrivateStaticClass @ 1479ce330

UClass * __cdecl UStereoLayerShape::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStereoLayerShape.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StereoLayerShape",
               &Z_Registration_Info_UClass_UStereoLayerShape.InnerSingleton,
               StaticRegisterNativesUStereoLayerShape,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UStereoLayerShape>,
               InternalVTableHelperCtorCaller<UStereoLayerShape>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStereoLayerShape.InnerSingleton;
}

// MarkStereoLayerDirty @ 1479db1c0

void __thiscall UStereoLayerShape::MarkStereoLayerDirty(UStereoLayerShape *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  
  lVar2 = *(longlong *)&this->field_0x20;
  pUVar5 = UStereoLayerComponent::StaticClass();
  lVar2 = *(longlong *)(lVar2 + 0x10);
  iVar1 = (int)pUVar5->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar5->_padding_)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetOuter()->IsA<UStereoLayerComponent>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\StereoLayerComponent.cpp"
                       ,0x13f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)&this->field_0x20;
  if (lVar2 != 0) {
    pUVar5 = UStereoLayerComponent::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      *(undefined1 *)(lVar2 + 0x2d0) = 1;
      return;
    }
  }
  uRam00000000000002d0 = 1;
  return;
}

// StaticRegisterNativesUStereoLayerShape @ 1479ee070

void __cdecl UStereoLayerShape::StaticRegisterNativesUStereoLayerShape(void)

{
  return;
}

