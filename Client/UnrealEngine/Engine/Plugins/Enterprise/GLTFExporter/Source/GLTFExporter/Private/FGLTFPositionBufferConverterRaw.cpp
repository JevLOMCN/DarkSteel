// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// Convert @ 14e5e8fd0

FGLTFJsonAccessor * __thiscall
FGLTFPositionBufferConverterRaw::Convert
          (FGLTFPositionBufferConverterRaw *this,
          FMeshAttributesArray<UE::Math::TVector<float>_> *param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  FGLTFBufferBuilder *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FGLTFJsonAccessor *pFVar7;
  FGLTFJsonAccessor *pFVar8;
  FGLTFJsonBufferView *pFVar9;
  uint uVar10;
  float *pfVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  FGLTFJsonAccessor *pFVar17;
  float fVar18;
  float fVar19;
  float afStackY_11c [4];
  float afStackY_10c [15];
  undefined8 uStackY_d0;
  float local_98 [4];
  float local_88 [4];
  ForAnyElementType local_78;
  int local_70 [14];
  
  uVar14 = *(uint *)&param_1->field_0x8;
  pFVar7 = (FGLTFJsonAccessor *)0x0;
  uVar15 = 1;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70[0] = 0;
  local_70[1] = 0;
  uStackY_d0 = 0x14e5e9043;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,1,uVar14,&local_78,local_70,local_70 + 1);
  uVar13 = 0;
  if (uVar14 != 0) {
    fVar19 = *(float *)(*(longlong *)(*(longlong *)&this->field_0x58 + 0x18) + 0x28);
    if (*(int *)&param_1->field_0x8 < 1) {
      uStackY_d0 = 0x14e5e909d;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar7;
      }
    }
    pfVar11 = *(float **)param_1;
    fVar18 = *pfVar11;
    fVar1 = pfVar11[2];
    fVar2 = pfVar11[1];
    if (local_70[0] < 1) {
      uStackY_d0 = 0x14e5e90ee;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar7;
      }
    }
    *(ulonglong *)local_78.Data = CONCAT44(fVar19 * fVar1,fVar19 * fVar18);
    *(float *)(local_78.Data + 8) = fVar19 * fVar2;
    if (local_70[0] < 1) {
      uStackY_d0 = 0x14e5e913a;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar7;
      }
    }
    local_88[0] = *(float *)local_78.Data;
    if (local_70[0] < 1) {
      uStackY_d0 = 0x14e5e917f;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar7;
      }
    }
    local_98[0] = *(float *)local_78.Data;
    if (local_70[0] < 1) {
      uStackY_d0 = 0x14e5e91c4;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar7;
      }
    }
    local_88[1] = (float)*(undefined4 *)(local_78.Data + 4);
    if (local_70[0] < 1) {
      uStackY_d0 = 0x14e5e920a;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar7;
      }
    }
    local_98[1] = (float)*(undefined4 *)(local_78.Data + 4);
    if (local_70[0] < 1) {
      uStackY_d0 = 0x14e5e9250;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar7;
      }
    }
    local_88[2] = (float)*(undefined4 *)(local_78.Data + 8);
    if (local_70[0] < 1) {
      uStackY_d0 = 0x14e5e9296;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar7;
      }
    }
    local_98[2] = (float)*(undefined4 *)(local_78.Data + 8);
    if (1 < uVar14) {
      do {
        uVar16 = ~uVar15 >> 0x1f;
        fVar19 = *(float *)(*(longlong *)(*(longlong *)&this->field_0x58 + 0x18) + 0x28);
        uVar10 = uVar13;
        if ((int)uVar15 < *(int *)&param_1->field_0x8) {
          uVar10 = uVar16;
        }
        if (uVar10 == 0) {
          uStackY_d0 = 0x14e5e9319;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pFVar7 = (FGLTFJsonAccessor *)(*pcVar4)();
            return pFVar7;
          }
        }
        lVar12 = (longlong)(int)uVar15 * 0xc;
        lVar3 = *(longlong *)param_1;
        fVar18 = *(float *)(lVar3 + lVar12);
        fVar1 = *(float *)(lVar3 + 8 + lVar12);
        fVar2 = *(float *)(lVar3 + 4 + lVar12);
        uVar10 = uVar13;
        if ((int)uVar15 < local_70[0]) {
          uVar10 = uVar16;
        }
        if (uVar10 == 0) {
          uStackY_d0 = 0x14e5e9386;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pFVar7 = (FGLTFJsonAccessor *)(*pcVar4)();
            return pFVar7;
          }
        }
        *(ulonglong *)(local_78.Data + lVar12) = CONCAT44(fVar19 * fVar1,fVar19 * fVar18);
        *(float *)(local_78.Data + lVar12 + 8) = fVar19 * fVar2;
        pFVar8 = pFVar7;
        do {
          uVar10 = uVar13;
          if ((int)uVar15 < local_70[0]) {
            uVar10 = uVar16;
          }
          if (uVar10 == 0) {
            uStackY_d0 = 0x14e5e93ec;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              pFVar7 = (FGLTFJsonAccessor *)(*pcVar4)();
              return pFVar7;
            }
          }
          fVar19 = *(float *)(local_78.Data + lVar12);
          uVar10 = (uint)pFVar8;
          if (2 < uVar10) {
            uStackY_d0 = 0x14e5e9420;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                               ,0x7a2,L"");
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              pFVar7 = (FGLTFJsonAccessor *)(*pcVar4)();
              return pFVar7;
            }
          }
          if (local_88[(int)uVar10] <= fVar19) {
            fVar19 = local_88[(int)uVar10];
          }
          if (((int)uVar10 < 0) || (2 < (int)uVar10)) {
            uStackY_d0 = 0x14e5e9458;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                               ,0x7a2,L"");
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              pFVar7 = (FGLTFJsonAccessor *)(*pcVar4)();
              return pFVar7;
            }
          }
          local_88[(int)uVar10] = fVar19;
          uVar6 = 0;
          if ((int)uVar15 < local_70[0]) {
            uVar6 = uVar16;
          }
          if (uVar6 == 0) {
            uStackY_d0 = 0x14e5e94a0;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              pFVar7 = (FGLTFJsonAccessor *)(*pcVar4)();
              return pFVar7;
            }
          }
          fVar19 = *(float *)(local_78.Data + lVar12);
          if (uVar10 < 3) {
            fVar18 = fVar19;
            if (fVar19 <= local_98[(int)uVar10]) {
              fVar18 = local_98[(int)uVar10];
            }
          }
          else {
            uStackY_d0 = 0x14e5e94dc;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                               ,0x7a2,L"");
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              pFVar7 = (FGLTFJsonAccessor *)(*pcVar4)();
              return pFVar7;
            }
            fVar18 = local_98[(int)uVar10];
            if (local_98[(int)uVar10] <= fVar19) {
              fVar18 = fVar19;
            }
            uStackY_d0 = 0x14e5e950f;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                               ,0x7a2,L"");
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              pFVar7 = (FGLTFJsonAccessor *)(*pcVar4)();
              return pFVar7;
            }
          }
          pFVar8 = (FGLTFJsonAccessor *)((longlong)&pFVar8->_padding_ + 1);
          local_98[(int)uVar10] = fVar18;
          lVar12 = lVar12 + 4;
        } while (pFVar8 < (FGLTFJsonAccessor *)&DAT_00000003);
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar14);
    }
  }
  pFVar8 = pFVar7;
  if (local_70[0] != 0) {
    this_00 = *(FGLTFBufferBuilder **)&this->field_0x58;
    uStackY_d0 = 0x14e5e956b;
    pFVar8 = FGLTFJsonBuilder::AddAccessor((FGLTFJsonBuilder *)this_00);
    uStackY_d0 = 0x14e5e9591;
    pFVar9 = FGLTFBufferBuilder::AddBufferView
                       (this_00,local_78.Data,(longlong)local_70[0] * 0xc,ArrayBuffer,'\x04');
    pFVar8->BufferView = pFVar9;
    pFVar8->ComponentType = Float;
    pFVar8->Count = local_70[0];
    pFVar8->Type = Vec3;
    pFVar8->bNormalized = false;
  }
  pFVar8->MinMaxLength = 3;
  pfVar11 = pFVar8->Max;
  pFVar17 = pFVar7;
  do {
    if ((FGLTFJsonAccessor *)&DAT_00000002 < pFVar17) {
      uStackY_d0 = 0x14e5e9603;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7a2,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar7;
      }
      pfVar11[-0x10] = *(float *)((longlong)afStackY_10c + -(longlong)pFVar8 + (longlong)pfVar11);
      uStackY_d0 = 0x14e5e9644;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                         ,0x7a2,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FGLTFJsonAccessor *)(*pcVar4)();
        return pFVar7;
      }
    }
    else {
      pfVar11[-0x10] = *(float *)((longlong)pfVar11 + (longlong)afStackY_10c + -(longlong)pFVar8);
    }
    uVar14 = (int)pFVar7 + 1;
    pFVar7 = (FGLTFJsonAccessor *)(ulonglong)uVar14;
    *pfVar11 = *(float *)(((longlong)afStackY_11c - (longlong)pFVar8) + (longlong)pfVar11);
    pFVar17 = (FGLTFJsonAccessor *)((longlong)&pFVar17->_padding_ + 1);
    pfVar11 = pfVar11 + 1;
    if (pFVar8->MinMaxLength <= (int)uVar14) {
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        uStackY_d0 = 0x14e5e96a6;
        FMemory::Free(local_78.Data);
      }
      if (*(void **)param_1 != (void *)0x0) {
        uStackY_d0 = 0x14e5e96b7;
        FMemory::Free(*(void **)param_1);
      }
      return pFVar8;
    }
  } while( true );
}

