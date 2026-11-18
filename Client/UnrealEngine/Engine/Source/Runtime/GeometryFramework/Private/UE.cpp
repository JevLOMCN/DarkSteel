// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 11

// Construct<FDynamicMeshChangeInfo> @ 1496ea0e0

void __cdecl UE::CoreUObject::Private::Construct<FDynamicMeshChangeInfo>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 7) = 0;
  *(undefined2 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FDynamicMeshChangeInfo> @ 1496ea110

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDynamicMeshChangeInfo>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 2) = 0;
  return;
}

// Destruct<FDynamicMeshChangeInfo> @ 1496ea170

void __cdecl UE::CoreUObject::Private::Destruct<FDynamicMeshChangeInfo>(void *param_1)

{
  return;
}

// Copy<FDynamicMeshChangeInfo> @ 1496ea180

bool __cdecl
UE::CoreUObject::Private::Copy<FDynamicMeshChangeInfo>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar6 + (longlong)param_1);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      param_1 = (void *)((longlong)param_1 + 0x20);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// DeleterFunc<FCardRepresentationData> @ 1496f1850

void __cdecl UE::Core::Private::PimplPtr::DeleterFunc<FCardRepresentationData>(void *param_1)

{
  FCardRepresentationData::~FCardRepresentationData
            ((FCardRepresentationData *)((longlong)param_1 + 0x10));
  ::operator_delete(param_1,0xb0);
  return;
}

// DereferenceIfNecessary<FGeometryFrameworkModule,FGeometryFrameworkModule_*_&> @ 1496f1880

FGeometryFrameworkModule * __cdecl
UE::Core::Private::DereferenceIfNecessary<FGeometryFrameworkModule,FGeometryFrameworkModule_*_&>
          (FGeometryFrameworkModule **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UDynamicMeshComponent,UDynamicMeshComponent_*_&> @ 1496f18a0

UDynamicMeshComponent * __cdecl
UE::Core::Private::DereferenceIfNecessary<UDynamicMeshComponent,UDynamicMeshComponent_*_&>
          (UDynamicMeshComponent **param_1)

{
  return *param_1;
}

// ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>_> @ 1496f59c0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
          *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 9) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
    ::ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<0,TFixedAllocator<8>::ForElementType<UE::Geometry::FIndex3i>_> @ 1496f5aa0

int __cdecl
UE::Core::Private::ReallocGrow<0,TFixedAllocator<8>::ForElementType<UE::Geometry::FIndex3i>_>
          (uint param_1,uint param_2,int param_3,ForElementType<UE::Geometry::FIndex3i> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = *param_5;
  iVar2 = *param_6;
  uVar1 = iVar5 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar2 - iVar5) < (uint)param_3) {
    if ((int)uVar1 < iVar5) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (8 < uVar1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x536,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    *param_6 = 8;
  }
  return iVar5;
}

// ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>_> @ 1496f5b20

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>_>
          (uint param_1,uint param_2,
          ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
          *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 9) {
    iVar2 = 8;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_const_*>
    ::ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<0,TFixedAllocator<8>::ForElementType<UE::Geometry::FIndex3i>_> @ 1496f5be0

void __cdecl
UE::Core::Private::ReallocShrink<0,TFixedAllocator<8>::ForElementType<UE::Geometry::FIndex3i>_>
          (uint param_1,uint param_2,ForElementType<UE::Geometry::FIndex3i> *param_3,int param_4,
          int *param_5)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  
  uVar1 = *param_5;
  if ((8 < uVar1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentMax <= NumInlineElements",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                         ,0x530,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar1 != 8) {
    *param_5 = 8;
  }
  return;
}

