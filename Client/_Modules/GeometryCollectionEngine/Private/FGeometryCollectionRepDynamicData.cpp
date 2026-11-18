// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 6

// StaticStruct @ 146345bc0

UScriptStruct * __cdecl FGeometryCollectionRepDynamicData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionRepDynamicData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionEngine();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionRepDynamicData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionRepDynamicData,
                         (UObject *)pUVar1,L"GeometryCollectionRepDynamicData");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionRepDynamicData.OuterSingleton;
}

// HasChanged @ 14637e550

bool __thiscall
FGeometryCollectionRepDynamicData::HasChanged
          (FGeometryCollectionRepDynamicData *this,FGeometryCollectionRepDynamicData *param_1)

{
  int iVar1;
  bool bVar2;
  FClusterData *this_00;
  FClusterData *pFVar3;
  FClusterData *pFVar4;
  FClusterData *pFVar5;
  undefined1 local_res8 [8];
  
  if (this->Version != 0) {
    iVar1 = (this->ClusterData).ArrayNum;
    pFVar4 = (FClusterData *)(this->ClusterData).AllocatorInstance.Data;
    pFVar5 = pFVar4 + iVar1;
    while( true ) {
      if ((this->ClusterData).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FGeometryCollectionRepDynamicData::FClusterData_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar4 == pFVar5) {
        return false;
      }
      this_00 = (FClusterData *)(param_1->ClusterData).AllocatorInstance.Data;
      pFVar3 = this_00 + (param_1->ClusterData).ArrayNum;
      if (this_00 == pFVar3) break;
      while (this_00->TransformIndex != pFVar4->TransformIndex) {
        this_00 = this_00 + 1;
        if (this_00 == pFVar3) {
          return true;
        }
      }
      bVar2 = FClusterData::IsEqualPositionsAndVelocities(this_00,pFVar4);
      if (!bVar2) {
        return true;
      }
      pFVar4 = pFVar4 + 1;
    }
  }
  return true;
}

// Identical @ 14637e740

bool __thiscall
FGeometryCollectionRepDynamicData::Identical
          (FGeometryCollectionRepDynamicData *this,FGeometryCollectionRepDynamicData *param_1,
          uint param_2)

{
  if ((param_1 != (FGeometryCollectionRepDynamicData *)0x0) && (this->Version == param_1->Version))
  {
    return true;
  }
  return false;
}

// NetSerialize @ 146381c70

bool __thiscall
FGeometryCollectionRepDynamicData::NetSerialize
          (FGeometryCollectionRepDynamicData *this,FArchive *param_1,UPackageMap *param_2,
          bool *param_3)

{
  int *piVar1;
  longlong *plVar2;
  ushort *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  ushort local_res10 [4];
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  uint local_48;
  
  piVar1 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)this);
    }
  }
  else {
    this->Version = *piVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &(this->ClusterData).ArrayNum;
  if (0xfffe < (this->ClusterData).ArrayNum) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7287575455585009220>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\GeometryCollectionEngine\\Private\\GeometryCollection\\GeometryCollectionComponent.cpp"
                       ,0x1bc,"ClusterData.Num() < TNumericLimits<uint16>::Max()");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  local_res10[0] = (ushort)*piVar1;
  if ((ushort *)plVar2[1] < (ushort *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(ushort *)*plVar2;
    *plVar2 = *plVar2 + 2;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    uVar10 = (ulonglong)local_res10[0];
    iVar13 = (this->ClusterData).ArrayNum;
    uVar12 = (uint)local_res10[0];
    if (iVar13 < (int)(uint)local_res10[0]) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,uVar12 - iVar13,&(this->ClusterData).AllocatorInstance,piVar1,
                 &(this->ClusterData).ArrayMax);
    }
    else if ((int)(uint)local_res10[0] < iVar13) {
      iVar13 = iVar13 - uVar12;
      if (iVar13 < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      else if (iVar13 == 0) goto LAB_146381e3f;
      pFVar9 = (this->ClusterData).AllocatorInstance.Data + uVar10 * 0x68;
      iVar8 = ((this->ClusterData).ArrayNum - iVar13) - uVar12;
      if (iVar8 != 0) {
        memmove(pFVar9,pFVar9 + (longlong)iVar13 * 0x68,(longlong)iVar8 * 0x68);
      }
      piVar1 = &(this->ClusterData).ArrayNum;
      *piVar1 = *piVar1 - iVar13;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,&(this->ClusterData).AllocatorInstance,(this->ClusterData).ArrayNum,
                 &(this->ClusterData).ArrayMax);
    }
  }
LAB_146381e3f:
  local_48 = (this->ClusterData).ArrayNum;
  uVar10 = (ulonglong)(int)local_48;
  pFVar11 = (this->ClusterData).AllocatorInstance.Data;
  pFVar9 = pFVar11 + 0x28;
  pFVar14 = pFVar11 + uVar10 * 0x68;
  while( true ) {
    if ((this->ClusterData).ArrayNum != (int)uVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FGeometryCollectionRepDynamicData::FClusterData,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar14) break;
    pFVar4 = pFVar9 + 0x38;
    puVar3 = (ushort *)**(undefined8 **)&param_1->field_0x8;
    if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar4,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ushort *)pFVar4);
      }
    }
    else {
      *(ushort *)pFVar4 = *puVar3;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
    }
    pFVar4 = (FScriptContainerElement *)**(undefined8 **)&param_1->field_0x8;
    if ((FScriptContainerElement *)(*(undefined8 **)&param_1->field_0x8)[1] < pFVar4 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar9 + 0x3a,1);
    }
    else {
      pFVar9[0x3a] = *pFVar4;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
      if ((param_1->field_0x28 & 1) == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ar.IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x4e8,L"float -> double conversion applied outside of load!");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      plVar2 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_70,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_70);
        }
      }
      else {
        local_70 = *(float *)*plVar2;
        *plVar2 = *plVar2 + 4;
      }
      plVar2 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_78,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_78);
        }
      }
      else {
        local_78 = *(float *)*plVar2;
        *plVar2 = *plVar2 + 4;
      }
      plVar2 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_74,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_74);
        }
      }
      else {
        local_74 = *(float *)*plVar2;
        *plVar2 = *plVar2 + 4;
      }
      *(double *)pFVar11 = (double)local_70;
      *(double *)(pFVar9 + -0x20) = (double)local_78;
      *(double *)(pFVar9 + -0x18) = (double)local_74;
    }
    else {
      ::operator<<(param_1,(double *)pFVar11);
      ::operator<<(param_1,(double *)(pFVar9 + -0x20));
      ::operator<<(param_1,(double *)(pFVar9 + -0x18));
    }
    if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
      if ((param_1->field_0x28 & 1) == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ar.IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x4e8,L"float -> double conversion applied outside of load!");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      plVar2 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_64,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_64);
        }
      }
      else {
        local_64 = *(float *)*plVar2;
        *plVar2 = *plVar2 + 4;
      }
      plVar2 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_6c,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_6c);
        }
      }
      else {
        local_6c = *(float *)*plVar2;
        *plVar2 = *plVar2 + 4;
      }
      plVar2 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_68,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_68);
        }
      }
      else {
        local_68 = *(float *)*plVar2;
        *plVar2 = *plVar2 + 4;
      }
      *(double *)(pFVar9 + -0x10) = (double)local_64;
      *(double *)(pFVar9 + -8) = (double)local_6c;
      *(double *)pFVar9 = (double)local_68;
    }
    else {
      ::operator<<(param_1,(double *)(pFVar9 + -0x10));
      ::operator<<(param_1,(double *)(pFVar9 + -8));
      ::operator<<(param_1,(double *)pFVar9);
    }
    if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
      if ((param_1->field_0x28 & 1) == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ar.IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x4e8,L"float -> double conversion applied outside of load!");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      plVar2 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_58,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_58);
        }
      }
      else {
        local_58 = *(float *)*plVar2;
        *plVar2 = *plVar2 + 4;
      }
      plVar2 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_60,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_60);
        }
      }
      else {
        local_60 = *(float *)*plVar2;
        *plVar2 = *plVar2 + 4;
      }
      plVar2 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_5c,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_5c);
        }
      }
      else {
        local_5c = *(float *)*plVar2;
        *plVar2 = *plVar2 + 4;
      }
      *(double *)(pFVar9 + 8) = (double)local_58;
      *(double *)(pFVar9 + 0x10) = (double)local_60;
      *(double *)(pFVar9 + 0x18) = (double)local_5c;
    }
    else {
      ::operator<<(param_1,(double *)(pFVar9 + 8));
      ::operator<<(param_1,(double *)(pFVar9 + 0x10));
      ::operator<<(param_1,(double *)(pFVar9 + 0x18));
    }
    if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
      if ((param_1->field_0x28 & 1) == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ar.IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x4e8,L"float -> double conversion applied outside of load!");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      plVar2 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_4c,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_4c);
        }
      }
      else {
        local_4c = *(float *)*plVar2;
        *plVar2 = *plVar2 + 4;
      }
      plVar2 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_54,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_54);
        }
      }
      else {
        local_54 = *(float *)*plVar2;
        *plVar2 = *plVar2 + 4;
      }
      plVar2 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar2[1] < (float *)*plVar2 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_50,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_50);
        }
      }
      else {
        local_50 = *(float *)*plVar2;
        *plVar2 = *plVar2 + 4;
      }
      pFVar11 = pFVar11 + 0x68;
      uVar10 = (ulonglong)local_48;
      *(double *)(pFVar9 + 0x20) = (double)local_4c;
      *(double *)(pFVar9 + 0x28) = (double)local_54;
      *(double *)(pFVar9 + 0x30) = (double)local_50;
      pFVar9 = pFVar9 + 0x68;
    }
    else {
      ::operator<<(param_1,(double *)(pFVar9 + 0x20));
      ::operator<<(param_1,(double *)(pFVar9 + 0x28));
      ::operator<<(param_1,(double *)(pFVar9 + 0x30));
      uVar10 = (ulonglong)local_48;
      pFVar11 = pFVar11 + 0x68;
      pFVar9 = pFVar9 + 0x68;
    }
  }
  return true;
}

// RemoveOutOfDateClusterData @ 146389e00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FGeometryCollectionRepDynamicData::RemoveOutOfDateClusterData
          (FGeometryCollectionRepDynamicData *this)

{
  int iVar1;
  <lambda_1> local_res8 [4];
  
  local_res8[0].__this = this;
  iVar1 = TArray<FGeometryCollectionRepDynamicData::FClusterData,TSizedDefaultAllocator<32>_>::
          RemoveAllSwap<_FGeometryCollectionRepDynamicData::RemoveOutOfDateClusterData_::__l2::<lambda_1>_>
                    (&this->ClusterData,local_res8,No);
  return 0 < iVar1;
}

// SetData @ 14638c560

bool __thiscall
FGeometryCollectionRepDynamicData::SetData
          (FGeometryCollectionRepDynamicData *this,FClusterData *param_1)

{
  undefined8 uVar1;
  uchar uVar2;
  undefined1 uVar3;
  bool bVar4;
  int iVar5;
  FClusterData *pFVar6;
  FScriptContainerElement *pFVar7;
  FClusterData *this_00;
  
  iVar5 = (this->ClusterData).ArrayNum;
  this_00 = (FClusterData *)(this->ClusterData).AllocatorInstance.Data;
  pFVar6 = this_00 + iVar5;
  if (this_00 != pFVar6) {
    do {
      if (this_00->TransformIndex == param_1->TransformIndex) {
        bVar4 = FClusterData::IsEqualPositionsAndVelocities(this_00,param_1);
        if (bVar4) {
          return false;
        }
        uVar1 = *(undefined8 *)&(param_1->Position).field_0x8;
        *(undefined8 *)&this_00->Position = *(undefined8 *)&param_1->Position;
        *(undefined8 *)&(this_00->Position).field_0x8 = uVar1;
        uVar1 = *(undefined8 *)&param_1->EulerRotation;
        *(undefined8 *)&(this_00->Position).field_0x10 =
             *(undefined8 *)&(param_1->Position).field_0x10;
        *(undefined8 *)&this_00->EulerRotation = uVar1;
        uVar1 = *(undefined8 *)&(param_1->EulerRotation).field_0x10;
        *(undefined8 *)&(this_00->EulerRotation).field_0x8 =
             *(undefined8 *)&(param_1->EulerRotation).field_0x8;
        *(undefined8 *)&(this_00->EulerRotation).field_0x10 = uVar1;
        uVar1 = *(undefined8 *)&(param_1->LinearVelocity).field_0x8;
        *(undefined8 *)&this_00->LinearVelocity = *(undefined8 *)&param_1->LinearVelocity;
        *(undefined8 *)&(this_00->LinearVelocity).field_0x8 = uVar1;
        uVar1 = *(undefined8 *)&param_1->AngularVelocityInDegreesPerSecond;
        *(undefined8 *)&(this_00->LinearVelocity).field_0x10 =
             *(undefined8 *)&(param_1->LinearVelocity).field_0x10;
        *(undefined8 *)&this_00->AngularVelocityInDegreesPerSecond = uVar1;
        uVar1 = *(undefined8 *)&(param_1->AngularVelocityInDegreesPerSecond).field_0x10;
        *(undefined8 *)&(this_00->AngularVelocityInDegreesPerSecond).field_0x8 =
             *(undefined8 *)&(param_1->AngularVelocityInDegreesPerSecond).field_0x8;
        *(undefined8 *)&(this_00->AngularVelocityInDegreesPerSecond).field_0x10 = uVar1;
        uVar2 = param_1->bIsInternalCluster;
        uVar3 = param_1->field_0x63;
        iVar5 = param_1->LastUpdatedVersion;
        this_00->TransformIndex = param_1->TransformIndex;
        this_00->bIsInternalCluster = uVar2;
        this_00->field_0x63 = uVar3;
        this_00->LastUpdatedVersion = iVar5;
        this_00->LastUpdatedVersion = this->Version + 1;
        return true;
      }
      this_00 = this_00 + 1;
    } while (this_00 != pFVar6);
  }
  if (iVar5 == (this->ClusterData).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x868,&(this->ClusterData).AllocatorInstance,&(this->ClusterData).ArrayMax);
  }
  (this->ClusterData).ArrayNum = iVar5 + 1;
  uVar1 = *(undefined8 *)&(param_1->Position).field_0x8;
  pFVar7 = (this->ClusterData).AllocatorInstance.Data + (longlong)iVar5 * 0x68;
  *(undefined8 *)pFVar7 = *(undefined8 *)&param_1->Position;
  *(undefined8 *)(pFVar7 + 8) = uVar1;
  uVar1 = *(undefined8 *)&param_1->EulerRotation;
  *(undefined8 *)(pFVar7 + 0x10) = *(undefined8 *)&(param_1->Position).field_0x10;
  *(undefined8 *)(pFVar7 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)&(param_1->EulerRotation).field_0x10;
  *(undefined8 *)(pFVar7 + 0x20) = *(undefined8 *)&(param_1->EulerRotation).field_0x8;
  *(undefined8 *)(pFVar7 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)&(param_1->LinearVelocity).field_0x8;
  *(undefined8 *)(pFVar7 + 0x30) = *(undefined8 *)&param_1->LinearVelocity;
  *(undefined8 *)(pFVar7 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)&param_1->AngularVelocityInDegreesPerSecond;
  *(undefined8 *)(pFVar7 + 0x40) = *(undefined8 *)&(param_1->LinearVelocity).field_0x10;
  *(undefined8 *)(pFVar7 + 0x48) = uVar1;
  uVar1 = *(undefined8 *)&(param_1->AngularVelocityInDegreesPerSecond).field_0x10;
  *(undefined8 *)(pFVar7 + 0x50) =
       *(undefined8 *)&(param_1->AngularVelocityInDegreesPerSecond).field_0x8;
  *(undefined8 *)(pFVar7 + 0x58) = uVar1;
  *(undefined8 *)(pFVar7 + 0x60) = *(undefined8 *)&param_1->TransformIndex;
  *(int *)(pFVar7 + 100) = this->Version + 1;
  return true;
}

