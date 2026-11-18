// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 1

// Serialize @ 145c2c480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FArchive * __thiscall
FOpenGLCodeHeader::Serialize
          (FOpenGLCodeHeader *this,FArchive *param_1,FShaderResourceTable *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  uint *puVar3;
  ushort *puVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  FScriptContainerElement *pFVar7;
  ushort *puVar8;
  code *pcVar9;
  bool bVar10;
  FScriptContainerElement FVar11;
  uint uVar12;
  int iVar13;
  FArchive *pFVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  undefined1 auStackY_a8 [32];
  uint local_58 [2];
  ushort local_50;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  uchar uStack_4c;
  uchar uStack_4b;
  ushort uStack_4a;
  ushort local_48 [4];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,this,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&this->GlslMarker);
    }
  }
  else {
    this->GlslMarker = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar8 = &this->FrequencyMarker;
  puVar2 = &param_1->field_0x2a;
  puVar4 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar8,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar8);
    }
  }
  else {
    *puVar8 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  FOpenGLShaderBindings::Serialize(&this->Bindings,param_1,param_2);
  ::operator<<(param_1,&this->ShaderName);
  plVar5 = *(longlong **)&param_1->field_0x8;
  local_58[0] = (this->UniformBuffersCopyInfo).ArrayNum;
  if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
    if ((*puVar2 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_58,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_58);
    }
  }
  else {
    local_58[0] = *(uint *)*plVar5;
    *plVar5 = *plVar5 + 4;
  }
  if ((param_1->field_0x28 & 4) == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      if ((int)local_58[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_58[0]);
      }
      iVar18 = 0;
      piVar1 = &(this->UniformBuffersCopyInfo).ArrayMax;
      (this->UniformBuffersCopyInfo).ArrayNum = 0;
      if (*piVar1 != local_58[0]) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (10,2,local_58[0],&(this->UniformBuffersCopyInfo).AllocatorInstance,0,piVar1);
      }
      if (0 < (int)local_58[0]) {
        do {
          plVar5 = *(longlong **)&param_1->field_0x8;
          if ((ushort *)plVar5[1] < (ushort *)*plVar5 + 1) {
            if ((*puVar2 & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_50,2);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,&local_50);
            }
          }
          else {
            local_50 = *(ushort *)*plVar5;
            *plVar5 = *plVar5 + 2;
          }
          plVar5 = *(longlong **)&param_1->field_0x8;
          if ((undefined1 *)plVar5[1] < (undefined1 *)*plVar5 + 1) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&uStack_4e,1);
          }
          else {
            uStack_4e = *(undefined1 *)*plVar5;
            *plVar5 = *plVar5 + 1;
          }
          plVar5 = *(longlong **)&param_1->field_0x8;
          if ((undefined1 *)plVar5[1] < (undefined1 *)*plVar5 + 1) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&uStack_4d,1);
          }
          else {
            uStack_4d = *(undefined1 *)*plVar5;
            *plVar5 = *plVar5 + 1;
          }
          plVar5 = *(longlong **)&param_1->field_0x8;
          if ((uchar *)plVar5[1] < (uchar *)*plVar5 + 1) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&uStack_4c,1);
          }
          else {
            uStack_4c = *(uchar *)*plVar5;
            *plVar5 = *plVar5 + 1;
          }
          if ((param_1->field_0x28 & 1) != 0) {
            uStack_4b = CrossCompiler::PackedTypeNameToTypeIndex(uStack_4c);
          }
          plVar5 = *(longlong **)&param_1->field_0x8;
          if ((ushort *)plVar5[1] < (ushort *)*plVar5 + 1) {
            if ((*puVar2 & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&uStack_4a,2);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,&uStack_4a);
            }
          }
          else {
            uStack_4a = *(ushort *)*plVar5;
            *plVar5 = *plVar5 + 2;
          }
          plVar5 = *(longlong **)&param_1->field_0x8;
          if ((ushort *)plVar5[1] < (ushort *)*plVar5 + 1) {
            if ((*puVar2 & 1) == 0) {
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_48,2);
            }
            else {
              FArchive::SerializeByteOrderSwapped(param_1,local_48);
            }
          }
          else {
            local_48[0] = *(ushort *)*plVar5;
            *plVar5 = *plVar5 + 2;
          }
          pFVar15 = (this->UniformBuffersCopyInfo).AllocatorInstance.Data;
          if (((pFVar15 <= (FScriptContainerElement *)&local_50) &&
              ((FScriptContainerElement *)&local_50 < pFVar15 + (longlong)*piVar1 * 10)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar9 = (code *)swi(3);
            pFVar14 = (FArchive *)(*pcVar9)();
            return pFVar14;
          }
          iVar13 = (this->UniformBuffersCopyInfo).ArrayNum;
          if (iVar13 == *piVar1) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x20a,&(this->UniformBuffersCopyInfo).AllocatorInstance,piVar1);
          }
          iVar18 = iVar18 + 1;
          (this->UniformBuffersCopyInfo).ArrayNum = iVar13 + 1;
          pFVar15 = (this->UniformBuffersCopyInfo).AllocatorInstance.Data;
          *(ulonglong *)(pFVar15 + (longlong)iVar13 * 10) =
               CONCAT26(uStack_4a,
                        CONCAT15(uStack_4b,
                                 CONCAT14(uStack_4c,CONCAT13(uStack_4d,CONCAT12(uStack_4e,local_50))
                                         )));
          *(ushort *)(pFVar15 + (longlong)iVar13 * 10 + 8) = local_48[0];
        } while (iVar18 < (int)local_58[0]);
      }
    }
  }
  else {
    uVar17 = 0;
    if (0 < (int)local_58[0]) {
      lVar16 = 0;
      do {
        uVar12 = 0;
        if ((int)uVar17 < (this->UniformBuffersCopyInfo).ArrayNum) {
          uVar12 = ~uVar17 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          pFVar14 = (FArchive *)(*pcVar9)();
          return pFVar14;
        }
        pFVar15 = (this->UniformBuffersCopyInfo).AllocatorInstance.Data + lVar16;
        puVar6 = (undefined2 *)**(undefined8 **)&param_1->field_0x8;
        if ((undefined2 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar6 + 1) {
          if ((*puVar2 & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar15,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(ushort *)pFVar15);
          }
        }
        else {
          *(undefined2 *)pFVar15 = *puVar6;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
        }
        pFVar7 = (FScriptContainerElement *)**(undefined8 **)&param_1->field_0x8;
        if ((FScriptContainerElement *)(*(undefined8 **)&param_1->field_0x8)[1] < pFVar7 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar15 + 2,1);
        }
        else {
          pFVar15[2] = *pFVar7;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
        }
        pFVar7 = (FScriptContainerElement *)**(undefined8 **)&param_1->field_0x8;
        if ((FScriptContainerElement *)(*(undefined8 **)&param_1->field_0x8)[1] < pFVar7 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar15 + 3,1);
        }
        else {
          pFVar15[3] = *pFVar7;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
        }
        pFVar7 = (FScriptContainerElement *)**(undefined8 **)&param_1->field_0x8;
        if ((FScriptContainerElement *)(*(undefined8 **)&param_1->field_0x8)[1] < pFVar7 + 1) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar15 + 4,1);
        }
        else {
          pFVar15[4] = *pFVar7;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
        }
        if ((param_1->field_0x28 & 1) != 0) {
          FVar11 = (FScriptContainerElement)
                   CrossCompiler::PackedTypeNameToTypeIndex((uchar)pFVar15[4]);
          pFVar15[5] = FVar11;
        }
        pFVar7 = pFVar15 + 6;
        puVar8 = (ushort *)**(undefined8 **)&param_1->field_0x8;
        if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar8 + 1) {
          if ((*puVar2 & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar7,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(ushort *)pFVar7);
          }
        }
        else {
          *(ushort *)pFVar7 = *puVar8;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
        }
        pFVar15 = pFVar15 + 8;
        puVar8 = (ushort *)**(undefined8 **)&param_1->field_0x8;
        if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar8 + 1) {
          if ((*puVar2 & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar15,2);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,(ushort *)pFVar15);
          }
        }
        else {
          *(ushort *)pFVar15 = *puVar8;
          **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
        }
        uVar17 = uVar17 + 1;
        lVar16 = lVar16 + 10;
      } while ((int)uVar17 < (int)local_58[0]);
    }
  }
  return param_1;
}

