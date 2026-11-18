// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 6

// pas_red_black_tree_insert @ 140da6e00

void __cdecl
pas_red_black_tree_insert
          (pas_red_black_tree *param_1,pas_red_black_tree_node *param_2,
          _func___cdecl_int_pas_red_black_tree_node_ptr_pas_red_black_tree_node_ptr *param_3,
          pas_red_black_tree_jettisoned_nodes *param_4)

{
  uint uVar1;
  code *pcVar2;
  pas_red_black_tree_node *ppVar3;
  int iVar4;
  ulonglong uVar5;
  ulong64 uVar6;
  ulonglong uVar7;
  ulong64 uVar8;
  pas_red_black_tree_node *ppVar9;
  pas_red_black_tree_node *ppVar10;
  ulong64 uVar11;
  longlong lVar12;
  pas_red_black_tree_node *ppVar13;
  pas_red_black_tree_node_tagged_ptr *ppVar14;
  pas_red_black_tree_node *ppVar15;
  ulong64 uVar16;
  bool bVar17;
  
  param_2->left = 0;
  param_2->right = 0;
  (param_2->parent).payload = 0;
  uVar7 = (ulonglong)(param_1->root).payload;
  ppVar10 = (pas_red_black_tree_node *)(pas_compact_heap_reservation_base + uVar7 * 8);
  if (ppVar10 == (pas_red_black_tree_node *)0x0 || uVar7 == 0) {
    uVar7 = (longlong)param_2 - pas_compact_heap_reservation_base;
    if (pas_compact_heap_reservation_size <= uVar7) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((uVar7 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    ppVar15 = (pas_red_black_tree_node *)param_1;
    if (uVar7 < 8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  else {
    do {
      ppVar15 = ppVar10;
      iVar4 = (*param_3)(param_2,ppVar15);
      if (iVar4 < 0) {
        uVar1 = (ppVar15->left).payload;
      }
      else {
        uVar1 = (ppVar15->right).payload;
      }
    } while (((ulonglong)uVar1 != 0) &&
            (ppVar10 = (pas_red_black_tree_node *)
                       (pas_compact_heap_reservation_base + (ulonglong)uVar1 * 8),
            ppVar10 != (pas_red_black_tree_node *)0x0));
    uVar1 = (param_2->parent).payload;
    iVar4 = 0;
    if (7 < uVar1) {
      iVar4 = (int)pas_compact_heap_reservation_base;
    }
    uVar7 = (ulonglong)(iVar4 + uVar1 & 1) | (ulonglong)ppVar15;
    if ((pas_red_black_tree_node *)&DAT_00000007 < ppVar15) {
      uVar7 = uVar7 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    (param_2->parent).payload = (uint)uVar7;
    iVar4 = (*param_3)(param_2,ppVar15);
    uVar7 = (longlong)param_2 - pas_compact_heap_reservation_base;
    if (iVar4 < 0) {
      if (pas_compact_heap_reservation_size <= uVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar7 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar7 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      if (pas_compact_heap_reservation_size <= uVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar7 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar7 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      ppVar15 = (pas_red_black_tree_node *)&ppVar15->right;
    }
  }
  (ppVar15->left).payload = (uint)(uVar7 >> 3);
  uVar6 = pas_compact_heap_reservation_base;
  uVar7 = (ulonglong)(param_2->parent).payload;
  uVar8 = 0;
  if (7 < uVar7) {
    uVar8 = pas_compact_heap_reservation_base;
  }
  uVar7 = uVar8 + uVar7;
  uVar5 = uVar7 & 0xfffffffffffffffe;
  if (7 < uVar7) {
    uVar5 = uVar5 - pas_compact_heap_reservation_base;
    if (pas_compact_heap_reservation_size <= uVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  (param_2->parent).payload = (uint)uVar5;
  uVar7 = (ulonglong)(param_1->root).payload;
  ppVar10 = (pas_red_black_tree_node *)(uVar6 + uVar7 * 8);
  if (uVar7 == 0) {
    ppVar10 = (pas_red_black_tree_node *)0x0;
  }
  if (ppVar10 != param_2) {
    uVar7 = (ulonglong)(param_2->parent).payload;
    uVar8 = 0;
    if (7 < uVar7) {
      uVar8 = uVar6;
    }
    ppVar15 = (pas_red_black_tree_node *)(uVar8 + uVar7 & 0xfffffffffffffffe);
    uVar1 = (ppVar15->parent).payload;
    bVar17 = uVar1 < 8;
    iVar4 = (int)uVar6;
    if (bVar17) {
      iVar4 = 0;
    }
    if ((iVar4 + uVar1 & 1) == 0) {
      uVar16 = 0;
      uVar8 = uVar6;
      do {
        ppVar14 = &ppVar15->parent;
        uVar11 = uVar6;
        if (bVar17) {
          uVar11 = uVar16;
        }
        uVar7 = uVar11 + uVar1;
        ppVar9 = (pas_red_black_tree_node *)(uVar7 & 0xfffffffffffffffe);
        uVar5 = (ulonglong)(ppVar9->left).payload;
        ppVar10 = (pas_red_black_tree_node *)(uVar6 + uVar5 * 8);
        if (uVar5 == 0) {
          ppVar10 = (pas_red_black_tree_node *)0x0;
        }
        iVar4 = (int)uVar8;
        if (ppVar10 == ppVar15) {
          uVar1 = (ppVar9->right).payload;
          lVar12 = (ulonglong)uVar1 * 8 + uVar6;
          if (lVar12 != 0 && uVar1 != 0) {
            if (*(uint *)(lVar12 + 8) < 8) {
              iVar4 = 0;
            }
            if ((iVar4 + *(uint *)(lVar12 + 8) & 1) == 0) {
              uVar5 = uVar7 | 1;
              if (7 < uVar7) {
                uVar5 = uVar5 - uVar6;
                if (pas_compact_heap_reservation_size <= uVar5) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                if (uVar5 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
              }
              ppVar14->payload = (uint)uVar5;
              uVar6 = 0;
              if (7 < (ulonglong)*(uint *)(lVar12 + 8)) {
                uVar6 = pas_compact_heap_reservation_base;
              }
              uVar5 = uVar6 + *(uint *)(lVar12 + 8);
              uVar7 = uVar5 | 1;
              if (7 < uVar5) {
                uVar7 = uVar7 - pas_compact_heap_reservation_base;
                if (pas_compact_heap_reservation_size <= uVar7) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                if (uVar7 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
              }
              *(int *)(lVar12 + 8) = (int)uVar7;
              uVar7 = (ulonglong)(ppVar9->parent).payload;
              uVar6 = 0;
              if (7 < uVar7) {
                uVar6 = pas_compact_heap_reservation_base;
              }
              uVar7 = uVar6 + uVar7;
              uVar5 = uVar7 & 0xfffffffffffffffe;
              if (7 < uVar7) {
                uVar5 = uVar5 - pas_compact_heap_reservation_base;
                if (pas_compact_heap_reservation_size <= uVar5) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                if (uVar5 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
              }
              goto LAB_140da7220;
            }
          }
          uVar5 = (ulonglong)(ppVar15->right).payload;
          ppVar10 = (pas_red_black_tree_node *)(uVar6 + uVar5 * 8);
          if (uVar5 == 0) {
            ppVar10 = (pas_red_black_tree_node *)0x0;
          }
          ppVar13 = ppVar15;
          ppVar3 = ppVar9;
          ppVar9 = param_2;
          if (param_2 == ppVar10) {
            left_rotate(param_1,ppVar15,param_4);
            uVar6 = pas_compact_heap_reservation_base;
            if ((ulonglong)ppVar14->payload < 8) {
              uVar6 = uVar16;
            }
            ppVar13 = (pas_red_black_tree_node *)(uVar6 + ppVar14->payload & 0xfffffffffffffffe);
            uVar7 = (ulonglong)(ppVar13->parent).payload;
            uVar6 = pas_compact_heap_reservation_base;
            if (uVar7 < 8) {
              uVar6 = uVar16;
            }
            uVar7 = uVar6 + uVar7;
            ppVar3 = (pas_red_black_tree_node *)(uVar7 & 0xfffffffffffffffe);
            ppVar9 = ppVar15;
            uVar6 = pas_compact_heap_reservation_base;
          }
          uVar5 = uVar7 | 1;
          if (7 < uVar7) {
            uVar5 = uVar5 - uVar6;
            if (pas_compact_heap_reservation_size <= uVar5) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (uVar5 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
          }
          (ppVar13->parent).payload = (uint)uVar5;
          uVar7 = (ulonglong)(ppVar3->parent).payload;
          uVar8 = uVar6;
          if (uVar7 < 8) {
            uVar8 = uVar16;
          }
          uVar7 = uVar8 + uVar7;
          uVar5 = uVar7 & 0xfffffffffffffffe;
          if (7 < uVar7) {
            uVar5 = uVar5 - uVar6;
            if (pas_compact_heap_reservation_size <= uVar5) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (uVar5 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
          }
          (ppVar3->parent).payload = (uint)uVar5;
          right_rotate(param_1,ppVar3,param_4);
        }
        else {
          if (ppVar10 != (pas_red_black_tree_node *)0x0) {
            uVar1 = (ppVar10->parent).payload;
            if (uVar1 < 8) {
              iVar4 = 0;
            }
            if ((iVar4 + uVar1 & 1) == 0) {
              uVar5 = uVar7 | 1;
              if (7 < uVar7) {
                uVar5 = uVar5 - uVar6;
                if (pas_compact_heap_reservation_size <= uVar5) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                if (uVar5 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
              }
              ppVar14->payload = (uint)uVar5;
              uVar7 = (ulonglong)(ppVar10->parent).payload;
              uVar6 = 0;
              if (7 < uVar7) {
                uVar6 = pas_compact_heap_reservation_base;
              }
              uVar7 = uVar6 + uVar7;
              uVar5 = uVar7 | 1;
              if (7 < uVar7) {
                uVar5 = uVar5 - pas_compact_heap_reservation_base;
                if (pas_compact_heap_reservation_size <= uVar5) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                if (uVar5 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
              }
              (ppVar10->parent).payload = (uint)uVar5;
              uVar7 = (ulonglong)(ppVar9->parent).payload;
              uVar6 = 0;
              if (7 < uVar7) {
                uVar6 = pas_compact_heap_reservation_base;
              }
              uVar7 = uVar6 + uVar7;
              uVar5 = uVar7 & 0xfffffffffffffffe;
              if (7 < uVar7) {
                uVar5 = uVar5 - pas_compact_heap_reservation_base;
                if (pas_compact_heap_reservation_size <= uVar5) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
                if (uVar5 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)invalidInstructionException();
                  (*pcVar2)();
                }
              }
LAB_140da7220:
              (ppVar9->parent).payload = (uint)uVar5;
              goto LAB_140da73d5;
            }
          }
          uVar5 = (ulonglong)(ppVar15->left).payload;
          ppVar10 = (pas_red_black_tree_node *)(uVar6 + uVar5 * 8);
          if (uVar5 == 0) {
            ppVar10 = (pas_red_black_tree_node *)0x0;
          }
          ppVar13 = ppVar15;
          ppVar3 = ppVar9;
          ppVar9 = param_2;
          if (param_2 == ppVar10) {
            right_rotate(param_1,ppVar15,param_4);
            uVar6 = pas_compact_heap_reservation_base;
            if ((ulonglong)ppVar14->payload < 8) {
              uVar6 = uVar16;
            }
            ppVar13 = (pas_red_black_tree_node *)(uVar6 + ppVar14->payload & 0xfffffffffffffffe);
            uVar7 = (ulonglong)(ppVar13->parent).payload;
            uVar6 = pas_compact_heap_reservation_base;
            if (uVar7 < 8) {
              uVar6 = uVar16;
            }
            uVar7 = uVar6 + uVar7;
            ppVar3 = (pas_red_black_tree_node *)(uVar7 & 0xfffffffffffffffe);
            ppVar9 = ppVar15;
            uVar6 = pas_compact_heap_reservation_base;
          }
          uVar5 = uVar7 | 1;
          if (7 < uVar7) {
            uVar5 = uVar5 - uVar6;
            if (pas_compact_heap_reservation_size <= uVar5) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (uVar5 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
          }
          (ppVar13->parent).payload = (uint)uVar5;
          uVar7 = (ulonglong)(ppVar3->parent).payload;
          uVar8 = uVar6;
          if (uVar7 < 8) {
            uVar8 = uVar16;
          }
          uVar7 = uVar8 + uVar7;
          uVar5 = uVar7 & 0xfffffffffffffffe;
          if (7 < uVar7) {
            uVar5 = uVar5 - uVar6;
            if (pas_compact_heap_reservation_size <= uVar5) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (uVar5 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
          }
          (ppVar3->parent).payload = (uint)uVar5;
          left_rotate(param_1,ppVar3,param_4);
        }
LAB_140da73d5:
        uVar7 = (ulonglong)(param_1->root).payload;
        ppVar10 = (pas_red_black_tree_node *)(pas_compact_heap_reservation_base + uVar7 * 8);
        if (uVar7 == 0) {
          ppVar10 = (pas_red_black_tree_node *)0x0;
        }
        uVar6 = pas_compact_heap_reservation_base;
        if (ppVar9 == ppVar10) break;
        uVar7 = (ulonglong)(ppVar9->parent).payload;
        uVar8 = pas_compact_heap_reservation_base;
        if (uVar7 < 8) {
          uVar8 = uVar16;
        }
        ppVar15 = (pas_red_black_tree_node *)(uVar8 + uVar7 & 0xfffffffffffffffe);
        uVar1 = (ppVar15->parent).payload;
        bVar17 = uVar1 < 8;
        iVar4 = (int)pas_compact_heap_reservation_base;
        if (bVar17) {
          iVar4 = 0;
        }
        uVar8 = pas_compact_heap_reservation_base & 0xffffffff;
        param_2 = ppVar9;
      } while ((iVar4 + uVar1 & 1) == 0);
    }
  }
  uVar7 = (ulonglong)(ppVar10->parent).payload;
  uVar8 = 0;
  if (7 < uVar7) {
    uVar8 = uVar6;
  }
  uVar7 = uVar8 + uVar7;
  uVar5 = uVar7 | 1;
  if (7 < uVar7) {
    uVar5 = uVar5 - uVar6;
    if (pas_compact_heap_reservation_size <= uVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  (ppVar10->parent).payload = (uint)uVar5;
  return;
}

// left_rotate @ 140da74c0

pas_red_black_tree_node * __cdecl
left_rotate(pas_red_black_tree *param_1,pas_red_black_tree_node *param_2,
           pas_red_black_tree_jettisoned_nodes *param_3)

{
  uint uVar1;
  code *pcVar2;
  pas_red_black_tree_node *ppVar3;
  pas_red_black_tree_node *ppVar4;
  ulong64 uVar5;
  longlong lVar6;
  ulong64 uVar7;
  pas_red_black_tree *ppVar8;
  int iVar9;
  ulonglong uVar10;
  
  uVar10 = (ulonglong)(param_2->right).payload;
  ppVar3 = (pas_red_black_tree_node *)(uVar10 * 8 + pas_compact_heap_reservation_base);
  if (uVar10 == 0) {
    ppVar3 = (pas_red_black_tree_node *)0x0;
  }
  param_3->first_rotate_jettisoned = param_2;
  param_3->second_rotate_jettisoned = ppVar3;
  uVar1 = (ppVar3->left).payload;
  uVar10 = (ulonglong)uVar1 * 8;
  lVar6 = pas_compact_heap_reservation_base + uVar10;
  if (lVar6 == 0 || (ulonglong)uVar1 == 0) {
    (param_2->right).payload = 0;
    uVar5 = pas_compact_heap_reservation_base;
  }
  else {
    if (pas_compact_heap_reservation_size <= uVar10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    (param_2->right).payload = uVar1;
    uVar5 = pas_compact_heap_reservation_base;
    iVar9 = 0;
    if (7 < *(uint *)(lVar6 + 8)) {
      iVar9 = (int)pas_compact_heap_reservation_base;
    }
    uVar10 = (ulonglong)(iVar9 + *(uint *)(lVar6 + 8) & 1) | (ulonglong)param_2;
    if ((pas_red_black_tree_node *)&DAT_00000007 < param_2) {
      uVar10 = uVar10 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    *(int *)(lVar6 + 8) = (int)uVar10;
  }
  uVar10 = (ulonglong)(param_2->parent).payload;
  uVar7 = 0;
  if (7 < uVar10) {
    uVar7 = uVar5;
  }
  ppVar8 = (pas_red_black_tree *)(uVar7 + uVar10 & 0xfffffffffffffffe);
  uVar1 = (ppVar3->parent).payload;
  iVar9 = 0;
  if (7 < uVar1) {
    iVar9 = (int)uVar5;
  }
  uVar10 = (ulonglong)(iVar9 + uVar1 & 1) | (ulonglong)ppVar8;
  if ((pas_red_black_tree *)&DAT_00000007 < ppVar8) {
    uVar10 = uVar10 - uVar5;
    if (pas_compact_heap_reservation_size <= uVar10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  (ppVar3->parent).payload = (uint)uVar10;
  if (ppVar8 == (pas_red_black_tree *)0x0) {
    uVar10 = (longlong)ppVar3 - uVar5;
    if (pas_compact_heap_reservation_size <= uVar10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((uVar10 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uVar10 < 8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  else {
    uVar10 = (ulonglong)(ppVar8->root).payload;
    ppVar4 = (pas_red_black_tree_node *)(uVar5 + uVar10 * 8);
    if (uVar10 == 0) {
      ppVar4 = (pas_red_black_tree_node *)0x0;
    }
    uVar10 = (longlong)ppVar3 - uVar5;
    if (ppVar4 == param_2) {
      if (pas_compact_heap_reservation_size <= uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar10 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      param_1 = ppVar8;
      if (uVar10 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      if (pas_compact_heap_reservation_size <= uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar10 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar10 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      param_1 = ppVar8 + 1;
    }
  }
  (param_1->root).payload = (uint)(uVar10 >> 3);
  uVar10 = (longlong)param_2 - pas_compact_heap_reservation_base;
  if (pas_compact_heap_reservation_size <= uVar10) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((uVar10 & 7) == 0) {
    if (uVar10 < 8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    (ppVar3->left).payload = (uint)(uVar10 >> 3);
    uVar1 = (param_2->parent).payload;
    iVar9 = 0;
    if (7 < uVar1) {
      iVar9 = (int)pas_compact_heap_reservation_base;
    }
    uVar10 = (ulonglong)(iVar9 + uVar1 & 1) | (ulonglong)ppVar3;
    if ((pas_red_black_tree_node *)&DAT_00000007 < ppVar3) {
      uVar10 = uVar10 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    (param_2->parent).payload = (uint)uVar10;
    param_3->first_rotate_jettisoned = (pas_red_black_tree_node *)0x0;
    param_3->second_rotate_jettisoned = (pas_red_black_tree_node *)0x0;
    return ppVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// right_rotate @ 140da76f0

pas_red_black_tree_node * __cdecl
right_rotate(pas_red_black_tree *param_1,pas_red_black_tree_node *param_2,
            pas_red_black_tree_jettisoned_nodes *param_3)

{
  uint uVar1;
  code *pcVar2;
  pas_red_black_tree_node *ppVar3;
  pas_red_black_tree_node *ppVar4;
  ulong64 uVar5;
  longlong lVar6;
  ulong64 uVar7;
  pas_red_black_tree *ppVar8;
  int iVar9;
  ulonglong uVar10;
  
  uVar10 = (ulonglong)(param_2->left).payload;
  ppVar3 = (pas_red_black_tree_node *)(uVar10 * 8 + pas_compact_heap_reservation_base);
  if (uVar10 == 0) {
    ppVar3 = (pas_red_black_tree_node *)0x0;
  }
  param_3->first_rotate_jettisoned = param_2;
  param_3->second_rotate_jettisoned = ppVar3;
  uVar1 = (ppVar3->right).payload;
  uVar10 = (ulonglong)uVar1 * 8;
  lVar6 = pas_compact_heap_reservation_base + uVar10;
  if (lVar6 == 0 || (ulonglong)uVar1 == 0) {
    (param_2->left).payload = 0;
    uVar5 = pas_compact_heap_reservation_base;
  }
  else {
    if (pas_compact_heap_reservation_size <= uVar10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    (param_2->left).payload = uVar1;
    uVar5 = pas_compact_heap_reservation_base;
    iVar9 = 0;
    if (7 < *(uint *)(lVar6 + 8)) {
      iVar9 = (int)pas_compact_heap_reservation_base;
    }
    uVar10 = (ulonglong)(iVar9 + *(uint *)(lVar6 + 8) & 1) | (ulonglong)param_2;
    if ((pas_red_black_tree_node *)&DAT_00000007 < param_2) {
      uVar10 = uVar10 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    *(int *)(lVar6 + 8) = (int)uVar10;
  }
  uVar10 = (ulonglong)(param_2->parent).payload;
  uVar7 = 0;
  if (7 < uVar10) {
    uVar7 = uVar5;
  }
  ppVar8 = (pas_red_black_tree *)(uVar7 + uVar10 & 0xfffffffffffffffe);
  uVar1 = (ppVar3->parent).payload;
  iVar9 = 0;
  if (7 < uVar1) {
    iVar9 = (int)uVar5;
  }
  uVar10 = (ulonglong)(iVar9 + uVar1 & 1) | (ulonglong)ppVar8;
  if ((pas_red_black_tree *)&DAT_00000007 < ppVar8) {
    uVar10 = uVar10 - uVar5;
    if (pas_compact_heap_reservation_size <= uVar10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  (ppVar3->parent).payload = (uint)uVar10;
  if (ppVar8 == (pas_red_black_tree *)0x0) {
    uVar10 = (longlong)ppVar3 - uVar5;
    if (pas_compact_heap_reservation_size <= uVar10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((uVar10 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uVar10 < 8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  else {
    uVar10 = (ulonglong)(ppVar8->root).payload;
    ppVar4 = (pas_red_black_tree_node *)(uVar5 + uVar10 * 8);
    if (uVar10 == 0) {
      ppVar4 = (pas_red_black_tree_node *)0x0;
    }
    uVar10 = (longlong)ppVar3 - uVar5;
    if (ppVar4 == param_2) {
      if (pas_compact_heap_reservation_size <= uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar10 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      param_1 = ppVar8;
      if (uVar10 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      if (pas_compact_heap_reservation_size <= uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if ((uVar10 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar10 < 8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      param_1 = ppVar8 + 1;
    }
  }
  (param_1->root).payload = (uint)(uVar10 >> 3);
  uVar10 = (longlong)param_2 - pas_compact_heap_reservation_base;
  if (pas_compact_heap_reservation_size <= uVar10) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if ((uVar10 & 7) == 0) {
    if (uVar10 < 8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    (ppVar3->right).payload = (uint)(uVar10 >> 3);
    uVar1 = (param_2->parent).payload;
    iVar9 = 0;
    if (7 < uVar1) {
      iVar9 = (int)pas_compact_heap_reservation_base;
    }
    uVar10 = (ulonglong)(iVar9 + uVar1 & 1) | (ulonglong)ppVar3;
    if ((pas_red_black_tree_node *)&DAT_00000007 < ppVar3) {
      uVar10 = uVar10 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (uVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    (param_2->parent).payload = (uint)uVar10;
    param_3->first_rotate_jettisoned = (pas_red_black_tree_node *)0x0;
    param_3->second_rotate_jettisoned = (pas_red_black_tree_node *)0x0;
    return ppVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

// pas_red_black_tree_remove @ 140da7920

pas_red_black_tree_node * __cdecl
pas_red_black_tree_remove
          (pas_red_black_tree *param_1,pas_red_black_tree_node *param_2,
          pas_red_black_tree_jettisoned_nodes *param_3)

{
  code *pcVar1;
  pas_red_black_tree_node *ppVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  pas_red_black_tree_node *ppVar6;
  pas_red_black_tree_node *ppVar7;
  longlong lVar8;
  ulong64 uVar9;
  uint *puVar10;
  int iVar11;
  pas_red_black_tree_node *ppVar12;
  pas_red_black_tree_node *ppVar13;
  uint uVar14;
  ulong64 uVar15;
  ulonglong uVar16;
  
  uVar15 = pas_compact_heap_reservation_base;
  if (param_2 == (pas_red_black_tree_node *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar16 = (ulonglong)(param_2->parent).payload;
  uVar9 = 0;
  if (7 < uVar16) {
    uVar9 = pas_compact_heap_reservation_base;
  }
  if (uVar9 + uVar16 < 2) {
    uVar16 = (ulonglong)(param_1->root).payload;
    ppVar12 = (pas_red_black_tree_node *)(pas_compact_heap_reservation_base + uVar16 * 8);
    if (uVar16 == 0) {
      ppVar12 = (pas_red_black_tree_node *)0x0;
    }
    if (ppVar12 != param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  uVar16 = (ulonglong)(param_2->left).payload;
  ppVar12 = param_2;
  if (((uVar16 != 0) && (pas_compact_heap_reservation_base != uVar16 * -8)) &&
     (uVar3 = (param_2->right).payload,
     ppVar6 = (pas_red_black_tree_node *)((ulonglong)uVar3 * 8 + pas_compact_heap_reservation_base),
     ppVar6 != (pas_red_black_tree_node *)0x0 && uVar3 != 0)) {
    do {
      ppVar12 = ppVar6;
      uVar16 = (ulonglong)(ppVar12->left).payload;
      if (uVar16 == 0) break;
      ppVar6 = (pas_red_black_tree_node *)(pas_compact_heap_reservation_base + uVar16 * 8);
    } while (ppVar6 != (pas_red_black_tree_node *)0x0);
  }
  ppVar13 = (pas_red_black_tree_node *)(uVar16 * 8 + pas_compact_heap_reservation_base);
  ppVar6 = (pas_red_black_tree_node *)param_1;
  if ((ppVar13 == (pas_red_black_tree_node *)0x0 || (int)uVar16 == 0) &&
     (uVar3 = (ppVar12->right).payload,
     ppVar13 = (pas_red_black_tree_node *)((ulonglong)uVar3 * 8 + pas_compact_heap_reservation_base)
     , ppVar13 == (pas_red_black_tree_node *)0x0 || uVar3 == 0)) {
    uVar16 = (ulonglong)(ppVar12->parent).payload;
    ppVar13 = (pas_red_black_tree_node *)pas_compact_heap_reservation_base;
    if (uVar16 < 8) {
      ppVar13 = (pas_red_black_tree_node *)0x0;
    }
    param_3->remove_jettisoned = ppVar12;
    ppVar7 = (pas_red_black_tree_node *)
             ((longlong)&(ppVar13->left).payload + uVar16 & 0xfffffffffffffffe);
    if (ppVar7 == (pas_red_black_tree_node *)0x0) {
      uVar3 = 0;
      ppVar13 = (pas_red_black_tree_node *)0x0;
      ppVar7 = (pas_red_black_tree_node *)0x0;
      goto LAB_140da7b62;
    }
    uVar16 = (ulonglong)(ppVar7->left).payload;
    uVar3 = 0;
    ppVar2 = (pas_red_black_tree_node *)0x0;
    if (uVar16 == 0) {
      uVar14 = 0;
    }
    else {
      ppVar13 = (pas_red_black_tree_node *)0x0;
      ppVar6 = ppVar7;
      uVar14 = 0;
      if (ppVar12 == (pas_red_black_tree_node *)(uVar15 + uVar16 * 8)) goto LAB_140da7b62;
    }
  }
  else {
    uVar16 = (ulonglong)(ppVar12->parent).payload;
    uVar9 = pas_compact_heap_reservation_base;
    if (uVar16 < 8) {
      uVar9 = 0;
    }
    ppVar7 = (pas_red_black_tree_node *)(uVar9 + uVar16 & 0xfffffffffffffffe);
    uVar3 = (ppVar13->parent).payload;
    iVar4 = 0;
    if (7 < uVar3) {
      iVar4 = (int)pas_compact_heap_reservation_base;
    }
    uVar16 = (ulonglong)(iVar4 + uVar3 & 1) | (ulonglong)ppVar7;
    if ((pas_red_black_tree_node *)&DAT_00000007 < ppVar7) {
      uVar16 = uVar16 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar16) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (uVar16 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
    (ppVar13->parent).payload = (uint)uVar16;
    param_3->remove_jettisoned = ppVar12;
    if (ppVar7 == (pas_red_black_tree_node *)0x0) {
      uVar16 = (longlong)ppVar13 - uVar15;
      if (pas_compact_heap_reservation_size <= uVar16) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if ((uVar16 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (uVar16 < 8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar3 = (uint)(uVar16 >> 3);
      ppVar7 = (pas_red_black_tree_node *)0x0;
      goto LAB_140da7b62;
    }
    uVar5 = (ulonglong)(ppVar7->left).payload;
    uVar16 = (longlong)ppVar13 - uVar15;
    if ((uVar5 != 0) && (ppVar12 == (pas_red_black_tree_node *)(uVar15 + uVar5 * 8))) {
      if (pas_compact_heap_reservation_size <= uVar16) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if ((uVar16 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (uVar16 < 8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar3 = (uint)(uVar16 >> 3);
      ppVar6 = ppVar7;
      goto LAB_140da7b62;
    }
    if (pas_compact_heap_reservation_size <= uVar16) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if ((uVar16 & 7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uVar16 < 8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    ppVar2 = ppVar13;
    uVar14 = (uint)(uVar16 >> 3);
  }
  uVar3 = uVar14;
  ppVar13 = ppVar2;
  ppVar6 = (pas_red_black_tree_node *)&ppVar7->right;
LAB_140da7b62:
  (ppVar6->left).payload = uVar3;
  uVar3 = (ppVar12->parent).payload;
  iVar4 = 0;
  if (7 < uVar3) {
    iVar4 = (int)pas_compact_heap_reservation_base;
  }
  uVar3 = iVar4 + uVar3;
  if (ppVar12 == param_2) {
    if ((uVar3 & 1) != 0) {
      remove_fixup(param_1,ppVar13,ppVar7,param_3);
    }
  }
  else {
    if ((uVar3 & 1) != 0) {
      remove_fixup(param_1,ppVar13,ppVar7,param_3);
    }
    uVar3 = (param_2->left).payload;
    uVar16 = (ulonglong)uVar3;
    uVar14 = 0;
    if (((uVar16 != 0) && (pas_compact_heap_reservation_base != uVar16 * -8)) &&
       (uVar14 = uVar3, pas_compact_heap_reservation_size <= uVar16 * 8)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    (ppVar12->left).payload = uVar14;
    uVar3 = (param_2->right).payload;
    uVar16 = (ulonglong)uVar3;
    uVar14 = 0;
    if (((uVar16 != 0) && (pas_compact_heap_reservation_base != uVar16 * -8)) &&
       (uVar14 = uVar3, pas_compact_heap_reservation_size <= uVar16 * 8)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    (ppVar12->right).payload = uVar14;
    uVar16 = (ulonglong)(param_2->parent).payload;
    iVar4 = 0;
    uVar15 = 0;
    if (7 < uVar16) {
      uVar15 = pas_compact_heap_reservation_base;
    }
    uVar16 = uVar15 + uVar16 & 0xfffffffffffffffe;
    uVar3 = (ppVar12->parent).payload;
    if (7 < uVar3) {
      iVar4 = (int)pas_compact_heap_reservation_base;
    }
    uVar5 = iVar4 + uVar3 & 1 | uVar16;
    if (7 < uVar16) {
      uVar5 = uVar5 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (uVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
    (ppVar12->parent).payload = (uint)uVar5;
    uVar3 = (param_2->parent).payload;
    iVar4 = 0;
    if (7 < uVar3) {
      iVar4 = (int)pas_compact_heap_reservation_base;
    }
    uVar15 = 0;
    if (7 < (uint)uVar5) {
      uVar15 = pas_compact_heap_reservation_base;
    }
    uVar5 = uVar15 + (uVar5 & 0xffffffff);
    uVar16 = (ulonglong)(iVar4 + uVar3 & 1) | uVar5 & 0xfffffffffffffffe;
    if (7 < uVar5) {
      uVar16 = uVar16 - pas_compact_heap_reservation_base;
      if (pas_compact_heap_reservation_size <= uVar16) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (uVar16 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
    (ppVar12->parent).payload = (uint)uVar16;
    uVar15 = pas_compact_heap_reservation_base;
    uVar16 = (ulonglong)(param_2->left).payload;
    lVar8 = pas_compact_heap_reservation_base + uVar16 * 8;
    iVar4 = (int)pas_compact_heap_reservation_base;
    if (lVar8 != 0 && uVar16 != 0) {
      iVar11 = 0;
      if (7 < *(uint *)(lVar8 + 8)) {
        iVar11 = iVar4;
      }
      uVar16 = (ulonglong)(iVar11 + *(uint *)(lVar8 + 8) & 1) | (ulonglong)ppVar12;
      if ((pas_red_black_tree_node *)&DAT_00000007 < ppVar12) {
        uVar16 = uVar16 - pas_compact_heap_reservation_base;
        if (pas_compact_heap_reservation_size <= uVar16) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (uVar16 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
      }
      *(int *)(lVar8 + 8) = (int)uVar16;
    }
    uVar3 = (param_2->right).payload;
    lVar8 = (ulonglong)uVar3 * 8 + uVar15;
    if (lVar8 != 0 && uVar3 != 0) {
      iVar11 = 0;
      if (7 < *(uint *)(lVar8 + 8)) {
        iVar11 = iVar4;
      }
      uVar16 = (ulonglong)(iVar11 + *(uint *)(lVar8 + 8) & 1) | (ulonglong)ppVar12;
      if ((pas_red_black_tree_node *)&DAT_00000007 < ppVar12) {
        uVar16 = uVar16 - uVar15;
        if (pas_compact_heap_reservation_size <= uVar16) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (uVar16 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
      }
      *(int *)(lVar8 + 8) = (int)uVar16;
    }
    uVar16 = (ulonglong)(param_2->parent).payload;
    uVar9 = 0;
    if (7 < uVar16) {
      uVar9 = uVar15;
    }
    puVar10 = (uint *)(uVar9 + uVar16 & 0xfffffffffffffffe);
    if (puVar10 == (uint *)0x0) {
      uVar16 = (ulonglong)(param_1->root).payload;
      ppVar6 = (pas_red_black_tree_node *)(uVar15 + uVar16 * 8);
      if (uVar16 == 0) {
        ppVar6 = (pas_red_black_tree_node *)0x0;
      }
      if (ppVar6 != param_2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar16 = (longlong)ppVar12 - uVar15;
      if (pas_compact_heap_reservation_size <= uVar16) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if ((uVar16 & 7) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (uVar16 < 8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      (param_1->root).payload = (uint)(uVar16 >> 3);
    }
    else {
      ppVar6 = (pas_red_black_tree_node *)(uVar15 + (ulonglong)*puVar10 * 8);
      if ((ulonglong)*puVar10 == 0) {
        ppVar6 = (pas_red_black_tree_node *)0x0;
      }
      uVar16 = (longlong)ppVar12 - uVar15;
      if (ppVar6 == param_2) {
        if (pas_compact_heap_reservation_size <= uVar16) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if ((uVar16 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (uVar16 < 8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        *puVar10 = (uint)(uVar16 >> 3);
      }
      else {
        if (pas_compact_heap_reservation_size <= uVar16) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if ((uVar16 & 7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (uVar16 < 8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        puVar10[1] = (uint)(uVar16 >> 3);
      }
    }
  }
  param_3->remove_jettisoned = (pas_red_black_tree_node *)0x0;
  uVar16 = (ulonglong)(param_1->root).payload;
  lVar8 = pas_compact_heap_reservation_base + uVar16 * 8;
  if (lVar8 != 0 && uVar16 != 0) {
    uVar3 = *(uint *)(lVar8 + 8);
    iVar4 = 0;
    if (7 < uVar3) {
      iVar4 = (int)pas_compact_heap_reservation_base;
    }
    if ((iVar4 + uVar3 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  return param_2;
}

// remove_fixup @ 140da7ec0

void __cdecl
remove_fixup(pas_red_black_tree *param_1,pas_red_black_tree_node *param_2,
            pas_red_black_tree_node *param_3,pas_red_black_tree_jettisoned_nodes *param_4)

{
  code *pcVar1;
  pas_red_black_tree_node *ppVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulong64 uVar9;
  pas_red_black_tree_node *ppVar10;
  int iVar11;
  pas_red_black_tree_node *ppVar12;
  int iVar13;
  ulong64 uVar14;
  
  uVar8 = (ulonglong)(param_1->root).payload;
  ppVar2 = (pas_red_black_tree_node *)(pas_compact_heap_reservation_base + uVar8 * 8);
  if (uVar8 == 0) {
    ppVar2 = (pas_red_black_tree_node *)0x0;
  }
  uVar8 = pas_compact_heap_reservation_base;
  if (ppVar2 != param_2) {
    uVar14 = 0;
    ppVar2 = param_2;
    ppVar10 = param_3;
    do {
      param_2 = ppVar10;
      iVar13 = (int)uVar8;
      if (ppVar2 != (pas_red_black_tree_node *)0x0) {
        uVar6 = (ppVar2->parent).payload;
        iVar11 = iVar13;
        if (uVar6 < 8) {
          iVar11 = 0;
        }
        if ((iVar11 + uVar6 & 1) == 0) goto LAB_140da85ea;
      }
      uVar3 = (ulonglong)(param_2->left).payload;
      ppVar10 = (pas_red_black_tree_node *)(uVar8 + uVar3 * 8);
      ppVar12 = (pas_red_black_tree_node *)0x0;
      if (uVar3 != 0) {
        ppVar12 = ppVar10;
      }
      if (ppVar2 == ppVar12) {
        uVar3 = (ulonglong)(param_2->right).payload;
        if ((uVar3 == 0) ||
           (ppVar10 = (pas_red_black_tree_node *)(uVar8 + uVar3 * 8),
           ppVar10 == (pas_red_black_tree_node *)0x0)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar6 = (ppVar10->parent).payload;
        if ((ulonglong)uVar6 < 8) {
          iVar13 = 0;
        }
        if ((iVar13 + uVar6 & 1) == 0) {
          uVar9 = uVar8;
          if (uVar6 < 8) {
            uVar9 = uVar14;
          }
          uVar7 = uVar9 + uVar6;
          uVar3 = uVar7 | 1;
          if (7 < uVar7) {
            uVar3 = uVar3 - uVar8;
            if (pas_compact_heap_reservation_size <= uVar3) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            if (uVar3 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
          }
          (ppVar10->parent).payload = (uint)uVar3;
          uVar8 = (ulonglong)(param_2->parent).payload;
          uVar9 = 0;
          if (7 < uVar8) {
            uVar9 = pas_compact_heap_reservation_base;
          }
          uVar8 = uVar9 + uVar8;
          uVar3 = uVar8 & 0xfffffffffffffffe;
          if (7 < uVar8) {
            uVar3 = uVar3 - pas_compact_heap_reservation_base;
            if (pas_compact_heap_reservation_size <= uVar3) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            if (uVar3 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
          }
          (param_2->parent).payload = (uint)uVar3;
          left_rotate(param_1,param_2,param_4);
          uVar3 = (ulonglong)(param_2->right).payload;
          ppVar10 = (pas_red_black_tree_node *)(pas_compact_heap_reservation_base + uVar3 * 8);
          uVar8 = pas_compact_heap_reservation_base;
          if (uVar3 == 0) {
            ppVar10 = (pas_red_black_tree_node *)0x0;
          }
        }
        uVar3 = (ulonglong)(ppVar10->left).payload;
        uVar7 = (ulonglong)(ppVar10->right).payload;
        lVar5 = uVar8 + uVar3 * 8;
        if (uVar3 == 0) {
          lVar5 = 0;
        }
        lVar4 = uVar8 + uVar7 * 8;
        if (uVar7 == 0) {
          lVar4 = 0;
        }
        iVar13 = (int)uVar8;
        if (lVar5 != 0) {
          uVar6 = *(uint *)(lVar5 + 8);
          iVar11 = iVar13;
          if (uVar6 < 8) {
            iVar11 = 0;
          }
          if ((iVar11 + uVar6 & 1) != 0) goto LAB_140da83c0;
          if (lVar4 == 0) {
LAB_140da8404:
            uVar3 = uVar8;
            if (uVar6 < 8) {
              uVar3 = uVar14;
            }
            uVar7 = uVar3 + uVar6 | 1;
            if (7 < uVar3 + uVar6) {
              uVar7 = uVar7 - uVar8;
              if (pas_compact_heap_reservation_size <= uVar7) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)invalidInstructionException();
                (*pcVar1)();
              }
              if (uVar7 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)invalidInstructionException();
                (*pcVar1)();
              }
            }
            *(int *)(lVar5 + 8) = (int)uVar7;
            uVar7 = (ulonglong)(ppVar10->parent).payload;
            uVar3 = uVar8;
            if (uVar7 < 8) {
              uVar3 = uVar14;
            }
            uVar3 = uVar3 + uVar7;
            uVar7 = uVar3 & 0xfffffffffffffffe;
            if (7 < uVar3) {
              uVar7 = uVar7 - uVar8;
              if (pas_compact_heap_reservation_size <= uVar7) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)invalidInstructionException();
                (*pcVar1)();
              }
              if (uVar7 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)invalidInstructionException();
                (*pcVar1)();
              }
            }
            (ppVar10->parent).payload = (uint)uVar7;
            right_rotate(param_1,ppVar10,param_4);
            uVar7 = (ulonglong)(param_2->right).payload;
            ppVar10 = (pas_red_black_tree_node *)(pas_compact_heap_reservation_base + uVar7 * 8);
            uVar8 = pas_compact_heap_reservation_base;
            uVar3 = pas_compact_heap_reservation_base;
            if (uVar7 == 0) {
              ppVar10 = (pas_red_black_tree_node *)0x0;
            }
          }
          else {
            uVar6 = *(uint *)(lVar4 + 8);
LAB_140da83e8:
            if (uVar6 < 8) {
              iVar13 = 0;
            }
            uVar3 = uVar8 & 0xffffffff;
            if ((iVar13 + uVar6 & 1) != 0) {
              uVar6 = *(uint *)(lVar5 + 8);
              goto LAB_140da8404;
            }
          }
          uVar6 = (param_2->parent).payload;
          iVar13 = (int)uVar3;
          if (uVar6 < 8) {
            iVar13 = 0;
          }
          uVar3 = (ulonglong)(ppVar10->parent).payload;
          uVar9 = 0;
          if (7 < uVar3) {
            uVar9 = uVar8;
          }
          uVar3 = uVar9 + uVar3;
          uVar7 = (ulonglong)(iVar13 + uVar6 & 1) | uVar3 & 0xfffffffffffffffe;
          if (7 < uVar3) {
            uVar7 = uVar7 - uVar8;
            if (pas_compact_heap_reservation_size <= uVar7) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            if (uVar7 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
          }
          (ppVar10->parent).payload = (uint)uVar7;
          uVar3 = (ulonglong)(param_2->parent).payload;
          uVar9 = uVar8;
          if (uVar3 < 8) {
            uVar9 = uVar14;
          }
          uVar3 = uVar9 + uVar3;
          uVar7 = uVar3 | 1;
          if (7 < uVar3) {
            uVar7 = uVar7 - uVar8;
            if (pas_compact_heap_reservation_size <= uVar7) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            if (uVar7 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
          }
          (param_2->parent).payload = (uint)uVar7;
          uVar8 = (ulonglong)(ppVar10->right).payload;
          lVar5 = pas_compact_heap_reservation_base + uVar8 * 8;
          if (lVar5 != 0 && uVar8 != 0) {
            uVar9 = pas_compact_heap_reservation_base;
            if ((ulonglong)*(uint *)(lVar5 + 8) < 8) {
              uVar9 = uVar14;
            }
            uVar3 = uVar9 + *(uint *)(lVar5 + 8);
            uVar8 = uVar3 | 1;
            if (7 < uVar3) {
              uVar8 = uVar8 - pas_compact_heap_reservation_base;
              if (pas_compact_heap_reservation_size <= uVar8) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)invalidInstructionException();
                (*pcVar1)();
              }
              if (uVar8 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)invalidInstructionException();
                (*pcVar1)();
              }
            }
            *(int *)(lVar5 + 8) = (int)uVar8;
          }
          left_rotate(param_1,param_2,param_4);
          goto LAB_140da8590;
        }
LAB_140da83c0:
        if (lVar4 != 0) {
          uVar6 = *(uint *)(lVar4 + 8);
          iVar11 = iVar13;
          if (uVar6 < 8) {
            iVar11 = 0;
          }
          if ((iVar11 + uVar6 & 1) == 0) goto LAB_140da83e8;
        }
        uVar7 = (ulonglong)(ppVar10->parent).payload;
        uVar3 = uVar8;
        if (uVar7 < 8) {
          uVar3 = uVar14;
        }
        uVar3 = uVar3 + uVar7;
        uVar7 = uVar3 & 0xfffffffffffffffe;
        if (7 < uVar3) {
          uVar7 = uVar7 - uVar8;
          if (pas_compact_heap_reservation_size <= uVar7) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if (uVar7 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
LAB_140da7f00:
        (ppVar10->parent).payload = (uint)uVar7;
        ppVar2 = param_2;
      }
      else {
        if (ppVar12 == (pas_red_black_tree_node *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uVar6 = (ppVar12->parent).payload;
        if ((ulonglong)uVar6 < 8) {
          iVar13 = 0;
        }
        if ((iVar13 + uVar6 & 1) == 0) {
          uVar9 = uVar8;
          if (uVar6 < 8) {
            uVar9 = uVar14;
          }
          uVar7 = uVar9 + uVar6;
          uVar3 = uVar7 | 1;
          if (7 < uVar7) {
            uVar3 = uVar3 - uVar8;
            if (pas_compact_heap_reservation_size <= uVar3) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            if (uVar3 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
          }
          (ppVar12->parent).payload = (uint)uVar3;
          uVar8 = (ulonglong)(param_2->parent).payload;
          uVar9 = 0;
          if (7 < uVar8) {
            uVar9 = pas_compact_heap_reservation_base;
          }
          uVar8 = uVar9 + uVar8;
          uVar3 = uVar8 & 0xfffffffffffffffe;
          if (7 < uVar8) {
            uVar3 = uVar3 - pas_compact_heap_reservation_base;
            if (pas_compact_heap_reservation_size <= uVar3) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            if (uVar3 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
          }
          (param_2->parent).payload = (uint)uVar3;
          right_rotate(param_1,param_2,param_4);
          uVar3 = (ulonglong)(param_2->left).payload;
          ppVar10 = (pas_red_black_tree_node *)(pas_compact_heap_reservation_base + uVar3 * 8);
          uVar8 = pas_compact_heap_reservation_base;
          if (uVar3 == 0) {
            ppVar10 = (pas_red_black_tree_node *)0x0;
          }
        }
        uVar3 = (ulonglong)(ppVar10->left).payload;
        uVar7 = (ulonglong)(ppVar10->right).payload;
        lVar5 = uVar8 + uVar3 * 8;
        if (uVar3 == 0) {
          lVar5 = 0;
        }
        lVar4 = uVar8 + uVar7 * 8;
        if (uVar7 == 0) {
          lVar4 = 0;
        }
        iVar13 = (int)uVar8;
        if (lVar4 == 0) {
LAB_140da8080:
          if (lVar5 != 0) {
            uVar6 = *(uint *)(lVar5 + 8);
            iVar11 = iVar13;
            if (uVar6 < 8) {
              iVar11 = 0;
            }
            if ((iVar11 + uVar6 & 1) == 0) {
LAB_140da80a8:
              if (uVar6 < 8) {
                iVar13 = 0;
              }
              uVar3 = uVar8 & 0xffffffff;
              if ((iVar13 + uVar6 & 1) != 0) {
                uVar6 = *(uint *)(lVar4 + 8);
                goto LAB_140da80c4;
              }
              goto LAB_140da815b;
            }
          }
          uVar7 = (ulonglong)(ppVar10->parent).payload;
          uVar3 = uVar8;
          if (uVar7 < 8) {
            uVar3 = uVar14;
          }
          uVar3 = uVar3 + uVar7;
          uVar7 = uVar3 & 0xfffffffffffffffe;
          if (7 < uVar3) {
            uVar7 = uVar7 - uVar8;
            if (pas_compact_heap_reservation_size <= uVar7) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            if (uVar7 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
          }
          goto LAB_140da7f00;
        }
        uVar6 = *(uint *)(lVar4 + 8);
        iVar11 = iVar13;
        if (uVar6 < 8) {
          iVar11 = 0;
        }
        if ((iVar11 + uVar6 & 1) != 0) goto LAB_140da8080;
        if (lVar5 != 0) {
          uVar6 = *(uint *)(lVar5 + 8);
          goto LAB_140da80a8;
        }
LAB_140da80c4:
        uVar3 = uVar8;
        if (uVar6 < 8) {
          uVar3 = uVar14;
        }
        uVar7 = uVar3 + uVar6 | 1;
        if (7 < uVar3 + uVar6) {
          uVar7 = uVar7 - uVar8;
          if (pas_compact_heap_reservation_size <= uVar7) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if (uVar7 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(int *)(lVar4 + 8) = (int)uVar7;
        uVar7 = (ulonglong)(ppVar10->parent).payload;
        uVar3 = uVar8;
        if (uVar7 < 8) {
          uVar3 = uVar14;
        }
        uVar3 = uVar3 + uVar7;
        uVar7 = uVar3 & 0xfffffffffffffffe;
        if (7 < uVar3) {
          uVar7 = uVar7 - uVar8;
          if (pas_compact_heap_reservation_size <= uVar7) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if (uVar7 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        (ppVar10->parent).payload = (uint)uVar7;
        left_rotate(param_1,ppVar10,param_4);
        uVar7 = (ulonglong)(param_2->left).payload;
        ppVar10 = (pas_red_black_tree_node *)(pas_compact_heap_reservation_base + uVar7 * 8);
        uVar8 = pas_compact_heap_reservation_base;
        uVar3 = pas_compact_heap_reservation_base;
        if (uVar7 == 0) {
          ppVar10 = (pas_red_black_tree_node *)0x0;
        }
LAB_140da815b:
        uVar6 = (param_2->parent).payload;
        iVar13 = (int)uVar3;
        if (uVar6 < 8) {
          iVar13 = 0;
        }
        uVar3 = (ulonglong)(ppVar10->parent).payload;
        uVar9 = 0;
        if (7 < uVar3) {
          uVar9 = uVar8;
        }
        uVar3 = uVar9 + uVar3;
        uVar7 = (ulonglong)(iVar13 + uVar6 & 1) | uVar3 & 0xfffffffffffffffe;
        if (7 < uVar3) {
          uVar7 = uVar7 - uVar8;
          if (pas_compact_heap_reservation_size <= uVar7) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if (uVar7 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        (ppVar10->parent).payload = (uint)uVar7;
        uVar3 = (ulonglong)(param_2->parent).payload;
        uVar9 = uVar8;
        if (uVar3 < 8) {
          uVar9 = uVar14;
        }
        uVar3 = uVar9 + uVar3;
        uVar7 = uVar3 | 1;
        if (7 < uVar3) {
          uVar7 = uVar7 - uVar8;
          if (pas_compact_heap_reservation_size <= uVar7) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          if (uVar7 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        (param_2->parent).payload = (uint)uVar7;
        uVar8 = (ulonglong)(ppVar10->left).payload;
        lVar5 = pas_compact_heap_reservation_base + uVar8 * 8;
        if (lVar5 != 0 && uVar8 != 0) {
          uVar9 = pas_compact_heap_reservation_base;
          if ((ulonglong)*(uint *)(lVar5 + 8) < 8) {
            uVar9 = uVar14;
          }
          uVar3 = uVar9 + *(uint *)(lVar5 + 8);
          uVar8 = uVar3 | 1;
          if (7 < uVar3) {
            uVar8 = uVar8 - pas_compact_heap_reservation_base;
            if (pas_compact_heap_reservation_size <= uVar8) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            if (uVar8 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
          }
          *(int *)(lVar5 + 8) = (int)uVar8;
        }
        right_rotate(param_1,param_2,param_4);
LAB_140da8590:
        uVar3 = (ulonglong)(param_1->root).payload;
        param_2 = (pas_red_black_tree_node *)(pas_compact_heap_reservation_base + uVar3 * 8);
        uVar8 = pas_compact_heap_reservation_base;
        ppVar2 = (pas_red_black_tree_node *)0x0;
        if (uVar3 != 0) {
          ppVar2 = param_2;
        }
      }
      uVar3 = (ulonglong)(ppVar2->parent).payload;
      uVar9 = 0;
      if (7 < uVar3) {
        uVar9 = uVar8;
      }
      uVar7 = (ulonglong)(param_1->root).payload;
      ppVar12 = (pas_red_black_tree_node *)(uVar8 + uVar7 * 8);
      if (uVar7 == 0) {
        ppVar12 = (pas_red_black_tree_node *)0x0;
      }
      ppVar2 = param_2;
      ppVar10 = (pas_red_black_tree_node *)(uVar9 + uVar3 & 0xfffffffffffffffe);
    } while (param_2 != ppVar12);
  }
  if (param_2 != (pas_red_black_tree_node *)0x0) {
    uVar6 = (param_2->parent).payload;
    ppVar2 = param_2;
LAB_140da85ea:
    uVar14 = 0;
    if (7 < uVar6) {
      uVar14 = uVar8;
    }
    uVar3 = uVar14 + uVar6 | 1;
    if (7 < uVar14 + uVar6) {
      uVar3 = uVar3 - uVar8;
      if (pas_compact_heap_reservation_size <= uVar3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (uVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
    (ppVar2->parent).payload = (uint)uVar3;
  }
  return;
}

// pas_red_black_tree_size @ 140da8680

ulong64 __cdecl pas_red_black_tree_size(pas_red_black_tree *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  uint *puVar4;
  ulong64 uVar5;
  uint *puVar6;
  
  uVar2 = (ulonglong)(param_1->root).payload;
  puVar4 = (uint *)(pas_compact_heap_reservation_base + uVar2 * 8);
  if (puVar4 == (uint *)0x0 || uVar2 == 0) {
    return 0;
  }
  do {
    puVar6 = puVar4;
    if ((ulonglong)*puVar6 == 0) break;
    puVar4 = (uint *)(pas_compact_heap_reservation_base + (ulonglong)*puVar6 * 8);
  } while (puVar4 != (uint *)0x0);
  uVar3 = 0;
  do {
    while( true ) {
      uVar3 = uVar3 + 1;
      puVar4 = (uint *)((ulonglong)puVar6[1] * 8 + pas_compact_heap_reservation_base);
      if (puVar4 != (uint *)0x0 && puVar6[1] != 0) break;
      uVar1 = puVar6[2];
      puVar4 = puVar6;
      while( true ) {
        uVar5 = pas_compact_heap_reservation_base;
        if ((ulonglong)uVar1 < 8) {
          uVar5 = 0;
        }
        puVar6 = (uint *)(uVar5 + uVar1 & 0xfffffffffffffffe);
        if (puVar6 == (uint *)0x0) {
          return uVar3;
        }
        if (((ulonglong)puVar6[1] == 0) ||
           (puVar4 != (uint *)(pas_compact_heap_reservation_base + (ulonglong)puVar6[1] * 8)))
        break;
        uVar1 = puVar6[2];
        puVar4 = puVar6;
      }
    }
    do {
      puVar6 = puVar4;
      puVar4 = (uint *)(pas_compact_heap_reservation_base + (ulonglong)*puVar6 * 8);
      if ((ulonglong)*puVar6 == 0) break;
    } while (puVar4 != (uint *)0x0);
  } while( true );
}

