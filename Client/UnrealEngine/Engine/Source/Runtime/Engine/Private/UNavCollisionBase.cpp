// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// UNavCollisionBase @ 14737ca90

UNavCollisionBase * __thiscall
UNavCollisionBase::UNavCollisionBase(UNavCollisionBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNavCollisionBase__6B_;
  *(undefined8 *)&(this->TriMeshCollision).VertexBuffer = 0;
  *(undefined8 *)&(this->TriMeshCollision).VertexBuffer.field_0x8 = 0;
  *(undefined8 *)&(this->TriMeshCollision).VertexBuffer.field_0x10 = 0;
  *(undefined8 *)&(this->TriMeshCollision).IndexBuffer = 0;
  *(undefined8 *)&(this->TriMeshCollision).IndexBuffer.field_0x8 = 0;
  *(undefined8 *)&(this->TriMeshCollision).IndexBuffer.field_0x10 = 0;
  *(undefined8 *)&(this->ConvexCollision).VertexBuffer = 0;
  *(undefined8 *)&(this->ConvexCollision).VertexBuffer.field_0x8 = 0;
  *(undefined8 *)&(this->ConvexCollision).VertexBuffer.field_0x10 = 0;
  *(undefined8 *)&(this->ConvexCollision).IndexBuffer = 0;
  *(undefined8 *)&(this->ConvexCollision).IndexBuffer.field_0x8 = 0;
  *(undefined8 *)&(this->ConvexCollision).IndexBuffer.field_0x10 = 0;
  return this;
}

// UNavCollisionBase @ 14737caf0

UNavCollisionBase * __thiscall
UNavCollisionBase::UNavCollisionBase(UNavCollisionBase *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNavCollisionBase__6B_;
  this->bIsDynamicObstacle = 0;
  this->bHasConvexGeometry = 0;
  *(undefined8 *)&(this->TriMeshCollision).VertexBuffer = 0;
  *(undefined8 *)&(this->TriMeshCollision).VertexBuffer.field_0x8 = 0;
  *(undefined8 *)&(this->TriMeshCollision).VertexBuffer.field_0x10 = 0;
  *(undefined8 *)&(this->TriMeshCollision).IndexBuffer = 0;
  *(undefined8 *)&(this->TriMeshCollision).IndexBuffer.field_0x8 = 0;
  *(undefined8 *)&(this->TriMeshCollision).IndexBuffer.field_0x10 = 0;
  *(undefined8 *)&(this->ConvexCollision).VertexBuffer = 0;
  *(undefined8 *)&(this->ConvexCollision).VertexBuffer.field_0x8 = 0;
  *(undefined8 *)&(this->ConvexCollision).VertexBuffer.field_0x10 = 0;
  *(undefined8 *)&(this->ConvexCollision).IndexBuffer = 0;
  *(undefined8 *)&(this->ConvexCollision).IndexBuffer.field_0x8 = 0;
  *(undefined8 *)&(this->ConvexCollision).IndexBuffer.field_0x10 = 0;
  return this;
}

// ~UNavCollisionBase @ 14737db20

void __thiscall UNavCollisionBase::~UNavCollisionBase(UNavCollisionBase *this)

{
  this->_padding_ = (longlong)&___7UNavCollisionBase__6B_;
  NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&(this->ConvexCollision).IndexBuffer);
  NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&this->ConvexCollision);
  NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&(this->TriMeshCollision).IndexBuffer);
  NavMeshMemory::FNavigationMemoryStat::ForAnyElementType::~ForAnyElementType
            ((ForAnyElementType *)&this->TriMeshCollision);
  UObject::~UObject((UObject *)this);
  return;
}

// DrawSimpleGeom @ 1473909a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNavCollisionBase::DrawSimpleGeom
          (UNavCollisionBase *this,FPrimitiveDrawInterface *param_1,TTransform<double> *param_2,
          FColor param_3)

{
  return;
}

// ExportGeometry @ 147392b80

bool __thiscall
UNavCollisionBase::ExportGeometry
          (UNavCollisionBase *this,TTransform<double> *param_1,FNavigableGeometryExport *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\AI\\Navigation\\NavCollisionBase.h"
             ,0x3a,L"Pure virtual not implemented (%s)");
  return false;
}

// GetBounds @ 147399990

TBox<double> * __thiscall
UNavCollisionBase::GetBounds(UNavCollisionBase *this,TBox<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uchar uVar5;
  uchar auVar6 [7];
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\AI\\Navigation\\NavCollisionBase.h"
             ,0x37,L"Pure virtual not implemented (%s)");
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_virtual_struct_UE::Math::TBox<double>___cdecl_UNavCollisionBase::GetBounds(void)const___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_virtual_struct_UE::Math::TBox<double>___cdecl_UNavCollisionBase::GetBounds(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_virtual_struct_UE::Math::TBox<double>___cdecl_UNavCollisionBase::GetBounds(void)const___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_virtual_struct_UE::Math::TBox<double>___cdecl_UNavCollisionBase::GetBounds(void)const___ptr64'
      ::__l2::InvalidBox.IsValid = '\0';
      _Init_thread_footer(&`public:_virtual_struct_UE::Math::TBox<double>___cdecl_UNavCollisionBase::GetBounds(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  uVar3 = `public:_virtual_struct_UE::Math::TBox<double>___cdecl_UNavCollisionBase::GetBounds(void)const___ptr64'
          ::__l2::InvalidBox.Max.field0_0x0._s_0.X;
  uVar2 = `public:_virtual_struct_UE::Math::TBox<double>___cdecl_UNavCollisionBase::GetBounds(void)const___ptr64'
          ::__l2::InvalidBox.Min.field0_0x0._s_0.Z;
  uVar1 = `public:_virtual_struct_UE::Math::TBox<double>___cdecl_UNavCollisionBase::GetBounds(void)const___ptr64'
          ::__l2::InvalidBox.Min.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X =
       `public:_virtual_struct_UE::Math::TBox<double>___cdecl_UNavCollisionBase::GetBounds(void)const___ptr64'
       ::__l2::InvalidBox.Min.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)uVar1;
  uVar4 = `public:_virtual_struct_UE::Math::TBox<double>___cdecl_UNavCollisionBase::GetBounds(void)const___ptr64'
          ::__l2::InvalidBox.Max.field0_0x0._s_0.Z;
  uVar1 = `public:_virtual_struct_UE::Math::TBox<double>___cdecl_UNavCollisionBase::GetBounds(void)const___ptr64'
          ::__l2::InvalidBox.Max.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)uVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = (double)uVar3;
  auVar6 = `public:_virtual_struct_UE::Math::TBox<double>___cdecl_UNavCollisionBase::GetBounds(void)const___ptr64'
           ::__l2::InvalidBox.Pad;
  uVar5 = `public:_virtual_struct_UE::Math::TBox<double>___cdecl_UNavCollisionBase::GetBounds(void)const___ptr64'
          ::__l2::InvalidBox.IsValid;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = (double)uVar4;
  __return_storage_ptr__->IsValid = uVar5;
  __return_storage_ptr__->Pad[0] = auVar6[0];
  __return_storage_ptr__->Pad[1] = auVar6[1];
  __return_storage_ptr__->Pad[2] = auVar6[2];
  __return_storage_ptr__->Pad[3] = auVar6[3];
  __return_storage_ptr__->Pad[4] = auVar6[4];
  __return_storage_ptr__->Pad[5] = auVar6[5];
  __return_storage_ptr__->Pad[6] = auVar6[6];
  return __return_storage_ptr__;
}

// GetNavigationModifier @ 14739e4f0

/* WARNING: Enum "ENavigationDataResolution": Some values do not have unique names */

void __thiscall
UNavCollisionBase::GetNavigationModifier
          (UNavCollisionBase *this,FCompositeNavModifier *param_1,TTransform<double> *param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\AI\\Navigation\\NavCollisionBase.h"
             ,0x3d,L"Pure virtual not implemented (%s)");
  return;
}

// GetPrivateStaticClass @ 1473a0aa0

UClass * __cdecl UNavCollisionBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavCollisionBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NavCollisionBase",
               &Z_Registration_Info_UClass_UNavCollisionBase.InnerSingleton,
               StaticRegisterNativesUNavCollisionBase,0x90,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNavCollisionBase>,
               InternalVTableHelperCtorCaller<UNavCollisionBase>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavCollisionBase.InnerSingleton;
}

// Setup @ 1473b85a0

void __thiscall UNavCollisionBase::Setup(UNavCollisionBase *this,UBodySetup *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\AI\\Navigation\\NavCollisionBase.h"
             ,0x35,L"Pure virtual not implemented (%s)");
  return;
}

// StaticRegisterNativesUNavCollisionBase @ 1473b8950

void __cdecl UNavCollisionBase::StaticRegisterNativesUNavCollisionBase(void)

{
  return;
}

// ConstructNew @ 14872d730

UNavCollisionBase * __cdecl UNavCollisionBase::ConstructNew(UObject *param_1)

{
  UNavCollisionBase *pUVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&ConstructNewInstanceDelegate
             ,&local_28);
  plVar2 = (longlong *)0x0;
  if (ConstructNewInstanceDelegate._16_4_ != 0) {
    plVar2 = (longlong *)ConstructNewInstanceDelegate._8_8_;
  }
  pUVar1 = (UNavCollisionBase *)(**(code **)(*plVar2 + 0x60))(plVar2,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return pUVar1;
}

