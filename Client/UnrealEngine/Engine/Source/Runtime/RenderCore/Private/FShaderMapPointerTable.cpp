// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 5

// Clone @ 145d13de0

FShaderMapPointerTable * __thiscall FShaderMapPointerTable::Clone(FShaderMapPointerTable *this)

{
  undefined1 *puVar1;
  int iVar2;
  void *pvVar3;
  FShaderMapPointerTable *pFVar4;
  undefined1 *puVar5;
  
  pFVar4 = ::operator_new(0x68);
  if (pFVar4 == (FShaderMapPointerTable *)0x0) {
    return (FShaderMapPointerTable *)0x0;
  }
  pFVar4->_padding_ = (longlong)&___7FShaderMapPointerTable__6B_;
  FPtrTableBase::FPtrTableBase
            ((FPtrTableBase *)&pFVar4->ShaderTypes,(FPtrTableBase *)&this->ShaderTypes);
  puVar5 = &(pFVar4->ShaderTypes).field_0x20;
  *(undefined8 *)puVar5 = 0;
  puVar1 = &(pFVar4->ShaderTypes).field_0x2c;
  iVar2 = *(int *)&(this->ShaderTypes).field_0x28;
  pvVar3 = *(void **)&(this->ShaderTypes).field_0x20;
  *(int *)&(pFVar4->ShaderTypes).field_0x28 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)puVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,0,(ForAnyElementType *)puVar5,iVar2,(int *)puVar1);
    memcpy(*(void **)puVar5,pvVar3,(longlong)iVar2 << 3);
  }
  FPtrTableBase::FPtrTableBase((FPtrTableBase *)&pFVar4->VFTypes,(FPtrTableBase *)&this->VFTypes);
  puVar1 = &(pFVar4->VFTypes).field_0x20;
  *(undefined8 *)puVar1 = 0;
  puVar5 = &(pFVar4->VFTypes).field_0x2c;
  iVar2 = *(int *)&(this->VFTypes).field_0x28;
  pvVar3 = *(void **)&(this->VFTypes).field_0x20;
  *(int *)&(pFVar4->VFTypes).field_0x28 = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)puVar5 = 0;
    return pFVar4;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar2,0,(ForAnyElementType *)puVar1,iVar2,(int *)puVar5);
  memcpy(*(void **)puVar1,pvVar3,(longlong)iVar2 << 3);
  return pFVar4;
}

// AddIndexedPointer @ 145df7bc0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall
FShaderMapPointerTable::AddIndexedPointer
          (FShaderMapPointerTable *this,FTypeLayoutDesc *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FShaderType *local_res8;
  FVertexFactoryType *local_res10;
  
  pFVar4 = StaticGetTypeLayoutDesc<TIndexedPtrBase<FShaderType,FShaderType_*>_>();
  if (param_1 != pFVar4) {
    pFVar4 = StaticGetTypeLayoutDesc<TIndexedPtrBase<FVertexFactoryType,FVertexFactoryType_*>_>();
    if (param_1 != pFVar4) {
      return -1;
    }
    local_res10 = param_2;
    if (param_2 == (void *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x3cb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    iVar3 = TArray<FVertexFactoryType_*,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<FVertexFactoryType_*_const_&>
                      ((TArray<FVertexFactoryType_*,TSizedDefaultAllocator<32>_> *)
                       &(this->VFTypes).field_0x20,&local_res10);
    return iVar3;
  }
  local_res8 = param_2;
  if (param_2 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                       ,0x3cb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = TArray<FShaderType_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FShaderType_*_const_&>
                    ((TArray<FShaderType_*,TSizedDefaultAllocator<32>_> *)
                     &(this->ShaderTypes).field_0x20,&local_res8);
  return iVar3;
}

// GetIndexedPointer @ 145e0f690

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void * __thiscall
FShaderMapPointerTable::GetIndexedPointer
          (FShaderMapPointerTable *this,FTypeLayoutDesc *param_1,uint param_2)

{
  FTypeLayoutDesc *pFVar1;
  FShaderType *pFVar2;
  FVertexFactoryType *pFVar3;
  
  pFVar1 = StaticGetTypeLayoutDesc<TIndexedPtrBase<FShaderType,FShaderType_*>_>();
  if (param_1 == pFVar1) {
    pFVar2 = TPtrTableBase<FShaderType,FShaderType_*>::GetIndexedPointer
                       ((TPtrTableBase<FShaderType,FShaderType_*> *)&this->ShaderTypes,param_2);
    return pFVar2;
  }
  pFVar1 = StaticGetTypeLayoutDesc<TIndexedPtrBase<FVertexFactoryType,FVertexFactoryType_*>_>();
  if (param_1 == pFVar1) {
    pFVar3 = TPtrTableBase<FVertexFactoryType,FVertexFactoryType_*>::GetIndexedPointer
                       ((TPtrTableBase<FVertexFactoryType,FVertexFactoryType_*> *)&this->VFTypes,
                        param_2);
    return pFVar3;
  }
  return (void *)0x0;
}

// LoadFromArchive @ 145e1b410

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FShaderMapPointerTable::LoadFromArchive
          (FShaderMapPointerTable *this,FArchive *param_1,FPlatformTypeLayoutParameters *param_2,
          void *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  FVertexFactoryType **ppFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  TMap<FHashedName,FShaderType_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FShaderType_*,0>_>
  *pTVar11;
  longlong lVar12;
  FVertexFactoryType *pFVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  int iVar16;
  uint local_78;
  uint local_74;
  longlong local_70;
  ulong64 local_68;
  longlong local_60;
  FHashedName local_58;
  FVertexFactoryType *local_50;
  FVertexFactoryType *local_48 [2];
  
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId676,"FShaderMapPointerTable_LoadFromArchive",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\Shader.cpp"
               ,0x2a4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId676);
  }
  bVar7 = FPointerTableBase::LoadFromArchive((FPointerTableBase *)this,param_1,param_2,param_3);
  plVar14 = *(longlong **)&param_1->field_0x8;
  iVar16 = 0;
  local_78 = 0;
  local_74 = 0;
  if ((uint *)plVar14[1] < (uint *)*plVar14 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_78,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_78);
    }
  }
  else {
    local_78 = *(uint *)*plVar14;
    *plVar14 = *plVar14 + 4;
  }
  puVar3 = &param_1->field_0x2a;
  plVar14 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar14[1] < (uint *)*plVar14 + 1) {
    if ((*puVar3 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_74,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_74);
    }
  }
  else {
    local_74 = *(uint *)*plVar14;
    *plVar14 = *plVar14 + 4;
  }
  puVar1 = &(this->ShaderTypes).field_0x20;
  if ((int)local_78 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_78);
  }
  puVar2 = &(this->ShaderTypes).field_0x2c;
  *(undefined4 *)&(this->ShaderTypes).field_0x28 = 0;
  if (*(int *)&(this->ShaderTypes).field_0x2c < (int)local_78) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_78,(ForAnyElementType *)puVar1,0,(int *)puVar2);
  }
  if (0 < (int)local_78) {
    do {
      plVar14 = *(longlong **)&param_1->field_0x8;
      local_68 = 0;
      if ((ulonglong *)plVar14[1] < (ulonglong *)*plVar14 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_68,8);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_68);
        }
      }
      else {
        local_68 = *(ulonglong *)*plVar14;
        *plVar14 = *plVar14 + 8;
      }
      pTVar11 = FShaderType::GetNameToTypeMap();
      if (*(int *)&pTVar11->field_0x8 != *(int *)&pTVar11->field_0x34) {
        puVar15 = &pTVar11->field_0x38;
        if (*(undefined1 **)&pTVar11->field_0x40 != (undefined1 *)0x0) {
          puVar15 = *(undefined1 **)&pTVar11->field_0x40;
        }
        iVar10 = *(int *)(puVar15 +
                         ((local_68 >> 0x20) * 0x17 + local_68 &
                         (ulonglong)(*(int *)&pTVar11->field_0x48 - 1)) * 4);
        if (iVar10 != -1) {
          do {
            lVar12 = *(longlong *)pTVar11 + (longlong)iVar10 * 0x18;
            if (*(ulonglong *)(*(longlong *)pTVar11 + (longlong)iVar10 * 0x18) == local_68) {
              plVar14 = (longlong *)(lVar12 + 8);
              if (lVar12 == 0) {
                plVar14 = (longlong *)0x0;
              }
              if (plVar14 != (longlong *)0x0) {
                local_70 = *plVar14;
                plVar14 = *(longlong **)puVar1;
                if (local_70 == 0) goto LAB_145e1b643;
                if (((plVar14 <= &local_70) && (&local_70 < plVar14 + *(int *)puVar2)) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  uVar9 = (*pcVar5)();
                  return (bool)uVar9;
                }
                iVar10 = *(int *)&(this->ShaderTypes).field_0x28;
                lVar12 = local_70;
                if (iVar10 == *(int *)puVar2) {
                  iVar10 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,(ForAnyElementType *)puVar1,(int *)puVar2);
                  lVar12 = local_70;
                }
                goto LAB_145e1b6cc;
              }
              break;
            }
            iVar10 = *(int *)(lVar12 + 0x10);
          } while (iVar10 != -1);
        }
      }
      plVar14 = *(longlong **)puVar1;
      local_70 = 0;
LAB_145e1b643:
      local_60 = 0;
      if (((plVar14 <= &local_60) && (&local_60 < plVar14 + *(int *)puVar2)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      iVar10 = *(int *)&(this->ShaderTypes).field_0x28;
      lVar12 = local_60;
      if (iVar10 == *(int *)puVar2) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)puVar1,(int *)puVar2);
        lVar12 = local_60;
      }
LAB_145e1b6cc:
      *(int *)&(this->ShaderTypes).field_0x28 = iVar10 + 1;
      iVar16 = iVar16 + 1;
      *(longlong *)(*(longlong *)puVar1 + (longlong)iVar10 * 8) = lVar12;
    } while (iVar16 < (int)local_78);
  }
  puVar1 = &(this->VFTypes).field_0x20;
  if ((int)local_74 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_74);
  }
  puVar2 = &(this->VFTypes).field_0x2c;
  iVar16 = 0;
  *(undefined4 *)&(this->VFTypes).field_0x28 = 0;
  if (*(int *)&(this->VFTypes).field_0x2c < (int)local_74) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_74,(ForAnyElementType *)puVar1,0,(int *)puVar2);
  }
  if (0 < (int)local_74) {
    do {
      plVar14 = *(longlong **)&param_1->field_0x8;
      local_58.Hash = 0;
      if ((ulong64 *)plVar14[1] < (ulong64 *)*plVar14 + 1) {
        if ((*puVar3 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_58,8);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_58.Hash);
        }
      }
      else {
        local_58.Hash = *(ulong64 *)*plVar14;
        *plVar14 = *plVar14 + 8;
      }
      local_50 = FVertexFactoryType::GetVFByName(&local_58);
      ppFVar4 = *(FVertexFactoryType ***)puVar1;
      if (local_50 == (FVertexFactoryType *)0x0) {
        local_48[0] = (FVertexFactoryType *)0x0;
        if (((ppFVar4 <= local_48) && (local_48 < ppFVar4 + *(int *)puVar2)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        iVar10 = *(int *)&(this->VFTypes).field_0x28;
        pFVar13 = local_48[0];
        if (iVar10 == *(int *)puVar2) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)puVar1,(int *)puVar2);
          pFVar13 = local_48[0];
        }
      }
      else {
        if (((ppFVar4 <= &local_50) && (&local_50 < ppFVar4 + *(int *)puVar2)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        iVar10 = *(int *)&(this->VFTypes).field_0x28;
        pFVar13 = local_50;
        if (iVar10 == *(int *)puVar2) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)puVar1,(int *)puVar2);
          pFVar13 = local_50;
        }
      }
      *(int *)&(this->VFTypes).field_0x28 = iVar10 + 1;
      iVar16 = iVar16 + 1;
      *(FVertexFactoryType **)(*(longlong *)puVar1 + (longlong)iVar10 * 8) = pFVar13;
    } while (iVar16 < (int)local_74);
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar7;
}

// SaveToArchive @ 145e246b0

void __thiscall
FShaderMapPointerTable::SaveToArchive
          (FShaderMapPointerTable *this,FArchive *param_1,FPlatformTypeLayoutParameters *param_2,
          void *param_3)

{
  undefined1 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint local_res8 [2];
  uint local_res10 [2];
  FHashedName local_28;
  FHashedName local_20;
  
  FPointerTableBase::SaveToArchive((FPointerTableBase *)this,param_1,param_2,param_3);
  local_res8[0] = *(uint *)&(this->ShaderTypes).field_0x28;
  plVar2 = *(longlong **)&param_1->field_0x8;
  local_res10[0] = *(uint *)&(this->VFTypes).field_0x28;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  puVar1 = &param_1->field_0x2a;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res10);
    }
  }
  else {
    local_res10[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  uVar7 = 0;
  if (0 < (int)local_res8[0]) {
    lVar6 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < *(int *)&(this->ShaderTypes).field_0x28) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FHashedName::FHashedName
                (&local_28,
                 (FHashedName *)
                 (*(longlong *)(lVar6 + *(longlong *)&(this->ShaderTypes).field_0x20) + 0x28));
      plVar2 = *(longlong **)&param_1->field_0x8;
      if ((ulong64 *)plVar2[1] < (ulong64 *)*plVar2 + 1) {
        if ((*puVar1 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_28,8);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_28.Hash);
        }
      }
      else {
        local_28.Hash = *(ulong64 *)*plVar2;
        *plVar2 = *plVar2 + 8;
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar7 < (int)local_res8[0]);
  }
  uVar7 = 0;
  if (0 < (int)local_res10[0]) {
    lVar6 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < *(int *)&(this->VFTypes).field_0x28) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FHashedName::FHashedName
                (&local_20,
                 (FHashedName *)
                 (*(longlong *)(lVar6 + *(longlong *)&(this->VFTypes).field_0x20) + 0x30));
      plVar2 = *(longlong **)&param_1->field_0x8;
      if ((ulong64 *)plVar2[1] < (ulong64 *)*plVar2 + 1) {
        if ((*puVar1 & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_20,8);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_20.Hash);
        }
      }
      else {
        local_20.Hash = *(ulong64 *)*plVar2;
        *plVar2 = *plVar2 + 8;
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar7 < (int)local_res10[0]);
  }
  return;
}

