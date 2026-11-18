// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 4

// StaticStruct @ 1463445b0

UScriptStruct * __cdecl FGeometryCollectionRepData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeometryCollectionRepData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionEngine();
    Z_Registration_Info_UScriptStruct_FGeometryCollectionRepData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionRepData,(UObject *)pUVar1,
                         L"GeometryCollectionRepData");
  }
  return Z_Registration_Info_UScriptStruct_FGeometryCollectionRepData.OuterSingleton;
}

// HasChanged @ 14637e390

bool __thiscall
FGeometryCollectionRepData::HasChanged
          (FGeometryCollectionRepData *this,FGeometryCollectionRepData *param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  if ((this->Version != 0) && (this->bIsRootAnchored == param_1->bIsRootAnchored)) {
    iVar1 = (this->OneOffActivated).ArrayNum;
    pFVar8 = (this->OneOffActivated).AllocatorInstance.Data;
    pFVar9 = pFVar8 + (longlong)iVar1 * 0x38;
    while( true ) {
      if ((this->OneOffActivated).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FGeometryCollectionActivatedCluster_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar9) {
        iVar1 = (this->Clusters).ArrayNum;
        pFVar8 = (this->Clusters).AllocatorInstance.Data;
        pFVar9 = pFVar8 + (longlong)iVar1 * 0x80;
        while( true ) {
          if ((this->Clusters).ArrayNum != iVar1) {
            `TCheckedPointerIterator<FGeometryCollectionClusterRep_const_,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(local_res8);
          }
          if (pFVar8 == pFVar9) {
            return false;
          }
          pFVar6 = (param_1->Clusters).AllocatorInstance.Data;
          pFVar7 = pFVar6 + (longlong)(param_1->Clusters).ArrayNum * 0x80;
          if (pFVar6 == pFVar7) {
            return true;
          }
          while (*(ushort *)(pFVar6 + 0x70) != *(ushort *)(pFVar8 + 0x70)) {
            pFVar6 = pFVar6 + 0x80;
            if (pFVar6 == pFVar7) {
              return true;
            }
          }
          if (pFVar6 == (FScriptContainerElement *)0x0) {
            return true;
          }
          if (pFVar6[0x72] != pFVar8[0x72]) {
            return true;
          }
          if (*(double *)pFVar8 != *(double *)pFVar6) {
            return true;
          }
          if (*(double *)(pFVar8 + 8) != *(double *)(pFVar6 + 8)) {
            return true;
          }
          if (*(double *)(pFVar8 + 0x10) != *(double *)(pFVar6 + 0x10)) break;
          if (*(double *)(pFVar8 + 0x18) != *(double *)(pFVar6 + 0x18)) {
            return true;
          }
          if (*(double *)(pFVar8 + 0x20) != *(double *)(pFVar6 + 0x20)) {
            return true;
          }
          if (*(double *)(pFVar8 + 0x28) != *(double *)(pFVar6 + 0x28)) {
            return true;
          }
          if (*(double *)(pFVar8 + 0x30) != *(double *)(pFVar6 + 0x30)) {
            return true;
          }
          if (*(double *)(pFVar8 + 0x38) != *(double *)(pFVar6 + 0x38)) {
            return true;
          }
          if (*(double *)(pFVar8 + 0x40) != *(double *)(pFVar6 + 0x40)) {
            return true;
          }
          auVar2._8_4_ = (int)-(ulonglong)(*(double *)(pFVar6 + 0x68) != *(double *)(pFVar8 + 0x68))
          ;
          auVar2._0_8_ = -(ulonglong)(*(double *)(pFVar6 + 0x60) != *(double *)(pFVar8 + 0x60));
          auVar2._12_4_ =
               (int)(-(ulonglong)(*(double *)(pFVar6 + 0x68) != *(double *)(pFVar8 + 0x68)) >> 0x20)
          ;
          uVar5 = movmskpd((uint)*(ushort *)(pFVar8 + 0x70),auVar2);
          auVar3._8_4_ = (int)-(ulonglong)(*(double *)(pFVar8 + 0x58) != *(double *)(pFVar6 + 0x58))
          ;
          auVar3._0_8_ = -(ulonglong)(*(double *)(pFVar8 + 0x50) != *(double *)(pFVar6 + 0x50));
          auVar3._12_4_ =
               (int)(-(ulonglong)(*(double *)(pFVar8 + 0x58) != *(double *)(pFVar6 + 0x58)) >> 0x20)
          ;
          iVar4 = movmskpd((uint)(byte)pFVar8[0x72],auVar3);
          if ((uVar5 & 0x3fffffff) != 0 || iVar4 != 0) {
            return true;
          }
          pFVar8 = pFVar8 + 0x80;
        }
        return true;
      }
      pFVar6 = (param_1->OneOffActivated).AllocatorInstance.Data;
      pFVar7 = pFVar6 + (longlong)(param_1->OneOffActivated).ArrayNum * 0x38;
      if (pFVar6 == pFVar7) break;
      while (*(short *)pFVar6 != *(short *)pFVar8) {
        pFVar6 = pFVar6 + 0x38;
        if (pFVar6 == pFVar7) {
          return true;
        }
      }
      pFVar8 = pFVar8 + 0x38;
    }
  }
  return true;
}

// Identical @ 14637e720

bool __thiscall
FGeometryCollectionRepData::Identical
          (FGeometryCollectionRepData *this,FGeometryCollectionRepData *param_1,uint param_2)

{
  if ((param_1 != (FGeometryCollectionRepData *)0x0) && (this->Version == param_1->Version)) {
    return true;
  }
  return false;
}

// NetSerialize @ 146381390

bool __thiscall
FGeometryCollectionRepData::NetSerialize
          (FGeometryCollectionRepData *this,FArchive *param_1,UPackageMap *param_2,bool *param_3)

{
  int *piVar1;
  TArray<FGeometryCollectionClusterRep,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  longlong *plVar4;
  ushort *puVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  uint uVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  ulonglong uVar12;
  FArchive *pFVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  undefined1 local_res10 [8];
  uint local_res20 [2];
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
  float local_48;
  uint local_44;
  FScriptContainerElement *local_40;
  
  *param_3 = true;
  piVar1 = &this->Version;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  TArrayPrivateFriend::Serialize<FGeometryCollectionActivatedCluster,TSizedDefaultAllocator<32>_>
            (param_1,&this->OneOffActivated);
  piVar1 = &this->ServerFrame;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  plVar4 = *(longlong **)&param_1->field_0x8;
  piVar1 = &(this->Clusters).ArrayNum;
  local_res20[0] = *piVar1;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res20);
    }
  }
  else {
    local_res20[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  ::operator<<(param_1,&this->bIsRootAnchored);
  uVar8 = local_res20[0];
  if ((param_1->field_0x28 & 1) != 0) {
    iVar15 = (this->Clusters).ArrayNum;
    pTVar2 = &this->Clusters;
    lVar16 = (longlong)(int)local_res20[0];
    if (iVar15 < (int)local_res20[0]) {
      iVar15 = local_res20[0] - iVar15;
      iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x80,0x10,iVar15,&pTVar2->AllocatorInstance,piVar1,
                          &(this->Clusters).ArrayMax);
      DefaultConstructItems<FGeometryCollectionClusterRep,int>
                ((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 0x80,iVar15);
    }
    else {
      if ((int)local_res20[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res20[0]);
      }
      if ((int)local_res20[0] < iVar15) {
        uVar17 = iVar15 - local_res20[0];
        if ((int)(uVar17 | local_res20[0]) < 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            uVar10 = (*pcVar7)();
            return (bool)uVar10;
          }
        }
        if (uVar17 != 0) {
          pFVar14 = (pTVar2->AllocatorInstance).Data + lVar16 * 0x80;
          iVar15 = ((this->Clusters).ArrayNum - uVar8) - uVar17;
          if (iVar15 != 0) {
            memmove(pFVar14,pFVar14 + (longlong)(int)uVar17 * 0x80,(longlong)iVar15 << 7);
          }
          piVar1 = &(this->Clusters).ArrayNum;
          *piVar1 = *piVar1 - uVar17;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x80,0x10,&pTVar2->AllocatorInstance,(this->Clusters).ArrayNum,
                     &(this->Clusters).ArrayMax);
        }
      }
    }
    if ((this->RepDataReceivedTime).bIsSet != false) {
      (this->RepDataReceivedTime).bIsSet = false;
    }
  }
  local_44 = (this->Clusters).ArrayNum;
  uVar12 = (ulonglong)(int)local_44;
  pFVar14 = (this->Clusters).AllocatorInstance.Data;
  pFVar18 = pFVar14 + uVar12 * 0x80;
  local_40 = pFVar18;
  while( true ) {
    if ((this->Clusters).ArrayNum != (int)uVar12) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FGeometryCollectionClusterRep,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar14 == pFVar18) break;
    if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
      if ((param_1->field_0x28 & 1) == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ar.IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x4e8,L"float -> double conversion applied outside of load!");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
      }
      plVar4 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar4[1] < (float *)*plVar4 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_70,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_70);
        }
      }
      else {
        local_70 = *(float *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      plVar4 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar4[1] < (float *)*plVar4 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_78,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_78);
        }
      }
      else {
        local_78 = *(float *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      plVar4 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar4[1] < (float *)*plVar4 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_74,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_74);
        }
      }
      else {
        local_74 = *(float *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      *(double *)pFVar14 = (double)local_70;
      *(double *)(pFVar14 + 8) = (double)local_78;
      *(double *)(pFVar14 + 0x10) = (double)local_74;
    }
    else {
      ::operator<<(param_1,(double *)pFVar14);
      ::operator<<(param_1,(double *)(pFVar14 + 8));
      ::operator<<(param_1,(double *)(pFVar14 + 0x10));
    }
    if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
      if ((param_1->field_0x28 & 1) == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ar.IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x4e8,L"float -> double conversion applied outside of load!");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
      }
      plVar4 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar4[1] < (float *)*plVar4 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_64,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_64);
        }
      }
      else {
        local_64 = *(float *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      plVar4 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar4[1] < (float *)*plVar4 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_6c,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_6c);
        }
      }
      else {
        local_6c = *(float *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      plVar4 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar4[1] < (float *)*plVar4 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_68,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_68);
        }
      }
      else {
        local_68 = *(float *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      *(double *)(pFVar14 + 0x18) = (double)local_64;
      *(double *)(pFVar14 + 0x20) = (double)local_6c;
      *(double *)(pFVar14 + 0x28) = (double)local_68;
    }
    else {
      ::operator<<(param_1,(double *)(pFVar14 + 0x18));
      ::operator<<(param_1,(double *)(pFVar14 + 0x20));
      ::operator<<(param_1,(double *)(pFVar14 + 0x28));
    }
    if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
      if ((param_1->field_0x28 & 1) == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ar.IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x4e8,L"float -> double conversion applied outside of load!");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
      }
      plVar4 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar4[1] < (float *)*plVar4 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_58,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_58);
        }
      }
      else {
        local_58 = *(float *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      plVar4 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar4[1] < (float *)*plVar4 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_60,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_60);
        }
      }
      else {
        local_60 = *(float *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      plVar4 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar4[1] < (float *)*plVar4 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_5c,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_5c);
        }
      }
      else {
        local_5c = *(float *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      *(double *)(pFVar14 + 0x30) = (double)local_58;
      *(double *)(pFVar14 + 0x38) = (double)local_60;
      *(double *)(pFVar14 + 0x40) = (double)local_5c;
    }
    else {
      ::operator<<(param_1,(double *)(pFVar14 + 0x30));
      ::operator<<(param_1,(double *)(pFVar14 + 0x38));
      ::operator<<(param_1,(double *)(pFVar14 + 0x40));
    }
    if ((int)((ulonglong)*(undefined8 *)&param_1->field_0x40 >> 0x20) < 0x3ec) {
      if ((param_1->field_0x28 & 1) == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ar.IsLoading()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Quat.h"
                           ,0x2f6,L"float -> double conversion applied outside of load!");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
      }
      plVar4 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar4[1] < (float *)*plVar4 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_48,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_48);
        }
      }
      else {
        local_48 = *(float *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      plVar4 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar4[1] < (float *)*plVar4 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_54,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_54);
        }
      }
      else {
        local_54 = *(float *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      plVar4 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar4[1] < (float *)*plVar4 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_50,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_50);
        }
      }
      else {
        local_50 = *(float *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      plVar4 = *(longlong **)&param_1->field_0x8;
      if ((float *)plVar4[1] < (float *)*plVar4 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_4c,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,(uint *)&local_4c);
        }
      }
      else {
        local_4c = *(float *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      if ((param_1->field_0x28 & 1) != 0) {
        *(double *)(pFVar14 + 0x50) = (double)local_48;
        *(double *)(pFVar14 + 0x58) = (double)local_54;
        *(double *)(pFVar14 + 0x60) = (double)local_50;
        *(double *)(pFVar14 + 0x68) = (double)local_4c;
      }
    }
    else {
      pFVar13 = ::operator<<(param_1,(double *)(pFVar14 + 0x50));
      pFVar13 = ::operator<<(pFVar13,(double *)(pFVar14 + 0x58));
      pFVar13 = ::operator<<(pFVar13,(double *)(pFVar14 + 0x60));
      ::operator<<(pFVar13,(double *)(pFVar14 + 0x68));
      pFVar18 = local_40;
    }
    pFVar6 = pFVar14 + 0x70;
    puVar5 = (ushort *)**(undefined8 **)&param_1->field_0x8;
    if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar6,2);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,(ushort *)pFVar6);
      }
    }
    else {
      *(ushort *)pFVar6 = *puVar5;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
    }
    pFVar6 = (FScriptContainerElement *)**(undefined8 **)&param_1->field_0x8;
    if ((FScriptContainerElement *)(*(undefined8 **)&param_1->field_0x8)[1] < pFVar6 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar14 + 0x72,1);
      uVar12 = (ulonglong)local_44;
      pFVar14 = pFVar14 + 0x80;
    }
    else {
      pFVar14[0x72] = *pFVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
      uVar12 = (ulonglong)local_44;
      pFVar14 = pFVar14 + 0x80;
    }
  }
  return true;
}

