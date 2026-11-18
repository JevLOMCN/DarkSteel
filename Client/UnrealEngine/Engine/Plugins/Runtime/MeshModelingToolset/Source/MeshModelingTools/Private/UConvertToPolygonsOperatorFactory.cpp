// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cbd0f30

UClass * __cdecl UConvertToPolygonsOperatorFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConvertToPolygonsOperatorFactory.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ConvertToPolygonsOperatorFactory",
               &Z_Registration_Info_UClass_UConvertToPolygonsOperatorFactory.InnerSingleton,
               StaticRegisterNativesUConvertToPolygonsOperatorFactory,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UConvertToPolygonsOperatorFactory>,
               InternalVTableHelperCtorCaller<UConvertToPolygonsOperatorFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConvertToPolygonsOperatorFactory.InnerSingleton;
}

// UConvertToPolygonsOperatorFactory @ 14cbdcf70

UConvertToPolygonsOperatorFactory * __thiscall
UConvertToPolygonsOperatorFactory::UConvertToPolygonsOperatorFactory
          (UConvertToPolygonsOperatorFactory *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->ConvertToPolygonsTool).field0_0x0.DebugPtr = (UConvertToPolygonsTool *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  return this;
}

// UConvertToPolygonsOperatorFactory @ 14cbdcfb0

UConvertToPolygonsOperatorFactory * __thiscall
UConvertToPolygonsOperatorFactory::UConvertToPolygonsOperatorFactory
          (UConvertToPolygonsOperatorFactory *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->ConvertToPolygonsTool).field0_0x0.DebugPtr = (UConvertToPolygonsTool *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  return this;
}

// ~UConvertToPolygonsOperatorFactory @ 14cbe01a0

void __thiscall
UConvertToPolygonsOperatorFactory::~UConvertToPolygonsOperatorFactory
          (UConvertToPolygonsOperatorFactory *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IDynamicMeshOperatorFactory_Geometry_UE__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14cbef440

UClass * __cdecl UConvertToPolygonsOperatorFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConvertToPolygonsOperatorFactory.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ConvertToPolygonsOperatorFactory",
               &Z_Registration_Info_UClass_UConvertToPolygonsOperatorFactory.InnerSingleton,
               StaticRegisterNativesUConvertToPolygonsOperatorFactory,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UConvertToPolygonsOperatorFactory>,
               InternalVTableHelperCtorCaller<UConvertToPolygonsOperatorFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConvertToPolygonsOperatorFactory.InnerSingleton;
}

// MakeNewOperator @ 14cbf25a0

TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
__thiscall
UConvertToPolygonsOperatorFactory::MakeNewOperator(UConvertToPolygonsOperatorFactory *this)

{
  code *pcVar1;
  bool bVar2;
  TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
  TVar3;
  FConvertToPolygonsOp *pFVar4;
  FDynamicMeshOperator *in_RDX;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ConvertToPolygonsTool",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ConvertToPolygonsTool.cpp"
                       ,0xd8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Ptr = (FDynamicMeshOperator *)(*pcVar1)();
      return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
              )TVar3.Ptr;
    }
  }
  pFVar4 = ::operator_new(0x140);
  if (pFVar4 == (FConvertToPolygonsOp *)0x0) {
    pFVar4 = (FConvertToPolygonsOp *)0x0;
  }
  else {
    memset(pFVar4,0,0x140);
    pFVar4 = FConvertToPolygonsOp::FConvertToPolygonsOp(pFVar4);
  }
  UConvertToPolygonsTool::UpdateOpParameters((UConvertToPolygonsTool *)this->_padding_,pFVar4);
  in_RDX->_padding_ = (longlong)pFVar4;
  return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
          )in_RDX;
}

// StaticRegisterNativesUConvertToPolygonsOperatorFactory @ 14cbf6ac0

void __cdecl
UConvertToPolygonsOperatorFactory::StaticRegisterNativesUConvertToPolygonsOperatorFactory(void)

{
  return;
}

