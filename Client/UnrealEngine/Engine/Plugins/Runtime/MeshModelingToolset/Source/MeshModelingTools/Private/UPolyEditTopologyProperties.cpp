// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cc038f0

UClass * __cdecl UPolyEditTopologyProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditTopologyProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditTopologyProperties",
               &Z_Registration_Info_UClass_UPolyEditTopologyProperties.InnerSingleton,
               StaticRegisterNativesUPolyEditTopologyProperties,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditTopologyProperties>,
               InternalVTableHelperCtorCaller<UPolyEditTopologyProperties>,local_res8,
               UEditMeshPolygonsToolActionPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditTopologyProperties.InnerSingleton;
}

// UPolyEditTopologyProperties @ 14cc20080

UPolyEditTopologyProperties * __thiscall
UPolyEditTopologyProperties::UPolyEditTopologyProperties
          (UPolyEditTopologyProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bAddExtraCorners = true;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UPolyEditTopologyProperties__6B_;
  this->ExtraCornerAngleThresholdDegrees = 135.0;
  return this;
}

// UPolyEditTopologyProperties @ 14cc200d0

UPolyEditTopologyProperties * __thiscall
UPolyEditTopologyProperties::UPolyEditTopologyProperties
          (UPolyEditTopologyProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->bAddExtraCorners = true;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UPolyEditTopologyProperties__6B_;
  this->ExtraCornerAngleThresholdDegrees = 135.0;
  return this;
}

// ~UPolyEditTopologyProperties @ 14cc233d0

void __thiscall
UPolyEditTopologyProperties::~UPolyEditTopologyProperties(UPolyEditTopologyProperties *this)

{
  this->_padding_ = (longlong)&___7UEditMeshPolygonsToolActionPropertySet__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cc5d730

UClass * __cdecl UPolyEditTopologyProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditTopologyProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditTopologyProperties",
               &Z_Registration_Info_UClass_UPolyEditTopologyProperties.InnerSingleton,
               StaticRegisterNativesUPolyEditTopologyProperties,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditTopologyProperties>,
               InternalVTableHelperCtorCaller<UPolyEditTopologyProperties>,local_res8,
               UEditMeshPolygonsToolActionPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditTopologyProperties.InnerSingleton;
}

// StaticRegisterNativesUPolyEditTopologyProperties @ 14cc82660

void __cdecl UPolyEditTopologyProperties::StaticRegisterNativesUPolyEditTopologyProperties(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UPolyEditTopologyProperties_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execRegenerateExtraCorners @ 14cc8b750

void __cdecl
UPolyEditTopologyProperties::execRegenerateExtraCorners
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
                    /* WARNING: Could not recover jumptable at 0x00014cc8b79d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,0x21,*(code **)(*(longlong *)pUVar2 + 1000));
    return;
  }
  return;
}

