// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 126

// ~TFunction_OwnedObject<void_(__cdecl*)(int,int),0,0> @ 1496fa4e0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(int,int),0,0>::
~TFunction_OwnedObject<void_(__cdecl*)(int,int),0,0>
          (TFunction_OwnedObject<void_(__cdecl*)(int,int),0,0> *this)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6AXHH_Z_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// ~TFunction_OwnedObject<void_(__cdecl*)(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&),1,0> @ 1496fa500

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&),1,0>
::
~TFunction_OwnedObject<void_(__cdecl*)(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&),1,0>
          (TFunction_OwnedObject<void_(__cdecl*)(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&),1,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXHHHAEBU__TVector_M_Math_UE__AEAU123_1_Z_00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<bool_(__cdecl*)(UE::Geometry::TAxisAlignedBox3<double>_const_&,int),0,0> @ 1496fa520

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(UE::Geometry::TAxisAlignedBox3<double>_const_&,int),0,0>::
~TFunction_OwnedObject<bool_(__cdecl*)(UE::Geometry::TAxisAlignedBox3<double>_const_&,int),0,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(UE::Geometry::TAxisAlignedBox3<double>_const_&,int),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NAEBU__TAxisAlignedBox3_N_Geometry_UE__H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 149705080

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(int,int),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<void_(__cdecl*)(int,int),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6AXHH_Z_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_void_int_int **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1497050a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&),1,0>
::CloneToEmptyStorage
          (TFunction_OwnedObject<void_(__cdecl*)(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&),1,0>
           *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1497050e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(UE::Geometry::TAxisAlignedBox3<double>_const_&,int),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<bool_(__cdecl*)(UE::Geometry::TAxisAlignedBox3<double>_const_&,int),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBU__TAxisAlignedBox3_N_Geometry_UE__H_Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_bool_TAxisAlignedBox3<double>_ptr_int **)(param_1->InlineAllocation + 8) =
       this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149705100

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDynamicMeshSceneProxy::FastUpdateAllIndexBuffers'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 149705140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDynamicMeshSceneProxy::FastUpdateIndexBuffers'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 149705180

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1497051c0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`CollectSubDecomposition'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`CollectSubDecomposition'::`2'::<lambda_1>,0,0>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  *(undefined8 *)(param_1->InlineAllocation + 0x10) = uVar1;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1497051e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshSceneProxy::InitializeSingleBufferSet'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 149705220

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UBaseDynamicMeshComponent::SetDefaultVertexColorMaterial'::__l2::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 149705260

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UBaseDynamicMeshComponent::SetDefaultWireframeMaterial'::__l2::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1497052a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1497052e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l5::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 149705320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 149705360

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1497053a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyPositionsUpdated'::__l11::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1497053e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyVertexAttributesUpdated'::__l14::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 149705420

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>_>'::__l4::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 149705460

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>_>'::__l4::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1497054a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDynamicMeshSceneProxy::InitializeFromDecomposition'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1497054e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDynamicMeshSceneProxy::FastUpdateVertices'::__l27::<lambda_2>::operator()'::__l8::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 149705520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::__l8::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::`8'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149705540

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshComponentToMeshRenderBufferSet::MakeTangentsFunc'::__l8::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 149705580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshSceneProxy::MakeTangentsFunc'::__l8::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1497055c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshSceneProxy::FastUpdateVertices'::__l19::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 149705600

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 149705640

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 149705680

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDynamicMeshSceneProxy::FastUpdateVertices'::__l2::<lambda_1>::operator()'::__l11::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1497056c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyPositionsUpdated'::__l11::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 149705700

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyColorsUpdated'::__l14::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyColorsUpdated'::`14'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 149705720

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyVertexAttributesUpdated'::__l14::<lambda_1>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 149705760

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1497057a0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`CollectSubDecomposition'::__l2::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`CollectSubDecomposition'::`2'::<lambda_2>,0,0>::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1497057c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 149705800

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshSceneProxy::InitializeByMaterial'::__l18::<lambda_2>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 149705840

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyColorsUpdated'::__l21::<lambda_2>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 149705880

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::__l12::<lambda_2>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::`12'::<lambda_2>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 1497058a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshComponentToMeshRenderBufferSet::MakeTangentsFunc'::__l15::<lambda_2>,1,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1497058e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshSceneProxy::MakeTangentsFunc'::__l15::<lambda_2>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 149705920

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`CollectSubDecomposition'::__l2::<lambda_3>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`CollectSubDecomposition'::`2'::<lambda_3>,0,1>::_vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)((longlong)this + 0x20);
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  puVar2[4] = uVar1;
  puVar2[5] = *(undefined8 *)((longlong)this + 0x28);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 149705980

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::__l15::<lambda_3>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 1497059c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::__l18::<lambda_4>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// Destroy @ 1497072a0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(int,int),0,0>::Destroy
          (TFunction_OwnedObject<void_(__cdecl*)(int,int),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001497072a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 1497072b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&),1,0>
::Destroy(TFunction_OwnedObject<void_(__cdecl*)(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&),1,0>
          *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001497072b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 1497072c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(UE::Geometry::TAxisAlignedBox3<double>_const_&,int),0,0>::
Destroy(TFunction_OwnedObject<bool_(__cdecl*)(UE::Geometry::TAxisAlignedBox3<double>_const_&,int),0,0>
        *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001497072c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 1497072d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDynamicMeshSceneProxy::FastUpdateAllIndexBuffers'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001497072d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1497072e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDynamicMeshSceneProxy::FastUpdateIndexBuffers'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001497072e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1497072f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149707320

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`CollectSubDecomposition'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149707325. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149707330

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshSceneProxy::InitializeSingleBufferSet'::__l2::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149707335. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149707340

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UBaseDynamicMeshComponent::SetDefaultVertexColorMaterial'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149707345. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149707350

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UBaseDynamicMeshComponent::SetDefaultWireframeMaterial'::__l2::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149707355. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149707360

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149707390

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l5::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1497073c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1497073f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149707420

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyPositionsUpdated'::__l11::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149707450

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyVertexAttributesUpdated'::__l14::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149707480

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>_>'::__l4::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1497074b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>_>'::__l4::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1497074e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDynamicMeshSceneProxy::InitializeFromDecomposition'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001497074e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1497074f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDynamicMeshSceneProxy::FastUpdateVertices'::__l27::<lambda_2>::operator()'::__l8::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001497074f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149707500

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::__l8::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149707505. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149707510

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshComponentToMeshRenderBufferSet::MakeTangentsFunc'::__l8::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149707540

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshSceneProxy::MakeTangentsFunc'::__l8::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149707570

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshSceneProxy::FastUpdateVertices'::__l19::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149707575. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149707580

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149707585. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149707590

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149707595. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1497075a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDynamicMeshSceneProxy::FastUpdateVertices'::__l2::<lambda_1>::operator()'::__l11::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001497075a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1497075b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyPositionsUpdated'::__l11::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001497075b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1497075c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyColorsUpdated'::__l14::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001497075c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1497075d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyVertexAttributesUpdated'::__l14::<lambda_1>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001497075d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1497075e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149707610

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`CollectSubDecomposition'::__l2::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149707615. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149707620

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 149707650

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshSceneProxy::InitializeByMaterial'::__l18::<lambda_2>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149707655. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149707660

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyColorsUpdated'::__l21::<lambda_2>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149707665. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149707670

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::__l12::<lambda_2>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149707675. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149707680

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshComponentToMeshRenderBufferSet::MakeTangentsFunc'::__l15::<lambda_2>,1,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149707685. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 149707690

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshSceneProxy::MakeTangentsFunc'::__l15::<lambda_2>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000149707695. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1497076a0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`CollectSubDecomposition'::__l2::<lambda_3>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 1497076d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::__l15::<lambda_3>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001497076d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 1497076e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::__l18::<lambda_4>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001497076e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14970e650

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<void_(__cdecl*)(int,int),0,0>::GetAddress
          (TFunction_OwnedObject<void_(__cdecl*)(int,int),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 14970e660

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&),1,0>
::GetAddress(TFunction_OwnedObject<void_(__cdecl*)(int,int,int,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_&,UE::Math::TVector<float>_&),1,0>
             *this)

{
  return &this->Obj;
}

// GetAddress @ 14970e670

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(UE::Geometry::TAxisAlignedBox3<double>_const_&,int),0,0>::
GetAddress(TFunction_OwnedObject<bool_(__cdecl*)(UE::Geometry::TAxisAlignedBox3<double>_const_&,int),0,0>
           *this)

{
  return &this->Obj;
}

// GetAddress @ 14970e680

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDynamicMeshSceneProxy::FastUpdateAllIndexBuffers'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14970e690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDynamicMeshSceneProxy::FastUpdateIndexBuffers'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14970e6a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14970e6b0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`CollectSubDecomposition'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14970e6c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshSceneProxy::InitializeSingleBufferSet'::__l2::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14970e6d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UBaseDynamicMeshComponent::SetDefaultVertexColorMaterial'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14970e6e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UBaseDynamicMeshComponent::SetDefaultWireframeMaterial'::__l2::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14970e6f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14970e700

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l5::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14970e710

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14970e720

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14970e730

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyPositionsUpdated'::__l11::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14970e740

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyVertexAttributesUpdated'::__l14::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14970e750

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>_>'::__l4::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14970e760

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>_>'::__l4::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14970e770

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDynamicMeshSceneProxy::InitializeFromDecomposition'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14970e780

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDynamicMeshSceneProxy::FastUpdateVertices'::__l27::<lambda_2>::operator()'::__l8::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14970e790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::__l8::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14970e7a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshComponentToMeshRenderBufferSet::MakeTangentsFunc'::__l8::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14970e7b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshSceneProxy::MakeTangentsFunc'::__l8::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14970e7c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshSceneProxy::FastUpdateVertices'::__l19::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14970e7d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14970e7e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated'::__l28::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14970e7f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``FDynamicMeshSceneProxy::FastUpdateVertices'::__l2::<lambda_1>::operator()'::__l11::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14970e800

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyPositionsUpdated'::__l11::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14970e810

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyColorsUpdated'::__l14::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14970e820

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyVertexAttributesUpdated'::__l14::<lambda_1>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14970e830

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14970e840

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`CollectSubDecomposition'::__l2::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14970e850

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute'::__l2::<lambda_2>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14970e860

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshSceneProxy::InitializeByMaterial'::__l18::<lambda_2>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14970e870

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::FastNotifyColorsUpdated'::__l21::<lambda_2>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14970e880

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::__l12::<lambda_2>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14970e890

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshComponentToMeshRenderBufferSet::MakeTangentsFunc'::__l15::<lambda_2>,1,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14970e8a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDynamicMeshSceneProxy::MakeTangentsFunc'::__l15::<lambda_2>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14970e8b0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`CollectSubDecomposition'::__l2::<lambda_3>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14970e8c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::__l15::<lambda_3>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14970e8d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDynamicMeshComponent::CreateSceneProxy'::__l18::<lambda_4>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

