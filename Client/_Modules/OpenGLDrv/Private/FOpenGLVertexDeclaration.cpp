// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 1

// GetInitializer @ 145c022a0

bool __thiscall
FOpenGLVertexDeclaration::GetInitializer
          (FOpenGLVertexDeclaration *this,TArray<FVertexElement,TFixedAllocator<17>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uchar *puVar6;
  uint uVar7;
  wchar_t *pwVar8;
  uchar local_38;
  uchar uStack_37;
  uchar uStack_36;
  uchar uStack_35;
  undefined2 uStack_34;
  ushort uStack_32;
  
  if ((param_1->ArrayNum != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Init.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLVertexDeclaration.cpp"
                         ,0xb7,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  uVar7 = 0;
  if (0 < (this->VertexElements).ArrayNum) {
    puVar6 = (this->VertexElements).AllocatorInstance.InlineData[0].Pad + 8;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->VertexElements).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      local_38 = puVar6[-4];
      uVar4 = *(uint *)((TTypeCompatibleBytes<FOpenGLVertexElement> *)(puVar6 + -8))->Pad;
      uStack_37 = *puVar6;
      uStack_32 = (ushort)(*(int *)(puVar6 + 8) == 1);
      uStack_35 = puVar6[0x11];
      uStack_34 = *(undefined2 *)(puVar6 + 0xc);
      if (uVar4 < 0x140c) {
        if (uVar4 == 0x140b) {
          if (*(int *)(puVar6 + 4) == 2) {
            uStack_36 = '\f';
          }
          else {
            if (*(int *)(puVar6 + 4) != 4) {
              iVar5 = 0x127;
              goto LAB_145c0259b;
            }
            uStack_36 = '\r';
          }
        }
        else {
          switch(uVar4) {
          case 0x1400:
            if (*(int *)(puVar6 + 4) != 4) {
              pwVar8 = L"Vertex Declaration GL_BYTE, Size=%d";
              iVar5 = 0xf5;
              goto LAB_145c024c7;
            }
            if ((puVar6[0x10] == '\0') &&
               (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<2153552947890356464>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLVertexDeclaration.cpp"
                                   ,0xf0,"GLElement.bNormalized"), bVar2)) {
              pcVar1 = (code *)swi(3);
              uVar3 = (*pcVar1)();
              return (bool)uVar3;
            }
            uStack_36 = '\x05';
            break;
          case 0x1401:
            if (*(int *)(puVar6 + 4) == 4) {
              uStack_36 = (puVar6[0x10] != '\0') + '\x06';
            }
            else if (*(int *)(puVar6 + 4) == 0x80e1) {
              uStack_36 = '\b';
            }
            else {
              iVar5 = 0xe7;
LAB_145c0259b:
              bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("false",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLVertexDeclaration.cpp"
                                 ,iVar5,L"");
              if (bVar2) goto code_r0x000145c024e3;
            }
            break;
          case 0x1402:
            if (*(int *)(puVar6 + 4) == 2) {
              if (puVar6[0x10] == '\0') {
                uStack_36 = '\f';
                if (puVar6[0x12] == '\0') {
                  uStack_36 = '\t';
                }
              }
              else {
                uStack_36 = '\v';
              }
            }
            else {
              if (*(int *)(puVar6 + 4) != 4) {
                iVar5 = 0x112;
                goto LAB_145c0259b;
              }
              if (puVar6[0x10] == '\0') {
                uStack_36 = '\r';
                if (puVar6[0x12] == '\0') {
                  uStack_36 = '\n';
                }
              }
              else {
                uStack_36 = '\x0e';
              }
            }
            break;
          case 0x1403:
            if (*(int *)(puVar6 + 4) == 2) {
              uStack_36 = '\x0f';
              if (puVar6[0x10] != '\0') {
                uStack_36 = '\x11';
              }
            }
            else {
              if (*(int *)(puVar6 + 4) != 4) {
                iVar5 = 0x145;
                goto LAB_145c0259b;
              }
              uStack_36 = '\x10';
              if (puVar6[0x10] != '\0') {
                uStack_36 = '\x12';
              }
            }
            break;
          default:
            goto switchD_145c023fd_caseD_1404;
          case 0x1405:
            uStack_36 = '\x14';
            break;
          case 0x1406:
            iVar5 = *(int *)(puVar6 + 4);
            if (iVar5 == 1) {
              uStack_36 = '\x01';
            }
            else if (iVar5 == 2) {
              uStack_36 = '\x02';
            }
            else if (iVar5 == 3) {
              uStack_36 = '\x03';
            }
            else {
              if (iVar5 != 4) {
                iVar5 = 0xd5;
                goto LAB_145c0259b;
              }
              uStack_36 = '\x04';
            }
          }
        }
      }
      else if (uVar4 == 0x8368) {
        uStack_36 = '\x13';
      }
      else {
switchD_145c023fd_caseD_1404:
        pwVar8 = L"Unknown GLEnum 0x%x";
        iVar5 = 0x155;
LAB_145c024c7:
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLVertexDeclaration.cpp"
                           ,iVar5,pwVar8);
        if (bVar2) {
code_r0x000145c024e3:
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if (((param_1 <= (TArray<FVertexElement,TFixedAllocator<17>_> *)&stack0xffffffffffffffc8) &&
          (&stack0xffffffffffffffc8 < (param_1->AllocatorInstance).InlineData + param_1->ArrayMax))
         && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      iVar5 = param_1->ArrayNum;
      if (iVar5 == param_1->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                          (0x208,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      uVar7 = uVar7 + 1;
      param_1->ArrayNum = iVar5 + 1;
      puVar6 = puVar6 + 0x1c;
      *(ulonglong *)(param_1->AllocatorInstance).InlineData[iVar5].Pad =
           CONCAT26(uStack_32,
                    CONCAT24(uStack_34,
                             CONCAT13(uStack_35,CONCAT12(uStack_36,CONCAT11(uStack_37,local_38)))));
    } while ((int)uVar7 < (this->VertexElements).ArrayNum);
  }
  return true;
}

